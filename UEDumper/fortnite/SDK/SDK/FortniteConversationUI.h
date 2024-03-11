
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: UMG

/// Enum /Script/FortniteConversationUI.ECannotBuyReason
/// Size: 0x03
enum class ECannotBuyReason : uint8_t
{
	ECannotBuyReason__CannotAfford                                                   = 0,
	ECannotBuyReason__OutOfStock                                                     = 1,
	ECannotBuyReason__ECannotBuyReason_MAX                                           = 2
};

/// Class /Script/FortniteConversationUI.FortConversationOptionBrief
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UFortConversationOptionBrief : public UCommonUserWidget
{ 
public:


	/// Functions
	// Function /Script/FortniteConversationUI.FortConversationOptionBrief.ConfigureBP
	// void ConfigureBP(FConversationContext& ClientContext, FClientConversationOptionEntry& OptionEntry, int32_t SelectedIndex); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortItemTransactionBrief
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UFortItemTransactionBrief : public UFortConversationOptionBrief
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02E8   (0x0008)  MISSED
	class UFortTransactionStrip*                       TransactionStrip_Main;                                      // 0x02F0   (0x0008)  
	class UFortItem*                                   DisplayItem;                                                // 0x02F8   (0x0008)  


	/// Functions
	// Function /Script/FortniteConversationUI.FortItemTransactionBrief.OnTransactionInfoReceived
	// void OnTransactionInfoReceived(class UFortItem* Item);                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortApplyAbilityBrief
/// Size: 0x0020 (0x000300 - 0x000320)
class UFortApplyAbilityBrief : public UFortItemTransactionBrief
{ 
public:
	SDK_UNDEFINED(24,13991) /* FText */                __um(PurchaseServiceText);                                  // 0x0300   (0x0018)  
	class UCommonRichTextBlock*                        Text_Display;                                               // 0x0318   (0x0008)  


	/// Functions
	// Function /Script/FortniteConversationUI.FortApplyAbilityBrief.OnUnableToPurchase
	// void OnUnableToPurchase(EPreventAbilityUseReason Reason);                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortApplyAbilityBrief.OnAbleToPurchase
	// void OnAbleToPurchase();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortBasicBrief
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UFortBasicBrief : public UFortConversationOptionBrief
{ 
public:


	/// Functions
	// Function /Script/FortniteConversationUI.FortBasicBrief.OnChoiceTextReceived
	// void OnChoiceTextReceived(FText& Text);                                                                               // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortBasicItemBrief
/// Size: 0x0070 (0x0002E8 - 0x000358)
class UFortBasicItemBrief : public UFortConversationOptionBrief
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02E8   (0x0008)  MISSED
	class UCommonTextBlock*                            Text_TitleBar;                                              // 0x02F0   (0x0008)  
	class UFortTransactionStrip*                       TransactionStrip_Main;                                      // 0x02F8   (0x0008)  
	class UFortItem*                                   DisplayItem;                                                // 0x0300   (0x0008)  
	SDK_UNDEFINED(80,13992) /* TMap<FName, FDataDrivenServiceBriefConfig> */ __um(ServiceConfigs);                 // 0x0308   (0x0050)  


	/// Functions
	// Function /Script/FortniteConversationUI.FortBasicItemBrief.OnUpdateDescriptionText
	// void OnUpdateDescriptionText(FText& DescriptionText);                                                                 // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortBasicItemBrief.OnUnableToUse
	// void OnUnableToUse(FText& Reason);                                                                                    // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortBasicItemBrief.OnItemInfoReceived
	// void OnItemInfoReceived(class UFortItem* Item, int32_t StackSize);                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortBasicItemBrief.OnAbleToUse
	// void OnAbleToUse(bool bShowWarningMessage);                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortBuyBrief
/// Size: 0x0000 (0x000300 - 0x000300)
class UFortBuyBrief : public UFortItemTransactionBrief
{ 
public:


	/// Functions
	// Function /Script/FortniteConversationUI.FortBuyBrief.OnPurchaseDataReceived
	// void OnPurchaseDataReceived(int32_t StackSize, int32_t RemainingForSale);                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortBuyBrief.OnDisplayUnavailability
	// void OnDisplayUnavailability(ECannotBuyReason CannotBuyReason);                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortConversationMarker
/// Size: 0x00D8 (0x0003D0 - 0x0004A8)
class UFortConversationMarker : public UFortActorIndicatorWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x03D0   (0x0038)  MISSED
	FVector                                            InitialOffset;                                              // 0x0408   (0x0018)  
	FVector                                            ManualOffset;                                               // 0x0420   (0x0018)  
	float                                              MessageBubbleDuration;                                      // 0x0438   (0x0004)  
	float                                              LastTextBubbleDuration;                                     // 0x043C   (0x0004)  
	bool                                               bSetCustomInteractionWidgetOnlyWhenNeeded;                  // 0x0440   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0441   (0x0007)  MISSED
	class UCommonVisibilitySwitcher*                   Switcher_States;                                            // 0x0448   (0x0008)  
	class UWidget*                                     Overlay_PreviewState;                                       // 0x0450   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0458   (0x0008)  MISSED
	class UFortConversationMessageWidget*              ConversationMessage_Main;                                   // 0x0460   (0x0008)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0468   (0x0008)  MISSED
	class UCommonTextBlock*                            Text_ParticipantName;                                       // 0x0470   (0x0008)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x0478   (0x0008)  MISSED
	class UFortKeybindWidget*                          Keybind_Nameplate;                                          // 0x0480   (0x0008)  
	class UImage*                                      NPCIcon;                                                    // 0x0488   (0x0008)  
	class UTexture2D*                                  CustomDialogMarkerIndicatorIcon;                            // 0x0490   (0x0008)  
	class UTexture2D*                                  DefaultDialogMarkerIndicatorIcon;                           // 0x0498   (0x0008)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x04A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/FortniteConversationUI.FortConversationMarker.OnSetIndicatedActor
	// void OnSetIndicatedActor(class AActor* NewIndicatorActor);                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationMarker.OnMessageShownOverActor
	// void OnMessageShownOverActor(class AActor* OverActor);                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationMarker.OnInteractionRangeChanged
	// void OnInteractionRangeChanged(EInteractionRange TargetInteractionRange);                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationMarker.OnConversationActorProximityChanged
	// void OnConversationActorProximityChanged(EInteractionRange TargetInteractionRange, class UFortNonPlayerConversationParticipantComponent* ConversationComponent); // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationMarker.OnCanInteract
	// void OnCanInteract(bool bCanInteract);                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortConversationMessageWidget
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UFortConversationMessageWidget : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/FortniteConversationUI.FortConversationMessageWidget.SetPreviewMessage
	// void SetPreviewMessage(FText& MessageToSet);                                                                          // [0xa26fc38] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FortniteConversationUI.FortConversationMessageWidget.OnPreviewMessageSet
	// void OnPreviewMessageSet(FText& PreviewText);                                                                         // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationMessageWidget.OnMessageShown
	// void OnMessageShown();                                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationMessageWidget.OnMessageHidden
	// void OnMessageHidden();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationMessageWidget.OnMainMessageSet
	// void OnMainMessageSet(FText& NPCName, FText& MessageBody);                                                            // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortConversationOption
/// Size: 0x00A0 (0x001540 - 0x0015E0)
class UFortConversationOption : public UFortRadialPickerEntry
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x1540   (0x0008)  MISSED
	class USoundBase*                                  OnOptionConfirmedSound;                                     // 0x1548   (0x0008)  
	class USoundBase*                                  OnOptionHoveredSound;                                       // 0x1550   (0x0008)  
	class UCommonVisibilitySwitcher*                   Switcher_DisplayAsset;                                      // 0x1558   (0x0008)  
	SDK_UNDEFINED(32,13993) /* TWeakObjectPtr<UObject*> */ __um(DefaultSoftTaskIcon);                              // 0x1560   (0x0020)  
	SDK_UNDEFINED(32,13994) /* TWeakObjectPtr<USoundBase*> */ __um(DefaultConfirmChoiceSound);                     // 0x1580   (0x0020)  
	SDK_UNDEFINED(32,13995) /* TWeakObjectPtr<USoundBase*> */ __um(DefaultHoverChoiceSound);                       // 0x15A0   (0x0020)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x15C0   (0x0020)  MISSED


	/// Functions
	// Function /Script/FortniteConversationUI.FortConversationOption.OnSetupPivotFromRadialInformation
	// void OnSetupPivotFromRadialInformation(int32_t NumElements, int32_t ItemIndex);                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationOption.OnSetupFromItemDef
	// void OnSetupFromItemDef(class UFortItem* Item);                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationOption.OnSetupFromDisplayAsset
	// void OnSetupFromDisplayAsset(class UObject* DisplayAsset);                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationOption.OnOptionConfirmed
	// void OnOptionConfirmed();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationOption.IsLocked
	// bool IsLocked();                                                                                                      // [0xa26fbec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortniteConversationUI.FortConversationOption.IsAvailable
	// bool IsAvailable();                                                                                                   // [0xa26fbc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortniteConversationUI.FortConversationOption.GetUnlockLevel
	// int32_t GetUnlockLevel();                                                                                             // [0xa26f840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FortniteConversationUI.FortConversationOptionsPanel
/// Size: 0x0018 (0x000190 - 0x0001A8)
class UFortConversationOptionsPanel : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0190   (0x0010)  MISSED
	int32_t                                            MaxRows;                                                    // 0x01A0   (0x0004)  
	int32_t                                            MiddleColumnWidth;                                          // 0x01A4   (0x0004)  


	/// Functions
	// Function /Script/FortniteConversationUI.FortConversationOptionsPanel.AddChildToDynamicPanel
	// class UPanelSlot* AddChildToDynamicPanel(class UWidget* Content);                                                     // [0xa26f4f8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FortniteConversationUI.FortConversationScreen
/// Size: 0x01C8 (0x000400 - 0x0005C8)
class UFortConversationScreen : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0400   (0x0018)  MISSED
	class UCommonVisibilitySwitcher*                   Switcher_Details;                                           // 0x0418   (0x0008)  
	unsigned char                                      UnknownData01_5[0x38];                                      // 0x0420   (0x0038)  MISSED
	class UInputComponent*                             ConversationInputComp;                                      // 0x0458   (0x0008)  
	int32_t                                            CurrentlySelectedIndex;                                     // 0x0460   (0x0004)  
	bool                                               bBlockOptionIntroAnimation;                                 // 0x0464   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0465   (0x0003)  MISSED
	FName                                              RadialSelectionMaterialParameterName;                       // 0x0468   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x046C   (0x0004)  MISSED
	TArray<FGameplayTag>                               TagPriorities;                                              // 0x0470   (0x0010)  
	FName                                              InteractActionNameKBM;                                      // 0x0480   (0x0004)  
	FName                                              ADSInputAction;                                             // 0x0484   (0x0004)  
	FName                                              InteractActionNameGamepad;                                  // 0x0488   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x048C   (0x0004)  MISSED
	FDataTableRowHandle                                ConfirmBinding;                                             // 0x0490   (0x0010)  
	FDataTableRowHandle                                MakeSelectionBinding;                                       // 0x04A0   (0x0010)  
	FDataTableRowHandle                                ADSMouseBinding;                                            // 0x04B0   (0x0010)  
	FDataTableRowHandle                                CancelActionBinding;                                        // 0x04C0   (0x0010)  
	FDataTableRowHandle                                RightTriggerBinding;                                        // 0x04D0   (0x0010)  
	SDK_UNDEFINED(80,13996) /* TMap<FString, TWeakObjectPtr<UClass*>> */ __um(DetailsNodeTypeToBrief);             // 0x04E0   (0x0050)  
	SDK_UNDEFINED(32,13997) /* TWeakObjectPtr<UClass*> */ __um(ChatBrief);                                         // 0x0530   (0x0020)  
	SDK_UNDEFINED(16,13998) /* FString */              __um(DataDrivenBriefPrefix);                                // 0x0550   (0x0010)  
	SDK_UNDEFINED(32,13999) /* TWeakObjectPtr<UClass*> */ __um(DataDrivenBrief);                                   // 0x0560   (0x0020)  
	class UFortSlottedRadialMenu*                      RadialMenu_DialogOptions;                                   // 0x0580   (0x0008)  
	class UImage*                                      Image_RadialHighlight;                                      // 0x0588   (0x0008)  
	class UFortKeybindWidget*                          Keybind_Confirm;                                            // 0x0590   (0x0008)  
	class UFortBasicBrief*                             BasicBrief_Main;                                            // 0x0598   (0x0008)  
	class USizeBox*                                    SizeBox_RadialMenu;                                         // 0x05A0   (0x0008)  
	class UWidget*                                     Overlay_Details;                                            // 0x05A8   (0x0008)  
	class UWidget*                                     Overlay_WheelContainer;                                     // 0x05B0   (0x0008)  
	class UImage*                                      Image_Background;                                           // 0x05B8   (0x0008)  
	class UImage*                                      Image_LoadingSpinner;                                       // 0x05C0   (0x0008)  


	/// Functions
	// Function /Script/FortniteConversationUI.FortConversationScreen.ShouldBlockOptionIntroAnim
	// bool ShouldBlockOptionIntroAnim();                                                                                    // [0xa26fcd4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortniteConversationUI.FortConversationScreen.OnSelectedItemAvailabilityChanged
	// void OnSelectedItemAvailabilityChanged(bool bIsAvailable);                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationScreen.OnOptionsPopulated
	// void OnOptionsPopulated();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationScreen.OnItemSelected
	// void OnItemSelected(int32_t OriginalIndex);                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationScreen.OnConversationStarted
	// void OnConversationStarted();                                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationScreen.OnConversationOptionUnavailable
	// void OnConversationOptionUnavailable(class UFortRadialSlot* SelectedEntry);                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationScreen.EndConversation
	// void EndConversation();                                                                                               // [0x3884e30] Native|Protected     
};

/// Class /Script/FortniteConversationUI.FortDataDrivenServiceBrief
/// Size: 0x0078 (0x0002E8 - 0x000360)
class UFortDataDrivenServiceBrief : public UFortConversationOptionBrief
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02E8   (0x0008)  MISSED
	class UCommonTextBlock*                            Text_TitleBar;                                              // 0x02F0   (0x0008)  
	class UCommonRichTextBlock*                        RichText_Description;                                       // 0x02F8   (0x0008)  
	class UCommonTextBlock*                            Text_StockRemaining;                                        // 0x0300   (0x0008)  
	class UFortTransactionStrip*                       TransactionStrip_Main;                                      // 0x0308   (0x0008)  
	SDK_UNDEFINED(80,14000) /* TMap<FName, FDataDrivenServiceBriefConfig> */ __um(ServiceConfigs);                 // 0x0310   (0x0050)  


	/// Functions
	// Function /Script/FortniteConversationUI.FortDataDrivenServiceBrief.OnUnableToPurchase
	// void OnUnableToPurchase(FText& Reason);                                                                               // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortDataDrivenServiceBrief.OnTransactionInfoReceived
	// void OnTransactionInfoReceived(class UFortItem* Item);                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortDataDrivenServiceBrief.OnAbleToPurchase
	// void OnAbleToPurchase();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortDuelBrief
/// Size: 0x0028 (0x000300 - 0x000328)
class UFortDuelBrief : public UFortItemTransactionBrief
{ 
public:
	SDK_UNDEFINED(24,14001) /* FText */                __um(TextTemplate);                                         // 0x0300   (0x0018)  
	class UCommonRichTextBlock*                        Text_Objective;                                             // 0x0318   (0x0008)  
	class UCommonTileView*                             TileView;                                                   // 0x0320   (0x0008)  


	/// Functions
	// Function /Script/FortniteConversationUI.FortDuelBrief.DisplayLootItems
	// void DisplayLootItems(TArray<UFortItem*>& Items);                                                                     // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortHireBrief
/// Size: 0x0020 (0x000300 - 0x000320)
class UFortHireBrief : public UFortItemTransactionBrief
{ 
public:
	SDK_UNDEFINED(24,14002) /* FText */                __um(TextTemplate);                                         // 0x0300   (0x0018)  
	class UCommonRichTextBlock*                        Text_Objective;                                             // 0x0318   (0x0008)  


	/// Functions
	// Function /Script/FortniteConversationUI.FortHireBrief.HandleNPCDismissal
	// void HandleNPCDismissal(bool bAtMaxNPCNum, bool bWillDismissNPCAtHire);                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortIntelBrief
/// Size: 0x0020 (0x000300 - 0x000320)
class UFortIntelBrief : public UFortItemTransactionBrief
{ 
public:
	SDK_UNDEFINED(24,14003) /* FText */                __um(TextTemplate);                                         // 0x0300   (0x0018)  
	class UCommonRichTextBlock*                        Text_Objective;                                             // 0x0318   (0x0008)  
};

/// Class /Script/FortniteConversationUI.FortItemFundBrief
/// Size: 0x0130 (0x0002E8 - 0x000418)
class UFortItemFundBrief : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0xB0];                                      // 0x02E8   (0x00B0)  MISSED
	class UCommonTextBlock*                            Text_TitleBar;                                              // 0x0398   (0x0008)  
	class UCommonTextBlock*                            Text_ProgressPercent;                                       // 0x03A0   (0x0008)  
	class UCommonTextBlock*                            Text_ProgressCount;                                         // 0x03A8   (0x0008)  
	class UFortSimpleMaterialProgressBar*              Progress_Funding;                                           // 0x03B0   (0x0008)  
	class UFortLazyImage*                              LazyImage_Icon;                                             // 0x03B8   (0x0008)  
	class UFortTransactionStrip*                       TransactionStrip_Main;                                      // 0x03C0   (0x0008)  
	SDK_UNDEFINED(80,14004) /* TMap<FName, FDataDrivenServiceBriefConfig> */ __um(ServiceConfigs);                 // 0x03C8   (0x0050)  


	/// Functions
	// Function /Script/FortniteConversationUI.FortItemFundBrief.OnProgressUpdated
	// void OnProgressUpdated(float CurrentFundingFraction);                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortItemFundBrief.OnIntializationComplete
	// void OnIntializationComplete();                                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortItemFundBrief.InitializeFromContext
	// void InitializeFromContext(FConversationContext& ConversationContext);                                                // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortItemFundBrief.GetDataForKey
	// FText GetDataForKey(FString Key, bool bUseIndexAdjustment);                                                           // [0xa26f668] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/FortniteConversationUI.FortSingleItemFundBrief
/// Size: 0x0068 (0x0002E8 - 0x000350)
class UFortSingleItemFundBrief : public UFortConversationOptionBrief
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02E8   (0x0008)  MISSED
	class UFortItemFundBrief*                          Item_Entry;                                                 // 0x02F0   (0x0008)  
	class UFortNPCTextDisplay*                         NPCTextDisplay;                                             // 0x02F8   (0x0008)  
	SDK_UNDEFINED(80,14005) /* TMap<FName, FDataDrivenServiceBriefConfig> */ __um(ServiceConfigs);                 // 0x0300   (0x0050)  
};

/// Class /Script/FortniteConversationUI.FortMultiItemFundBrief
/// Size: 0x0010 (0x000350 - 0x000360)
class UFortMultiItemFundBrief : public UFortSingleItemFundBrief
{ 
public:
	class UFortItemFundBrief*                          Item_EntrySecondary;                                        // 0x0350   (0x0008)  
	class UFortItemFundBrief*                          Item_EntryTertiary;                                         // 0x0358   (0x0008)  


	/// Functions
	// Function /Script/FortniteConversationUI.FortMultiItemFundBrief.UpdateSelectedVisuals
	// void UpdateSelectedVisuals(int32_t SelectedIndex);                                                                    // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortNPCTextDisplay
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UFortNPCTextDisplay : public UUserWidget
{ 
public:
	class UCommonRichTextBlock*                        Text_Message;                                               // 0x02C0   (0x0008)  
	class UFortLazyImage*                              LazyImage_NPCImage;                                         // 0x02C8   (0x0008)  


	/// Functions
	// Function /Script/FortniteConversationUI.FortNPCTextDisplay.OnTextUpdated
	// void OnTextUpdated();                                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortNPCTextDisplay.OnItemNameUpdated
	// void OnItemNameUpdated(FString ItemName);                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortPlayerConversationUIComponent
/// Size: 0x0148 (0x0000A0 - 0x0001E8)
class UFortPlayerConversationUIComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	bool                                               bBlockUISpawning;                                           // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	SDK_UNDEFINED(32,14006) /* TWeakObjectPtr<UClass*> */ __um(DialogWidgetSoftClass);                             // 0x00B0   (0x0020)  
	SDK_UNDEFINED(32,14007) /* TWeakObjectPtr<UClass*> */ __um(DialogMarkerSoftClass);                             // 0x00D0   (0x0020)  
	SDK_UNDEFINED(32,14008) /* TWeakObjectPtr<UClass*> */ __um(MobileDialogWidgetSoftClass);                       // 0x00F0   (0x0020)  
	TArray<class UDynamicUIScene*>                     SpectatorConversationScenes;                                // 0x0110   (0x0010)  
	TArray<class UDynamicUIScene*>                     SpectatorMobileConversationScenes;                          // 0x0120   (0x0010)  
	class UClass*                                      DialogWidgetClass;                                          // 0x0130   (0x0008)  
	class UClass*                                      DialogMarkerClass;                                          // 0x0138   (0x0008)  
	FUserWidgetPool                                    DialogWidgetPool;                                           // 0x0140   (0x0088)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x01C8   (0x0020)  MISSED


	/// Functions
	// Function /Script/FortniteConversationUI.FortPlayerConversationUIComponent.OnMinigameStarted
	// void OnMinigameStarted();                                                                                             // [0xa26fc24] Final|Native|Private 
};

/// Class /Script/FortniteConversationUI.FortQuestBrief
/// Size: 0x0050 (0x0002E8 - 0x000338)
class UFortQuestBrief : public UFortConversationOptionBrief
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02E8   (0x0008)  MISSED
	SDK_UNDEFINED(24,14009) /* FText */                __um(ThisMatchOnlyQuestText);                               // 0x02F0   (0x0018)  
	class UCommonRichTextBlock*                        Text_Objective;                                             // 0x0308   (0x0008)  
	class UCommonTextBlock*                            Text_MoneyReward;                                           // 0x0310   (0x0008)  
	class UCommonTextBlock*                            Text_XpReward;                                              // 0x0318   (0x0008)  
	class UCommonTextBlock*                            Text_ExpirationTime;                                        // 0x0320   (0x0008)  
	class UCommonLazyImage*                            LazyImage_QuestProviderImage;                               // 0x0328   (0x0008)  
	class UOverlay*                                    Overlay_QuestProvider;                                      // 0x0330   (0x0008)  


	/// Functions
	// Function /Script/FortniteConversationUI.FortQuestBrief.OnQuestInformationRecieved
	// void OnQuestInformationRecieved(FText& Objective, FFortRarityItemData& RarityData, FGameplayTag& CategoryTag, int32_t XPReward, int32_t MoneyReward, int32_t TokenReward, TWeakObjectPtr<UTexture2D*>& TokenRewardIcon); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortQuestBrief.OnQuestExpirationTimeSet
	// void OnQuestExpirationTimeSet(bool bDisplayExpirationTime);                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortShowFutureStormCircleBrief
/// Size: 0x0020 (0x000300 - 0x000320)
class UFortShowFutureStormCircleBrief : public UFortItemTransactionBrief
{ 
public:
	SDK_UNDEFINED(24,14010) /* FText */                __um(PurchaseServiceText);                                  // 0x0300   (0x0018)  
	class UCommonRichTextBlock*                        Text_Display;                                               // 0x0318   (0x0008)  


	/// Functions
	// Function /Script/FortniteConversationUI.FortShowFutureStormCircleBrief.OnUnableToPurchase
	// void OnUnableToPurchase(EPreventUseStormCircleServiceReason Reason);                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortShowFutureStormCircleBrief.OnAbleToPurchase
	// void OnAbleToPurchase();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortSingleOrMultiItemFundBrief
/// Size: 0x0050 (0x0002E8 - 0x000338)
class UFortSingleOrMultiItemFundBrief : public UFortConversationOptionBrief
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02E8   (0x0008)  MISSED
	SDK_UNDEFINED(32,14011) /* TWeakObjectPtr<UClass*> */ __um(SingleItemBrief);                                   // 0x02F0   (0x0020)  
	SDK_UNDEFINED(32,14012) /* TWeakObjectPtr<UClass*> */ __um(MultiItemsBrief);                                   // 0x0310   (0x0020)  
	class UOverlay*                                    Overlay_Brief;                                              // 0x0330   (0x0008)  
};

/// Class /Script/FortniteConversationUI.FortTransactionStrip
/// Size: 0x0058 (0x0002C0 - 0x000318)
class UFortTransactionStrip : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02C0   (0x0008)  MISSED
	class UCommonTextBlock*                            Text_CostDescription;                                       // 0x02C8   (0x0008)  
	SDK_UNDEFINED(8,14013) /* TWeakObjectPtr<UFortWorldItemDefinition*> */ __um(CachedGlobalCurrency);             // 0x02D0   (0x0008)  
	class UFortWorldItemDefinition*                    ResourceCurrency;                                           // 0x02D8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x02E0   (0x0038)  MISSED


	/// Functions
	// Function /Script/FortniteConversationUI.FortTransactionStrip.OnTransactionInfoReceived
	// void OnTransactionInfoReceived(FFortServiceTransactionInfo& TransactionInfo);                                         // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortTransactionStrip.OnSetTransactionCostVisibility
	// void OnSetTransactionCostVisibility(bool bVisible);                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortTransactionStrip.HandleOnItemCountChanged
	// void HandleOnItemCountChanged(TScriptInterface<Class> InventoryOwner, class UFortItemDefinition* Definition, int32_t Delta); // [0xa26f8d0] Final|Native|Private 
};

/// Class /Script/FortniteConversationUI.FortUpgradeBrief
/// Size: 0x0000 (0x000300 - 0x000300)
class UFortUpgradeBrief : public UFortItemTransactionBrief
{ 
public:


	/// Functions
	// Function /Script/FortniteConversationUI.FortUpgradeBrief.OnUpgradeInfoReceived
	// void OnUpgradeInfoReceived(class UFortItem* CurrentWeapon);                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortUpgradeBrief.OnUnableToUpgrade
	// void OnUnableToUpgrade(EFortWeaponUpgradeInteractionResult CannotUpgradeCause);                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.MobileConversationScreen
/// Size: 0x0030 (0x0005C8 - 0x0005F8)
class UMobileConversationScreen : public UFortConversationScreen
{ 
public:
	class UButton*                                     MobileButtonConfirm;                                        // 0x05C8   (0x0008)  
	class UButton*                                     MobileButtonTouchInformation;                               // 0x05D0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x05D8   (0x0008)  MISSED
	class UCommonButtonBase*                           MobileCloseButton;                                          // 0x05E0   (0x0008)  
	class UCommonVisibilitySwitcher*                   Switcher_CenteredDetails;                                   // 0x05E8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x05F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/FortniteConversationUI.MobileConversationScreen.OnHandleConfirmClicked
	// void OnHandleConfirmClicked();                                                                                        // [0xa26fc10] Final|Native|Protected 
};

