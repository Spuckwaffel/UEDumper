
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonConversationRuntime
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteConversationRuntime
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: UMG

/// Class /Script/FortniteConversationUI.FortConversationOptionBrief
/// Size: 0x0000 (0x0002F0 - 0x0002F0)
class UFortConversationOptionBrief : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:


	/// Functions
	// Function /Script/FortniteConversationUI.FortConversationOptionBrief.ConfigureBP
	// void ConfigureBP(FConversationContext& ClientContext, FClientConversationOptionEntry& OptionEntry, int32_t SelectedIndex); // [0x20c3f9c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortItemTransactionBrief
/// Size: 0x0018 (0x0002F0 - 0x000308)
class UFortItemTransactionBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(class UFortTransactionStrip*)              TransactionStrip_Main                                       OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UFortItem*)                          DisplayItem                                                 OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortItemTransactionBrief.OnTransactionInfoReceived
	// void OnTransactionInfoReceived(class UFortItem* Item);                                                                   // [0x20c3f9c] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortApplyAbilityBrief
/// Size: 0x0018 (0x000308 - 0x000320)
class UFortApplyAbilityBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FText)                                     PurchaseServiceText                                         OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	CMember(class UCommonRichTextBlock*)               Text_Display                                                OFFSET(get<T>, {0x318, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortApplyAbilityBrief.OnUnableToPurchase
	// void OnUnableToPurchase(EPreventAbilityUseReason Reason);                                                                // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortApplyAbilityBrief.OnAbleToPurchase
	// void OnAbleToPurchase();                                                                                                 // [0x20c3f9c] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortBasicBrief
/// Size: 0x0000 (0x0002F0 - 0x0002F0)
class UFortBasicBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:


	/// Functions
	// Function /Script/FortniteConversationUI.FortBasicBrief.OnChoiceTextReceived
	// void OnChoiceTextReceived(FText& Text);                                                                                  // [0x20c3f9c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortBasicItemBrief
/// Size: 0x0070 (0x0002F0 - 0x000360)
class UFortBasicItemBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(class UCommonTextBlock*)                   Text_TitleBar                                               OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UFortTransactionStrip*)              TransactionStrip_Main                                       OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UFortItem*)                          DisplayItem                                                 OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(TMap<FName, FDataDrivenServiceBriefConfig>) ServiceConfigs                                             OFFSET(get<T>, {0x310, 80, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortBasicItemBrief.OnUpdateDescriptionText
	// void OnUpdateDescriptionText(FText& DescriptionText);                                                                    // [0x20c3f9c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortBasicItemBrief.OnUnableToUse
	// void OnUnableToUse(FText& Reason);                                                                                       // [0x20c3f9c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortBasicItemBrief.OnItemInfoReceived
	// void OnItemInfoReceived(class UFortItem* Item, int32_t StackSize);                                                       // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortBasicItemBrief.OnAbleToUse
	// void OnAbleToUse(bool bShowWarningMessage);                                                                              // [0x20c3f9c] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortBuyBrief
/// Size: 0x0000 (0x000308 - 0x000308)
class UFortBuyBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:


	/// Functions
	// Function /Script/FortniteConversationUI.FortBuyBrief.OnPurchaseDataReceived
	// void OnPurchaseDataReceived(int32_t StackSize, int32_t RemainingForSale);                                                // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortBuyBrief.OnDisplayUnavailability
	// void OnDisplayUnavailability(ECannotBuyReason CannotBuyReason);                                                          // [0x20c3f9c] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortConversationMarker
/// Size: 0x00F0 (0x0003D8 - 0x0004C8)
class UFortConversationMarker : public UFortActorIndicatorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1224;

public:
	DMember(bool)                                      bShowConversationLimitHit                                   OFFSET(get<bool>, {0x3E8, 1, 0, 0})
	SMember(FVector)                                   InitialOffset                                               OFFSET(getStruct<T>, {0x410, 24, 0, 0})
	SMember(FVector)                                   ManualOffset                                                OFFSET(getStruct<T>, {0x428, 24, 0, 0})
	DMember(float)                                     MessageBubbleDuration                                       OFFSET(get<float>, {0x440, 4, 0, 0})
	DMember(float)                                     LastTextBubbleDuration                                      OFFSET(get<float>, {0x444, 4, 0, 0})
	DMember(bool)                                      bSetCustomInteractionWidgetOnlyWhenNeeded                   OFFSET(get<bool>, {0x448, 1, 0, 0})
	CMember(class UCommonVisibilitySwitcher*)          Switcher_States                                             OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UWidget*)                            Overlay_PreviewState                                        OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UFortConversationMessageWidget*)     ConversationMessage_Main                                    OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ParticipantName                                        OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UFortKeybindWidget*)                 Keybind_Nameplate                                           OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class UImage*)                             NPCIcon                                                     OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class UTexture2D*)                         CustomDialogMarkerIndicatorIcon                             OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(class UTexture2D*)                         DefaultDialogMarkerIndicatorIcon                            OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(class UTexture2D*)                         CreativeMarkerIndicatorIcon                                 OFFSET(get<T>, {0x4A8, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortConversationMarker.SetIsAtMaxConversations
	// void SetIsAtMaxConversations(class UFortNonPlayerConversationParticipantComponent* ConversationComponent, bool bIsAtMaxConversations); // [0xb45f858] Final|Native|Public|BlueprintCallable 
	// Function /Script/FortniteConversationUI.FortConversationMarker.OnSetIndicatedActor
	// void OnSetIndicatedActor(class AActor* NewIndicatorActor);                                                               // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationMarker.OnMessageShownOverActor
	// void OnMessageShownOverActor(class AActor* OverActor);                                                                   // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationMarker.OnInteractionRangeChanged
	// void OnInteractionRangeChanged(EInteractionRange TargetInteractionRange);                                                // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationMarker.OnConversationActorProximityChanged
	// void OnConversationActorProximityChanged(EInteractionRange TargetInteractionRange, class UFortNonPlayerConversationParticipantComponent* ConversationComponent); // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationMarker.OnCanInteract
	// void OnCanInteract(bool bCanInteract);                                                                                   // [0x20c3f9c] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortConversationMessageWidget
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortConversationMessageWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:


	/// Functions
	// Function /Script/FortniteConversationUI.FortConversationMessageWidget.SetPreviewMessage
	// void SetPreviewMessage(FText& MessageToSet);                                                                             // [0xb45f920] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FortniteConversationUI.FortConversationMessageWidget.OnPreviewMessageSet
	// void OnPreviewMessageSet(FText& PreviewText);                                                                            // [0x20c3f9c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationMessageWidget.OnMessageShown
	// void OnMessageShown();                                                                                                   // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationMessageWidget.OnMessageHidden
	// void OnMessageHidden();                                                                                                  // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationMessageWidget.OnMainMessageSet
	// void OnMainMessageSet(FText& NPCName, FText& MessageBody);                                                               // [0x20c3f9c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortConversationOption
/// Size: 0x00A0 (0x001550 - 0x0015F0)
class UFortConversationOption : public UFortRadialPickerEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5616;

public:
	CMember(class USoundBase*)                         OnOptionConfirmedSound                                      OFFSET(get<T>, {0x1558, 8, 0, 0})
	CMember(class USoundBase*)                         OnOptionHoveredSound                                        OFFSET(get<T>, {0x1560, 8, 0, 0})
	CMember(class UCommonVisibilitySwitcher*)          Switcher_DisplayAsset                                       OFFSET(get<T>, {0x1568, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  DefaultSoftTaskIcon                                         OFFSET(get<T>, {0x1570, 32, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               DefaultConfirmChoiceSound                                   OFFSET(get<T>, {0x1590, 32, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               DefaultHoverChoiceSound                                     OFFSET(get<T>, {0x15B0, 32, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortConversationOption.OnSetupPivotFromRadialInformation
	// void OnSetupPivotFromRadialInformation(int32_t NumElements, int32_t ItemIndex);                                          // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationOption.OnSetupFromItemDef
	// void OnSetupFromItemDef(class UFortItem* Item);                                                                          // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationOption.OnSetupFromDisplayAsset
	// void OnSetupFromDisplayAsset(class UObject* DisplayAsset);                                                               // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationOption.OnOptionConfirmed
	// void OnOptionConfirmed();                                                                                                // [0x20c3f9c] Event|Public|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationOption.IsLocked
	// bool IsLocked();                                                                                                         // [0xb45f80c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortniteConversationUI.FortConversationOption.IsAvailable
	// bool IsAvailable();                                                                                                      // [0xb45f7e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortniteConversationUI.FortConversationOption.GetUnlockLevel
	// int32_t GetUnlockLevel();                                                                                                // [0xb45f758] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FortniteConversationUI.FortConversationOptionsPanel
/// Size: 0x0018 (0x000188 - 0x0001A0)
class UFortConversationOptionsPanel : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	DMember(int32_t)                                   MaxRows                                                     OFFSET(get<int32_t>, {0x198, 4, 0, 0})
	DMember(int32_t)                                   MiddleColumnWidth                                           OFFSET(get<int32_t>, {0x19C, 4, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortConversationOptionsPanel.AddChildToDynamicPanel
	// class UPanelSlot* AddChildToDynamicPanel(class UWidget* Content);                                                        // [0xb45eea4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FortniteConversationUI.FortConversationScreen
/// Size: 0x01C8 (0x000408 - 0x0005D0)
class UFortConversationScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	CMember(class UCommonVisibilitySwitcher*)          Switcher_Details                                            OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UInputComponent*)                    ConversationInputComp                                       OFFSET(get<T>, {0x460, 8, 0, 0})
	DMember(int32_t)                                   CurrentlySelectedIndex                                      OFFSET(get<int32_t>, {0x468, 4, 0, 0})
	DMember(bool)                                      bBlockOptionIntroAnimation                                  OFFSET(get<bool>, {0x46C, 1, 0, 0})
	SMember(FName)                                     RadialSelectionMaterialParameterName                        OFFSET(getStruct<T>, {0x470, 4, 0, 0})
	CMember(TArray<FGameplayTag>)                      TagPriorities                                               OFFSET(get<T>, {0x478, 16, 0, 0})
	SMember(FName)                                     InteractActionNameKBM                                       OFFSET(getStruct<T>, {0x488, 4, 0, 0})
	SMember(FName)                                     ADSInputAction                                              OFFSET(getStruct<T>, {0x48C, 4, 0, 0})
	SMember(FName)                                     InteractActionNameGamepad                                   OFFSET(getStruct<T>, {0x490, 4, 0, 0})
	SMember(FDataTableRowHandle)                       ConfirmBinding                                              OFFSET(getStruct<T>, {0x498, 16, 0, 0})
	SMember(FDataTableRowHandle)                       MakeSelectionBinding                                        OFFSET(getStruct<T>, {0x4A8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ADSMouseBinding                                             OFFSET(getStruct<T>, {0x4B8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CancelActionBinding                                         OFFSET(getStruct<T>, {0x4C8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       RightTriggerBinding                                         OFFSET(getStruct<T>, {0x4D8, 16, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr<UClass*>>)    DetailsNodeTypeToBrief                                      OFFSET(get<T>, {0x4E8, 80, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ChatBrief                                                   OFFSET(get<T>, {0x538, 32, 0, 0})
	SMember(FString)                                   DataDrivenBriefPrefix                                       OFFSET(getStruct<T>, {0x558, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DataDrivenBrief                                             OFFSET(get<T>, {0x568, 32, 0, 0})
	CMember(class UFortSlottedRadialMenu*)             RadialMenu_DialogOptions                                    OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(class UImage*)                             Image_RadialHighlight                                       OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(class UFortKeybindWidget*)                 Keybind_Confirm                                             OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(class UFortBasicBrief*)                    BasicBrief_Main                                             OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(class USizeBox*)                           SizeBox_RadialMenu                                          OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(class UWidget*)                            Overlay_Details                                             OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(class UWidget*)                            Overlay_WheelContainer                                      OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(class UImage*)                             Image_Background                                            OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(class UImage*)                             Image_LoadingSpinner                                        OFFSET(get<T>, {0x5C8, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortConversationScreen.ShouldBlockOptionIntroAnim
	// bool ShouldBlockOptionIntroAnim();                                                                                       // [0xb45f9bc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortniteConversationUI.FortConversationScreen.OnSelectedItemAvailabilityChanged
	// void OnSelectedItemAvailabilityChanged(bool bIsAvailable);                                                               // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationScreen.OnOptionsPopulated
	// void OnOptionsPopulated();                                                                                               // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationScreen.OnItemSelected
	// void OnItemSelected(int32_t OriginalIndex);                                                                              // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationScreen.OnConversationStarted
	// void OnConversationStarted();                                                                                            // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationScreen.OnConversationOptionUnavailable
	// void OnConversationOptionUnavailable(class UFortRadialSlot* SelectedEntry);                                              // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationScreen.EndConversation
	// void EndConversation();                                                                                                  // [0x3cfad0c] Native|Protected     
};

/// Class /Script/FortniteConversationUI.FortDataDrivenServiceBrief
/// Size: 0x0078 (0x0002F0 - 0x000368)
class UFortDataDrivenServiceBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(class UCommonTextBlock*)                   Text_TitleBar                                               OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UCommonRichTextBlock*)               RichText_Description                                        OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_StockRemaining                                         OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UFortTransactionStrip*)              TransactionStrip_Main                                       OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(TMap<FName, FDataDrivenServiceBriefConfig>) ServiceConfigs                                             OFFSET(get<T>, {0x318, 80, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortDataDrivenServiceBrief.OnUnableToPurchase
	// void OnUnableToPurchase(FText& Reason);                                                                                  // [0x20c3f9c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortDataDrivenServiceBrief.OnTransactionInfoReceived
	// void OnTransactionInfoReceived(class UFortItem* Item);                                                                   // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortDataDrivenServiceBrief.OnAbleToPurchase
	// void OnAbleToPurchase();                                                                                                 // [0x20c3f9c] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortDuelBrief
/// Size: 0x0020 (0x000308 - 0x000328)
class UFortDuelBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	SMember(FText)                                     TextTemplate                                                OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	CMember(class UCommonRichTextBlock*)               Text_Objective                                              OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UCommonTileView*)                    TileView                                                    OFFSET(get<T>, {0x320, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortDuelBrief.DisplayLootItems
	// void DisplayLootItems(TArray<UFortItem*>& Items);                                                                        // [0x20c3f9c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortHireBrief
/// Size: 0x0020 (0x000308 - 0x000328)
class UFortHireBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	SMember(FText)                                     TextTemplate                                                OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	CMember(class UCommonRichTextBlock*)               Text_Objective                                              OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UDataTable*)                         SpecializationsVisualDataTable                              OFFSET(get<T>, {0x320, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortHireBrief.HandleNPCDismissal
	// void HandleNPCDismissal(bool bAtMaxNPCNum, bool bWillDismissNPCAtHire);                                                  // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortHireBrief.BP_SetSpecializationIcon
	// void BP_SetSpecializationIcon(class UObject* ResourceObject);                                                            // [0x20c3f9c] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortIntelBrief
/// Size: 0x0018 (0x000308 - 0x000320)
class UFortIntelBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FText)                                     TextTemplate                                                OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	CMember(class UCommonRichTextBlock*)               Text_Objective                                              OFFSET(get<T>, {0x318, 8, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortItemFundBrief
/// Size: 0x0128 (0x0002F0 - 0x000418)
class UFortItemFundBrief : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	CMember(class UCommonTextBlock*)                   Text_TitleBar                                               OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ProgressPercent                                        OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ProgressCount                                          OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class UFortSimpleMaterialProgressBar*)     Progress_Funding                                            OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class UFortLazyImage*)                     LazyImage_Icon                                              OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(class UFortTransactionStrip*)              TransactionStrip_Main                                       OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(TMap<FName, FDataDrivenServiceBriefConfig>) ServiceConfigs                                             OFFSET(get<T>, {0x3C8, 80, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortItemFundBrief.OnProgressUpdated
	// void OnProgressUpdated(float CurrentFundingFraction);                                                                    // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortItemFundBrief.OnIntializationComplete
	// void OnIntializationComplete();                                                                                          // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortItemFundBrief.InitializeFromContext
	// void InitializeFromContext(FConversationContext& ConversationContext);                                                   // [0x20c3f9c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortItemFundBrief.GetDataForKey
	// FText GetDataForKey(FString Key, bool bUseIndexAdjustment);                                                              // [0xb45f018] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/FortniteConversationUI.FortSingleItemFundBrief
/// Size: 0x0068 (0x0002F0 - 0x000358)
class UFortSingleItemFundBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	CMember(class UFortItemFundBrief*)                 Item_Entry                                                  OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UFortNPCTextDisplay*)                NPCTextDisplay                                              OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(TMap<FName, FDataDrivenServiceBriefConfig>) ServiceConfigs                                             OFFSET(get<T>, {0x308, 80, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortMultiItemFundBrief
/// Size: 0x0010 (0x000358 - 0x000368)
class UFortMultiItemFundBrief : public UFortSingleItemFundBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(class UFortItemFundBrief*)                 Item_EntrySecondary                                         OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UFortItemFundBrief*)                 Item_EntryTertiary                                          OFFSET(get<T>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortMultiItemFundBrief.UpdateSelectedVisuals
	// void UpdateSelectedVisuals(int32_t SelectedIndex);                                                                       // [0x20c3f9c] Event|Public|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortNPCTextDisplay
/// Size: 0x0010 (0x0002C8 - 0x0002D8)
class UFortNPCTextDisplay : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(class UCommonRichTextBlock*)               Text_Message                                                OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UFortLazyImage*)                     LazyImage_NPCImage                                          OFFSET(get<T>, {0x2D0, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortNPCTextDisplay.OnTextUpdated
	// void OnTextUpdated();                                                                                                    // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortNPCTextDisplay.OnItemNameUpdated
	// void OnItemNameUpdated(FString ItemName);                                                                                // [0x20c3f9c] Event|Public|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortPlayerConversationUIComponent
/// Size: 0x0148 (0x0000A0 - 0x0001E8)
class UFortPlayerConversationUIComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	DMember(bool)                                      bBlockUISpawning                                            OFFSET(get<bool>, {0xA8, 1, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DialogWidgetSoftClass                                       OFFSET(get<T>, {0xB0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DialogMarkerSoftClass                                       OFFSET(get<T>, {0xD0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MobileDialogWidgetSoftClass                                 OFFSET(get<T>, {0xF0, 32, 0, 0})
	CMember(TArray<class UDynamicUIScene*>)            SpectatorConversationScenes                                 OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TArray<class UDynamicUIScene*>)            SpectatorMobileConversationScenes                           OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(class UClass*)                             DialogWidgetClass                                           OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UClass*)                             DialogMarkerClass                                           OFFSET(get<T>, {0x138, 8, 0, 0})
	SMember(FUserWidgetPool)                           DialogWidgetPool                                            OFFSET(getStruct<T>, {0x140, 136, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortPlayerConversationUIComponent.OnMinigameStarted
	// void OnMinigameStarted();                                                                                                // [0xb45f844] Final|Native|Private 
};

/// Class /Script/FortniteConversationUI.FortQuestBrief
/// Size: 0x0048 (0x0002F0 - 0x000338)
class UFortQuestBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FText)                                     ThisMatchOnlyQuestText                                      OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	CMember(class UCommonRichTextBlock*)               Text_Objective                                              OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_MoneyReward                                            OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_XpReward                                               OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ExpirationTime                                         OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UCommonLazyImage*)                   LazyImage_QuestProviderImage                                OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_QuestProvider                                       OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortQuestBrief.OnQuestInformationRecieved
	// void OnQuestInformationRecieved(FText& Objective, FFortRarityItemData& RarityData, FGameplayTag& CategoryTag, int32_t XPReward, int32_t MoneyReward, int32_t TokenReward, TWeakObjectPtr<UTexture2D*>& TokenRewardIcon); // [0x20c3f9c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortQuestBrief.OnQuestExpirationTimeSet
	// void OnQuestExpirationTimeSet(bool bDisplayExpirationTime);                                                              // [0x20c3f9c] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortShowFutureStormCircleBrief
/// Size: 0x0018 (0x000308 - 0x000320)
class UFortShowFutureStormCircleBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FText)                                     PurchaseServiceText                                         OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	CMember(class UCommonRichTextBlock*)               Text_Display                                                OFFSET(get<T>, {0x318, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortShowFutureStormCircleBrief.OnUnableToPurchase
	// void OnUnableToPurchase(EPreventUseStormCircleServiceReason Reason);                                                     // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortShowFutureStormCircleBrief.OnAbleToPurchase
	// void OnAbleToPurchase();                                                                                                 // [0x20c3f9c] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortSingleOrMultiItemFundBrief
/// Size: 0x0050 (0x0002F0 - 0x000340)
class UFortSingleOrMultiItemFundBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(TWeakObjectPtr<UClass*>)                   SingleItemBrief                                             OFFSET(get<T>, {0x2F8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MultiItemsBrief                                             OFFSET(get<T>, {0x318, 32, 0, 0})
	CMember(class UOverlay*)                           Overlay_Brief                                               OFFSET(get<T>, {0x338, 8, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortTransactionStrip
/// Size: 0x0078 (0x0002C8 - 0x000340)
class UFortTransactionStrip : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(class UCommonTextBlock*)                   Text_CostDescription                                        OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortWorldItemDefinition*>) CachedGlobalCurrency                                        OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UFortWorldItemDefinition*)           ResourceCurrency                                            OFFSET(get<T>, {0x2E0, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortTransactionStrip.OnTransactionInfoReceived
	// void OnTransactionInfoReceived(FFortServiceTransactionInfo& TransactionInfo);                                            // [0x20c3f9c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortTransactionStrip.OnSetTransactionCostVisibility
	// void OnSetTransactionCostVisibility(bool bVisible);                                                                      // [0x20c3f9c] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortUpgradeBrief
/// Size: 0x0000 (0x000308 - 0x000308)
class UFortUpgradeBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:


	/// Functions
	// Function /Script/FortniteConversationUI.FortUpgradeBrief.OnUpgradeInfoReceived
	// void OnUpgradeInfoReceived(class UFortItem* CurrentWeapon);                                                              // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortUpgradeBrief.OnUnableToUpgrade
	// void OnUnableToUpgrade(EFortWeaponUpgradeInteractionResult CannotUpgradeCause);                                          // [0x20c3f9c] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.MobileConversationScreen
/// Size: 0x0030 (0x0005D0 - 0x000600)
class UMobileConversationScreen : public UFortConversationScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	CMember(class UButton*)                            MobileButtonConfirm                                         OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(class UButton*)                            MobileButtonTouchInformation                                OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  MobileCloseButton                                           OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(class UCommonVisibilitySwitcher*)          Switcher_CenteredDetails                                    OFFSET(get<T>, {0x5F0, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.MobileConversationScreen.OnHandleConfirmClicked
	// void OnHandleConfirmClicked();                                                                                           // [0xb45f830] Final|Native|Protected 
};

/// Enum /Script/FortniteConversationUI.ECannotBuyReason
/// Size: 0x02
enum class ECannotBuyReason : uint8_t
{
	ECannotBuyReason__CannotAfford                                                   = 0,
	ECannotBuyReason__OutOfStock                                                     = 1
};

