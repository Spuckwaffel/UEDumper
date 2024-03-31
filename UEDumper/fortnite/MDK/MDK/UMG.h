
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: InputCore
/// dependency: MovieScene
/// dependency: MovieSceneTracks
/// dependency: PropertyPath
/// dependency: Slate
/// dependency: SlateCore

/// Class /Script/UMG.Visual
/// Size: 0x0000 (0x000028 - 0x000028)
class UVisual : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.Widget
/// Size: 0x0150 (0x000028 - 0x000178)
class UWidget : public UVisual
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	CMember(class UPanelSlot*)                         Slot                                                        OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FDelegateProperty)                         bIsEnabledDelegate                                          OFFSET(getStruct<T>, {0x38, 12, 0, 0})
	SMember(FText)                                     ToolTipText                                                 OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FDelegateProperty)                         ToolTipTextDelegate                                         OFFSET(getStruct<T>, {0x60, 12, 0, 0})
	CMember(class UWidget*)                            ToolTipWidget                                               OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FDelegateProperty)                         ToolTipWidgetDelegate                                       OFFSET(getStruct<T>, {0x78, 12, 0, 0})
	SMember(FDelegateProperty)                         VisibilityDelegate                                          OFFSET(getStruct<T>, {0x84, 12, 0, 0})
	SMember(FWidgetTransform)                          RenderTransform                                             OFFSET(getStruct<T>, {0x90, 56, 0, 0})
	SMember(FVector2D)                                 RenderTransformPivot                                        OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	CMember(EFlowDirectionPreference)                  FlowDirectionPreference                                     OFFSET(get<T>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bIsVariable                                                 OFFSET(get<bool>, {0xD9, 1, 1, 0})
	DMember(bool)                                      bCreatedByConstructionScript                                OFFSET(get<bool>, {0xD9, 1, 1, 1})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0xD9, 1, 1, 2})
	DMember(bool)                                      bOverride_Cursor                                            OFFSET(get<bool>, {0xD9, 1, 1, 3})
	DMember(bool)                                      bIsVolatile                                                 OFFSET(get<bool>, {0xD9, 1, 1, 4})
	CMember(TEnumAsByte<EMouseCursor>)                 Cursor                                                      OFFSET(get<T>, {0xDA, 1, 0, 0})
	CMember(EWidgetClipping)                           Clipping                                                    OFFSET(get<T>, {0xDB, 1, 0, 0})
	CMember(ESlateVisibility)                          Visibility                                                  OFFSET(get<T>, {0xDC, 1, 0, 0})
	DMember(float)                                     RenderOpacity                                               OFFSET(get<float>, {0xE0, 4, 0, 0})
	CMember(EWidgetPixelSnapping)                      PixelSnapping                                               OFFSET(get<T>, {0xE4, 1, 0, 0})
	CMember(class USlateAccessibleWidgetData*)         AccessibleWidgetData                                        OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UWidgetNavigation*)                  Navigation                                                  OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TArray<class UPropertyBinding*>)           NativeBindings                                              OFFSET(get<T>, {0x148, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.Widget.SetVisibility
	// void SetVisibility(ESlateVisibility InVisibility);                                                                       // [0x17c2b24] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetUserFocus
	// void SetUserFocus(class APlayerController* PlayerController);                                                            // [0x6630774] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetToolTipText
	// void SetToolTipText(FText& InToolTipText);                                                                               // [0x6630600] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Widget.SetToolTip
	// void SetToolTip(class UWidget* Widget);                                                                                  // [0x6630540] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTranslation
	// void SetRenderTranslation(FVector2D Translation);                                                                        // [0x23b7b0c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransformPivot
	// void SetRenderTransformPivot(FVector2D Pivot);                                                                           // [0x662de5c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransformAngle
	// void SetRenderTransformAngle(float Angle);                                                                               // [0x3d7c2cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransform
	// void SetRenderTransform(FWidgetTransform InTransform);                                                                   // [0x34da82c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderShear
	// void SetRenderShear(FVector2D Shear);                                                                                    // [0x36543d4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderScale
	// void SetRenderScale(FVector2D Scale);                                                                                    // [0x363d848] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderOpacity
	// void SetRenderOpacity(float InOpacity);                                                                                  // [0x22c65d4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleExplicit
	// void SetNavigationRuleExplicit(EUINavigation Direction, class UWidget* InWidget);                                        // [0x662d5e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleCustomBoundary
	// void SetNavigationRuleCustomBoundary(EUINavigation Direction, FDelegateProperty InCustomDelegate);                       // [0x662d494] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleCustom
	// void SetNavigationRuleCustom(EUINavigation Direction, FDelegateProperty InCustomDelegate);                               // [0x662d340] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleBase
	// void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);                                             // [0x662d204] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRule
	// void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus);                            // [0x662d028] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetKeyboardFocus
	// void SetKeyboardFocus();                                                                                                 // [0x662c0cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetIsEnabled
	// void SetIsEnabled(bool bInIsEnabled);                                                                                    // [0x16b02b8] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetFocus
	// void SetFocus();                                                                                                         // [0x21533ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetCursor
	// void SetCursor(TEnumAsByte<EMouseCursor> InCursor);                                                                      // [0x66295dc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetClipping
	// void SetClipping(EWidgetClipping InClipping);                                                                            // [0x3d9314c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetAllNavigationRules
	// void SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus);                                                 // [0x66285d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.ResetCursor
	// void ResetCursor();                                                                                                      // [0x66281f4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.RemoveFromParent
	// void RemoveFromParent();                                                                                                 // [0x25e21a0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.OnReply__DelegateSignature
	// FEventReply OnReply__DelegateSignature();                                                                                // [0x186becc] Public|Delegate      
	// Function /Script/UMG.Widget.OnPointerEvent__DelegateSignature
	// FEventReply OnPointerEvent__DelegateSignature(FGeometry MyGeometry, FPointerEvent& MouseEvent);                          // [0x186becc] Public|Delegate|HasOutParms 
	// Function /Script/UMG.Widget.K2_RemoveFieldValueChangedDelegate
	// void K2_RemoveFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate);                       // [0x662748c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.K2_BroadcastFieldValueChanged
	// void K2_BroadcastFieldValueChanged(FFieldNotificationId FieldId);                                                        // [0x662739c] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.Widget.K2_AddFieldValueChangedDelegate
	// void K2_AddFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate);                          // [0x6627248] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.IsVisible
	// bool IsVisible();                                                                                                        // [0x3693b7c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.IsRendered
	// bool IsRendered();                                                                                                       // [0x66271c4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.IsInViewport
	// bool IsInViewport();                                                                                                     // [0x662714c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.IsHovered
	// bool IsHovered();                                                                                                        // [0x3967494] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.InvalidateLayoutAndVolatility
	// void InvalidateLayoutAndVolatility();                                                                                    // [0x3876964] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.HasUserFocusedDescendants
	// bool HasUserFocusedDescendants(class APlayerController* PlayerController);                                               // [0x662705c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasUserFocus
	// bool HasUserFocus(class APlayerController* PlayerController);                                                            // [0x6626f8c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasMouseCaptureByUser
	// bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex);                                                     // [0x6626e08] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasMouseCapture
	// bool HasMouseCapture();                                                                                                  // [0x2c80540] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasKeyboardFocus
	// bool HasKeyboardFocus();                                                                                                 // [0x6626de4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasFocusedDescendants
	// bool HasFocusedDescendants();                                                                                            // [0x6626dc0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasAnyUserFocus
	// bool HasAnyUserFocus();                                                                                                  // [0x25c798c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetWidget__DelegateSignature
	// class UWidget* GetWidget__DelegateSignature();                                                                           // [0x186becc] Public|Delegate      
	// Function /Script/UMG.Widget.GetVisibility
	// ESlateVisibility GetVisibility();                                                                                        // [0x36d9920] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetTickSpaceGeometry
	// FGeometry GetTickSpaceGeometry();                                                                                        // [0x6626034] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetText__DelegateSignature
	// FText GetText__DelegateSignature();                                                                                      // [0x186becc] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateVisibility__DelegateSignature
	// ESlateVisibility GetSlateVisibility__DelegateSignature();                                                                // [0x186becc] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateColor__DelegateSignature
	// FSlateColor GetSlateColor__DelegateSignature();                                                                          // [0x186becc] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateBrush__DelegateSignature
	// FSlateBrush GetSlateBrush__DelegateSignature();                                                                          // [0x186becc] Public|Delegate      
	// Function /Script/UMG.Widget.GetRenderTransformAngle
	// float GetRenderTransformAngle();                                                                                         // [0x6626924] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetRenderOpacity
	// float GetRenderOpacity();                                                                                                // [0x66268e4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetParent
	// class UPanelWidget* GetParent();                                                                                         // [0x3b0df64] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetPaintSpaceGeometry
	// FGeometry GetPaintSpaceGeometry();                                                                                       // [0x662689c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetOwningPlayer
	// class APlayerController* GetOwningPlayer();                                                                              // [0x300cc70] RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetOwningLocalPlayer
	// class ULocalPlayer* GetOwningLocalPlayer();                                                                              // [0x6626874] RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetMouseCursor__DelegateSignature
	// TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();                                                           // [0x186becc] Public|Delegate      
	// Function /Script/UMG.Widget.GetLinearColor__DelegateSignature
	// FLinearColor GetLinearColor__DelegateSignature();                                                                        // [0x186becc] Public|Delegate|HasDefaults 
	// Function /Script/UMG.Widget.GetIsEnabled
	// bool GetIsEnabled();                                                                                                     // [0x23b93ac] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetInt32__DelegateSignature
	// int32_t GetInt32__DelegateSignature();                                                                                   // [0x186becc] Public|Delegate      
	// Function /Script/UMG.Widget.GetGameInstance
	// class UGameInstance* GetGameInstance();                                                                                  // [0x66263f4] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetFloat__DelegateSignature
	// float GetFloat__DelegateSignature();                                                                                     // [0x186becc] Public|Delegate      
	// Function /Script/UMG.Widget.GetDesiredSize
	// FVector2D GetDesiredSize();                                                                                              // [0x2fa3174] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetClipping
	// EWidgetClipping GetClipping();                                                                                           // [0x6626174] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetCheckBoxState__DelegateSignature
	// ECheckBoxState GetCheckBoxState__DelegateSignature();                                                                    // [0x186becc] Public|Delegate      
	// Function /Script/UMG.Widget.GetCachedGeometry
	// FGeometry GetCachedGeometry();                                                                                           // [0x6626034] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetBool__DelegateSignature
	// bool GetBool__DelegateSignature();                                                                                       // [0x186becc] Public|Delegate      
	// Function /Script/UMG.Widget.GetAccessibleText
	// FText GetAccessibleText();                                                                                               // [0x6625f8c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetAccessibleSummaryText
	// FText GetAccessibleSummaryText();                                                                                        // [0x6625f0c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GenerateWidgetForString__DelegateSignature
	// class UWidget* GenerateWidgetForString__DelegateSignature(FString Item);                                                 // [0x186becc] Public|Delegate      
	// Function /Script/UMG.Widget.GenerateWidgetForObject__DelegateSignature
	// class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);                                          // [0x186becc] Public|Delegate      
	// Function /Script/UMG.Widget.ForceVolatile
	// void ForceVolatile(bool bForce);                                                                                         // [0x6625e48] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.ForceLayoutPrepass
	// void ForceLayoutPrepass();                                                                                               // [0x30c8160] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ListViewBase
/// Size: 0x0120 (0x000178 - 0x000298)
class UListViewBase : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	SMember(FMulticastInlineDelegate)                  BP_OnEntryGenerated                                         OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	CMember(class UClass*)                             EntryWidgetClass                                            OFFSET(get<T>, {0x198, 8, 0, 0})
	DMember(float)                                     WheelScrollMultiplier                                       OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(bool)                                      bEnableScrollAnimation                                      OFFSET(get<bool>, {0x1A4, 1, 0, 0})
	DMember(bool)                                      bInEnableTouchAnimatedScrolling                             OFFSET(get<bool>, {0x1A5, 1, 0, 0})
	DMember(bool)                                      AllowOverscroll                                             OFFSET(get<bool>, {0x1A6, 1, 0, 0})
	DMember(bool)                                      bEnableRightClickScrolling                                  OFFSET(get<bool>, {0x1A7, 1, 0, 0})
	DMember(bool)                                      bEnableTouchScrolling                                       OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	DMember(bool)                                      bEnableFixedLineOffset                                      OFFSET(get<bool>, {0x1A9, 1, 0, 0})
	DMember(float)                                     FixedLineScrollOffset                                       OFFSET(get<float>, {0x1AC, 4, 0, 0})
	DMember(bool)                                      bAllowDragging                                              OFFSET(get<bool>, {0x1B0, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnEntryReleased                                          OFFSET(getStruct<T>, {0x1B8, 16, 0, 0})
	SMember(FUserWidgetPool)                           EntryWidgetPool                                             OFFSET(getStruct<T>, {0x1C8, 136, 0, 0})


	/// Functions
	// Function /Script/UMG.ListViewBase.SetWheelScrollMultiplier
	// void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);                                                           // [0x6630db4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.SetScrollOffset
	// void SetScrollOffset(float InScrollOffset);                                                                              // [0x662e210] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.SetScrollbarVisibility
	// void SetScrollbarVisibility(ESlateVisibility InVisibility);                                                              // [0x20feffc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.ScrollToTop
	// void ScrollToTop();                                                                                                      // [0x6628378] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.ScrollToBottom
	// void ScrollToBottom();                                                                                                   // [0x662833c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.RequestRefresh
	// void RequestRefresh();                                                                                                   // [0x66281b8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.RegenerateAllEntries
	// void RegenerateAllEntries();                                                                                             // [0x66279f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.GetScrollOffset
	// float GetScrollOffset();                                                                                                 // [0x662693c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListViewBase.GetDisplayedEntryWidgets
	// TArray<UUserWidget*> GetDisplayedEntryWidgets();                                                                         // [0x6626314] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.ListView
/// Size: 0x0938 (0x000298 - 0x000BD0)
class UListView : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3024;

public:
	SMember(FTableViewStyle)                           WidgetStyle                                                 OFFSET(getStruct<T>, {0x380, 208, 0, 0})
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              OFFSET(getStruct<T>, {0x450, 1760, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 orientation                                                 OFFSET(get<T>, {0xB30, 1, 0, 0})
	CMember(TEnumAsByte<ESelectionMode>)               SelectionMode                                               OFFSET(get<T>, {0xB31, 1, 0, 0})
	CMember(EConsumeMouseWheel)                        ConsumeMouseWheel                                           OFFSET(get<T>, {0xB32, 1, 0, 0})
	DMember(bool)                                      bClearSelectionOnClick                                      OFFSET(get<bool>, {0xB33, 1, 0, 0})
	DMember(bool)                                      bIsFocusable                                                OFFSET(get<bool>, {0xB34, 1, 0, 0})
	DMember(bool)                                      bReturnFocusToSelection                                     OFFSET(get<bool>, {0xB35, 1, 0, 0})
	CMember(TArray<class UObject*>)                    ListItems                                                   OFFSET(get<T>, {0xB38, 16, 0, 0})
	DMember(float)                                     HorizontalEntrySpacing                                      OFFSET(get<float>, {0xB58, 4, 0, 0})
	DMember(float)                                     VerticalEntrySpacing                                        OFFSET(get<float>, {0xB5C, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnEntryInitialized                                       OFFSET(getStruct<T>, {0xB60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnItemClicked                                            OFFSET(getStruct<T>, {0xB70, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnItemDoubleClicked                                      OFFSET(getStruct<T>, {0xB80, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnItemIsHoveredChanged                                   OFFSET(getStruct<T>, {0xB90, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnItemSelectionChanged                                   OFFSET(getStruct<T>, {0xBA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnItemScrolledIntoView                                   OFFSET(getStruct<T>, {0xBB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnListViewScrolled                                       OFFSET(getStruct<T>, {0xBC0, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.ListView.SetSelectionMode
	// void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode);                                                        // [0x662e6cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.SetSelectedIndex
	// void SetSelectedIndex(int32_t Index);                                                                                    // [0x662e570] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.ScrollIndexIntoView
	// void ScrollIndexIntoView(int32_t Index);                                                                                 // [0x662827c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.RemoveItem
	// void RemoveItem(class UObject* Item);                                                                                    // [0x6627e10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.OnListItemOuterEndPlayed
	// void OnListItemOuterEndPlayed(class AActor* ItemOuter, TEnumAsByte<EEndPlayReason> EndPlayReason);                       // [0x66277d8] Final|RequiredAPI|Native|Protected 
	// Function /Script/UMG.ListView.OnListItemEndPlayed
	// void OnListItemEndPlayed(class AActor* Item, TEnumAsByte<EEndPlayReason> EndPlayReason);                                 // [0x66276a0] Final|RequiredAPI|Native|Protected 
	// Function /Script/UMG.ListView.NavigateToIndex
	// void NavigateToIndex(int32_t Index);                                                                                     // [0x66275e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.IsRefreshPending
	// bool IsRefreshPending();                                                                                                 // [0x6627190] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetVerticalEntrySpacing
	// float GetVerticalEntrySpacing();                                                                                         // [0x6626b14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetNumItems
	// int32_t GetNumItems();                                                                                                   // [0x3929290] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetListItems
	// TArray<UObject*> GetListItems();                                                                                         // [0x662670c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetItemAt
	// class UObject* GetItemAt(int32_t Index);                                                                                 // [0x6626624] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetIndexForItem
	// int32_t GetIndexForItem(class UObject* Item);                                                                            // [0x6626514] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetHorizontalEntrySpacing
	// float GetHorizontalEntrySpacing();                                                                                       // [0x66264fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.ClearListItems
	// void ClearListItems();                                                                                                   // [0x6625ba4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetSelectedItem
	// void BP_SetSelectedItem(class UObject* Item);                                                                            // [0x6625a70] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetListItems
	// void BP_SetListItems(TArray<UObject*>& InListItems);                                                                     // [0x66259d4] Final|RequiredAPI|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetItemSelection
	// void BP_SetItemSelection(class UObject* Item, bool bSelected);                                                           // [0x6625884] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_ScrollItemIntoView
	// void BP_ScrollItemIntoView(class UObject* Item);                                                                         // [0x66257b8] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_NavigateToItem
	// void BP_NavigateToItem(class UObject* Item);                                                                             // [0x66256ec] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_IsItemVisible
	// bool BP_IsItemVisible(class UObject* Item);                                                                              // [0x662561c] Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_GetSelectedItems
	// bool BP_GetSelectedItems(TArray<UObject*>& Items);                                                                       // [0x6625568] Final|RequiredAPI|Native|Private|HasOutParms|BlueprintCallable|Const 
	// Function /Script/UMG.ListView.BP_GetSelectedItem
	// class UObject* BP_GetSelectedItem();                                                                                     // [0x662553c] Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_GetNumItemsSelected
	// int32_t BP_GetNumItemsSelected();                                                                                        // [0x6625510] Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_ClearSelection
	// void BP_ClearSelection();                                                                                                // [0x66253c4] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_CancelScrollIntoView
	// void BP_CancelScrollIntoView();                                                                                          // [0x6625390] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.AddItem
	// void AddItem(class UObject* Item);                                                                                       // [0x66252d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ListViewDesignerPreviewItem
/// Size: 0x0000 (0x000028 - 0x000028)
class UListViewDesignerPreviewItem : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.SlateAccessibleWidgetData
/// Size: 0x0058 (0x000028 - 0x000080)
class USlateAccessibleWidgetData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bCanChildrenBeAccessible                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(ESlateAccessibleBehavior)                  AccessibleBehavior                                          OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(ESlateAccessibleBehavior)                  AccessibleSummaryBehavior                                   OFFSET(get<T>, {0x2A, 1, 0, 0})
	SMember(FText)                                     AccessibleText                                              OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FDelegateProperty)                         AccessibleTextDelegate                                      OFFSET(getStruct<T>, {0x48, 12, 0, 0})
	SMember(FText)                                     AccessibleSummaryText                                       OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FDelegateProperty)                         AccessibleSummaryTextDelegate                               OFFSET(getStruct<T>, {0x70, 12, 0, 0})


	/// Functions
	// Function /Script/UMG.SlateAccessibleWidgetData.GetText__DelegateSignature
	// FText GetText__DelegateSignature();                                                                                      // [0x186becc] Public|Delegate      
};

/// Class /Script/UMG.UserWidgetBlueprint
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UUserWidgetBlueprint : public UBlueprint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/UMG.UserWidget
/// Size: 0x0148 (0x000178 - 0x0002C0)
class UUserWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FLinearColor)                              ColorAndOpacity                                             OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	SMember(FDelegateProperty)                         ColorAndOpacityDelegate                                     OFFSET(getStruct<T>, {0x190, 12, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x19C, 20, 0, 0})
	SMember(FDelegateProperty)                         ForegroundColorDelegate                                     OFFSET(getStruct<T>, {0x1B0, 12, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVisibilityChanged                                         OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x200, 16, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x210, 4, 0, 0})
	DMember(bool)                                      bIsFocusable                                                OFFSET(get<bool>, {0x214, 1, 1, 0})
	DMember(bool)                                      bStopAction                                                 OFFSET(get<bool>, {0x214, 1, 1, 1})
	CMember(TArray<class UUMGSequencePlayer*>)         ActiveSequencePlayers                                       OFFSET(get<T>, {0x218, 16, 0, 0})
	CMember(class UUMGSequenceTickManager*)            AnimationTickManager                                        OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(TArray<class UUMGSequencePlayer*>)         StoppedSequencePlayers                                      OFFSET(get<T>, {0x230, 16, 0, 0})
	CMember(TArray<FNamedSlotBinding>)                 NamedSlotBindings                                           OFFSET(get<T>, {0x240, 16, 0, 0})
	CMember(TArray<class UUserWidgetExtension*>)       Extensions                                                  OFFSET(get<T>, {0x250, 16, 0, 0})
	CMember(class UWidgetTree*)                        WidgetTree                                                  OFFSET(get<T>, {0x260, 8, 0, 0})
	DMember(bool)                                      bHasScriptImplementedTick                                   OFFSET(get<bool>, {0x268, 1, 1, 0})
	DMember(bool)                                      bHasScriptImplementedPaint                                  OFFSET(get<bool>, {0x268, 1, 1, 1})
	CMember(EWidgetTickFrequency)                      TickFrequency                                               OFFSET(get<T>, {0x280, 1, 0, 0})
	SMember(FWidgetChild)                              DesiredFocusWidget                                          OFFSET(getStruct<T>, {0x284, 12, 0, 0})
	CMember(class UInputComponent*)                    InputComponent                                              OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(TArray<FAnimationEventBinding>)            AnimationCallbacks                                          OFFSET(get<T>, {0x298, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.UserWidget.UnregisterInputComponent
	// void UnregisterInputComponent();                                                                                         // [0x664e104] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindFromAnimationStarted
	// void UnbindFromAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                          // [0x664de50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindFromAnimationFinished
	// void UnbindFromAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                         // [0x31a27bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindAllFromAnimationStarted
	// void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);                                                   // [0x664dd90] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindAllFromAnimationFinished
	// void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);                                                  // [0x664dcd0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.StopListeningForInputAction
	// void StopListeningForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType);                                  // [0x664d448] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopListeningForAllInputActions
	// void StopListeningForAllInputActions();                                                                                  // [0x664d434] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAnimationsAndLatentActions
	// void StopAnimationsAndLatentActions();                                                                                   // [0x37a8930] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAnimation
	// void StopAnimation(class UWidgetAnimation* InAnimation);                                                                 // [0x28a9be4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAllAnimations
	// void StopAllAnimations();                                                                                                // [0x14c5adc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPositionInViewport
	// void SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale);                                                    // [0x664c524] Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPlaybackSpeed
	// void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);                                         // [0x664c3c4] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x34fe820] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetOwningPlayer
	// void SetOwningPlayer(class APlayerController* LocalPlayerController);                                                    // [0x664c068] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetNumLoopsToPlay
	// void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay);                                     // [0x664bf00] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetInputActionPriority
	// void SetInputActionPriority(int32_t NewPriority);                                                                        // [0x386117c] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetInputActionBlocking
	// void SetInputActionBlocking(bool bShouldBlock);                                                                          // [0x664b40c] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetForegroundColor
	// void SetForegroundColor(FSlateColor InForegroundColor);                                                                  // [0x664ac24] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetDesiredSizeInViewport
	// void SetDesiredSizeInViewport(FVector2D Size);                                                                           // [0x664a8c8] Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                                 // [0x664a478] Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAnimationCurrentTime
	// void SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime);                                         // [0x664a1cc] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAnchorsInViewport
	// void SetAnchorsInViewport(FAnchors Anchors);                                                                             // [0x664a0ec] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAlignmentInViewport
	// void SetAlignmentInViewport(FVector2D Alignment);                                                                        // [0x664a024] Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.ReverseAnimation
	// void ReverseAnimation(class UWidgetAnimation* InAnimation);                                                              // [0x66490b8] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RemoveFromViewport
	// void RemoveFromViewport();                                                                                               // [0x25e21a0] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RemoveExtensions
	// void RemoveExtensions(class UClass* InExtensionType);                                                                    // [0x6648f70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RemoveExtension
	// void RemoveExtension(class UUserWidgetExtension* InExtension);                                                           // [0x6648e14] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RegisterInputComponent
	// void RegisterInputComponent();                                                                                           // [0x6648800] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.PlaySound
	// void PlaySound(class USoundBase* SoundToPlay);                                                                           // [0x664809c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationTimeRange
	// class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState); // [0x6647ce8] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationReverse
	// class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // [0x28a84c4] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationForward
	// class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // [0x28a9cd4] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimation
	// class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState); // [0x2e0713c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PauseAnimation
	// float PauseAnimation(class UWidgetAnimation* InAnimation);                                                               // [0x28aa100] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.OnTouchStarted
	// FEventReply OnTouchStarted(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                           // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchMoved
	// FEventReply OnTouchMoved(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                             // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchGesture
	// FEventReply OnTouchGesture(FGeometry MyGeometry, FPointerEvent& GestureEvent);                                           // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchForceChanged
	// FEventReply OnTouchForceChanged(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                      // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchEnded
	// FEventReply OnTouchEnded(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                             // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnRemovedFromFocusPath
	// void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);                                                                   // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPreviewMouseButtonDown
	// FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                   // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPreviewKeyDown
	// FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                // [0x186becc] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPaint
	// void OnPaint(FPaintContext& Context);                                                                                    // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/UMG.UserWidget.OnMouseWheel
	// FEventReply OnMouseWheel(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                               // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseMove
	// FEventReply OnMouseMove(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseCaptureLost
	// void OnMouseCaptureLost();                                                                                               // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonUp
	// FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                            // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonDown
	// FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                          // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonDoubleClick
	// FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, FPointerEvent& InMouseEvent);                               // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMotionDetected
	// FEventReply OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent);                                          // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyUp
	// FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                         // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyDown
	// FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                       // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyChar
	// FEventReply OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent);                                           // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnInitialized
	// void OnInitialized();                                                                                                    // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnFocusReceived
	// FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);                                             // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnFocusLost
	// void OnFocusLost(FFocusEvent InFocusEvent);                                                                              // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDrop
	// bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);                      // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragOver
	// bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);                  // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragLeave
	// void OnDragLeave(FPointerEvent PointerEvent, class UDragDropOperation* Operation);                                       // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragEnter
	// void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);                 // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragDetected
	// void OnDragDetected(FGeometry MyGeometry, FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);            // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragCancelled
	// void OnDragCancelled(FPointerEvent& PointerEvent, class UDragDropOperation* Operation);                                  // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnimationStarted
	// void OnAnimationStarted(class UWidgetAnimation* Animation);                                                              // [0x2fe5e20] RequiredAPI|BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnimationFinished
	// void OnAnimationFinished(class UWidgetAnimation* Animation);                                                             // [0x30aff18] RequiredAPI|BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnalogValueChanged
	// FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);                            // [0x186becc] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAddedToFocusPath
	// void OnAddedToFocusPath(FFocusEvent InFocusEvent);                                                                       // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.ListenForInputAction
	// void ListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, FDelegateProperty Callback); // [0x6646e5c] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.IsPlayingAnimation
	// bool IsPlayingAnimation();                                                                                               // [0x2f7fb58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsListeningForInputAction
	// bool IsListeningForInputAction(FName ActionName);                                                                        // [0x6646be8] Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsInteractable
	// bool IsInteractable();                                                                                                   // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent|Const 
	// Function /Script/UMG.UserWidget.IsAnyAnimationPlaying
	// bool IsAnyAnimationPlaying();                                                                                            // [0x2f7fb58] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsAnimationPlayingForward
	// bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);                                                     // [0x6646a74] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.IsAnimationPlaying
	// bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);                                                            // [0x28a86a4] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetOwningPlayerPawn
	// class APawn* GetOwningPlayerPawn();                                                                                      // [0x41a5b98] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetOwningPlayerCameraManager
	// class APlayerCameraManager* GetOwningPlayerCameraManager();                                                              // [0x66465b4] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetIsVisible
	// bool GetIsVisible();                                                                                                     // [0x662714c] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetExtensions
	// TArray<UUserWidgetExtension*> GetExtensions(class UClass* ExtensionType);                                                // [0x6645ad4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetExtension
	// class UUserWidgetExtension* GetExtension(class UClass* ExtensionType);                                                   // [0x1cd1154] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAnimationCurrentTime
	// float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);                                                      // [0x28a9fa0] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAnchorsInViewport
	// FAnchors GetAnchorsInViewport();                                                                                         // [0x6645984] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAlignmentInViewport
	// FVector2D GetAlignmentInViewport();                                                                                      // [0x6645300] Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.FlushAnimations
	// void FlushAnimations();                                                                                                  // [0x66451b8] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.Destruct
	// void Destruct();                                                                                                         // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.Construct
	// void Construct();                                                                                                        // [0x186becc] RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.CancelLatentActions
	// void CancelLatentActions();                                                                                              // [0x6642554] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationStarted
	// void BindToAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                              // [0x1e38ccc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationFinished
	// void BindToAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                             // [0x1e38a94] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationEvent
	// void BindToAnimationEvent(class UWidgetAnimation* Animation, FDelegateProperty Delegate, EWidgetAnimationEvent AnimationEvent, FName UserTag); // [0x66422f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddToViewport
	// void AddToViewport(int32_t ZOrder);                                                                                      // [0x6642230] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddToPlayerScreen
	// bool AddToPlayerScreen(int32_t ZOrder);                                                                                  // [0x6642164] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddExtension
	// class UUserWidgetExtension* AddExtension(class UClass* InExtensionType);                                                 // [0x664207c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UserWidgetExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserWidgetExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.WidgetBlueprintGeneratedClassExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetBlueprintGeneratedClassExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.WidgetFieldNotificationExtension
/// Size: 0x0018 (0x000028 - 0x000040)
class UWidgetFieldNotificationExtension : public UUserWidgetExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/UMG.WidgetNavigation
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UWidgetNavigation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FWidgetNavigationData)                     Up                                                          OFFSET(getStruct<T>, {0x28, 28, 0, 0})
	SMember(FWidgetNavigationData)                     Down                                                        OFFSET(getStruct<T>, {0x44, 28, 0, 0})
	SMember(FWidgetNavigationData)                     Left                                                        OFFSET(getStruct<T>, {0x60, 28, 0, 0})
	SMember(FWidgetNavigationData)                     Right                                                       OFFSET(getStruct<T>, {0x7C, 28, 0, 0})
	SMember(FWidgetNavigationData)                     Next                                                        OFFSET(getStruct<T>, {0x98, 28, 0, 0})
	SMember(FWidgetNavigationData)                     Previous                                                    OFFSET(getStruct<T>, {0xB4, 28, 0, 0})
};

/// Class /Script/UMG.MovieScene2DTransformPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/UMG.MovieScene2DTransformSection
/// Size: 0x0780 (0x0000F0 - 0x000870)
class UMovieScene2DTransformSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2160;

public:
	SMember(FMovieScene2DTransformMask)                TransformMask                                               OFFSET(getStruct<T>, {0xF8, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Translation                                                 OFFSET(getStruct<T>, {0x100, 544, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Rotation                                                    OFFSET(getStruct<T>, {0x320, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Scale                                                       OFFSET(getStruct<T>, {0x430, 544, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Shear                                                       OFFSET(getStruct<T>, {0x650, 544, 0, 0})
};

/// Class /Script/UMG.MovieScene2DTransformTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/UMG.MovieSceneMarginPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneMarginPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/UMG.MovieSceneMarginSection
/// Size: 0x0448 (0x0000F0 - 0x000538)
class UMovieSceneMarginSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1336;

public:
	SMember(FMovieSceneFloatChannel)                   TopCurve                                                    OFFSET(getStruct<T>, {0xF8, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   LeftCurve                                                   OFFSET(getStruct<T>, {0x208, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   RightCurve                                                  OFFSET(getStruct<T>, {0x318, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   BottomCurve                                                 OFFSET(getStruct<T>, {0x428, 272, 0, 0})
};

/// Class /Script/UMG.MovieSceneMarginTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/UMG.MovieSceneWidgetMaterialSystem
/// Size: 0x0168 (0x000040 - 0x0001A8)
class UMovieSceneWidgetMaterialSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
};

/// Class /Script/UMG.MovieSceneWidgetMaterialTrack
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TArray<FName>)                             BrushPropertyNamePath                                       OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FName)                                     TrackName                                                   OFFSET(getStruct<T>, {0xD0, 4, 0, 0})
};

/// Class /Script/UMG.UMGSequencePlayer
/// Size: 0x0298 (0x000028 - 0x0002C0)
class UUMGSequencePlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(class UWidgetAnimation*)                   Animation                                                   OFFSET(get<T>, {0x210, 8, 0, 0})
	SMember(FMovieSceneRootEvaluationTemplateInstance) RootTemplateInstance                                        OFFSET(getStruct<T>, {0x220, 32, 0, 0})


	/// Functions
	// Function /Script/UMG.UMGSequencePlayer.SetUserTag
	// void SetUserTag(FName InUserTag);                                                                                        // [0x6600a6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UMGSequencePlayer.GetUserTag
	// FName GetUserTag();                                                                                                      // [0x65fd324] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.UMGSequenceTickManager
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UUMGSequenceTickManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TMap<TWeakObjectPtr<UUserWidget*>, FSequenceTickManagerWidgetData>) WeakUserWidgetData                 OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(class UMovieSceneEntitySystemLinker*)      Linker                                                      OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/UMG.WidgetAnimation
/// Size: 0x0030 (0x000068 - 0x000098)
class UWidgetAnimation : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class UMovieScene*)                        MovieScene                                                  OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TArray<FWidgetAnimationBinding>)           AnimationBindings                                           OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bLegacyFinishOnStop                                         OFFSET(get<bool>, {0x80, 1, 0, 0})
	SMember(FString)                                   DisplayLabel                                                OFFSET(getStruct<T>, {0x88, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.WidgetAnimation.UnbindFromAnimationStarted
	// void UnbindFromAnimationStarted(class UUserWidget* Widget, FDelegateProperty Delegate);                                  // [0x6601ac8] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindFromAnimationFinished
	// void UnbindFromAnimationFinished(class UUserWidget* Widget, FDelegateProperty Delegate);                                 // [0x31a2924] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindAllFromAnimationStarted
	// void UnbindAllFromAnimationStarted(class UUserWidget* Widget);                                                           // [0x6601a08] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindAllFromAnimationFinished
	// void UnbindAllFromAnimationFinished(class UUserWidget* Widget);                                                          // [0x6601948] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.GetStartTime
	// float GetStartTime();                                                                                                    // [0x28a8418] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetAnimation.GetEndTime
	// float GetEndTime();                                                                                                      // [0x28a96fc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetAnimation.BindToAnimationStarted
	// void BindToAnimationStarted(class UUserWidget* Widget, FDelegateProperty Delegate);                                      // [0x65fa6d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.BindToAnimationFinished
	// void BindToAnimationFinished(class UUserWidget* Widget, FDelegateProperty Delegate);                                     // [0x1e38920] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WidgetAnimationDelegateBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FBlueprintWidgetAnimationDelegateBinding>) WidgetAnimationDelegateBindings                      OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/UMG.WidgetAnimationPlayCallbackProxy
/// Size: 0x0018 (0x000028 - 0x000040)
class UWidgetAnimationPlayCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMulticastInlineDelegate)                  Finished                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
	// class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer*& Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed); // [0x65faea4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
	// class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(class UUMGSequencePlayer*& Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed); // [0x65fa8d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UMG.PropertyBinding
/// Size: 0x0048 (0x000028 - 0x000070)
class UPropertyBinding : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TWeakObjectPtr<UObject*>)                  SourceObject                                                OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FDynamicPropertyPath)                      SourcePath                                                  OFFSET(getStruct<T>, {0x30, 56, 0, 0})
	SMember(FName)                                     DestinationProperty                                         OFFSET(getStruct<T>, {0x68, 4, 0, 0})
};

/// Class /Script/UMG.BoolBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UBoolBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:


	/// Functions
	// Function /Script/UMG.BoolBinding.GetValue
	// bool GetValue();                                                                                                         // [0x65fd33c] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.BrushBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UBrushBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:


	/// Functions
	// Function /Script/UMG.BrushBinding.GetValue
	// FSlateBrush GetValue();                                                                                                  // [0x65fd398] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.CheckedStateBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UCheckedStateBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:


	/// Functions
	// Function /Script/UMG.CheckedStateBinding.GetValue
	// ECheckBoxState GetValue();                                                                                               // [0x65fd3dc] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.ColorBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UColorBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:


	/// Functions
	// Function /Script/UMG.ColorBinding.GetSlateValue
	// FSlateColor GetSlateValue();                                                                                             // [0x65fd26c] Final|RequiredAPI|Native|Public|Const 
	// Function /Script/UMG.ColorBinding.GetLinearValue
	// FLinearColor GetLinearValue();                                                                                           // [0x65fc330] Final|RequiredAPI|Native|Public|HasDefaults|Const 
};

/// Class /Script/UMG.FloatBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UFloatBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:


	/// Functions
	// Function /Script/UMG.FloatBinding.GetValue
	// float GetValue();                                                                                                        // [0x65fd400] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.Int32Binding
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt32Binding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:


	/// Functions
	// Function /Script/UMG.Int32Binding.GetValue
	// int32_t GetValue();                                                                                                      // [0x65fd428] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.MouseCursorBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UMouseCursorBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:


	/// Functions
	// Function /Script/UMG.MouseCursorBinding.GetValue
	// TEnumAsByte<EMouseCursor> GetValue();                                                                                    // [0x65fd484] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.WidgetBinaryStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetBinaryStateRegistration : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.WidgetHoveredStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetHoveredStateRegistration : public UWidgetBinaryStateRegistration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.WidgetPressedStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetPressedStateRegistration : public UWidgetBinaryStateRegistration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.WidgetDisabledStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetDisabledStateRegistration : public UWidgetBinaryStateRegistration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.WidgetSelectedStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetSelectedStateRegistration : public UWidgetBinaryStateRegistration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.WidgetEnumStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetEnumStateRegistration : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.WidgetStateSettings
/// Size: 0x0570 (0x000030 - 0x0005A0)
class UWidgetStateSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
};

/// Class /Script/UMG.TextBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UTextBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:


	/// Functions
	// Function /Script/UMG.TextBinding.GetTextValue
	// FText GetTextValue();                                                                                                    // [0x65fd2e0] Final|RequiredAPI|Native|Public|Const 
	// Function /Script/UMG.TextBinding.GetStringValue
	// FString GetStringValue();                                                                                                // [0x65fd2a0] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.VisibilityBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UVisibilityBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:


	/// Functions
	// Function /Script/UMG.VisibilityBinding.GetValue
	// ESlateVisibility GetValue();                                                                                             // [0x65fd4dc] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.WidgetBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UWidgetBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:


	/// Functions
	// Function /Script/UMG.WidgetBinding.GetValue
	// class UWidget* GetValue();                                                                                               // [0x65fd538] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/UMG.AsyncTaskDownloadImage
/// Size: 0x0020 (0x000030 - 0x000050)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFail                                                      OFFSET(getStruct<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.AsyncTaskDownloadImage.DownloadImage
	// class UAsyncTaskDownloadImage* DownloadImage(FString URL);                                                               // [0x65fb558] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UMG.GameViewportSubsystem
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UGameViewportSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/UMG.GameViewportSubsystem.SetWidgetSlotPosition
	// FGameViewportWidgetSlot SetWidgetSlotPosition(FGameViewportWidgetSlot Slot, class UWidget* Widget, FVector2D Position, bool bRemoveDPIScale); // [0x66015cc] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.GameViewportSubsystem.SetWidgetSlotDesiredSize
	// FGameViewportWidgetSlot SetWidgetSlotDesiredSize(FGameViewportWidgetSlot Slot, FVector2D Size);                          // [0x6601404] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.GameViewportSubsystem.SetWidgetSlot
	// void SetWidgetSlot(class UWidget* Widget, FGameViewportWidgetSlot Slot);                                                 // [0x6600ef0] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GameViewportSubsystem.RemoveWidget
	// void RemoveWidget(class UWidget* Widget);                                                                                // [0x65fe200] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GameViewportSubsystem.IsWidgetAdded
	// bool IsWidgetAdded(class UWidget* Widget);                                                                               // [0x65fd9a4] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.GameViewportSubsystem.GetWidgetSlot
	// FGameViewportWidgetSlot GetWidgetSlot(class UWidget* Widget);                                                            // [0x65fd5ac] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.GameViewportSubsystem.AddWidgetForPlayer
	// bool AddWidgetForPlayer(class UWidget* Widget, class ULocalPlayer* Player, FGameViewportWidgetSlot Slot);                // [0x65fa4b0] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GameViewportSubsystem.AddWidget
	// bool AddWidget(class UWidget* Widget, FGameViewportWidgetSlot Slot);                                                     // [0x65fa320] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UserListEntry
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserListEntry : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/UMG.UserListEntry.BP_OnItemSelectionChanged
	// void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x186becc] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserListEntry.BP_OnItemExpansionChanged
	// void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x186becc] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserListEntry.BP_OnEntryReleased
	// void BP_OnEntryReleased();                                                                                               // [0x186becc] RequiredAPI|Event|Protected|BlueprintEvent 
};

/// Class /Script/UMG.UserListEntryLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/UMG.UserListEntryLibrary.IsListItemSelected
	// bool IsListItemSelected(TScriptInterface<Class> UserListEntry);                                                          // [0x65fd804] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.UserListEntryLibrary.IsListItemExpanded
	// bool IsListItemExpanded(TScriptInterface<Class> UserListEntry);                                                          // [0x65fd6f4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.UserListEntryLibrary.GetOwningListView
	// class UListViewBase* GetOwningListView(TScriptInterface<Class> UserListEntry);                                           // [0x65fcafc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/UMG.UserObjectListEntry
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserObjectListEntry : public UUserListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/UMG.UserObjectListEntry.OnListItemObjectSet
	// void OnListItemObjectSet(class UObject* ListItemObject);                                                                 // [0x186becc] RequiredAPI|Event|Protected|BlueprintEvent 
};

/// Class /Script/UMG.UserObjectListEntryLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/UMG.UserObjectListEntryLibrary.GetListItemObject
	// class UObject* GetListItemObject(TScriptInterface<Class> UserObjectListEntry);                                           // [0x65fc360] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/UMG.PanelWidget
/// Size: 0x0018 (0x000178 - 0x000190)
class UPanelWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<class UPanelSlot*>)                 Slots                                                       OFFSET(get<T>, {0x178, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.PanelWidget.RemoveChildAt
	// bool RemoveChildAt(int32_t Index);                                                                                       // [0x6627a04] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.RemoveChild
	// bool RemoveChild(class UWidget* Content);                                                                                // [0x37f98a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.HasChild
	// bool HasChild(class UWidget* Content);                                                                                   // [0x6626c94] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.HasAnyChildren
	// bool HasAnyChildren();                                                                                                   // [0x379034c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildrenCount
	// int32_t GetChildrenCount();                                                                                              // [0x3b0df84] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildIndex
	// int32_t GetChildIndex(class UWidget* Content);                                                                           // [0x6626080] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildAt
	// class UWidget* GetChildAt(int32_t Index);                                                                                // [0x36eecd0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetAllChildren
	// TArray<UWidget*> GetAllChildren();                                                                                       // [0x314f24c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.ClearChildren
	// void ClearChildren();                                                                                                    // [0x2050750] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.AddChild
	// class UPanelSlot* AddChild(class UWidget* Content);                                                                      // [0x34d81e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ContentWidget
/// Size: 0x0000 (0x000190 - 0x000190)
class UContentWidget : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:


	/// Functions
	// Function /Script/UMG.ContentWidget.SetContent
	// class UPanelSlot* SetContent(class UWidget* Content);                                                                    // [0x662950c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ContentWidget.GetContentSlot
	// class UPanelSlot* GetContentSlot();                                                                                      // [0x32d1e9c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ContentWidget.GetContent
	// class UWidget* GetContent();                                                                                             // [0x6626198] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.BackgroundBlur
/// Size: 0x0110 (0x000190 - 0x0002A0)
class UBackgroundBlur : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x190, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x1A0, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x1A1, 1, 0, 0})
	DMember(bool)                                      bApplyAlphaToBlur                                           OFFSET(get<bool>, {0x1A2, 1, 0, 0})
	DMember(float)                                     BlurStrength                                                OFFSET(get<float>, {0x1A4, 4, 0, 0})
	DMember(bool)                                      bOverrideAutoRadiusCalculation                              OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	DMember(int32_t)                                   BlurRadius                                                  OFFSET(get<int32_t>, {0x1AC, 4, 0, 0})
	SMember(FVector4)                                  CornerRadius                                                OFFSET(getStruct<T>, {0x1B0, 32, 0, 0})
	SMember(FSlateBrush)                               LowQualityFallbackBrush                                     OFFSET(getStruct<T>, {0x1D0, 192, 0, 0})


	/// Functions
	// Function /Script/UMG.BackgroundBlur.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x6600b28] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x65ff84c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetLowQualityFallbackBrush
	// void SetLowQualityFallbackBrush(FSlateBrush& InBrush);                                                                   // [0x65ff488] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x65ff030] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetCornerRadius
	// void SetCornerRadius(FVector4 InCornerRadius);                                                                           // [0x65fee80] RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetBlurStrength
	// void SetBlurStrength(float InStrength);                                                                                  // [0x2c7e828] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetBlurRadius
	// void SetBlurRadius(int32_t InBlurRadius);                                                                                // [0x65fe860] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetApplyAlphaToBlur
	// void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);                                                                      // [0x65fe610] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.PanelSlot
/// Size: 0x0010 (0x000028 - 0x000038)
class UPanelSlot : public UVisual
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UPanelWidget*)                       Parent                                                      OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UWidget*)                            Content                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/UMG.BackgroundBlurSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UBackgroundBlurSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x49, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.BackgroundBlurSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x6600be8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlurSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x65ff91c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlurSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x65ff0f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Border
/// Size: 0x0170 (0x000190 - 0x000300)
class UBorder : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x190, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x191, 1, 0, 0})
	DMember(bool)                                      bShowEffectWhenDisabled                                     OFFSET(get<bool>, {0x192, 1, 1, 0})
	SMember(FLinearColor)                              ContentColorAndOpacity                                      OFFSET(getStruct<T>, {0x194, 16, 0, 0})
	SMember(FDelegateProperty)                         ContentColorAndOpacityDelegate                              OFFSET(getStruct<T>, {0x1A4, 12, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	SMember(FSlateBrush)                               Background                                                  OFFSET(getStruct<T>, {0x1C0, 192, 0, 0})
	SMember(FDelegateProperty)                         BackgroundDelegate                                          OFFSET(getStruct<T>, {0x280, 12, 0, 0})
	SMember(FLinearColor)                              BrushColor                                                  OFFSET(getStruct<T>, {0x28C, 16, 0, 0})
	SMember(FDelegateProperty)                         BrushColorDelegate                                          OFFSET(getStruct<T>, {0x29C, 12, 0, 0})
	SMember(FVector2D)                                 DesiredSizeScale                                            OFFSET(getStruct<T>, {0x2A8, 16, 0, 0})
	DMember(bool)                                      bFlipForRightToLeftFlowDirection                            OFFSET(get<bool>, {0x2B8, 1, 0, 0})
	SMember(FDelegateProperty)                         OnMouseButtonDownEvent                                      OFFSET(getStruct<T>, {0x2BC, 12, 0, 0})
	SMember(FDelegateProperty)                         OnMouseButtonUpEvent                                        OFFSET(getStruct<T>, {0x2C8, 12, 0, 0})
	SMember(FDelegateProperty)                         OnMouseMoveEvent                                            OFFSET(getStruct<T>, {0x2D4, 12, 0, 0})
	SMember(FDelegateProperty)                         OnMouseDoubleClickEvent                                     OFFSET(getStruct<T>, {0x2E0, 12, 0, 0})


	/// Functions
	// Function /Script/UMG.Border.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x6600cac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetShowEffectWhenDisabled
	// void SetShowEffectWhenDisabled(bool bInShowEffectWhenDisabled);                                                          // [0x66006bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x2371704] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x65ff1b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetDesiredSizeScale
	// void SetDesiredSizeScale(FVector2D InScale);                                                                             // [0x65fef68] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetContentColorAndOpacity
	// void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity);                                                   // [0x3637b98] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromTexture
	// void SetBrushFromTexture(class UTexture2D* Texture);                                                                     // [0x65fea84] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromMaterial
	// void SetBrushFromMaterial(class UMaterialInterface* Material);                                                           // [0x3108f28] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromAsset
	// void SetBrushFromAsset(class USlateBrushAsset* Asset);                                                                   // [0x65fe9c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushColor
	// void SetBrushColor(FLinearColor InBrushColor);                                                                           // [0x23721d0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrush
	// void SetBrush(FSlateBrush& InBrush);                                                                                     // [0x65fe920] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Border.GetDynamicMaterial
	// class UMaterialInstanceDynamic* GetDynamicMaterial();                                                                    // [0x300adf0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.BorderSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UBorderSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x49, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.BorderSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x6600d6c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BorderSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x3833cf4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BorderSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x237161c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Button
/// Size: 0x0440 (0x000190 - 0x0005D0)
class UButton : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	SMember(FButtonStyle)                              WidgetStyle                                                 OFFSET(getStruct<T>, {0x190, 944, 0, 0})
	SMember(FLinearColor)                              ColorAndOpacity                                             OFFSET(getStruct<T>, {0x540, 16, 0, 0})
	SMember(FLinearColor)                              BackgroundColor                                             OFFSET(getStruct<T>, {0x550, 16, 0, 0})
	CMember(TEnumAsByte<EButtonClickMethod>)           ClickMethod                                                 OFFSET(get<T>, {0x560, 1, 0, 0})
	CMember(TEnumAsByte<EButtonTouchMethod>)           TouchMethod                                                 OFFSET(get<T>, {0x561, 1, 0, 0})
	CMember(TEnumAsByte<EButtonPressMethod>)           PressMethod                                                 OFFSET(get<T>, {0x562, 1, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0x563, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnClicked                                                   OFFSET(getStruct<T>, {0x568, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPressed                                                   OFFSET(getStruct<T>, {0x578, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReleased                                                  OFFSET(getStruct<T>, {0x588, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHovered                                                   OFFSET(getStruct<T>, {0x598, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUnhovered                                                 OFFSET(getStruct<T>, {0x5A8, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.Button.SetTouchMethod
	// void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                      // [0x66008ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetStyle
	// void SetStyle(FButtonStyle& InStyle);                                                                                    // [0x6600848] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Button.SetPressMethod
	// void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                      // [0x65ffc48] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                                 // [0x65fedb8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Button.SetClickMethod
	// void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                      // [0x65fec38] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor InBackgroundColor);                                                                 // [0x65fe798] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Button.IsPressed
	// bool IsPressed();                                                                                                        // [0x65fd948] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.ButtonSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UButtonSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x49, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.ButtonSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x6600e30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ButtonSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x65ff9ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ButtonSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x65ff274] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.CanvasPanel
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UCanvasPanel : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:


	/// Functions
	// Function /Script/UMG.CanvasPanel.AddChildToCanvas
	// class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);                                                        // [0x65f9b2c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.CanvasPanelSlot
/// Size: 0x0050 (0x000038 - 0x000088)
class UCanvasPanelSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FAnchorData)                               LayoutData                                                  OFFSET(getStruct<T>, {0x38, 64, 0, 0})
	DMember(bool)                                      bAutoSize                                                   OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(int32_t)                                   ZOrder                                                      OFFSET(get<int32_t>, {0x7C, 4, 0, 0})


	/// Functions
	// Function /Script/UMG.CanvasPanelSlot.SetZOrder
	// void SetZOrder(int32_t InZOrder);                                                                                        // [0x6601888] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetSize
	// void SetSize(FVector2D InSize);                                                                                          // [0x6600780] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetPosition
	// void SetPosition(FVector2D InPosition);                                                                                  // [0x65ffb80] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetOffsets
	// void SetOffsets(FMargin InOffset);                                                                                       // [0x65ff77c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetMinimum
	// void SetMinimum(FVector2D InMinimumAnchors);                                                                             // [0x65ff5f4] Final|RequiredAPI|Native|Public|HasDefaults 
	// Function /Script/UMG.CanvasPanelSlot.SetMaximum
	// void SetMaximum(FVector2D InMaximumAnchors);                                                                             // [0x65ff52c] Final|RequiredAPI|Native|Public|HasDefaults 
	// Function /Script/UMG.CanvasPanelSlot.SetLayout
	// void SetLayout(FAnchorData& InLayoutData);                                                                               // [0x65ff3f8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAutoSize
	// void SetAutoSize(bool InbAutoSize);                                                                                      // [0x65fe6d4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAnchors
	// void SetAnchors(FAnchors InAnchors);                                                                                     // [0x65fe530] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAlignment
	// void SetAlignment(FVector2D InAlignment);                                                                                // [0x65fe468] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.GetZOrder
	// int32_t GetZOrder();                                                                                                     // [0x65fd6b0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetSize
	// FVector2D GetSize();                                                                                                     // [0x65fd23c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetPosition
	// FVector2D GetPosition();                                                                                                 // [0x65fcbd0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetOffsets
	// FMargin GetOffsets();                                                                                                    // [0x65fc434] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetLayout
	// FAnchorData GetLayout();                                                                                                 // [0x65fc2fc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAutoSize
	// bool GetAutoSize();                                                                                                      // [0x65fc2b4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAnchors
	// FAnchors GetAnchors();                                                                                                   // [0x65fc280] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAlignment
	// FVector2D GetAlignment();                                                                                                // [0x65fc250] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.CheckBox
/// Size: 0x0A50 (0x000190 - 0x000BE0)
class UCheckBox : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3040;

public:
	CMember(ECheckBoxState)                            CheckedState                                                OFFSET(get<T>, {0x190, 1, 0, 0})
	SMember(FDelegateProperty)                         CheckedStateDelegate                                        OFFSET(getStruct<T>, {0x194, 12, 0, 0})
	SMember(FCheckBoxStyle)                            WidgetStyle                                                 OFFSET(getStruct<T>, {0x1A0, 2576, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0xBB0, 1, 0, 0})
	CMember(TEnumAsByte<EButtonClickMethod>)           ClickMethod                                                 OFFSET(get<T>, {0xBB1, 1, 0, 0})
	CMember(TEnumAsByte<EButtonTouchMethod>)           TouchMethod                                                 OFFSET(get<T>, {0xBB2, 1, 0, 0})
	CMember(TEnumAsByte<EButtonPressMethod>)           PressMethod                                                 OFFSET(get<T>, {0xBB3, 1, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0xBB4, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCheckStateChanged                                         OFFSET(getStruct<T>, {0xBB8, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.CheckBox.SetTouchMethod
	// void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                      // [0x66009ac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetPressMethod
	// void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                      // [0x65ffd08] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetIsChecked
	// void SetIsChecked(bool InIsChecked);                                                                                     // [0x65ff334] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetClickMethod
	// void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                      // [0x65fecf8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetCheckedState
	// void SetCheckedState(ECheckBoxState InCheckedState);                                                                     // [0x65feb78] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.IsPressed
	// bool IsPressed();                                                                                                        // [0x65fd97c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CheckBox.IsChecked
	// bool IsChecked();                                                                                                        // [0x65fd6d0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CheckBox.GetCheckedState
	// ECheckBoxState GetCheckedState();                                                                                        // [0x65fc2d8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetCheckedStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetCheckedStateRegistration : public UWidgetEnumStateRegistration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.CircularThrobber
/// Size: 0x00F8 (0x000178 - 0x000270)
class UCircularThrobber : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	DMember(int32_t)                                   NumberOfPieces                                              OFFSET(get<int32_t>, {0x178, 4, 0, 0})
	DMember(float)                                     Period                                                      OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x180, 4, 0, 0})
	SMember(FSlateBrush)                               Image                                                       OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	DMember(bool)                                      bEnableRadius                                               OFFSET(get<bool>, {0x250, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.CircularThrobber.SetRadius
	// void SetRadius(float InRadius);                                                                                          // [0x65ffdc8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CircularThrobber.SetPeriod
	// void SetPeriod(float InPeriod);                                                                                          // [0x65ffabc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CircularThrobber.SetNumberOfPieces
	// void SetNumberOfPieces(int32_t InNumberOfPieces);                                                                        // [0x65ff6bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ComboBox
/// Size: 0x0718 (0x000178 - 0x000890)
class UComboBox : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2192;

public:
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              OFFSET(getStruct<T>, {0x180, 1760, 0, 0})
	CMember(TArray<class UObject*>)                    Items                                                       OFFSET(get<T>, {0x860, 16, 0, 0})
	SMember(FDelegateProperty)                         OnGenerateWidgetEvent                                       OFFSET(getStruct<T>, {0x870, 12, 0, 0})
	DMember(bool)                                      bIsFocusable                                                OFFSET(get<bool>, {0x87C, 1, 0, 0})
};

/// Class /Script/UMG.ComboBoxKey
/// Size: 0x19D8 (0x000178 - 0x001B50)
class UComboBoxKey : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
	CMember(TArray<FName>)                             Options                                                     OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FName)                                     SelectedOption                                              OFFSET(getStruct<T>, {0x188, 4, 0, 0})
	SMember(FComboBoxStyle)                            WidgetStyle                                                 OFFSET(getStruct<T>, {0x190, 1536, 0, 0})
	SMember(FTableRowStyle)                            ItemStyle                                                   OFFSET(getStruct<T>, {0x790, 3152, 0, 0})
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              OFFSET(getStruct<T>, {0x13E0, 1760, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x1AC0, 20, 0, 0})
	SMember(FMargin)                                   ContentPadding                                              OFFSET(getStruct<T>, {0x1AD4, 16, 0, 0})
	DMember(float)                                     MaxListHeight                                               OFFSET(get<float>, {0x1AE4, 4, 0, 0})
	DMember(bool)                                      bHasDownArrow                                               OFFSET(get<bool>, {0x1AE8, 1, 0, 0})
	DMember(bool)                                      bEnableGamepadNavigationMode                                OFFSET(get<bool>, {0x1AE9, 1, 0, 0})
	DMember(bool)                                      bIsFocusable                                                OFFSET(get<bool>, {0x1AEA, 1, 0, 0})
	SMember(FDelegateProperty)                         OnGenerateContentWidget                                     OFFSET(getStruct<T>, {0x1AEC, 12, 0, 0})
	SMember(FDelegateProperty)                         OnGenerateItemWidget                                        OFFSET(getStruct<T>, {0x1AF8, 12, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSelectionChanged                                          OFFSET(getStruct<T>, {0x1B08, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOpening                                                   OFFSET(getStruct<T>, {0x1B18, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.ComboBoxKey.SetSelectedOption
	// void SetSelectedOption(FName Option);                                                                                    // [0x65fff4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxKey.RemoveOption
	// bool RemoveOption(FName Option);                                                                                         // [0x65fda88] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxKey.OnSelectionChangedEvent__DelegateSignature
	// void OnSelectionChangedEvent__DelegateSignature(FName SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);             // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxKey.OnOpeningEvent__DelegateSignature
	// void OnOpeningEvent__DelegateSignature();                                                                                // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxKey.IsOpen
	// bool IsOpen();                                                                                                           // [0x65fd8d8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxKey.GetSelectedOption
	// FName GetSelectedOption();                                                                                               // [0x65fcc24] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxKey.GenerateWidgetEvent__DelegateSignature
	// class UWidget* GenerateWidgetEvent__DelegateSignature(FName Item);                                                       // [0x186becc] Public|Delegate      
	// Function /Script/UMG.ComboBoxKey.ClearSelection
	// void ClearSelection();                                                                                                   // [0x65fa8a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxKey.ClearOptions
	// void ClearOptions();                                                                                                     // [0x65fa838] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxKey.AddOption
	// void AddOption(FName Option);                                                                                            // [0x65f9bfc] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ComboBoxString
/// Size: 0x1A68 (0x000178 - 0x001BE0)
class UComboBoxString : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7136;

public:
	CMember(TArray<FString>)                           DefaultOptions                                              OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FString)                                   SelectedOption                                              OFFSET(getStruct<T>, {0x188, 16, 0, 0})
	SMember(FComboBoxStyle)                            WidgetStyle                                                 OFFSET(getStruct<T>, {0x1A0, 1536, 0, 0})
	SMember(FTableRowStyle)                            ItemStyle                                                   OFFSET(getStruct<T>, {0x7A0, 3152, 0, 0})
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              OFFSET(getStruct<T>, {0x13F0, 1760, 0, 0})
	SMember(FMargin)                                   ContentPadding                                              OFFSET(getStruct<T>, {0x1AD0, 16, 0, 0})
	DMember(float)                                     MaxListHeight                                               OFFSET(get<float>, {0x1AE0, 4, 0, 0})
	DMember(bool)                                      HasDownArrow                                                OFFSET(get<bool>, {0x1AE4, 1, 0, 0})
	DMember(bool)                                      EnableGamepadNavigationMode                                 OFFSET(get<bool>, {0x1AE5, 1, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x1AE8, 88, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x1B40, 20, 0, 0})
	DMember(bool)                                      bIsFocusable                                                OFFSET(get<bool>, {0x1B54, 1, 0, 0})
	SMember(FDelegateProperty)                         OnGenerateWidgetEvent                                       OFFSET(getStruct<T>, {0x1B58, 12, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSelectionChanged                                          OFFSET(getStruct<T>, {0x1B68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOpening                                                   OFFSET(getStruct<T>, {0x1B78, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.ComboBoxString.SetSelectedOption
	// void SetSelectedOption(FString Option);                                                                                  // [0x6600048] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.SetSelectedIndex
	// void SetSelectedIndex(int32_t Index);                                                                                    // [0x65ffe8c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.RemoveOption
	// bool RemoveOption(FString Option);                                                                                       // [0x65fdb90] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.RefreshOptions
	// void RefreshOptions();                                                                                                   // [0x65fda74] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	// void OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);           // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	// void OnOpeningEvent__DelegateSignature();                                                                                // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxString.IsOpen
	// bool IsOpen();                                                                                                           // [0x65fd910] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetSelectedOption
	// FString GetSelectedOption();                                                                                             // [0x65fcc3c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetSelectedIndex
	// int32_t GetSelectedIndex();                                                                                              // [0x65fcc00] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetOptionCount
	// int32_t GetOptionCount();                                                                                                // [0x65fcae4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetOptionAtIndex
	// FString GetOptionAtIndex(int32_t Index);                                                                                 // [0x65fc464] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.FindOptionIndex
	// int32_t FindOptionIndex(FString Option);                                                                                 // [0x65fbbe0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.ClearSelection
	// void ClearSelection();                                                                                                   // [0x65fa8bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.ClearOptions
	// void ClearOptions();                                                                                                     // [0x65fa894] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.AddOption
	// void AddOption(FString Option);                                                                                          // [0x65f9cbc] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.DynamicEntryBoxBase
/// Size: 0x00E0 (0x000178 - 0x000258)
class UDynamicEntryBoxBase : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	SMember(FVector2D)                                 EntrySpacing                                                OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	CMember(TArray<FVector2D>)                         SpacingPattern                                              OFFSET(get<T>, {0x188, 16, 0, 0})
	CMember(EDynamicBoxType)                           EntryBoxType                                                OFFSET(get<T>, {0x198, 1, 0, 0})
	SMember(FSlateChildSize)                           EntrySizeRule                                               OFFSET(getStruct<T>, {0x19C, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         EntryHorizontalAlignment                                    OFFSET(get<T>, {0x1A4, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           EntryVerticalAlignment                                      OFFSET(get<T>, {0x1A5, 1, 0, 0})
	DMember(int32_t)                                   MaxElementSize                                              OFFSET(get<int32_t>, {0x1A8, 4, 0, 0})
	SMember(FRadialBoxSettings)                        RadialBoxSettings                                           OFFSET(getStruct<T>, {0x1AC, 16, 0, 0})
	SMember(FUserWidgetPool)                           EntryWidgetPool                                             OFFSET(getStruct<T>, {0x1D0, 136, 0, 0})


	/// Functions
	// Function /Script/UMG.DynamicEntryBoxBase.SetRadialSettings
	// void SetRadialSettings(FRadialBoxSettings& InSettings);                                                                  // [0x662dcfc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBoxBase.SetEntrySpacing
	// void SetEntrySpacing(FVector2D& InEntrySpacing);                                                                         // [0x28c69e0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBoxBase.GetNumEntries
	// int32_t GetNumEntries();                                                                                                 // [0x363cf50] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.DynamicEntryBoxBase.GetAllEntries
	// TArray<UUserWidget*> GetAllEntries();                                                                                    // [0x267c46c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.DynamicEntryBox
/// Size: 0x0008 (0x000258 - 0x000260)
class UDynamicEntryBox : public UDynamicEntryBoxBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	CMember(class UClass*)                             EntryWidgetClass                                            OFFSET(get<T>, {0x258, 8, 0, 0})


	/// Functions
	// Function /Script/UMG.DynamicEntryBox.Reset
	// void Reset(bool bDeleteWidgets);                                                                                         // [0x20515d4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.RemoveEntry
	// void RemoveEntry(class UUserWidget* EntryWidget);                                                                        // [0x6627ad0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.BP_CreateEntryOfClass
	// class UUserWidget* BP_CreateEntryOfClass(class UClass* EntryClass);                                                      // [0x66253e0] Final|RequiredAPI|Native|Private|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.BP_CreateEntry
	// class UUserWidget* BP_CreateEntry();                                                                                     // [0x348123c] Final|RequiredAPI|Native|Private|BlueprintCallable 
};

/// Class /Script/UMG.EditableText
/// Size: 0x0368 (0x000178 - 0x0004E0)
class UEditableText : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1248;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x178, 24, 0, 0})
	SMember(FDelegateProperty)                         TextDelegate                                                OFFSET(getStruct<T>, {0x190, 12, 0, 0})
	SMember(FText)                                     HintText                                                    OFFSET(getStruct<T>, {0x1A0, 24, 0, 0})
	SMember(FDelegateProperty)                         HintTextDelegate                                            OFFSET(getStruct<T>, {0x1B8, 12, 0, 0})
	SMember(FEditableTextStyle)                        WidgetStyle                                                 OFFSET(getStruct<T>, {0x1D0, 704, 0, 0})
	DMember(bool)                                      IsReadOnly                                                  OFFSET(get<bool>, {0x490, 1, 0, 0})
	DMember(bool)                                      IsPassword                                                  OFFSET(get<bool>, {0x491, 1, 0, 0})
	DMember(float)                                     MinimumDesiredWidth                                         OFFSET(get<float>, {0x494, 4, 0, 0})
	DMember(bool)                                      IsCaretMovedWhenGainFocus                                   OFFSET(get<bool>, {0x498, 1, 0, 0})
	DMember(bool)                                      SelectAllTextWhenFocused                                    OFFSET(get<bool>, {0x499, 1, 0, 0})
	DMember(bool)                                      RevertTextOnEscape                                          OFFSET(get<bool>, {0x49A, 1, 0, 0})
	DMember(bool)                                      ClearKeyboardFocusOnCommit                                  OFFSET(get<bool>, {0x49B, 1, 0, 0})
	DMember(bool)                                      SelectAllTextOnCommit                                       OFFSET(get<bool>, {0x49C, 1, 0, 0})
	DMember(bool)                                      AllowContextMenu                                            OFFSET(get<bool>, {0x49D, 1, 0, 0})
	CMember(TEnumAsByte<EVirtualKeyboardType>)         KeyboardType                                                OFFSET(get<T>, {0x49E, 1, 0, 0})
	SMember(FVirtualKeyboardOptions)                   VirtualKeyboardOptions                                      OFFSET(getStruct<T>, {0x49F, 1, 0, 0})
	CMember(EVirtualKeyboardTrigger)                   VirtualKeyboardTrigger                                      OFFSET(get<T>, {0x4A0, 1, 0, 0})
	CMember(EVirtualKeyboardDismissAction)             VirtualKeyboardDismissAction                                OFFSET(get<T>, {0x4A1, 1, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification                                               OFFSET(get<T>, {0x4A2, 1, 0, 0})
	CMember(ETextOverflowPolicy)                       OverflowPolicy                                              OFFSET(get<T>, {0x4A3, 1, 0, 0})
	SMember(FShapedTextOptions)                        ShapedTextOptions                                           OFFSET(getStruct<T>, {0x4A4, 3, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTextChanged                                               OFFSET(getStruct<T>, {0x4A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTextCommitted                                             OFFSET(getStruct<T>, {0x4B8, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.EditableText.SetTextOverflowPolicy
	// void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);                                                        // [0x662fcc4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetText
	// void SetText(FText InText);                                                                                              // [0x36cda60] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetMinimumDesiredWidth
	// void SetMinimumDesiredWidth(float InMinDesiredWidth);                                                                    // [0x662cea4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                        // [0x2128e2c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetIsReadOnly
	// void SetIsReadOnly(bool InbIsReadyOnly);                                                                                 // [0x662bae0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetIsPassword
	// void SetIsPassword(bool InbIsPassword);                                                                                  // [0x662b958] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetHintText
	// void SetHintText(FText InHintText);                                                                                      // [0x2128d2c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetFontOutlineMaterial
	// void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);                                                       // [0x662a970] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetFontMaterial
	// void SetFontMaterial(class UMaterialInterface* InMaterial);                                                              // [0x662a6a4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetFont
	// void SetFont(FSlateFontInfo InFontInfo);                                                                                 // [0x2129174] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	// void OnEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);                // [0x186becc] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	// void OnEditableTextChangedEvent__DelegateSignature(FText& Text);                                                         // [0x186becc] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableText.GetText
	// FText GetText();                                                                                                         // [0x66269a4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableText.GetJustification
	// TEnumAsByte<ETextJustify> GetJustification();                                                                            // [0x66266f4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableText.GetHintText
	// FText GetHintText();                                                                                                     // [0x6626430] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableText.GetFont
	// FSlateFontInfo GetFont();                                                                                                // [0x38ba40c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.EditableTextBox
/// Size: 0x0E18 (0x000178 - 0x000F90)
class UEditableTextBox : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3984;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x178, 24, 0, 0})
	SMember(FDelegateProperty)                         TextDelegate                                                OFFSET(getStruct<T>, {0x190, 12, 0, 0})
	SMember(FEditableTextBoxStyle)                     WidgetStyle                                                 OFFSET(getStruct<T>, {0x1A0, 3456, 0, 0})
	SMember(FText)                                     HintText                                                    OFFSET(getStruct<T>, {0xF20, 24, 0, 0})
	SMember(FDelegateProperty)                         HintTextDelegate                                            OFFSET(getStruct<T>, {0xF38, 12, 0, 0})
	DMember(bool)                                      IsReadOnly                                                  OFFSET(get<bool>, {0xF44, 1, 0, 0})
	DMember(bool)                                      IsPassword                                                  OFFSET(get<bool>, {0xF45, 1, 0, 0})
	DMember(float)                                     MinimumDesiredWidth                                         OFFSET(get<float>, {0xF48, 4, 0, 0})
	DMember(bool)                                      IsCaretMovedWhenGainFocus                                   OFFSET(get<bool>, {0xF4C, 1, 0, 0})
	DMember(bool)                                      SelectAllTextWhenFocused                                    OFFSET(get<bool>, {0xF4D, 1, 0, 0})
	DMember(bool)                                      RevertTextOnEscape                                          OFFSET(get<bool>, {0xF4E, 1, 0, 0})
	DMember(bool)                                      ClearKeyboardFocusOnCommit                                  OFFSET(get<bool>, {0xF4F, 1, 0, 0})
	DMember(bool)                                      SelectAllTextOnCommit                                       OFFSET(get<bool>, {0xF50, 1, 0, 0})
	DMember(bool)                                      AllowContextMenu                                            OFFSET(get<bool>, {0xF51, 1, 0, 0})
	CMember(TEnumAsByte<EVirtualKeyboardType>)         KeyboardType                                                OFFSET(get<T>, {0xF52, 1, 0, 0})
	SMember(FVirtualKeyboardOptions)                   VirtualKeyboardOptions                                      OFFSET(getStruct<T>, {0xF53, 1, 0, 0})
	CMember(EVirtualKeyboardTrigger)                   VirtualKeyboardTrigger                                      OFFSET(get<T>, {0xF54, 1, 0, 0})
	CMember(EVirtualKeyboardDismissAction)             VirtualKeyboardDismissAction                                OFFSET(get<T>, {0xF55, 1, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification                                               OFFSET(get<T>, {0xF56, 1, 0, 0})
	CMember(ETextOverflowPolicy)                       OverflowPolicy                                              OFFSET(get<T>, {0xF57, 1, 0, 0})
	SMember(FShapedTextOptions)                        ShapedTextOptions                                           OFFSET(getStruct<T>, {0xF58, 3, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTextChanged                                               OFFSET(getStruct<T>, {0xF60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTextCommitted                                             OFFSET(getStruct<T>, {0xF70, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.EditableTextBox.SetTextOverflowPolicy
	// void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);                                                        // [0x662fd84] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetText
	// void SetText(FText InText);                                                                                              // [0x662f934] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                        // [0x662bf30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetIsReadOnly
	// void SetIsReadOnly(bool bReadOnly);                                                                                      // [0x662bba4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetIsPassword
	// void SetIsPassword(bool bIsPassword);                                                                                    // [0x662ba1c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetHintText
	// void SetHintText(FText InText);                                                                                          // [0x662afbc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetForegroundColor
	// void SetForegroundColor(FLinearColor Color);                                                                             // [0x662ac3c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetError
	// void SetError(FText InError);                                                                                            // [0x662a1e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	// void OnEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);             // [0x186becc] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	// void OnEditableTextBoxChangedEvent__DelegateSignature(FText& Text);                                                      // [0x186becc] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableTextBox.HasError
	// bool HasError();                                                                                                         // [0x6626d70] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableTextBox.GetText
	// FText GetText();                                                                                                         // [0x66269e8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableTextBox.ClearError
	// void ClearError();                                                                                                       // [0x6625b6c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ExpandableArea
/// Size: 0x02D8 (0x000178 - 0x000450)
class UExpandableArea : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	SMember(FExpandableAreaStyle)                      style                                                       OFFSET(getStruct<T>, {0x180, 416, 0, 0})
	SMember(FSlateBrush)                               BorderBrush                                                 OFFSET(getStruct<T>, {0x320, 192, 0, 0})
	SMember(FSlateColor)                               BorderColor                                                 OFFSET(getStruct<T>, {0x3E0, 20, 0, 0})
	DMember(bool)                                      bIsExpanded                                                 OFFSET(get<bool>, {0x3F4, 1, 0, 0})
	DMember(float)                                     MaxHeight                                                   OFFSET(get<float>, {0x3F8, 4, 0, 0})
	SMember(FMargin)                                   HeaderPadding                                               OFFSET(getStruct<T>, {0x3FC, 16, 0, 0})
	SMember(FMargin)                                   AreaPadding                                                 OFFSET(getStruct<T>, {0x40C, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnExpansionChanged                                          OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	CMember(class UWidget*)                            HeaderContent                                               OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UWidget*)                            BodyContent                                                 OFFSET(get<T>, {0x438, 8, 0, 0})


	/// Functions
	// Function /Script/UMG.ExpandableArea.SetIsExpanded_Animated
	// void SetIsExpanded_Animated(bool IsExpanded);                                                                            // [0x662b79c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ExpandableArea.SetIsExpanded
	// void SetIsExpanded(bool IsExpanded);                                                                                     // [0x662b6d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ExpandableArea.GetIsExpanded
	// bool GetIsExpanded();                                                                                                    // [0x66265e4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.GridPanel
/// Size: 0x0030 (0x000190 - 0x0001C0)
class UGridPanel : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(TArray<float>)                             ColumnFill                                                  OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(TArray<float>)                             RowFill                                                     OFFSET(get<T>, {0x1A0, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.GridPanel.SetRowFill
	// void SetRowFill(int32_t RowIndex, float Coefficient);                                                                    // [0x36f2570] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridPanel.SetColumnFill
	// void SetColumnFill(int32_t ColumnIndex, float Coefficient);                                                              // [0x36f2750] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridPanel.AddChildToGrid
	// class UGridSlot* AddChildToGrid(class UWidget* Content, int32_t InRow, int32_t InColumn);                                // [0x22504b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.GridSlot
/// Size: 0x0040 (0x000038 - 0x000078)
class UGridSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x49, 1, 0, 0})
	DMember(int32_t)                                   Row                                                         OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   RowSpan                                                     OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   Column                                                      OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(int32_t)                                   ColumnSpan                                                  OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   Layer                                                       OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	SMember(FVector2D)                                 Nudge                                                       OFFSET(getStruct<T>, {0x60, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.GridSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x319de50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetRowSpan
	// void SetRowSpan(int32_t InRowSpan);                                                                                      // [0x3232d60] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetRow
	// void SetRow(int32_t InRow);                                                                                              // [0x225085c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x2e308bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetNudge
	// void SetNudge(FVector2D InNudge);                                                                                        // [0x33d1860] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetLayer
	// void SetLayer(int32_t InLayer);                                                                                          // [0x22509b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x3239e8c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetColumnSpan
	// void SetColumnSpan(int32_t InColumnSpan);                                                                                // [0x3232eb0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetColumn
	// void SetColumn(int32_t InColumn);                                                                                        // [0x2250708] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.HorizontalBox
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UHorizontalBox : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:


	/// Functions
	// Function /Script/UMG.HorizontalBox.AddChildToHorizontalBox
	// class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);                                               // [0x362cd9c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.HorizontalBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UHorizontalBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSlateChildSize)                           Size                                                        OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x58, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x59, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.HorizontalBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x2906ad8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetSize
	// void SetSize(FSlateChildSize InSize);                                                                                    // [0x662effc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x27c7f60] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x29069f8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Image
/// Size: 0x0138 (0x000178 - 0x0002B0)
class UImage : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FSlateBrush)                               Brush                                                       OFFSET(getStruct<T>, {0x180, 192, 0, 0})
	SMember(FDelegateProperty)                         BrushDelegate                                               OFFSET(getStruct<T>, {0x240, 12, 0, 0})
	SMember(FLinearColor)                              ColorAndOpacity                                             OFFSET(getStruct<T>, {0x24C, 16, 0, 0})
	SMember(FDelegateProperty)                         ColorAndOpacityDelegate                                     OFFSET(getStruct<T>, {0x25C, 12, 0, 0})
	DMember(bool)                                      bFlipForRightToLeftFlowDirection                            OFFSET(get<bool>, {0x268, 1, 0, 0})
	SMember(FDelegateProperty)                         OnMouseButtonDownEvent                                      OFFSET(getStruct<T>, {0x26C, 12, 0, 0})


	/// Functions
	// Function /Script/UMG.Image.SetOpacity
	// void SetOpacity(float InOpacity);                                                                                        // [0x3c6c52c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetDesiredSizeOverride
	// void SetDesiredSizeOverride(FVector2D DesiredSize);                                                                      // [0x2c80248] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Image.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                                 // [0x25c3f38] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushTintColor
	// void SetBrushTintColor(FSlateColor TintColor);                                                                           // [0x32faaec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushResourceObject
	// void SetBrushResourceObject(class UObject* ResourceObject);                                                              // [0x6629208] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromTextureDynamic
	// void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);                                      // [0x66290c0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromTexture
	// void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);                                                    // [0x27ca93c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromSoftTexture
	// void SetBrushFromSoftTexture(TWeakObjectPtr<UTexture2D*> SoftTexture, bool bMatchSize);                                  // [0x2e334ec] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromSoftMaterial
	// void SetBrushFromSoftMaterial(TWeakObjectPtr<UMaterialInterface*> SoftMaterial);                                         // [0x1afb084] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromMaterial
	// void SetBrushFromMaterial(class UMaterialInterface* Material);                                                           // [0x2051a4c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromAtlasInterface
	// void SetBrushFromAtlasInterface(TScriptInterface<Class> AtlasRegion, bool bMatchSize);                                   // [0x1ee73ac] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromAsset
	// void SetBrushFromAsset(class USlateBrushAsset* Asset);                                                                   // [0x6628ffc] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrush
	// void SetBrush(FSlateBrush& InBrush);                                                                                     // [0x2d35c34] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Image.GetDynamicMaterial
	// class UMaterialInstanceDynamic* GetDynamicMaterial();                                                                    // [0x21e429c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.InputKeySelector
/// Size: 0x0778 (0x000178 - 0x0008F0)
class UInputKeySelector : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2288;

public:
	SMember(FButtonStyle)                              WidgetStyle                                                 OFFSET(getStruct<T>, {0x180, 944, 0, 0})
	SMember(FTextBlockStyle)                           TextStyle                                                   OFFSET(getStruct<T>, {0x530, 784, 0, 0})
	SMember(FInputChord)                               SelectedKey                                                 OFFSET(getStruct<T>, {0x840, 32, 0, 0})
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x860, 16, 0, 0})
	SMember(FText)                                     KeySelectionText                                            OFFSET(getStruct<T>, {0x870, 24, 0, 0})
	SMember(FText)                                     NoKeySpecifiedText                                          OFFSET(getStruct<T>, {0x888, 24, 0, 0})
	DMember(bool)                                      bAllowModifierKeys                                          OFFSET(get<bool>, {0x8A0, 1, 0, 0})
	DMember(bool)                                      bAllowGamepadKeys                                           OFFSET(get<bool>, {0x8A1, 1, 0, 0})
	CMember(TArray<FKey>)                              EscapeKeys                                                  OFFSET(get<T>, {0x8A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKeySelected                                               OFFSET(getStruct<T>, {0x8B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnIsSelectingKeyChanged                                     OFFSET(getStruct<T>, {0x8C8, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.InputKeySelector.SetTextBlockVisibility
	// void SetTextBlockVisibility(ESlateVisibility InVisibility);                                                              // [0x662fbc8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetSelectedKey
	// void SetSelectedKey(FInputChord& InSelectedKey);                                                                         // [0x662e630] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetNoKeySpecifiedText
	// void SetNoKeySpecifiedText(FText InNoKeySpecifiedText);                                                                  // [0x662d724] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetKeySelectionText
	// void SetKeySelectionText(FText InKeySelectionText);                                                                      // [0x662bff0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetEscapeKeys
	// void SetEscapeKeys(TArray<FKey>& InKeys);                                                                                // [0x662a3b4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetAllowModifierKeys
	// void SetAllowModifierKeys(bool bInAllowModifierKeys);                                                                    // [0x66287d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetAllowGamepadKeys
	// void SetAllowGamepadKeys(bool bInAllowGamepadKeys);                                                                      // [0x6628714] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.OnKeySelected__DelegateSignature
	// void OnKeySelected__DelegateSignature(FInputChord SelectedKey);                                                          // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	// void OnIsSelectingKeyChanged__DelegateSignature();                                                                       // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.InputKeySelector.GetIsSelectingKey
	// bool GetIsSelectingKey();                                                                                                // [0x66265fc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.InvalidationBox
/// Size: 0x0018 (0x000190 - 0x0001A8)
class UInvalidationBox : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	DMember(bool)                                      bCanCache                                                   OFFSET(get<bool>, {0x190, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.InvalidationBox.SetCanCache
	// void SetCanCache(bool CanCache);                                                                                         // [0x66292c8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InvalidationBox.InvalidateCache
	// void InvalidateCache();                                                                                                  // [0x3518b8c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InvalidationBox.GetCanCache
	// bool GetCanCache();                                                                                                      // [0x6626060] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.MenuAnchor
/// Size: 0x0048 (0x000190 - 0x0001D8)
class UMenuAnchor : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(class UClass*)                             MenuClass                                                   OFFSET(get<T>, {0x190, 8, 0, 0})
	SMember(FDelegateProperty)                         OnGetMenuContentEvent                                       OFFSET(getStruct<T>, {0x198, 12, 0, 0})
	SMember(FDelegateProperty)                         OnGetUserMenuContentEvent                                   OFFSET(getStruct<T>, {0x1A4, 12, 0, 0})
	CMember(TEnumAsByte<EMenuPlacement>)               Placement                                                   OFFSET(get<T>, {0x1B0, 1, 0, 0})
	DMember(bool)                                      bFitInWindow                                                OFFSET(get<bool>, {0x1B1, 1, 0, 0})
	DMember(bool)                                      ShouldDeferPaintingAfterWindowContent                       OFFSET(get<bool>, {0x1B2, 1, 0, 0})
	DMember(bool)                                      UseApplicationMenuStack                                     OFFSET(get<bool>, {0x1B3, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMenuOpenChanged                                           OFFSET(getStruct<T>, {0x1B8, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.MenuAnchor.ToggleOpen
	// void ToggleOpen(bool bFocusOnOpen);                                                                                      // [0x663140c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.ShouldOpenDueToClick
	// bool ShouldOpenDueToClick();                                                                                             // [0x6631304] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.SetPlacement
	// void SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement);                                                              // [0x662dc3c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.Open
	// void Open(bool bFocusMenu);                                                                                              // [0x6627918] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.IsOpen
	// bool IsOpen();                                                                                                           // [0x6627170] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.HasOpenSubMenus
	// bool HasOpenSubMenus();                                                                                                  // [0x6626f54] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.GetUserWidget__DelegateSignature
	// class UUserWidget* GetUserWidget__DelegateSignature();                                                                   // [0x186becc] Public|Delegate      
	// Function /Script/UMG.MenuAnchor.GetMenuPosition
	// FVector2D GetMenuPosition();                                                                                             // [0x6626798] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.FitInWindow
	// void FitInWindow(bool bFit);                                                                                             // [0x6625d84] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.Close
	// void Close();                                                                                                            // [0x2d10d9c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.TextLayoutWidget
/// Size: 0x0028 (0x000178 - 0x0001A0)
class UTextLayoutWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FShapedTextOptions)                        ShapedTextOptions                                           OFFSET(getStruct<T>, {0x178, 3, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification                                               OFFSET(get<T>, {0x17B, 1, 0, 0})
	CMember(ETextWrappingPolicy)                       WrappingPolicy                                              OFFSET(get<T>, {0x17C, 1, 0, 0})
	DMember(bool)                                      AutoWrapText                                                OFFSET(get<bool>, {0x17D, 1, 1, 0})
	DMember(float)                                     WrapTextAt                                                  OFFSET(get<float>, {0x180, 4, 0, 0})
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x184, 16, 0, 0})
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(bool)                                      ApplyLineHeightToBottomLine                                 OFFSET(get<bool>, {0x198, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.TextLayoutWidget.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                        // [0x212906c] Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.MultiLineEditableText
/// Size: 0x0390 (0x0001A0 - 0x000530)
class UMultiLineEditableText : public UTextLayoutWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1328;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x1A0, 24, 0, 0})
	SMember(FText)                                     HintText                                                    OFFSET(getStruct<T>, {0x1B8, 24, 0, 0})
	SMember(FDelegateProperty)                         HintTextDelegate                                            OFFSET(getStruct<T>, {0x1D0, 12, 0, 0})
	SMember(FTextBlockStyle)                           WidgetStyle                                                 OFFSET(getStruct<T>, {0x1E0, 784, 0, 0})
	DMember(bool)                                      bIsReadOnly                                                 OFFSET(get<bool>, {0x4F0, 1, 0, 0})
	DMember(bool)                                      SelectAllTextWhenFocused                                    OFFSET(get<bool>, {0x4F1, 1, 0, 0})
	DMember(bool)                                      ClearTextSelectionOnFocusLoss                               OFFSET(get<bool>, {0x4F2, 1, 0, 0})
	DMember(bool)                                      RevertTextOnEscape                                          OFFSET(get<bool>, {0x4F3, 1, 0, 0})
	DMember(bool)                                      ClearKeyboardFocusOnCommit                                  OFFSET(get<bool>, {0x4F4, 1, 0, 0})
	DMember(bool)                                      AllowContextMenu                                            OFFSET(get<bool>, {0x4F5, 1, 0, 0})
	SMember(FVirtualKeyboardOptions)                   VirtualKeyboardOptions                                      OFFSET(getStruct<T>, {0x4F6, 1, 0, 0})
	CMember(EVirtualKeyboardDismissAction)             VirtualKeyboardDismissAction                                OFFSET(get<T>, {0x4F7, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTextChanged                                               OFFSET(getStruct<T>, {0x4F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTextCommitted                                             OFFSET(getStruct<T>, {0x508, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.MultiLineEditableText.SetWidgetStyle
	// void SetWidgetStyle(FTextBlockStyle& InWidgetStyle);                                                                     // [0x66310c0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetText
	// void SetText(FText InText);                                                                                              // [0x662fa10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetIsReadOnly
	// void SetIsReadOnly(bool bReadOnly);                                                                                      // [0x662bc68] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetHintText
	// void SetHintText(FText InHintText);                                                                                      // [0x662b098] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetFontOutlineMaterial
	// void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);                                                       // [0x662aa58] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetFontMaterial
	// void SetFontMaterial(class UMaterialInterface* InMaterial);                                                              // [0x662a78c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetFont
	// void SetFont(FSlateFontInfo InFontInfo);                                                                                 // [0x662a59c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	// void OnMultiLineEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);       // [0x186becc] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	// void OnMultiLineEditableTextChangedEvent__DelegateSignature(FText& Text);                                                // [0x186becc] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableText.GetText
	// FText GetText();                                                                                                         // [0x6626a2c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MultiLineEditableText.GetHintText
	// FText GetHintText();                                                                                                     // [0x6626474] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MultiLineEditableText.GetFont
	// FSlateFontInfo GetFont();                                                                                                // [0x66263d8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.MultiLineEditableTextBox
/// Size: 0x0E00 (0x0001A0 - 0x000FA0)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4000;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x1A0, 24, 0, 0})
	SMember(FText)                                     HintText                                                    OFFSET(getStruct<T>, {0x1B8, 24, 0, 0})
	SMember(FDelegateProperty)                         HintTextDelegate                                            OFFSET(getStruct<T>, {0x1D0, 12, 0, 0})
	SMember(FEditableTextBoxStyle)                     WidgetStyle                                                 OFFSET(getStruct<T>, {0x1E0, 3456, 0, 0})
	DMember(bool)                                      bIsReadOnly                                                 OFFSET(get<bool>, {0xF60, 1, 0, 0})
	DMember(bool)                                      AllowContextMenu                                            OFFSET(get<bool>, {0xF61, 1, 0, 0})
	SMember(FVirtualKeyboardOptions)                   VirtualKeyboardOptions                                      OFFSET(getStruct<T>, {0xF62, 1, 0, 0})
	CMember(EVirtualKeyboardDismissAction)             VirtualKeyboardDismissAction                                OFFSET(get<T>, {0xF63, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTextChanged                                               OFFSET(getStruct<T>, {0xF68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTextCommitted                                             OFFSET(getStruct<T>, {0xF78, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.MultiLineEditableTextBox.SetTextStyle
	// void SetTextStyle(FTextBlockStyle& InTextStyle);                                                                         // [0x662ffc4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetText
	// void SetText(FText InText);                                                                                              // [0x662faec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetIsReadOnly
	// void SetIsReadOnly(bool bReadOnly);                                                                                      // [0x662bd2c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetHintText
	// void SetHintText(FText InHintText);                                                                                      // [0x662b174] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetForegroundColor
	// void SetForegroundColor(FLinearColor Color);                                                                             // [0x662ad38] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetError
	// void SetError(FText InError);                                                                                            // [0x662a2cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	// void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);    // [0x186becc] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	// void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(FText& Text);                                             // [0x186becc] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableTextBox.GetText
	// FText GetText();                                                                                                         // [0x6626a70] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MultiLineEditableTextBox.GetHintText
	// FText GetHintText();                                                                                                     // [0x66264b8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.NamedSlot
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UNamedSlot : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Script/UMG.NamedSlotInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNamedSlotInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.NativeWidgetHost
/// Size: 0x0010 (0x000178 - 0x000188)
class UNativeWidgetHost : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
};

/// Class /Script/UMG.Overlay
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UOverlay : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:


	/// Functions
	// Function /Script/UMG.Overlay.ReplaceOverlayChildAt
	// bool ReplaceOverlayChildAt(int32_t Index, class UWidget* Content);                                                       // [0x6627ed0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Overlay.AddChildToOverlay
	// class UOverlaySlot* AddChildToOverlay(class UWidget* Content);                                                           // [0x36e7298] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.OverlaySlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UOverlaySlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x51, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.OverlaySlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x2c48078] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.OverlaySlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x337281c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.OverlaySlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x2c4813c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.PostBufferUpdate
/// Size: 0x0028 (0x000178 - 0x0001A0)
class UPostBufferUpdate : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	DMember(bool)                                      bPerformDefaultPostBufferUpdate                             OFFSET(get<bool>, {0x178, 1, 0, 0})
	CMember(TArray<ESlatePostRT>)                      BuffersToUpdate                                             OFFSET(get<T>, {0x180, 16, 0, 0})
};

/// Class /Script/UMG.ProgressBar
/// Size: 0x02B8 (0x000178 - 0x000430)
class UProgressBar : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	SMember(FProgressBarStyle)                         WidgetStyle                                                 OFFSET(getStruct<T>, {0x180, 608, 0, 0})
	DMember(float)                                     Percent                                                     OFFSET(get<float>, {0x3E0, 4, 0, 0})
	CMember(TEnumAsByte<EProgressBarFillType>)         BarFillType                                                 OFFSET(get<T>, {0x3E4, 1, 0, 0})
	CMember(TEnumAsByte<EProgressBarFillStyle>)        BarFillStyle                                                OFFSET(get<T>, {0x3E5, 1, 0, 0})
	DMember(bool)                                      bIsMarquee                                                  OFFSET(get<bool>, {0x3E6, 1, 0, 0})
	SMember(FVector2D)                                 BorderPadding                                               OFFSET(getStruct<T>, {0x3E8, 16, 0, 0})
	SMember(FDelegateProperty)                         PercentDelegate                                             OFFSET(getStruct<T>, {0x3F8, 12, 0, 0})
	SMember(FLinearColor)                              FillColorAndOpacity                                         OFFSET(getStruct<T>, {0x404, 16, 0, 0})
	SMember(FDelegateProperty)                         FillColorAndOpacityDelegate                                 OFFSET(getStruct<T>, {0x414, 12, 0, 0})


	/// Functions
	// Function /Script/UMG.ProgressBar.SetPercent
	// void SetPercent(float InPercent);                                                                                        // [0x3d93080] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ProgressBar.SetIsMarquee
	// void SetIsMarquee(bool InbIsMarquee);                                                                                    // [0x662b894] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ProgressBar.SetFillColorAndOpacity
	// void SetFillColorAndOpacity(FLinearColor InColor);                                                                       // [0x662a4d4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.RetainerBox
/// Size: 0x0030 (0x000190 - 0x0001C0)
class URetainerBox : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	DMember(bool)                                      bRetainRender                                               OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      RenderOnInvalidation                                        OFFSET(get<bool>, {0x191, 1, 0, 0})
	DMember(bool)                                      RenderOnPhase                                               OFFSET(get<bool>, {0x192, 1, 0, 0})
	DMember(int32_t)                                   Phase                                                       OFFSET(get<int32_t>, {0x194, 4, 0, 0})
	DMember(int32_t)                                   PhaseCount                                                  OFFSET(get<int32_t>, {0x198, 4, 0, 0})
	CMember(class UMaterialInterface*)                 EffectMaterial                                              OFFSET(get<T>, {0x1A0, 8, 0, 0})
	SMember(FName)                                     TextureParameter                                            OFFSET(getStruct<T>, {0x1A8, 4, 0, 0})


	/// Functions
	// Function /Script/UMG.RetainerBox.SetTextureParameter
	// void SetTextureParameter(FName TextureParameter);                                                                        // [0x6630204] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetRetainRendering
	// void SetRetainRendering(bool bInRetainRendering);                                                                        // [0x1bad8dc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetRenderingPhase
	// void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases);                                                        // [0x662df24] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetEffectMaterial
	// void SetEffectMaterial(class UMaterialInterface* EffectMaterial);                                                        // [0x6629ed8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.RequestRender
	// void RequestRender();                                                                                                    // [0x66281cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.GetEffectMaterial
	// class UMaterialInstanceDynamic* GetEffectMaterial();                                                                     // [0x662637c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.RichTextBlock
/// Size: 0x06A0 (0x0001A0 - 0x000840)
class URichTextBlock : public UTextLayoutWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2112;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x1A0, 24, 0, 0})
	CMember(class UDataTable*)                         TextStyleSet                                                OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(TArray<class UClass*>)                     DecoratorClasses                                            OFFSET(get<T>, {0x1C0, 16, 0, 0})
	DMember(bool)                                      bOverrideDefaultStyle                                       OFFSET(get<bool>, {0x1D0, 1, 0, 0})
	SMember(FTextBlockStyle)                           DefaultTextStyleOverride                                    OFFSET(getStruct<T>, {0x1E0, 784, 0, 0})
	DMember(float)                                     MinDesiredWidth                                             OFFSET(get<float>, {0x4F0, 4, 0, 0})
	CMember(ETextTransformPolicy)                      TextTransformPolicy                                         OFFSET(get<T>, {0x4F4, 1, 0, 0})
	CMember(ETextOverflowPolicy)                       TextOverflowPolicy                                          OFFSET(get<T>, {0x4F5, 1, 0, 0})
	SMember(FTextBlockStyle)                           DefaultTextStyle                                            OFFSET(getStruct<T>, {0x500, 784, 0, 0})
	CMember(TArray<class URichTextBlockDecorator*>)    InstanceDecorators                                          OFFSET(get<T>, {0x810, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.RichTextBlock.SetTextTransformPolicy
	// void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);                                                     // [0x6630144] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetTextStyleSet
	// void SetTextStyleSet(class UDataTable* NewTextStyleSet);                                                                 // [0x6630084] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetTextOverflowPolicy
	// void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);                                                        // [0x662fe44] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetText
	// void SetText(FText& InText);                                                                                             // [0x2169938] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                        // [0x662ca10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultTextStyle
	// void SetDefaultTextStyle(FTextBlockStyle& InDefaultTextStyle);                                                           // [0x6629be8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultStrikeBrush
	// void SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush);                                                                  // [0x6629b20] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultShadowOffset
	// void SetDefaultShadowOffset(FVector2D InShadowOffset);                                                                   // [0x6629a2c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
	// void SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);                                              // [0x6629950] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultMaterial
	// void SetDefaultMaterial(class UMaterialInterface* InMaterial);                                                           // [0x662986c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultFont
	// void SetDefaultFont(FSlateFontInfo InFontInfo);                                                                          // [0x6629760] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultColorAndOpacity
	// void SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity);                                                           // [0x27fe76c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDecorators
	// void SetDecorators(TArray<UClass*>& InDecoratorClasses);                                                                 // [0x32dc368] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetAutoWrapText
	// void SetAutoWrapText(bool InAutoTextWrap);                                                                               // [0x6628df8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.RefreshTextLayout
	// void RefreshTextLayout();                                                                                                // [0x66279dc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.GetTextStyleSet
	// class UDataTable* GetTextStyleSet();                                                                                     // [0x6626ab4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.RichTextBlock.GetText
	// FText GetText();                                                                                                         // [0x25c74c4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.RichTextBlock.GetDefaultDynamicMaterial
	// class UMaterialInstanceDynamic* GetDefaultDynamicMaterial();                                                             // [0x66262d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.GetDecoratorByClass
	// class URichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);                                        // [0x66261f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.ClearAllDefaultStyleOverrides
	// void ClearAllDefaultStyleOverrides();                                                                                    // [0x6625b38] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.RichTextBlockDecorator
/// Size: 0x0000 (0x000028 - 0x000028)
class URichTextBlockDecorator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.RichTextBlockImageDecorator
/// Size: 0x0008 (0x000028 - 0x000030)
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UDataTable*)                         ImageSet                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/UMG.SafeZone
/// Size: 0x0018 (0x000190 - 0x0001A8)
class USafeZone : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	DMember(bool)                                      PadLeft                                                     OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      PadRight                                                    OFFSET(get<bool>, {0x191, 1, 0, 0})
	DMember(bool)                                      PadTop                                                      OFFSET(get<bool>, {0x192, 1, 0, 0})
	DMember(bool)                                      PadBottom                                                   OFFSET(get<bool>, {0x193, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.SafeZone.SetSidesToPad
	// void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);                                    // [0x37b59a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SafeZoneSlot
/// Size: 0x0038 (0x000038 - 0x000070)
class USafeZoneSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bIsTitleSafe                                                OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FMargin)                                   SafeAreaScale                                               OFFSET(getStruct<T>, {0x3C, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HAlign                                                      OFFSET(get<T>, {0x4C, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VAlign                                                      OFFSET(get<T>, {0x4D, 1, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/UMG.ScaleBox
/// Size: 0x0020 (0x000190 - 0x0001B0)
class UScaleBox : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(TEnumAsByte<EStretch>)                     Stretch                                                     OFFSET(get<T>, {0x190, 1, 0, 0})
	CMember(TEnumAsByte<EStretchDirection>)            StretchDirection                                            OFFSET(get<T>, {0x191, 1, 0, 0})
	DMember(float)                                     UserSpecifiedScale                                          OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(bool)                                      IgnoreInheritedScale                                        OFFSET(get<bool>, {0x198, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.ScaleBox.SetUserSpecifiedScale
	// void SetUserSpecifiedScale(float InUserSpecifiedScale);                                                                  // [0x1e01d54] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetStretchDirection
	// void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);                                             // [0x662f78c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetStretch
	// void SetStretch(TEnumAsByte<EStretch> InStretch);                                                                        // [0x662f6cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetIgnoreInheritedScale
	// void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);                                                              // [0x662b550] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScaleBoxSlot
/// Size: 0x0018 (0x000038 - 0x000050)
class UScaleBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x39, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.ScaleBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x66308f8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x662db04] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x662b250] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBar
/// Size: 0x0728 (0x000178 - 0x0008A0)
class UScrollBar : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2208;

public:
	SMember(FScrollBarStyle)                           WidgetStyle                                                 OFFSET(getStruct<T>, {0x180, 1760, 0, 0})
	DMember(bool)                                      bAlwaysShowScrollbar                                        OFFSET(get<bool>, {0x860, 1, 0, 0})
	DMember(bool)                                      bAlwaysShowScrollbarTrack                                   OFFSET(get<bool>, {0x861, 1, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 orientation                                                 OFFSET(get<T>, {0x862, 1, 0, 0})
	SMember(FVector2D)                                 Thickness                                                   OFFSET(getStruct<T>, {0x868, 16, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x878, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.ScrollBar.SetState
	// void SetState(float InOffsetFraction, float InThumbSizeFraction);                                                        // [0x662f4b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBox
/// Size: 0x0A90 (0x000190 - 0x000C20)
class UScrollBox : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3104;

public:
	SMember(FScrollBoxStyle)                           WidgetStyle                                                 OFFSET(getStruct<T>, {0x190, 816, 0, 0})
	SMember(FScrollBarStyle)                           WidgetBarStyle                                              OFFSET(getStruct<T>, {0x4C0, 1760, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 orientation                                                 OFFSET(get<T>, {0xBA0, 1, 0, 0})
	CMember(ESlateVisibility)                          ScrollBarVisibility                                         OFFSET(get<T>, {0xBA1, 1, 0, 0})
	CMember(EConsumeMouseWheel)                        ConsumeMouseWheel                                           OFFSET(get<T>, {0xBA2, 1, 0, 0})
	SMember(FVector2D)                                 ScrollbarThickness                                          OFFSET(getStruct<T>, {0xBA8, 16, 0, 0})
	SMember(FMargin)                                   ScrollbarPadding                                            OFFSET(getStruct<T>, {0xBB8, 16, 0, 0})
	DMember(bool)                                      AlwaysShowScrollbar                                         OFFSET(get<bool>, {0xBC8, 1, 0, 0})
	DMember(bool)                                      AlwaysShowScrollbarTrack                                    OFFSET(get<bool>, {0xBC9, 1, 0, 0})
	DMember(bool)                                      AllowOverscroll                                             OFFSET(get<bool>, {0xBCA, 1, 0, 0})
	DMember(bool)                                      BackPadScrolling                                            OFFSET(get<bool>, {0xBCB, 1, 0, 0})
	DMember(bool)                                      FrontPadScrolling                                           OFFSET(get<bool>, {0xBCC, 1, 0, 0})
	DMember(bool)                                      bAnimateWheelScrolling                                      OFFSET(get<bool>, {0xBCD, 1, 0, 0})
	CMember(EDescendantScrollDestination)              NavigationDestination                                       OFFSET(get<T>, {0xBCE, 1, 0, 0})
	DMember(float)                                     NavigationScrollPadding                                     OFFSET(get<float>, {0xBD0, 4, 0, 0})
	CMember(EScrollWhenFocusChanges)                   ScrollWhenFocusChanges                                      OFFSET(get<T>, {0xBD4, 1, 0, 0})
	DMember(bool)                                      bAllowRightClickDragScrolling                               OFFSET(get<bool>, {0xBD5, 1, 0, 0})
	DMember(float)                                     WheelScrollMultiplier                                       OFFSET(get<float>, {0xBD8, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUserScrolled                                              OFFSET(getStruct<T>, {0xBE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnScrollBarVisibilityChanged                                OFFSET(getStruct<T>, {0xBF0, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.ScrollBox.SetWheelScrollMultiplier
	// void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);                                                           // [0x6630e78] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollWhenFocusChanges
	// void SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges);                                       // [0x662e398] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollOffset
	// void SetScrollOffset(float NewScrollOffset);                                                                             // [0x662e2d4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollbarVisibility
	// void SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility);                                                    // [0x662e150] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollbarThickness
	// void SetScrollbarThickness(FVector2D& NewScrollbarThickness);                                                            // [0x662e4e8] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollbarPadding
	// void SetScrollbarPadding(FMargin& NewScrollbarPadding);                                                                  // [0x662e458] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetOrientation
	// void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);                                                           // [0x662d984] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetNavigationDestination
	// void SetNavigationDestination(EDescendantScrollDestination NewNavigationDestination);                                    // [0x662cf68] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetConsumeMouseWheel
	// void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);                                                      // [0x662944c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAnimateWheelScrolling
	// void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);                                                        // [0x6628d34] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAlwaysShowScrollbar
	// void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);                                                                // [0x6628960] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAllowOverscroll
	// void SetAllowOverscroll(bool NewAllowOverscroll);                                                                        // [0x662889c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollWidgetIntoView
	// void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding); // [0x662838c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollToStart
	// void ScrollToStart();                                                                                                    // [0x6628364] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollToEnd
	// void ScrollToEnd();                                                                                                      // [0x6628350] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.GetViewOffsetFraction
	// float GetViewOffsetFraction();                                                                                           // [0x6626ba4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.GetViewFraction
	// float GetViewFraction();                                                                                                 // [0x6626b2c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.GetScrollOffsetOfEnd
	// float GetScrollOffsetOfEnd();                                                                                            // [0x662697c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.GetScrollOffset
	// float GetScrollOffset();                                                                                                 // [0x662695c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.EndInertialScrolling
	// void EndInertialScrolling();                                                                                             // [0x6625d00] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UScrollBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSlateChildSize)                           Size                                                        OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x51, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.ScrollBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x66309b8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x3ab03c8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x662b310] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SizeBox
/// Size: 0x0038 (0x000190 - 0x0001C8)
class USizeBox : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	DMember(float)                                     WidthOverride                                               OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(float)                                     HeightOverride                                              OFFSET(get<float>, {0x1A4, 4, 0, 0})
	DMember(float)                                     MinDesiredWidth                                             OFFSET(get<float>, {0x1A8, 4, 0, 0})
	DMember(float)                                     MinDesiredHeight                                            OFFSET(get<float>, {0x1AC, 4, 0, 0})
	DMember(float)                                     MaxDesiredWidth                                             OFFSET(get<float>, {0x1B0, 4, 0, 0})
	DMember(float)                                     MaxDesiredHeight                                            OFFSET(get<float>, {0x1B4, 4, 0, 0})
	DMember(float)                                     MinAspectRatio                                              OFFSET(get<float>, {0x1B8, 4, 0, 0})
	DMember(float)                                     MaxAspectRatio                                              OFFSET(get<float>, {0x1BC, 4, 0, 0})
	DMember(bool)                                      bOverride_WidthOverride                                     OFFSET(get<bool>, {0x1C0, 1, 1, 0})
	DMember(bool)                                      bOverride_HeightOverride                                    OFFSET(get<bool>, {0x1C0, 1, 1, 1})
	DMember(bool)                                      bOverride_MinDesiredWidth                                   OFFSET(get<bool>, {0x1C0, 1, 1, 2})
	DMember(bool)                                      bOverride_MinDesiredHeight                                  OFFSET(get<bool>, {0x1C0, 1, 1, 3})
	DMember(bool)                                      bOverride_MaxDesiredWidth                                   OFFSET(get<bool>, {0x1C0, 1, 1, 4})
	DMember(bool)                                      bOverride_MaxDesiredHeight                                  OFFSET(get<bool>, {0x1C0, 1, 1, 5})
	DMember(bool)                                      bOverride_MinAspectRatio                                    OFFSET(get<bool>, {0x1C0, 1, 1, 6})
	DMember(bool)                                      bOverride_MaxAspectRatio                                    OFFSET(get<bool>, {0x1C0, 1, 1, 7})


	/// Functions
	// Function /Script/UMG.SizeBox.SetWidthOverride
	// void SetWidthOverride(float InWidthOverride);                                                                            // [0x2c9f7fc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                        // [0x2ed104c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinDesiredHeight
	// void SetMinDesiredHeight(float InMinDesiredHeight);                                                                      // [0x3234e54] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinAspectRatio
	// void SetMinAspectRatio(float InMinAspectRatio);                                                                          // [0x662c7c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxDesiredWidth
	// void SetMaxDesiredWidth(float InMaxDesiredWidth);                                                                        // [0x3356fa4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxDesiredHeight
	// void SetMaxDesiredHeight(float InMaxDesiredHeight);                                                                      // [0x662c3f4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxAspectRatio
	// void SetMaxAspectRatio(float InMaxAspectRatio);                                                                          // [0x662c330] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetHeightOverride
	// void SetHeightOverride(float InHeightOverride);                                                                          // [0x2c9f6ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearWidthOverride
	// void ClearWidthOverride();                                                                                               // [0x6625c6c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinDesiredWidth
	// void ClearMinDesiredWidth();                                                                                             // [0x6625c30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinDesiredHeight
	// void ClearMinDesiredHeight();                                                                                            // [0x6625c1c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinAspectRatio
	// void ClearMinAspectRatio();                                                                                              // [0x6625c08] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxDesiredWidth
	// void ClearMaxDesiredWidth();                                                                                             // [0x38150b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxDesiredHeight
	// void ClearMaxDesiredHeight();                                                                                            // [0x6625bcc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxAspectRatio
	// void ClearMaxAspectRatio();                                                                                              // [0x6625bb8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearHeightOverride
	// void ClearHeightOverride();                                                                                              // [0x2e057f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SizeBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class USizeBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x58, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x59, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.SizeBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x6630a78] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x35c2580] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x662b3d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Slider
/// Size: 0x0548 (0x000178 - 0x0006C0)
class USlider : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1728;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               OFFSET(getStruct<T>, {0x17C, 12, 0, 0})
	DMember(float)                                     MinValue                                                    OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(float)                                     MaxValue                                                    OFFSET(get<float>, {0x18C, 4, 0, 0})
	SMember(FSliderStyle)                              WidgetStyle                                                 OFFSET(getStruct<T>, {0x190, 1184, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 orientation                                                 OFFSET(get<T>, {0x630, 1, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              OFFSET(getStruct<T>, {0x634, 16, 0, 0})
	SMember(FLinearColor)                              SliderHandleColor                                           OFFSET(getStruct<T>, {0x644, 16, 0, 0})
	DMember(bool)                                      IndentHandle                                                OFFSET(get<bool>, {0x654, 1, 0, 0})
	DMember(bool)                                      Locked                                                      OFFSET(get<bool>, {0x655, 1, 0, 0})
	DMember(bool)                                      MouseUsesStep                                               OFFSET(get<bool>, {0x656, 1, 0, 0})
	DMember(bool)                                      RequiresControllerLock                                      OFFSET(get<bool>, {0x657, 1, 0, 0})
	DMember(float)                                     StepSize                                                    OFFSET(get<float>, {0x658, 4, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0x65C, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureBegin                                         OFFSET(getStruct<T>, {0x660, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureEnd                                           OFFSET(getStruct<T>, {0x670, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureBegin                                    OFFSET(getStruct<T>, {0x680, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureEnd                                      OFFSET(getStruct<T>, {0x690, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              OFFSET(getStruct<T>, {0x6A0, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.Slider.SetValue
	// void SetValue(float InValue);                                                                                            // [0x2802534] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0x662f608] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x662f31c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Slider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x662f254] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Slider.SetMinValue
	// void SetMinValue(float InValue);                                                                                         // [0x662cd1c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetMaxValue
	// void SetMaxValue(float InValue);                                                                                         // [0x662c63c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0x662c1ac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetIndentHandle
	// void SetIndentHandle(bool InValue);                                                                                      // [0x662b614] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.GetValue
	// float GetValue();                                                                                                        // [0x28024f4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Slider.GetNormalizedValue
	// float GetNormalizedValue();                                                                                              // [0x6626830] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.Spacer
/// Size: 0x0020 (0x000178 - 0x000198)
class USpacer : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FVector2D)                                 Size                                                        OFFSET(getStruct<T>, {0x178, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.Spacer.SetSize
	// void SetSize(FVector2D InSize);                                                                                          // [0x290672c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.SpinBox
/// Size: 0x06A8 (0x000178 - 0x000820)
class USpinBox : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2080;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               OFFSET(getStruct<T>, {0x17C, 12, 0, 0})
	SMember(FSpinBoxStyle)                             WidgetStyle                                                 OFFSET(getStruct<T>, {0x190, 1424, 0, 0})
	DMember(int32_t)                                   MinFractionalDigits                                         OFFSET(get<int32_t>, {0x720, 4, 0, 0})
	DMember(int32_t)                                   MaxFractionalDigits                                         OFFSET(get<int32_t>, {0x724, 4, 0, 0})
	DMember(bool)                                      bAlwaysUsesDeltaSnap                                        OFFSET(get<bool>, {0x728, 1, 0, 0})
	DMember(bool)                                      bEnableSlider                                               OFFSET(get<bool>, {0x729, 1, 0, 0})
	DMember(float)                                     Delta                                                       OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     SliderExponent                                              OFFSET(get<float>, {0x730, 4, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x738, 88, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification                                               OFFSET(get<T>, {0x790, 1, 0, 0})
	DMember(float)                                     MinDesiredWidth                                             OFFSET(get<float>, {0x794, 4, 0, 0})
	CMember(TEnumAsByte<EVirtualKeyboardType>)         KeyboardType                                                OFFSET(get<T>, {0x798, 1, 0, 0})
	DMember(bool)                                      ClearKeyboardFocusOnCommit                                  OFFSET(get<bool>, {0x799, 1, 0, 0})
	DMember(bool)                                      SelectAllTextOnCommit                                       OFFSET(get<bool>, {0x79A, 1, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x79C, 20, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              OFFSET(getStruct<T>, {0x7B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueCommitted                                            OFFSET(getStruct<T>, {0x7C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBeginSliderMovement                                       OFFSET(getStruct<T>, {0x7D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEndSliderMovement                                         OFFSET(getStruct<T>, {0x7E0, 16, 0, 0})
	DMember(bool)                                      bOverride_MinValue                                          OFFSET(get<bool>, {0x7F0, 1, 1, 0})
	DMember(bool)                                      bOverride_MaxValue                                          OFFSET(get<bool>, {0x7F0, 1, 1, 1})
	DMember(bool)                                      bOverride_MinSliderValue                                    OFFSET(get<bool>, {0x7F0, 1, 1, 2})
	DMember(bool)                                      bOverride_MaxSliderValue                                    OFFSET(get<bool>, {0x7F0, 1, 1, 3})
	DMember(float)                                     MinValue                                                    OFFSET(get<float>, {0x7F4, 4, 0, 0})
	DMember(float)                                     MaxValue                                                    OFFSET(get<float>, {0x7F8, 4, 0, 0})
	DMember(float)                                     MinSliderValue                                              OFFSET(get<float>, {0x7FC, 4, 0, 0})
	DMember(float)                                     MaxSliderValue                                              OFFSET(get<float>, {0x800, 4, 0, 0})


	/// Functions
	// Function /Script/UMG.SpinBox.SetValue
	// void SetValue(float NewValue);                                                                                           // [0x6630834] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinValue
	// void SetMinValue(float NewValue);                                                                                        // [0x662cde0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinSliderValue
	// void SetMinSliderValue(float NewValue);                                                                                  // [0x662cc58] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinFractionalDigits
	// void SetMinFractionalDigits(int32_t NewValue);                                                                           // [0x662cb98] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxValue
	// void SetMaxValue(float NewValue);                                                                                        // [0x662c700] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxSliderValue
	// void SetMaxSliderValue(float NewValue);                                                                                  // [0x662c578] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxFractionalDigits
	// void SetMaxFractionalDigits(int32_t NewValue);                                                                           // [0x662c4b8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetForegroundColor
	// void SetForegroundColor(FSlateColor InForegroundColor);                                                                  // [0x662ae1c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetDelta
	// void SetDelta(float NewValue);                                                                                           // [0x6629c8c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetAlwaysUsesDeltaSnap
	// void SetAlwaysUsesDeltaSnap(bool bNewValue);                                                                             // [0x6628a24] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	// void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);              // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	// void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);                                                       // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	// void OnSpinBoxBeginSliderMovement__DelegateSignature();                                                                  // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.GetValue
	// float GetValue();                                                                                                        // [0x6626afc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinValue
	// float GetMinValue();                                                                                                     // [0x6626810] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinSliderValue
	// float GetMinSliderValue();                                                                                               // [0x66267f0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinFractionalDigits
	// int32_t GetMinFractionalDigits();                                                                                        // [0x66267d8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxValue
	// float GetMaxValue();                                                                                                     // [0x6626778] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxSliderValue
	// float GetMaxSliderValue();                                                                                               // [0x6626758] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxFractionalDigits
	// int32_t GetMaxFractionalDigits();                                                                                        // [0x6626740] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetDelta
	// float GetDelta();                                                                                                        // [0x66262fc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetAlwaysUsesDeltaSnap
	// bool GetAlwaysUsesDeltaSnap();                                                                                           // [0x6626010] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.ClearMinValue
	// void ClearMinValue();                                                                                                    // [0x6625c58] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMinSliderValue
	// void ClearMinSliderValue();                                                                                              // [0x6625c44] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMaxValue
	// void ClearMaxValue();                                                                                                    // [0x6625bf4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMaxSliderValue
	// void ClearMaxSliderValue();                                                                                              // [0x6625be0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.StackBox
/// Size: 0x0018 (0x000190 - 0x0001A8)
class UStackBox : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(TEnumAsByte<EOrientation>)                 orientation                                                 OFFSET(get<T>, {0x190, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.StackBox.ReplaceStackBoxChildAt
	// bool ReplaceStackBoxChildAt(int32_t Index, class UWidget* Content);                                                      // [0x6628038] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.StackBox.AddChildToStackBox
	// class UStackBoxSlot* AddChildToStackBox(class UWidget* Content);                                                         // [0x2a81574] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.StackBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UStackBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FSlateChildSize)                           Size                                                        OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x51, 1, 0, 0})
};

/// Class /Script/UMG.TextBlock
/// Size: 0x01B0 (0x0001A0 - 0x000350)
class UTextBlock : public UTextLayoutWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x1A0, 24, 0, 0})
	SMember(FDelegateProperty)                         TextDelegate                                                OFFSET(getStruct<T>, {0x1B8, 12, 0, 0})
	SMember(FSlateColor)                               ColorAndOpacity                                             OFFSET(getStruct<T>, {0x1C4, 20, 0, 0})
	SMember(FDelegateProperty)                         ColorAndOpacityDelegate                                     OFFSET(getStruct<T>, {0x1D8, 12, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x1E8, 88, 0, 0})
	SMember(FSlateBrush)                               StrikeBrush                                                 OFFSET(getStruct<T>, {0x240, 192, 0, 0})
	SMember(FVector2D)                                 ShadowOffset                                                OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	SMember(FLinearColor)                              ShadowColorAndOpacity                                       OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	SMember(FDelegateProperty)                         ShadowColorAndOpacityDelegate                               OFFSET(getStruct<T>, {0x320, 12, 0, 0})
	DMember(float)                                     MinDesiredWidth                                             OFFSET(get<float>, {0x32C, 4, 0, 0})
	DMember(bool)                                      bWrapWithInvalidationPanel                                  OFFSET(get<bool>, {0x330, 1, 0, 0})
	CMember(ETextTransformPolicy)                      TextTransformPolicy                                         OFFSET(get<T>, {0x331, 1, 0, 0})
	CMember(ETextOverflowPolicy)                       TextOverflowPolicy                                          OFFSET(get<T>, {0x332, 1, 0, 0})
	DMember(bool)                                      bSimpleTextMode                                             OFFSET(get<bool>, {0x333, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.TextBlock.SetTextTransformPolicy
	// void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);                                                     // [0x32c1788] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetTextOverflowPolicy
	// void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);                                                        // [0x662ff04] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetText
	// void SetText(FText InText);                                                                                              // [0x16b2368] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetStrikeBrush
	// void SetStrikeBrush(FSlateBrush InStrikeBrush);                                                                          // [0x662f84c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetShadowOffset
	// void SetShadowOffset(FVector2D InShadowOffset);                                                                          // [0x662e854] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetShadowColorAndOpacity
	// void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);                                                     // [0x662e78c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetOpacity
	// void SetOpacity(float InOpacity);                                                                                        // [0x662d8c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                        // [0x662cad4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetFontOutlineMaterial
	// void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);                                                       // [0x662ab40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetFontMaterial
	// void SetFontMaterial(class UMaterialInterface* InMaterial);                                                              // [0x662a874] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetFont
	// void SetFont(FSlateFontInfo InFontInfo);                                                                                 // [0x2e03a90] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetColorAndOpacity
	// void SetColorAndOpacity(FSlateColor InColorAndOpacity);                                                                  // [0x333b8dc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetAutoWrapText
	// void SetAutoWrapText(bool InAutoTextWrap);                                                                               // [0x3619e1c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.GetText
	// FText GetText();                                                                                                         // [0x2e06d48] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.TextBlock.GetDynamicOutlineMaterial
	// class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();                                                             // [0x2e08ff4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.GetDynamicFontMaterial
	// class UMaterialInstanceDynamic* GetDynamicFontMaterial();                                                                // [0x2e090a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Throbber
/// Size: 0x00D8 (0x000178 - 0x000250)
class UThrobber : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	DMember(int32_t)                                   NumberOfPieces                                              OFFSET(get<int32_t>, {0x178, 4, 0, 0})
	DMember(bool)                                      bAnimateHorizontally                                        OFFSET(get<bool>, {0x17C, 1, 0, 0})
	DMember(bool)                                      bAnimateVertically                                          OFFSET(get<bool>, {0x17D, 1, 0, 0})
	DMember(bool)                                      bAnimateOpacity                                             OFFSET(get<bool>, {0x17E, 1, 0, 0})
	SMember(FSlateBrush)                               Image                                                       OFFSET(getStruct<T>, {0x180, 192, 0, 0})


	/// Functions
	// Function /Script/UMG.Throbber.SetNumberOfPieces
	// void SetNumberOfPieces(int32_t InNumberOfPieces);                                                                        // [0x662d800] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateVertically
	// void SetAnimateVertically(bool bInAnimateVertically);                                                                    // [0x6628c70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateOpacity
	// void SetAnimateOpacity(bool bInAnimateOpacity);                                                                          // [0x6628bac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateHorizontally
	// void SetAnimateHorizontally(bool bInAnimateHorizontally);                                                                // [0x6628ae8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.TileView
/// Size: 0x0030 (0x000BD0 - 0x000C00)
class UTileView : public UListView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3072;

public:
	DMember(float)                                     EntryHeight                                                 OFFSET(get<float>, {0xBD0, 4, 0, 0})
	DMember(float)                                     EntryWidth                                                  OFFSET(get<float>, {0xBD4, 4, 0, 0})
	CMember(EListItemAlignment)                        TileAlignment                                               OFFSET(get<T>, {0xBD8, 1, 0, 0})
	DMember(bool)                                      bWrapHorizontalNavigation                                   OFFSET(get<bool>, {0xBD9, 1, 0, 0})
	CMember(ESlateVisibility)                          ScrollbarDisabledVisibility                                 OFFSET(get<T>, {0xBDA, 1, 0, 0})
	DMember(bool)                                      bEntrySizeIncludesEntrySpacing                              OFFSET(get<bool>, {0xBF0, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.TileView.SetEntryWidth
	// void SetEntryWidth(float NewWidth);                                                                                      // [0x662a120] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TileView.SetEntryHeight
	// void SetEntryHeight(float NewHeight);                                                                                    // [0x662a05c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TileView.IsAligned
	// bool IsAligned();                                                                                                        // [0x662712c] Final|RequiredAPI|Native|Private|Const 
	// Function /Script/UMG.TileView.GetEntryWidth
	// float GetEntryWidth();                                                                                                   // [0x66263c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.TileView.GetEntryHeight
	// float GetEntryHeight();                                                                                                  // [0x66263a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.TreeView
/// Size: 0x0060 (0x000BD0 - 0x000C30)
class UTreeView : public UListView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3120;

public:
	SMember(FDelegateProperty)                         BP_OnGetItemChildren                                        OFFSET(getStruct<T>, {0xBE0, 12, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnItemExpansionChanged                                   OFFSET(getStruct<T>, {0xBF0, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.TreeView.SetItemExpansion
	// void SetItemExpansion(class UObject* Item, bool bExpandItem);                                                            // [0x662bdf0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TreeView.ExpandAll
	// void ExpandAll();                                                                                                        // [0x6625d14] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TreeView.CollapseAll
	// void CollapseAll();                                                                                                      // [0x6625c80] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UniformGridPanel
/// Size: 0x0028 (0x000190 - 0x0001B8)
class UUniformGridPanel : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	SMember(FMargin)                                   SlotPadding                                                 OFFSET(getStruct<T>, {0x190, 16, 0, 0})
	DMember(float)                                     MinDesiredSlotWidth                                         OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(float)                                     MinDesiredSlotHeight                                        OFFSET(get<float>, {0x1A4, 4, 0, 0})


	/// Functions
	// Function /Script/UMG.UniformGridPanel.SetSlotPadding
	// void SetSlotPadding(FMargin InSlotPadding);                                                                              // [0x662f3e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotWidth
	// void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);                                                                // [0x662c94c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotHeight
	// void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);                                                              // [0x662c888] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.AddChildToUniformGrid
	// class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content, int32_t InRow, int32_t InColumn);                  // [0x6625114] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UniformGridSlot
/// Size: 0x0018 (0x000038 - 0x000050)
class UUniformGridSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x39, 1, 0, 0})
	DMember(int32_t)                                   Row                                                         OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   Column                                                      OFFSET(get<int32_t>, {0x40, 4, 0, 0})


	/// Functions
	// Function /Script/UMG.UniformGridSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x6630b38] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetRow
	// void SetRow(int32_t InRow);                                                                                              // [0x662e090] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x662b490] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetColumn
	// void SetColumn(int32_t InColumn);                                                                                        // [0x662938c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.VerticalBox
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UVerticalBox : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:


	/// Functions
	// Function /Script/UMG.VerticalBox.AddChildToVerticalBox
	// class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);                                                   // [0x3705110] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.VerticalBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UVerticalBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSlateChildSize)                           Size                                                        OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x51, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.VerticalBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x3957ba8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetSize
	// void SetSize(FSlateChildSize InSize);                                                                                    // [0x662f0c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x322c468] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x37a2b38] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Viewport
/// Size: 0x0050 (0x000190 - 0x0001E0)
class UViewport : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FLinearColor)                              BackgroundColor                                             OFFSET(getStruct<T>, {0x190, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.Viewport.Spawn
	// class AActor* Spawn(class UClass* ActorClass);                                                                           // [0x6631324] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetViewRotation
	// void SetViewRotation(FRotator Rotation);                                                                                 // [0x6630ce0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetViewLocation
	// void SetViewLocation(FVector Location);                                                                                  // [0x6630bf8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetSkyIntensity
	// void SetSkyIntensity(float LightIntensity);                                                                              // [0x662f18c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetShowFlag
	// void SetShowFlag(FString InShowFlagName, bool InValue);                                                                  // [0x662e91c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetLightIntensity
	// void SetLightIntensity(float LightIntensity);                                                                            // [0x662c0e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetEnableAdvancedFeatures
	// void SetEnableAdvancedFeatures(bool InEnableAdvancedFeatures);                                                           // [0x6629f98] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Viewport.GetViewRotation
	// FRotator GetViewRotation();                                                                                              // [0x6626bdc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Viewport.GetViewportWorld
	// class UWorld* GetViewportWorld();                                                                                        // [0x6626c2c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Viewport.GetViewLocation
	// FVector GetViewLocation();                                                                                               // [0x6626b54] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetComponent
/// Size: 0x0130 (0x000540 - 0x000670)
class UWidgetComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	CMember(EWidgetSpace)                              Space                                                       OFFSET(get<T>, {0x538, 1, 0, 0})
	CMember(EWidgetTimingPolicy)                       TimingPolicy                                                OFFSET(get<T>, {0x539, 1, 0, 0})
	CMember(class UClass*)                             WidgetClass                                                 OFFSET(get<T>, {0x540, 8, 0, 0})
	SMember(FIntPoint)                                 DrawSize                                                    OFFSET(getStruct<T>, {0x548, 8, 0, 0})
	DMember(bool)                                      bManuallyRedraw                                             OFFSET(get<bool>, {0x550, 1, 0, 0})
	DMember(bool)                                      bRedrawRequested                                            OFFSET(get<bool>, {0x551, 1, 0, 0})
	DMember(float)                                     RedrawTime                                                  OFFSET(get<float>, {0x554, 4, 0, 0})
	SMember(FIntPoint)                                 CurrentDrawSize                                             OFFSET(getStruct<T>, {0x560, 8, 0, 0})
	DMember(bool)                                      bUseInvalidationInWorldSpace                                OFFSET(get<bool>, {0x568, 1, 0, 0})
	DMember(bool)                                      bDrawAtDesiredSize                                          OFFSET(get<bool>, {0x569, 1, 0, 0})
	SMember(FVector2D)                                 Pivot                                                       OFFSET(getStruct<T>, {0x570, 16, 0, 0})
	DMember(bool)                                      bReceiveHardwareInput                                       OFFSET(get<bool>, {0x580, 1, 0, 0})
	DMember(bool)                                      bWindowFocusable                                            OFFSET(get<bool>, {0x581, 1, 0, 0})
	CMember(EWindowVisibility)                         WindowVisibility                                            OFFSET(get<T>, {0x582, 1, 0, 0})
	DMember(bool)                                      bApplyGammaCorrection                                       OFFSET(get<bool>, {0x583, 1, 0, 0})
	CMember(class ULocalPlayer*)                       OwnerPlayer                                                 OFFSET(get<T>, {0x588, 8, 0, 0})
	SMember(FLinearColor)                              BackgroundColor                                             OFFSET(getStruct<T>, {0x590, 16, 0, 0})
	SMember(FLinearColor)                              TintColorAndOpacity                                         OFFSET(getStruct<T>, {0x5A0, 16, 0, 0})
	DMember(float)                                     OpacityFromTexture                                          OFFSET(get<float>, {0x5B0, 4, 0, 0})
	CMember(EWidgetBlendMode)                          BlendMode                                                   OFFSET(get<T>, {0x5B4, 1, 0, 0})
	DMember(bool)                                      bIsTwoSided                                                 OFFSET(get<bool>, {0x5B5, 1, 0, 0})
	DMember(bool)                                      TickWhenOffscreen                                           OFFSET(get<bool>, {0x5B6, 1, 0, 0})
	CMember(class UBodySetup*)                         BodySetup                                                   OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 TranslucentMaterial                                         OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 TranslucentMaterial_OneSided                                OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 OpaqueMaterial                                              OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 OpaqueMaterial_OneSided                                     OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 MaskedMaterial                                              OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 MaskedMaterial_OneSided                                     OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             RenderTarget                                                OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           MaterialInstance                                            OFFSET(get<T>, {0x5F8, 8, 0, 0})
	DMember(bool)                                      bAddedToScreen                                              OFFSET(get<bool>, {0x600, 1, 0, 0})
	DMember(bool)                                      bEditTimeUsable                                             OFFSET(get<bool>, {0x601, 1, 0, 0})
	SMember(FName)                                     SharedLayerName                                             OFFSET(getStruct<T>, {0x604, 4, 0, 0})
	DMember(int32_t)                                   LayerZOrder                                                 OFFSET(get<int32_t>, {0x608, 4, 0, 0})
	CMember(EWidgetGeometryMode)                       GeometryMode                                                OFFSET(get<T>, {0x60C, 1, 0, 0})
	DMember(float)                                     CylinderArcAngle                                            OFFSET(get<float>, {0x610, 4, 0, 0})
	CMember(ETickMode)                                 TickMode                                                    OFFSET(get<T>, {0x614, 1, 0, 0})
	CMember(class UUserWidget*)                        Widget                                                      OFFSET(get<T>, {0x640, 8, 0, 0})


	/// Functions
	// Function /Script/UMG.WidgetComponent.SetWindowVisibility
	// void SetWindowVisibility(EWindowVisibility InVisibility);                                                                // [0x6631244] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWindowFocusable
	// void SetWindowFocusable(bool bInWindowFocusable);                                                                        // [0x6631178] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWidgetSpace
	// void SetWidgetSpace(EWidgetSpace NewSpace);                                                                              // [0x6631000] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWidget
	// void SetWidget(class UUserWidget* Widget);                                                                               // [0x6630f3c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTwoSided
	// void SetTwoSided(bool bWantTwoSided);                                                                                    // [0x663069c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTintColorAndOpacity
	// void SetTintColorAndOpacity(FLinearColor NewTintColorAndOpacity);                                                        // [0x6630444] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTickWhenOffscreen
	// void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);                                                                  // [0x6630384] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTickMode
	// void SetTickMode(ETickMode InTickMode);                                                                                  // [0x66302c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetRedrawTime
	// void SetRedrawTime(float InRedrawTime);                                                                                  // [0x662dd98] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetPivot
	// void SetPivot(FVector2D& InPivot);                                                                                       // [0x662dbb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetOwnerPlayer
	// void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);                                                                    // [0x662da44] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetManuallyRedraw
	// void SetManuallyRedraw(bool bUseManualRedraw);                                                                           // [0x662c270] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetGeometryMode
	// void SetGeometryMode(EWidgetGeometryMode InGeometryMode);                                                                // [0x662aefc] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetDrawSize
	// void SetDrawSize(FVector2D Size);                                                                                        // [0x6629e10] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetDrawAtDesiredSize
	// void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);                                                                    // [0x6629d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetCylinderArcAngle
	// void SetCylinderArcAngle(float InCylinderArcAngle);                                                                      // [0x662969c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor NewBackgroundColor);                                                                // [0x6628f00] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.RequestRenderUpdate
	// void RequestRenderUpdate();                                                                                              // [0x2f57efc] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.RequestRedraw
	// void RequestRedraw();                                                                                                    // [0x66281a0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.IsWidgetVisible
	// bool IsWidgetVisible();                                                                                                  // [0x6627224] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWindowVisiblility
	// EWindowVisibility GetWindowVisiblility();                                                                                // [0x6626c7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWindowFocusable
	// bool GetWindowFocusable();                                                                                               // [0x6626c64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWidgetSpace
	// EWidgetSpace GetWidgetSpace();                                                                                           // [0x6626c4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWidget
	// class UUserWidget* GetWidget();                                                                                          // [0x2562430] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetUserWidgetObject
	// class UUserWidget* GetUserWidgetObject();                                                                                // [0x348126c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetTwoSided
	// bool GetTwoSided();                                                                                                      // [0x6626ae4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetTickWhenOffscreen
	// bool GetTickWhenOffscreen();                                                                                             // [0x6626acc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetRenderTarget
	// class UTextureRenderTarget2D* GetRenderTarget();                                                                         // [0x662690c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetRedrawTime
	// float GetRedrawTime();                                                                                                   // [0x3da0cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetPivot
	// FVector2D GetPivot();                                                                                                    // [0x66268c8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetOwnerPlayer
	// class ULocalPlayer* GetOwnerPlayer();                                                                                    // [0x6626850] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetMaterialInstance
	// class UMaterialInstanceDynamic* GetMaterialInstance();                                                                   // [0x6626728] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetManuallyRedraw
	// bool GetManuallyRedraw();                                                                                                // [0x3da1398] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetGeometryMode
	// EWidgetGeometryMode GetGeometryMode();                                                                                   // [0x6626418] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetDrawSize
	// FVector2D GetDrawSize();                                                                                                 // [0x6626348] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetDrawAtDesiredSize
	// bool GetDrawAtDesiredSize();                                                                                             // [0x6626330] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetCylinderArcAngle
	// float GetCylinderArcAngle();                                                                                             // [0x3da1008] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetCurrentDrawSize
	// FVector2D GetCurrentDrawSize();                                                                                          // [0x66261bc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetInteractionComponent
/// Size: 0x02D0 (0x000220 - 0x0004F0)
class UWidgetInteractionComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1264;

public:
	SMember(FMulticastInlineDelegate)                  OnHoveredWidgetChanged                                      OFFSET(getStruct<T>, {0x220, 16, 0, 0})
	DMember(int32_t)                                   VirtualUserIndex                                            OFFSET(get<int32_t>, {0x240, 4, 0, 0})
	DMember(int32_t)                                   PointerIndex                                                OFFSET(get<int32_t>, {0x244, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            TraceChannel                                                OFFSET(get<T>, {0x248, 1, 0, 0})
	DMember(float)                                     InteractionDistance                                         OFFSET(get<float>, {0x24C, 4, 0, 0})
	CMember(EWidgetInteractionSource)                  InteractionSource                                           OFFSET(get<T>, {0x250, 1, 0, 0})
	DMember(bool)                                      bEnableHitTesting                                           OFFSET(get<bool>, {0x251, 1, 0, 0})
	DMember(bool)                                      bShowDebug                                                  OFFSET(get<bool>, {0x252, 1, 0, 0})
	DMember(float)                                     DebugSphereLineThickness                                    OFFSET(get<float>, {0x254, 4, 0, 0})
	DMember(float)                                     DebugLineThickness                                          OFFSET(get<float>, {0x258, 4, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  OFFSET(getStruct<T>, {0x25C, 16, 0, 0})
	SMember(FHitResult)                                CustomHitResult                                             OFFSET(getStruct<T>, {0x2E8, 232, 0, 0})
	SMember(FVector2D)                                 LocalHitLocation                                            OFFSET(getStruct<T>, {0x3D0, 16, 0, 0})
	SMember(FVector2D)                                 LastLocalHitLocation                                        OFFSET(getStruct<T>, {0x3E0, 16, 0, 0})
	CMember(class UWidgetComponent*)                   HoveredWidgetComponent                                      OFFSET(get<T>, {0x3F0, 8, 0, 0})
	SMember(FHitResult)                                LastHitResult                                               OFFSET(getStruct<T>, {0x3F8, 232, 0, 0})
	DMember(bool)                                      bIsHoveredWidgetInteractable                                OFFSET(get<bool>, {0x4E0, 1, 0, 0})
	DMember(bool)                                      bIsHoveredWidgetFocusable                                   OFFSET(get<bool>, {0x4E1, 1, 0, 0})
	DMember(bool)                                      bIsHoveredWidgetHitTestVisible                              OFFSET(get<bool>, {0x4E2, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.WidgetInteractionComponent.SetFocus
	// void SetFocus(class UWidget* FocusWidget);                                                                               // [0x664ab18] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.SetCustomHitResult
	// void SetCustomHitResult(FHitResult& HitResult);                                                                          // [0x664a774] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.SendKeyChar
	// bool SendKeyChar(FString Characters, bool bRepeat);                                                                      // [0x6649940] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ScrollWheel
	// void ScrollWheel(float ScrollDelta);                                                                                     // [0x6649878] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ReleasePointerKey
	// void ReleasePointerKey(FKey Key);                                                                                        // [0x6648c34] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ReleaseKey
	// bool ReleaseKey(FKey Key);                                                                                               // [0x6648a28] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressPointerKey
	// void PressPointerKey(FKey Key);                                                                                          // [0x6648434] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressKey
	// bool PressKey(FKey Key, bool bRepeat);                                                                                   // [0x664829c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressAndReleaseKey
	// bool PressAndReleaseKey(FKey Key);                                                                                       // [0x6648188] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverInteractableWidget
	// bool IsOverInteractableWidget();                                                                                         // [0x6646d20] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	// bool IsOverHitTestVisibleWidget();                                                                                       // [0x6646d08] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverFocusableWidget
	// bool IsOverFocusableWidget();                                                                                            // [0x6646cf0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.GetLastHitResult
	// FHitResult GetLastHitResult();                                                                                           // [0x6646088] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	// class UWidgetComponent* GetHoveredWidgetComponent();                                                                     // [0x6645bf8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.Get2DHitLocation
	// FVector2D Get2DHitLocation();                                                                                            // [0x66451dc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetSwitcher
/// Size: 0x0018 (0x000190 - 0x0001A8)
class UWidgetSwitcher : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	DMember(int32_t)                                   ActiveWidgetIndex                                           OFFSET(get<int32_t>, {0x190, 4, 0, 0})


	/// Functions
	// Function /Script/UMG.WidgetSwitcher.SetActiveWidgetIndex
	// void SetActiveWidgetIndex(int32_t Index);                                                                                // [0x20521e8] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcher.SetActiveWidget
	// void SetActiveWidget(class UWidget* Widget);                                                                             // [0x2051a4c] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcher.GetWidgetAtIndex
	// class UWidget* GetWidgetAtIndex(int32_t Index);                                                                          // [0x6646940] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetNumWidgets
	// int32_t GetNumWidgets();                                                                                                 // [0x6646590] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                          // [0x66452dc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetActiveWidget
	// class UWidget* GetActiveWidget();                                                                                        // [0x376014c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetSwitcherSlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UWidgetSwitcherSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x51, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.WidgetSwitcherSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x664c944] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcherSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x2de5330] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcherSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x664af80] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WindowTitleBarArea
/// Size: 0x0020 (0x000190 - 0x0001B0)
class UWindowTitleBarArea : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	DMember(bool)                                      bWindowButtonsEnabled                                       OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      bDoubleClickTogglesFullscreen                               OFFSET(get<bool>, {0x191, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.WindowTitleBarArea.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x664ca04] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarArea.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x664c154] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarArea.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x664b040] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WindowTitleBarAreaSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UWindowTitleBarAreaSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x49, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x664cac4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x664c224] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x664b100] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WrapBox
/// Size: 0x0028 (0x000190 - 0x0001B8)
class UWrapBox : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	SMember(FVector2D)                                 InnerSlotPadding                                            OFFSET(getStruct<T>, {0x190, 16, 0, 0})
	DMember(float)                                     WrapSize                                                    OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(bool)                                      bExplicitWrapSize                                           OFFSET(get<bool>, {0x1A4, 1, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x1A5, 1, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 orientation                                                 OFFSET(get<T>, {0x1A6, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.WrapBox.SetInnerSlotPadding
	// void SetInnerSlotPadding(FVector2D InPadding);                                                                           // [0x664b344] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WrapBox.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x664b1c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBox.AddChildToWrapBox
	// class UWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);                                                           // [0x6641fac] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WrapBoxSlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UWrapBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(float)                                     FillSpanWhenLessThan                                        OFFSET(get<float>, {0x48, 4, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x4C, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x4D, 1, 0, 0})
	DMember(bool)                                      bFillEmptySpace                                             OFFSET(get<bool>, {0x4E, 1, 0, 0})
	DMember(bool)                                      bForceNewLine                                               OFFSET(get<bool>, {0x4F, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.WrapBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x664cb88] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x664c2f4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetNewLine
	// void SetNewLine(bool InForceNewLine);                                                                                    // [0x664be3c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x664b284] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	// void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);                                                              // [0x664aa54] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetFillEmptySpace
	// void SetFillEmptySpace(bool InbFillEmptySpace);                                                                          // [0x664a990] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.DragDropOperation
/// Size: 0x0068 (0x000028 - 0x000090)
class UDragDropOperation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FString)                                   tag                                                         OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(class UObject*)                            Payload                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UWidget*)                            DefaultDragVisual                                           OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(EDragPivot)                                Pivot                                                       OFFSET(get<T>, {0x48, 1, 0, 0})
	SMember(FVector2D)                                 Offset                                                      OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDrop                                                      OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDragCancelled                                             OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDragged                                                   OFFSET(getStruct<T>, {0x80, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.DragDropOperation.Drop
	// void Drop(FPointerEvent& PointerEvent);                                                                                  // [0x6645018] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.DragDropOperation.Dragged
	// void Dragged(FPointerEvent& PointerEvent);                                                                               // [0x66433ec] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.DragDropOperation.DragCancelled
	// void DragCancelled(FPointerEvent& PointerEvent);                                                                         // [0x6643344] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/UMG.SlateBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
	// FVector2D TransformVectorLocalToAbsolute(FGeometry& Geometry, FVector2D LocalVector);                                    // [0x664daf4] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
	// FVector2D TransformVectorAbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteVector);                                 // [0x664d914] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
	// float TransformScalarLocalToAbsolute(FGeometry& Geometry, float LocalScalar);                                            // [0x664d74c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
	// float TransformScalarAbsoluteToLocal(FGeometry& Geometry, float AbsoluteScalar);                                         // [0x664d584] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
	// void ScreenToWidgetLocal(class UObject* WorldContextObject, FGeometry& Geometry, FVector2D ScreenPosition, FVector2D& LocalCoordinate, bool bIncludeWindowPosition); // [0x6649508] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
	// void ScreenToWidgetAbsolute(class UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition); // [0x6649308] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToViewport
	// void ScreenToViewport(class UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& ViewportPosition);         // [0x6649180] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.LocalToViewport
	// void LocalToViewport(class UObject* WorldContextObject, FGeometry& Geometry, FVector2D LocalCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition); // [0x6647294] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.LocalToAbsolute
	// FVector2D LocalToAbsolute(FGeometry& Geometry, FVector2D LocalCoordinate);                                               // [0x66470b8] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.IsUnderLocation
	// bool IsUnderLocation(FGeometry& Geometry, FVector2D& AbsoluteCoordinate);                                                // [0x6646d38] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.GetLocalTopLeft
	// FVector2D GetLocalTopLeft(FGeometry& Geometry);                                                                          // [0x6646220] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.GetLocalSize
	// FVector2D GetLocalSize(FGeometry& Geometry);                                                                             // [0x664612c] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.GetAbsoluteSize
	// FVector2D GetAbsoluteSize(FGeometry& Geometry);                                                                          // [0x66451f8] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
	// bool EqualEqual_SlateBrush(FSlateBrush& A, FSlateBrush& B);                                                              // [0x2d35ce0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.AbsoluteToViewport
	// void AbsoluteToViewport(class UObject* WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition); // [0x6641de4] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.AbsoluteToLocal
	// FVector2D AbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteCoordinate);                                            // [0x6641c08] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/UMG.SlateVectorArtData
/// Size: 0x0048 (0x000028 - 0x000070)
class USlateVectorArtData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FSlateMeshVertex>)                  VertexData                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<uint32_t>)                          IndexData                                                   OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FVector2D)                                 ExtentMin                                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FVector2D)                                 ExtentMax                                                   OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

/// Class /Script/UMG.WidgetBlueprintGeneratedClass
/// Size: 0x0070 (0x000360 - 0x0003D0)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	CMember(class UWidgetTree*)                        WidgetTree                                                  OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(TArray<class UWidgetBlueprintGeneratedClassExtension*>) Extensions                                     OFFSET(get<T>, {0x368, 16, 0, 0})
	DMember(bool)                                      bClassRequiresNativeTick                                    OFFSET(get<bool>, {0x378, 1, 1, 0})
	DMember(bool)                                      bCanCallInitializedWithoutPlayerContext                     OFFSET(get<bool>, {0x378, 1, 1, 1})
	CMember(TArray<FDelegateRuntimeBinding>)           Bindings                                                    OFFSET(get<T>, {0x380, 16, 0, 0})
	CMember(TArray<class UWidgetAnimation*>)           Animations                                                  OFFSET(get<T>, {0x390, 16, 0, 0})
	CMember(TArray<FName>)                             NamedSlots                                                  OFFSET(get<T>, {0x3A0, 16, 0, 0})
	CMember(TArray<FName>)                             AvailableNamedSlots                                         OFFSET(get<T>, {0x3B0, 16, 0, 0})
	CMember(TArray<FName>)                             InstanceNamedSlots                                          OFFSET(get<T>, {0x3C0, 16, 0, 0})
};

/// Class /Script/UMG.WidgetBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/UMG.WidgetBlueprintLibrary.UnlockMouse
	// FEventReply UnlockMouse(FEventReply& Reply);                                                                             // [0x664e00c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.Unhandled
	// FEventReply Unhandled();                                                                                                 // [0x664dfa8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
	// void SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // [0x664ccfc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
	// void SetWindowTitleBarOnCloseClickedDelegate(FDelegateProperty Delegate);                                                // [0x22b6bf8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
	// void SetWindowTitleBarCloseButtonActive(bool bActive);                                                                   // [0x664cc48] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetUserFocus
	// FEventReply SetUserFocus(FEventReply& Reply, class UWidget* FocusWidget, bool bInAllUsers);                              // [0x664c67c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetMousePosition
	// FEventReply SetMousePosition(FEventReply& Reply, FVector2D NewMousePosition);                                            // [0x664bc58] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
	// void SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bFlushInput); // [0x664b9a0] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
	// void SetInputMode_GameOnly(class APlayerController* PlayerController, bool bFlushInput);                                 // [0x664b830] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
	// void SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture, bool bFlushInput); // [0x664b4d0] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetHardwareCursor
	// bool SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, FName CursorName, FVector2D HotSpot); // [0x664ad04] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
	// void SetFocusToGameViewport();                                                                                           // [0x664ac08] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
	// void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // [0x664a540] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
	// void SetBrushResourceToTexture(FSlateBrush& Brush, class UTexture2D* Texture);                                           // [0x664a348] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
	// void SetBrushResourceToMaterial(FSlateBrush& Brush, class UMaterialInterface* Material);                                 // [0x664a348] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
	// void RestorePreviousWindowTitleBarState();                                                                               // [0x6649048] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
	// FEventReply ReleaseMouseCapture(FEventReply& Reply);                                                                     // [0x6648b3c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
	// FEventReply ReleaseJoystickCapture(FEventReply& Reply, bool bInAllJoysticks);                                            // [0x6648848] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
	// void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();                                                        // [0x186becc] Public|Delegate      
	// Function /Script/UMG.WidgetBlueprintLibrary.NoResourceBrush
	// FSlateBrush NoResourceBrush();                                                                                           // [0x6647c50] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
	// FSlateBrush MakeBrushFromTexture(class UTexture2D* Texture, int32_t Width, int32_t Height);                              // [0x6647a70] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
	// FSlateBrush MakeBrushFromMaterial(class UMaterialInterface* Material, int32_t Width, int32_t Height);                    // [0x6647890] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
	// FSlateBrush MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);                                                      // [0x664773c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.LockMouse
	// FEventReply LockMouse(FEventReply& Reply, class UWidget* CapturingWidget);                                               // [0x6647560] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.IsDragDropping
	// bool IsDragDropping();                                                                                                   // [0x6646b70] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.Handled
	// FEventReply Handled();                                                                                                   // [0x6646a10] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetSafeZonePadding
	// void GetSafeZonePadding(class UObject* WorldContextObject, FVector4& SafePadding, FVector2D& SafePaddingScale, FVector4& SpillOverPadding); // [0x28c68b0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
	// FKeyEvent GetKeyEventFromAnalogInputEvent(FAnalogInputEvent& Event);                                                     // [0x6645f94] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
	// FInputEvent GetInputEventFromPointerEvent(FPointerEvent& Event);                                                         // [0x6645ec8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
	// FInputEvent GetInputEventFromNavigationEvent(FNavigationEvent& Event);                                                   // [0x6645de8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
	// FInputEvent GetInputEventFromKeyEvent(FKeyEvent& Event);                                                                 // [0x6645cf0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
	// FInputEvent GetInputEventFromCharacterEvent(FCharacterEvent& Event);                                                     // [0x6645c10] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetDynamicMaterial
	// class UMaterialInstanceDynamic* GetDynamicMaterial(FSlateBrush& Brush);                                                  // [0x2d35ae4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetDragDroppingContent
	// class UDragDropOperation* GetDragDroppingContent();                                                                      // [0x6645ab0] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
	// class UTexture2D* GetBrushResourceAsTexture2D(FSlateBrush& Brush);                                                       // [0x6645a0c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
	// class UMaterialInterface* GetBrushResourceAsMaterial(FSlateBrush& Brush);                                                // [0x2d35a24] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResource
	// class UObject* GetBrushResource(FSlateBrush& Brush);                                                                     // [0x2d35b8c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
	// void GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, class UClass* Interface, bool TopLevelOnly); // [0x6645684] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
	// void GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly); // [0x6645384] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.EndDragDrop
	// FEventReply EndDragDrop(FEventReply& Reply);                                                                             // [0x66450c0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawTextFormatted
	// void DrawTextFormatted(FPaintContext& Context, FText& Text, FVector2D Position, class UFont* Font, float FontSize, FName FontTypeFace, FLinearColor Tint); // [0x6644abc] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawText
	// void DrawText(FPaintContext& Context, FString InString, FVector2D Position, FLinearColor Tint);                          // [0x6644758] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawSpline
	// void DrawSpline(FPaintContext& Context, FVector2D Start, FVector2D StartDir, FVector2D End, FVector2D EndDir, FLinearColor Tint, float Thickness); // [0x6644160] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawLines
	// void DrawLines(FPaintContext& Context, TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias, float Thickness);  // [0x6643db0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawLine
	// void DrawLine(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness); // [0x66438b8] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawBox
	// void DrawBox(FPaintContext& Context, FVector2D Position, FVector2D Size, class USlateBrushAsset* Brush, FLinearColor Tint); // [0x6643494] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DismissAllMenus
	// void DismissAllMenus();                                                                                                  // [0x6643328] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DetectDragIfPressed
	// FEventReply DetectDragIfPressed(FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, FKey DragKey);          // [0x664301c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DetectDrag
	// FEventReply DetectDrag(FEventReply& Reply, class UWidget* WidgetDetectingDrag, FKey DragKey);                            // [0x6642d10] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CreateDragDropOperation
	// class UDragDropOperation* CreateDragDropOperation(class UClass* OperationClass);                                         // [0x6642bec] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.Create
	// class UUserWidget* Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer); // [0x216f528] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.ClearUserFocus
	// FEventReply ClearUserFocus(FEventReply& Reply, bool bInAllUsers);                                                        // [0x6642a0c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CaptureMouse
	// FEventReply CaptureMouse(FEventReply& Reply, class UWidget* CapturingWidget);                                            // [0x6642830] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CaptureJoystick
	// FEventReply CaptureJoystick(FEventReply& Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);                   // [0x6642568] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CancelDragDrop
	// void CancelDragDrop();                                                                                                   // [0x6642538] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UMG.WidgetLayoutLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
	// class UWrapBoxSlot* SlotAsWrapBoxSlot(class UWidget* Widget);                                                            // [0x664d350] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
	// class UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(class UWidget* Widget);                                              // [0x32c65e4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
	// class UVerticalBoxSlot* SlotAsVerticalBoxSlot(class UWidget* Widget);                                                    // [0x1bb1db8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
	// class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget* Widget);                                                    // [0x664d26c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
	// class USizeBoxSlot* SlotAsSizeBoxSlot(class UWidget* Widget);                                                            // [0x2be9bf8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
	// class UScrollBoxSlot* SlotAsScrollBoxSlot(class UWidget* Widget);                                                        // [0x664d188] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
	// class UScaleBoxSlot* SlotAsScaleBoxSlot(class UWidget* Widget);                                                          // [0x664d0a4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
	// class USafeZoneSlot* SlotAsSafeBoxSlot(class UWidget* Widget);                                                           // [0x664cfc0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
	// class UOverlaySlot* SlotAsOverlaySlot(class UWidget* Widget);                                                            // [0x333b3e4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
	// class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(class UWidget* Widget);                                                // [0x27c7e38] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsGridSlot
	// class UGridSlot* SlotAsGridSlot(class UWidget* Widget);                                                                  // [0x3010d44] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
	// class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget* Widget);                                                         // [0x3bf4520] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsBorderSlot
	// class UBorderSlot* SlotAsBorderSlot(class UWidget* Widget);                                                              // [0x3e10958] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.RemoveAllWidgets
	// void RemoveAllWidgets(class UObject* WorldContextObject);                                                                // [0x6648d3c] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
	// bool ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, FVector WorldLocation, FVector2D& ScreenPosition, bool bPlayerViewportRelative); // [0x664853c] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
	// FGeometry GetViewportWidgetGeometry(class UObject* WorldContextObject);                                                  // [0x6646854] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportSize
	// FVector2D GetViewportSize(class UObject* WorldContextObject);                                                            // [0x6646788] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportScale
	// float GetViewportScale(class UObject* WorldContextObject);                                                               // [0x66466c4] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
	// FGeometry GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);                                      // [0x66465d8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
	// bool GetMousePositionScaledByDPI(class APlayerController* Player, float& LocationX, float& LocationY);                   // [0x6646400] Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
	// FVector2D GetMousePositionOnViewport(class UObject* WorldContextObject);                                                 // [0x6646334] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
	// FVector2D GetMousePositionOnPlatform();                                                                                  // [0x6646304] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.WidgetTree
/// Size: 0x0060 (0x000028 - 0x000088)
class UWidgetTree : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UWidget*)                            RootWidget                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TMap<FName, UWidget*>)                     NamedSlotBindings                                           OFFSET(get<T>, {0x38, 80, 0, 0})
};

/// Struct /Script/UMG.EventReply
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FEventReply : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Struct /Script/UMG.WidgetTransform
/// Size: 0x0038 (0x000000 - 0x000038)
class FWidgetTransform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector2D)                                 Translation                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector2D)                                 Scale                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector2D)                                 Shear                                                       OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/UMG.ShapedTextOptions
/// Size: 0x0003 (0x000000 - 0x000003)
class FShapedTextOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(bool)                                      bOverride_TextShapingMethod                                 OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bOverride_TextFlowDirection                                 OFFSET(get<bool>, {0x0, 1, 1, 1})
	CMember(ETextShapingMethod)                        TextShapingMethod                                           OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(ETextFlowDirection)                        TextFlowDirection                                           OFFSET(get<T>, {0x2, 1, 0, 0})
};

/// Struct /Script/UMG.PaintContext
/// Size: 0x0030 (0x000000 - 0x000030)
class FPaintContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/UMG.AnimationEventBinding
/// Size: 0x0020 (0x000000 - 0x000020)
class FAnimationEventBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UWidgetAnimation*)                   Animation                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FDelegateProperty)                         Delegate                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	CMember(EWidgetAnimationEvent)                     AnimationEvent                                              OFFSET(get<T>, {0x14, 1, 0, 0})
	SMember(FName)                                     UserTag                                                     OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/UMG.WidgetChild
/// Size: 0x000C (0x000000 - 0x00000C)
class FWidgetChild : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     WidgetName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UWidget*>)                  WidgetPtr                                                   OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/UMG.NamedSlotBinding
/// Size: 0x0010 (0x000000 - 0x000010)
class FNamedSlotBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UWidget*)                            Content                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/UMG.UserWidgetPool
/// Size: 0x0088 (0x000000 - 0x000088)
class FUserWidgetPool : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<class UUserWidget*>)                ActiveWidgets                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<class UUserWidget*>)                InactiveWidgets                                             OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/UMG.AnchorData
/// Size: 0x0040 (0x000000 - 0x000040)
class FAnchorData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMargin)                                   Offsets                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FAnchors)                                  Anchors                                                     OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FVector2D)                                 Alignment                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/UMG.WidgetEventField
/// Size: 0x0001 (0x000000 - 0x000001)
class FWidgetEventField : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/UMG.RadialBoxSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FRadialBoxSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     StartingAngle                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bDistributeItemsEvenly                                      OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(float)                                     AngleBetweenItems                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SectorCentralAngle                                          OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/UMG.SlateChildSize
/// Size: 0x0008 (0x000000 - 0x000008)
class FSlateChildSize : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<ESlateSizeRule>)               SizeRule                                                    OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/UMG.WidgetNavigationData
/// Size: 0x001C (0x000000 - 0x00001C)
class FWidgetNavigationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(EUINavigationRule)                         Rule                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     WidgetToFocus                                               OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(TWeakObjectPtr<UWidget*>)                  Widget                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FDelegateProperty)                         CustomDelegate                                              OFFSET(getStruct<T>, {0x10, 12, 0, 0})
};

/// Struct /Script/UMG.MovieScene2DTransformMask
/// Size: 0x0004 (0x000000 - 0x000004)
class FMovieScene2DTransformMask : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Mask                                                        OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/UMG.SequenceTickManagerWidgetData
/// Size: 0x0002 (0x000000 - 0x000002)
class FSequenceTickManagerWidgetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
};

/// Struct /Script/UMG.WidgetAnimationBinding
/// Size: 0x001C (0x000000 - 0x00001C)
class FWidgetAnimationBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FName)                                     WidgetName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     SlotWidgetName                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FGuid)                                     AnimationGuid                                               OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bIsRootWidget                                               OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/UMG.BlueprintWidgetAnimationDelegateBinding
/// Size: 0x0010 (0x000000 - 0x000010)
class FBlueprintWidgetAnimationDelegateBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EWidgetAnimationEvent)                     Action                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     AnimationToBind                                             OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     FunctionNameToBind                                          OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     UserTag                                                     OFFSET(getStruct<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/UMG.DynamicPropertyPath
/// Size: 0x0000 (0x000038 - 0x000038)
class FDynamicPropertyPath : public FCachedPropertyPath
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/UMG.WidgetStateBitfield
/// Size: 0x0590 (0x000000 - 0x000590)
class FWidgetStateBitfield : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
};

/// Struct /Script/UMG.GameViewportWidgetSlot
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameViewportWidgetSlot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FAnchors)                                  Anchors                                                     OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FMargin)                                   Offsets                                                     OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FVector2D)                                 Alignment                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   ZOrder                                                      OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(bool)                                      bAutoRemoveOnWorldRemoved                                   OFFSET(get<bool>, {0x44, 1, 0, 0})
};

/// Struct /Script/UMG.RichTextStyleRow
/// Size: 0x0318 (0x000008 - 0x000320)
class FRichTextStyleRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FTextBlockStyle)                           TextStyle                                                   OFFSET(getStruct<T>, {0x10, 784, 0, 0})
};

/// Struct /Script/UMG.RichImageRow
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FRichImageRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FSlateBrush)                               Brush                                                       OFFSET(getStruct<T>, {0x10, 192, 0, 0})
};

/// Struct /Script/UMG.WidgetComponentInstanceData
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class FWidgetComponentInstanceData : public FSceneComponentInstanceData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Struct /Script/UMG.SlateMeshVertex
/// Size: 0x003C (0x000000 - 0x00003C)
class FSlateMeshVertex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	SMember(FVector2f)                                 Position                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FVector2f)                                 UV0                                                         OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FVector2f)                                 UV1                                                         OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	SMember(FVector2f)                                 UV2                                                         OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	SMember(FVector2f)                                 UV3                                                         OFFSET(getStruct<T>, {0x24, 8, 0, 0})
	SMember(FVector2f)                                 UV4                                                         OFFSET(getStruct<T>, {0x2C, 8, 0, 0})
	SMember(FVector2f)                                 UV5                                                         OFFSET(getStruct<T>, {0x34, 8, 0, 0})
};

/// Struct /Script/UMG.DelegateRuntimeBinding
/// Size: 0x0058 (0x000000 - 0x000058)
class FDelegateRuntimeBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   ObjectName                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     FunctionName                                                OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	SMember(FDynamicPropertyPath)                      SourcePath                                                  OFFSET(getStruct<T>, {0x18, 56, 0, 0})
	CMember(EBindingKind)                              Kind                                                        OFFSET(get<T>, {0x50, 1, 0, 0})
};

/// Enum /Script/UMG.ESlateVisibility
/// Size: 0x06
enum class ESlateVisibility : uint8_t
{
	ESlateVisibility__Visible                                                        = 0,
	ESlateVisibility__Collapsed                                                      = 1,
	ESlateVisibility__Hidden                                                         = 2,
	ESlateVisibility__HitTestInvisible                                               = 3,
	ESlateVisibility__SelfHitTestInvisible                                           = 4,
	ESlateVisibility__ESlateVisibility_MAX                                           = 5
};

/// Enum /Script/UMG.EVirtualKeyboardType
/// Size: 0x07
enum class EVirtualKeyboardType : uint8_t
{
	EVirtualKeyboardType__Default                                                    = 0,
	EVirtualKeyboardType__Number                                                     = 1,
	EVirtualKeyboardType__Web                                                        = 2,
	EVirtualKeyboardType__Email                                                      = 3,
	EVirtualKeyboardType__Password                                                   = 4,
	EVirtualKeyboardType__AlphaNumeric                                               = 5,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX                                   = 6
};

/// Enum /Script/UMG.ESlateAccessibleBehavior
/// Size: 0x06
enum class ESlateAccessibleBehavior : uint8_t
{
	ESlateAccessibleBehavior__NotAccessible                                          = 0,
	ESlateAccessibleBehavior__Auto                                                   = 1,
	ESlateAccessibleBehavior__Summary                                                = 2,
	ESlateAccessibleBehavior__Custom                                                 = 3,
	ESlateAccessibleBehavior__ToolTip                                                = 4,
	ESlateAccessibleBehavior__ESlateAccessibleBehavior_MAX                           = 5
};

/// Enum /Script/UMG.ESlateSizeRule
/// Size: 0x03
enum class ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic                                                        = 0,
	ESlateSizeRule__Fill                                                             = 1,
	ESlateSizeRule__ESlateSizeRule_MAX                                               = 2
};

/// Enum /Script/UMG.EDynamicBoxType
/// Size: 0x07
enum class EDynamicBoxType : uint8_t
{
	EDynamicBoxType__Horizontal                                                      = 0,
	EDynamicBoxType__Vertical                                                        = 1,
	EDynamicBoxType__Wrap                                                            = 2,
	EDynamicBoxType__VerticalWrap                                                    = 3,
	EDynamicBoxType__Radial                                                          = 4,
	EDynamicBoxType__Overlay                                                         = 5,
	EDynamicBoxType__EDynamicBoxType_MAX                                             = 6
};

/// Enum /Script/UMG.EWidgetDesignFlags
/// Size: 0x06
enum class EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None                                                         = 0,
	EWidgetDesignFlags__Designing                                                    = 1,
	EWidgetDesignFlags__ShowOutline                                                  = 2,
	EWidgetDesignFlags__ExecutePreConstruct                                          = 4,
	EWidgetDesignFlags__Previewing                                                   = 8,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX                                       = 9
};

/// Enum /Script/UMG.EWidgetSpace
/// Size: 0x03
enum class EWidgetSpace : uint8_t
{
	EWidgetSpace__World                                                              = 0,
	EWidgetSpace__Screen                                                             = 1,
	EWidgetSpace__EWidgetSpace_MAX                                                   = 2
};

/// Enum /Script/UMG.EWidgetTimingPolicy
/// Size: 0x03
enum class EWidgetTimingPolicy : uint8_t
{
	EWidgetTimingPolicy__RealTime                                                    = 0,
	EWidgetTimingPolicy__GameTime                                                    = 1,
	EWidgetTimingPolicy__EWidgetTimingPolicy_MAX                                     = 2
};

/// Enum /Script/UMG.EWidgetBlendMode
/// Size: 0x04
enum class EWidgetBlendMode : uint8_t
{
	EWidgetBlendMode__Opaque                                                         = 0,
	EWidgetBlendMode__Masked                                                         = 1,
	EWidgetBlendMode__Transparent                                                    = 2,
	EWidgetBlendMode__EWidgetBlendMode_MAX                                           = 3
};

/// Enum /Script/UMG.EWidgetGeometryMode
/// Size: 0x03
enum class EWidgetGeometryMode : uint8_t
{
	EWidgetGeometryMode__Plane                                                       = 0,
	EWidgetGeometryMode__Cylinder                                                    = 1,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX                                     = 2
};

/// Enum /Script/UMG.EWindowVisibility
/// Size: 0x03
enum class EWindowVisibility : uint8_t
{
	EWindowVisibility__Visible                                                       = 0,
	EWindowVisibility__SelfHitTestInvisible                                          = 1,
	EWindowVisibility__EWindowVisibility_MAX                                         = 2
};

/// Enum /Script/UMG.ETickMode
/// Size: 0x04
enum class ETickMode : uint8_t
{
	ETickMode__Disabled                                                              = 0,
	ETickMode__Enabled                                                               = 1,
	ETickMode__Automatic                                                             = 2,
	ETickMode__ETickMode_MAX                                                         = 3
};

/// Enum /Script/UMG.EWidgetInteractionSource
/// Size: 0x05
enum class EWidgetInteractionSource : uint8_t
{
	EWidgetInteractionSource__World                                                  = 0,
	EWidgetInteractionSource__Mouse                                                  = 1,
	EWidgetInteractionSource__CenterScreen                                           = 2,
	EWidgetInteractionSource__Custom                                                 = 3,
	EWidgetInteractionSource__EWidgetInteractionSource_MAX                           = 4
};

/// Enum /Script/UMG.EDragPivot
/// Size: 0x11
enum class EDragPivot : uint8_t
{
	EDragPivot__MouseDown                                                            = 0,
	EDragPivot__TopLeft                                                              = 1,
	EDragPivot__TopCenter                                                            = 2,
	EDragPivot__TopRight                                                             = 3,
	EDragPivot__CenterLeft                                                           = 4,
	EDragPivot__CenterCenter                                                         = 5,
	EDragPivot__CenterRight                                                          = 6,
	EDragPivot__BottomLeft                                                           = 7,
	EDragPivot__BottomCenter                                                         = 8,
	EDragPivot__BottomRight                                                          = 9,
	EDragPivot__EDragPivot_MAX                                                       = 10
};

/// Enum /Script/UMG.EWidgetTickFrequency
/// Size: 0x03
enum class EWidgetTickFrequency : uint8_t
{
	EWidgetTickFrequency__Never                                                      = 0,
	EWidgetTickFrequency__Auto                                                       = 1,
	EWidgetTickFrequency__EWidgetTickFrequency_MAX                                   = 2
};

/// Enum /Script/UMG.EWidgetAnimationEvent
/// Size: 0x03
enum class EWidgetAnimationEvent : uint8_t
{
	EWidgetAnimationEvent__Started                                                   = 0,
	EWidgetAnimationEvent__Finished                                                  = 1,
	EWidgetAnimationEvent__EWidgetAnimationEvent_MAX                                 = 2
};

/// Enum /Script/UMG.EUMGSequencePlayMode
/// Size: 0x04
enum class EUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode__Forward                                                    = 0,
	EUMGSequencePlayMode__Reverse                                                    = 1,
	EUMGSequencePlayMode__PingPong                                                   = 2,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX                                   = 3
};

/// Enum /Script/UMG.EBindingKind
/// Size: 0x03
enum class EBindingKind : uint8_t
{
	EBindingKind__Function                                                           = 0,
	EBindingKind__Property                                                           = 1,
	EBindingKind__EBindingKind_MAX                                                   = 2
};

