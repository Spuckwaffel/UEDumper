
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/SlateCore.EFontRasterizationMode
/// Size: 0x03
enum class EFontRasterizationMode : uint8_t
{
	EFontRasterizationMode__Bitmap                                                   = 0,
	EFontRasterizationMode__Msdf                                                     = 1,
	EFontRasterizationMode__EFontRasterizationMode_MAX                               = 2
};

/// Enum /Script/SlateCore.EUINavigationRule
/// Size: 0x08
enum class EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape                                                        = 0,
	EUINavigationRule__Explicit                                                      = 1,
	EUINavigationRule__Wrap                                                          = 2,
	EUINavigationRule__Stop                                                          = 3,
	EUINavigationRule__Custom                                                        = 4,
	EUINavigationRule__CustomBoundary                                                = 5,
	EUINavigationRule__Invalid                                                       = 6,
	EUINavigationRule__EUINavigationRule_MAX                                         = 7
};

/// Enum /Script/SlateCore.EColorVisionDeficiency
/// Size: 0x05
enum class EColorVisionDeficiency : uint8_t
{
	EColorVisionDeficiency__NormalVision                                             = 0,
	EColorVisionDeficiency__Deuteranope                                              = 1,
	EColorVisionDeficiency__Protanope                                                = 2,
	EColorVisionDeficiency__Tritanope                                                = 3,
	EColorVisionDeficiency__EColorVisionDeficiency_MAX                               = 4
};

/// Enum /Script/SlateCore.EButtonClickMethod
/// Size: 0x05
enum class EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp                                                    = 0,
	EButtonClickMethod__MouseDown                                                    = 1,
	EButtonClickMethod__MouseUp                                                      = 2,
	EButtonClickMethod__PreciseClick                                                 = 3,
	EButtonClickMethod__EButtonClickMethod_MAX                                       = 4
};

/// Enum /Script/SlateCore.EButtonTouchMethod
/// Size: 0x04
enum class EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp                                                    = 0,
	EButtonTouchMethod__Down                                                         = 1,
	EButtonTouchMethod__PreciseTap                                                   = 2,
	EButtonTouchMethod__EButtonTouchMethod_MAX                                       = 3
};

/// Enum /Script/SlateCore.EButtonPressMethod
/// Size: 0x04
enum class EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp                                                    = 0,
	EButtonPressMethod__ButtonPress                                                  = 1,
	EButtonPressMethod__ButtonRelease                                                = 2,
	EButtonPressMethod__EButtonPressMethod_MAX                                       = 3
};

/// Enum /Script/SlateCore.EUINavigation
/// Size: 0x09
enum class EUINavigation : uint8_t
{
	EUINavigation__Left                                                              = 0,
	EUINavigation__Right                                                             = 1,
	EUINavigation__Up                                                                = 2,
	EUINavigation__Down                                                              = 3,
	EUINavigation__Next                                                              = 4,
	EUINavigation__Previous                                                          = 5,
	EUINavigation__Num                                                               = 6,
	EUINavigation__Invalid                                                           = 7,
	EUINavigation__EUINavigation_MAX                                                 = 8
};

/// Enum /Script/SlateCore.EUINavigationAction
/// Size: 0x05
enum class EUINavigationAction : uint8_t
{
	EUINavigationAction__Accept                                                      = 0,
	EUINavigationAction__Back                                                        = 1,
	EUINavigationAction__Num                                                         = 2,
	EUINavigationAction__Invalid                                                     = 3,
	EUINavigationAction__EUINavigationAction_MAX                                     = 4
};

/// Enum /Script/SlateCore.ENavigationSource
/// Size: 0x03
enum class ENavigationSource : uint8_t
{
	ENavigationSource__FocusedWidget                                                 = 0,
	ENavigationSource__WidgetUnderCursor                                             = 1,
	ENavigationSource__ENavigationSource_MAX                                         = 2
};

/// Enum /Script/SlateCore.ENavigationGenesis
/// Size: 0x04
enum class ENavigationGenesis : uint8_t
{
	ENavigationGenesis__Keyboard                                                     = 0,
	ENavigationGenesis__Controller                                                   = 1,
	ENavigationGenesis__User                                                         = 2,
	ENavigationGenesis__ENavigationGenesis_MAX                                       = 3
};

/// Enum /Script/SlateCore.EHorizontalAlignment
/// Size: 0x05
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                                                                      = 0,
	HAlign_Left                                                                      = 1,
	HAlign_Center                                                                    = 2,
	HAlign_Right                                                                     = 3,
	HAlign_MAX                                                                       = 4
};

/// Enum /Script/SlateCore.EVerticalAlignment
/// Size: 0x05
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                                                                      = 0,
	VAlign_Top                                                                       = 1,
	VAlign_Center                                                                    = 2,
	VAlign_Bottom                                                                    = 3,
	VAlign_MAX                                                                       = 4
};

/// Enum /Script/SlateCore.EMenuPlacement
/// Size: 0x14
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor                                                        = 0,
	MenuPlacement_CenteredBelowAnchor                                                = 1,
	MenuPlacement_BelowRightAnchor                                                   = 2,
	MenuPlacement_ComboBox                                                           = 3,
	MenuPlacement_ComboBoxRight                                                      = 4,
	MenuPlacement_MenuRight                                                          = 5,
	MenuPlacement_AboveAnchor                                                        = 6,
	MenuPlacement_CenteredAboveAnchor                                                = 7,
	MenuPlacement_AboveRightAnchor                                                   = 8,
	MenuPlacement_MenuLeft                                                           = 9,
	MenuPlacement_Center                                                             = 10,
	MenuPlacement_RightLeftCenter                                                    = 11,
	MenuPlacement_MatchBottomLeft                                                    = 12,
	MenuPlacement_MAX                                                                = 13
};

/// Enum /Script/SlateCore.EOrientation
/// Size: 0x03
enum class EOrientation : uint8_t
{
	Orient_Horizontal                                                                = 0,
	Orient_Vertical                                                                  = 1,
	Orient_MAX                                                                       = 2
};

/// Enum /Script/SlateCore.EScrollDirection
/// Size: 0x03
enum class EScrollDirection : uint8_t
{
	Scroll_Down                                                                      = 0,
	Scroll_Up                                                                        = 1,
	Scroll_MAX                                                                       = 2
};

/// Enum /Script/SlateCore.ETextCommit
/// Size: 0x05
enum class ETextCommit : uint8_t
{
	ETextCommit__Default                                                             = 0,
	ETextCommit__OnEnter                                                             = 1,
	ETextCommit__OnUserMovedFocus                                                    = 2,
	ETextCommit__OnCleared                                                           = 3,
	ETextCommit__ETextCommit_MAX                                                     = 4
};

/// Enum /Script/SlateCore.ESelectInfo
/// Size: 0x05
enum class ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress                                                          = 0,
	ESelectInfo__OnNavigation                                                        = 1,
	ESelectInfo__OnMouseClick                                                        = 2,
	ESelectInfo__Direct                                                              = 3,
	ESelectInfo__ESelectInfo_MAX                                                     = 4
};

/// Enum /Script/SlateCore.ESlatePostRT
/// Size: 0x08
enum class ESlatePostRT : uint8_t
{
	ESlatePostRT__None                                                               = 0,
	ESlatePostRT__ESlatePostRT                                                       = 1,
	ESlatePostRT__ESlatePostRT3                                                      = 2,
	ESlatePostRT__ESlatePostRT4                                                      = 4,
	ESlatePostRT__ESlatePostRT5                                                      = 8,
	ESlatePostRT__ESlatePostRT6                                                      = 16,
	ESlatePostRT__Num                                                                = 5,
	ESlatePostRT__ESlatePostRT_MAX                                                   = 17
};

/// Enum /Script/SlateCore.EWidgetPixelSnapping
/// Size: 0x04
enum class EWidgetPixelSnapping : uint8_t
{
	EWidgetPixelSnapping__Inherit                                                    = 0,
	EWidgetPixelSnapping__Disabled                                                   = 1,
	EWidgetPixelSnapping__SnapToPixel                                                = 2,
	EWidgetPixelSnapping__EWidgetPixelSnapping_MAX                                   = 3
};

/// Enum /Script/SlateCore.ESlateDebuggingInputEvent
/// Size: 0x27
enum class ESlateDebuggingInputEvent : uint8_t
{
	ESlateDebuggingInputEvent__MouseMove                                             = 0,
	ESlateDebuggingInputEvent__MouseEnter                                            = 1,
	ESlateDebuggingInputEvent__MouseLeave                                            = 2,
	ESlateDebuggingInputEvent__PreviewMouseButtonDown                                = 3,
	ESlateDebuggingInputEvent__MouseButtonDown                                       = 4,
	ESlateDebuggingInputEvent__MouseButtonUp                                         = 5,
	ESlateDebuggingInputEvent__MouseButtonDoubleClick                                = 6,
	ESlateDebuggingInputEvent__MouseWheel                                            = 7,
	ESlateDebuggingInputEvent__TouchStart                                            = 8,
	ESlateDebuggingInputEvent__TouchEnd                                              = 9,
	ESlateDebuggingInputEvent__TouchForceChanged                                     = 10,
	ESlateDebuggingInputEvent__TouchFirstMove                                        = 11,
	ESlateDebuggingInputEvent__TouchMoved                                            = 12,
	ESlateDebuggingInputEvent__DragDetected                                          = 13,
	ESlateDebuggingInputEvent__DragEnter                                             = 14,
	ESlateDebuggingInputEvent__DragLeave                                             = 15,
	ESlateDebuggingInputEvent__DragOver                                              = 16,
	ESlateDebuggingInputEvent__DragDrop                                              = 17,
	ESlateDebuggingInputEvent__DropMessage                                           = 18,
	ESlateDebuggingInputEvent__PreviewKeyDown                                        = 19,
	ESlateDebuggingInputEvent__KeyDown                                               = 20,
	ESlateDebuggingInputEvent__KeyUp                                                 = 21,
	ESlateDebuggingInputEvent__KeyChar                                               = 22,
	ESlateDebuggingInputEvent__AnalogInput                                           = 23,
	ESlateDebuggingInputEvent__TouchGesture                                          = 24,
	ESlateDebuggingInputEvent__MotionDetected                                        = 25,
	ESlateDebuggingInputEvent__MAX                                                   = 26
};

/// Enum /Script/SlateCore.ESlateDebuggingStateChangeEvent
/// Size: 0x03
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
	ESlateDebuggingStateChangeEvent__MouseCaptureGained                              = 0,
	ESlateDebuggingStateChangeEvent__MouseCaptureLost                                = 1,
	ESlateDebuggingStateChangeEvent__ESlateDebuggingStateChangeEvent_MAX             = 2
};

/// Enum /Script/SlateCore.ESlateDebuggingNavigationMethod
/// Size: 0x07
enum class ESlateDebuggingNavigationMethod : uint8_t
{
	ESlateDebuggingNavigationMethod__Unknown                                         = 0,
	ESlateDebuggingNavigationMethod__Explicit                                        = 1,
	ESlateDebuggingNavigationMethod__CustomDelegateBound                             = 2,
	ESlateDebuggingNavigationMethod__CustomDelegateUnbound                           = 3,
	ESlateDebuggingNavigationMethod__NextOrPrevious                                  = 4,
	ESlateDebuggingNavigationMethod__HitTestGrid                                     = 5,
	ESlateDebuggingNavigationMethod__ESlateDebuggingNavigationMethod_MAX             = 6
};

/// Enum /Script/SlateCore.ESlateDebuggingFocusEvent
/// Size: 0x04
enum class ESlateDebuggingFocusEvent : uint8_t
{
	ESlateDebuggingFocusEvent__FocusChanging                                         = 0,
	ESlateDebuggingFocusEvent__FocusLost                                             = 1,
	ESlateDebuggingFocusEvent__FocusReceived                                         = 2,
	ESlateDebuggingFocusEvent__MAX                                                   = 3
};

/// Enum /Script/SlateCore.EFontHinting
/// Size: 0x06
enum class EFontHinting : uint8_t
{
	EFontHinting__Default                                                            = 0,
	EFontHinting__Auto                                                               = 1,
	EFontHinting__AutoLight                                                          = 2,
	EFontHinting__Monochrome                                                         = 3,
	EFontHinting__None                                                               = 4,
	EFontHinting__EFontHinting_MAX                                                   = 5
};

/// Enum /Script/SlateCore.EFontLoadingPolicy
/// Size: 0x04
enum class EFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy__LazyLoad                                                     = 0,
	EFontLoadingPolicy__Stream                                                       = 1,
	EFontLoadingPolicy__Inline                                                       = 2,
	EFontLoadingPolicy__EFontLoadingPolicy_MAX                                       = 3
};

/// Enum /Script/SlateCore.EFontLayoutMethod
/// Size: 0x03
enum class EFontLayoutMethod : uint8_t
{
	EFontLayoutMethod__Metrics                                                       = 0,
	EFontLayoutMethod__BoundingBox                                                   = 1,
	EFontLayoutMethod__EFontLayoutMethod_MAX                                         = 2
};

/// Enum /Script/SlateCore.ETextShapingMethod
/// Size: 0x04
enum class ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto                                                         = 0,
	ETextShapingMethod__KerningOnly                                                  = 1,
	ETextShapingMethod__FullShaping                                                  = 2,
	ETextShapingMethod__ETextShapingMethod_MAX                                       = 3
};

/// Enum /Script/SlateCore.EFocusCause
/// Size: 0x07
enum class EFocusCause : uint8_t
{
	EFocusCause__Mouse                                                               = 0,
	EFocusCause__Navigation                                                          = 1,
	EFocusCause__SetDirectly                                                         = 2,
	EFocusCause__Cleared                                                             = 3,
	EFocusCause__OtherWidgetLostFocus                                                = 4,
	EFocusCause__WindowActivate                                                      = 5,
	EFocusCause__EFocusCause_MAX                                                     = 6
};

/// Enum /Script/SlateCore.EWidgetClipping
/// Size: 0x06
enum class EWidgetClipping : uint8_t
{
	EWidgetClipping__Inherit                                                         = 0,
	EWidgetClipping__ClipToBounds                                                    = 1,
	EWidgetClipping__ClipToBoundsWithoutIntersecting                                 = 2,
	EWidgetClipping__ClipToBoundsAlways                                              = 3,
	EWidgetClipping__OnDemand                                                        = 4,
	EWidgetClipping__EWidgetClipping_MAX                                             = 5
};

/// Enum /Script/SlateCore.EFlowDirectionPreference
/// Size: 0x05
enum class EFlowDirectionPreference : uint8_t
{
	EFlowDirectionPreference__Inherit                                                = 0,
	EFlowDirectionPreference__Culture                                                = 1,
	EFlowDirectionPreference__LeftToRight                                            = 2,
	EFlowDirectionPreference__RightToLeft                                            = 3,
	EFlowDirectionPreference__EFlowDirectionPreference_MAX                           = 4
};

/// Enum /Script/SlateCore.ESlateBrushDrawType
/// Size: 0x06
enum class ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType                                                  = 0,
	ESlateBrushDrawType__Box                                                         = 1,
	ESlateBrushDrawType__Border                                                      = 2,
	ESlateBrushDrawType__Image                                                       = 3,
	ESlateBrushDrawType__RoundedBox                                                  = 4,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX                                     = 5
};

/// Enum /Script/SlateCore.ESlateBrushTileType
/// Size: 0x05
enum class ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile                                                      = 0,
	ESlateBrushTileType__Horizontal                                                  = 1,
	ESlateBrushTileType__Vertical                                                    = 2,
	ESlateBrushTileType__Both                                                        = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX                                     = 4
};

/// Enum /Script/SlateCore.ESlateBrushMirrorType
/// Size: 0x05
enum class ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror                                                  = 0,
	ESlateBrushMirrorType__Horizontal                                                = 1,
	ESlateBrushMirrorType__Vertical                                                  = 2,
	ESlateBrushMirrorType__Both                                                      = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX                                 = 4
};

/// Enum /Script/SlateCore.ESlateBrushImageType
/// Size: 0x05
enum class ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage                                                    = 0,
	ESlateBrushImageType__FullColor                                                  = 1,
	ESlateBrushImageType__Linear                                                     = 2,
	ESlateBrushImageType__Vector                                                     = 3,
	ESlateBrushImageType__ESlateBrushImageType_MAX                                   = 4
};

/// Enum /Script/SlateCore.ESlateBrushRoundingType
/// Size: 0x03
enum class ESlateBrushRoundingType : uint8_t
{
	ESlateBrushRoundingType__FixedRadius                                             = 0,
	ESlateBrushRoundingType__HalfHeightRadius                                        = 1,
	ESlateBrushRoundingType__ESlateBrushRoundingType_MAX                             = 2
};

/// Enum /Script/SlateCore.ESlateColorStylingMode
/// Size: 0x06
enum class ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified                                       = 0,
	ESlateColorStylingMode__UseColor_ColorTable                                      = 1,
	ESlateColorStylingMode__UseColor_Foreground                                      = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued                              = 3,
	ESlateColorStylingMode__UseColor_UseStyle                                        = 4,
	ESlateColorStylingMode__UseColor_MAX                                             = 5
};

/// Enum /Script/SlateCore.EConsumeMouseWheel
/// Size: 0x04
enum class EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible                                        = 0,
	EConsumeMouseWheel__Always                                                       = 1,
	EConsumeMouseWheel__Never                                                        = 2,
	EConsumeMouseWheel__EConsumeMouseWheel_MAX                                       = 3
};

/// Enum /Script/SlateCore.ESlateParentWindowSearchMethod
/// Size: 0x03
enum class ESlateParentWindowSearchMethod : uint8_t
{
	ESlateParentWindowSearchMethod__ActiveWindow                                     = 0,
	ESlateParentWindowSearchMethod__MainWindow                                       = 1,
	ESlateParentWindowSearchMethod__ESlateParentWindowSearchMethod_MAX               = 2
};

/// Enum /Script/SlateCore.ESlateCheckBoxType
/// Size: 0x03
enum class ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox                                                     = 0,
	ESlateCheckBoxType__ToggleButton                                                 = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX                                       = 2
};

/// Enum /Script/SlateCore.ECheckBoxState
/// Size: 0x04
enum class ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked                                                        = 0,
	ECheckBoxState__Checked                                                          = 1,
	ECheckBoxState__Undetermined                                                     = 2,
	ECheckBoxState__ECheckBoxState_MAX                                               = 3
};

/// Enum /Script/SlateCore.ETextOverflowPolicy
/// Size: 0x04
enum class ETextOverflowPolicy : uint8_t
{
	ETextOverflowPolicy__Clip                                                        = 0,
	ETextOverflowPolicy__Ellipsis                                                    = 1,
	ETextOverflowPolicy__MultilineEllipsis                                           = 2,
	ETextOverflowPolicy__ETextOverflowPolicy_MAX                                     = 3
};

/// Enum /Script/SlateCore.ETextTransformPolicy
/// Size: 0x04
enum class ETextTransformPolicy : uint8_t
{
	ETextTransformPolicy__None                                                       = 0,
	ETextTransformPolicy__ToLower                                                    = 1,
	ETextTransformPolicy__ToUpper                                                    = 2,
	ETextTransformPolicy__ETextTransformPolicy_MAX                                   = 3
};

/// Enum /Script/SlateCore.EStyleColor
/// Size: 0x62
enum class EStyleColor : uint8_t
{
	EStyleColor__Black                                                               = 0,
	EStyleColor__Background                                                          = 1,
	EStyleColor__Title                                                               = 2,
	EStyleColor__WindowBorder                                                        = 3,
	EStyleColor__Foldout                                                             = 4,
	EStyleColor__Input                                                               = 5,
	EStyleColor__InputOutline                                                        = 6,
	EStyleColor__Recessed                                                            = 7,
	EStyleColor__Panel                                                               = 8,
	EStyleColor__Header                                                              = 9,
	EStyleColor__Dropdown                                                            = 10,
	EStyleColor__DropdownOutline                                                     = 11,
	EStyleColor__Hover                                                               = 12,
	EStyleColor__Hover2                                                              = 13,
	EStyleColor__White                                                               = 14,
	EStyleColor__White25                                                             = 15,
	EStyleColor__Highlight                                                           = 16,
	EStyleColor__Primary                                                             = 17,
	EStyleColor__PrimaryHover                                                        = 18,
	EStyleColor__PrimaryPress                                                        = 19,
	EStyleColor__Secondary                                                           = 20,
	EStyleColor__Foreground                                                          = 21,
	EStyleColor__ForegroundHover                                                     = 22,
	EStyleColor__ForegroundInverted                                                  = 23,
	EStyleColor__ForegroundHeader                                                    = 24,
	EStyleColor__Select                                                              = 25,
	EStyleColor__SelectInactive                                                      = 26,
	EStyleColor__SelectParent                                                        = 27,
	EStyleColor__SelectHover                                                         = 28,
	EStyleColor__Notifications                                                       = 29,
	EStyleColor__AccentBlue                                                          = 30,
	EStyleColor__AccentPurple                                                        = 31,
	EStyleColor__AccentPink                                                          = 32,
	EStyleColor__AccentRed                                                           = 33,
	EStyleColor__AccentOrange                                                        = 34,
	EStyleColor__AccentYellow                                                        = 35,
	EStyleColor__AccentGreen                                                         = 36,
	EStyleColor__AccentBrown                                                         = 37,
	EStyleColor__AccentBlack                                                         = 38,
	EStyleColor__AccentGray                                                          = 39,
	EStyleColor__AccentWhite                                                         = 40,
	EStyleColor__AccentFolder                                                        = 41,
	EStyleColor__Warning                                                             = 42,
	EStyleColor__Error                                                               = 43,
	EStyleColor__Success                                                             = 44,
	EStyleColor__User1                                                               = 45,
	EStyleColor__User2                                                               = 46,
	EStyleColor__User3                                                               = 47,
	EStyleColor__User4                                                               = 48,
	EStyleColor__User5                                                               = 49,
	EStyleColor__User6                                                               = 50,
	EStyleColor__User7                                                               = 51,
	EStyleColor__User8                                                               = 52,
	EStyleColor__User9                                                               = 53,
	EStyleColor__User10                                                              = 54,
	EStyleColor__User11                                                              = 55,
	EStyleColor__User12                                                              = 56,
	EStyleColor__User13                                                              = 57,
	EStyleColor__User14                                                              = 58,
	EStyleColor__User15                                                              = 59,
	EStyleColor__User16                                                              = 60,
	EStyleColor__MAX                                                                 = 61
};

/// Class /Script/SlateCore.SlateWidgetStyleAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class USlateWidgetStyleAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class USlateWidgetStyleContainerBase*              CustomStyle;                                                // 0x0028   (0x0008)  
};

/// Class /Script/SlateCore.FontBulkData
/// Size: 0x0050 (0x000028 - 0x000078)
class UFontBulkData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0000   (0x0078)  MISSED
};

/// Class /Script/SlateCore.FontFaceInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFontFaceInterface : public UInterface
{ 
public:
};

/// Class /Script/SlateCore.FontProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFontProviderInterface : public UInterface
{ 
public:
};

/// Class /Script/SlateCore.SlateTypes
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateTypes : public UObject
{ 
public:
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerBase
/// Size: 0x0008 (0x000028 - 0x000030)
class USlateWidgetStyleContainerBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateWidgetStyleContainerInterface : public UInterface
{ 
public:
};

/// Struct /Script/SlateCore.StyleColorList
/// Size: 0x0988 (0x000000 - 0x000988)
struct FStyleColorList
{ 
	FLinearColor                                       StyleColors;                                                // 0x0000   (0x03D0)  
	unsigned char                                      UnknownData00_6[0x5B8];                                     // 0x03D0   (0x05B8)  MISSED
};

/// Class /Script/SlateCore.SlateThemeManager
/// Size: 0x0998 (0x000028 - 0x0009C0)
class USlateThemeManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FGuid                                              CurrentThemeId;                                             // 0x0028   (0x0010)  
	FStyleColorList                                    ActiveColors;                                               // 0x0038   (0x0988)  
};

/// Struct /Script/SlateCore.Geometry
/// Size: 0x0038 (0x000000 - 0x000038)
struct FGeometry
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/SlateCore.DeprecateSlateVector2D
/// Size: 0x0000 (0x000008 - 0x000008)
struct FDeprecateSlateVector2D : FVector2f
{ 
};

/// Struct /Script/SlateCore.Margin
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMargin
{ 
	float                                              Left;                                                       // 0x0000   (0x0004)  
	float                                              Top;                                                        // 0x0004   (0x0004)  
	float                                              Right;                                                      // 0x0008   (0x0004)  
	float                                              Bottom;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/SlateCore.SlateColor
/// Size: 0x0014 (0x000000 - 0x000014)
struct FSlateColor
{ 
	FLinearColor                                       SpecifiedColor;                                             // 0x0000   (0x0010)  
	ESlateColorStylingMode                             ColorUseRule;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/SlateCore.SlateBrushOutlineSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FSlateBrushOutlineSettings
{ 
	FVector4                                           CornerRadii;                                                // 0x0000   (0x0020)  
	FSlateColor                                        Color;                                                      // 0x0020   (0x0014)  
	float                                              Width;                                                      // 0x0034   (0x0004)  
	SDK_UNDEFINED(1,56) /* TEnumAsByte<ESlateBrushRoundingType> */ __um(RoundingType);                             // 0x0038   (0x0001)  
	bool                                               bUseBrushTransparency;                                      // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Struct /Script/SlateCore.SlateBrush
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FSlateBrush
{ 
	bool                                               bIsDynamicallyLoaded : 1;                                   // 0x0010:0 (0x0001)  
	bool                                               bHasUObject : 1;                                            // 0x0010:1 (0x0001)  
	SDK_UNDEFINED(1,57) /* TEnumAsByte<ESlateBrushDrawType> */ __um(DrawAs);                                       // 0x0011   (0x0001)  
	SDK_UNDEFINED(1,58) /* TEnumAsByte<ESlateBrushTileType> */ __um(Tiling);                                       // 0x0012   (0x0001)  
	SDK_UNDEFINED(1,59) /* TEnumAsByte<ESlateBrushMirrorType> */ __um(Mirroring);                                  // 0x0013   (0x0001)  
	SDK_UNDEFINED(1,60) /* TEnumAsByte<ESlateBrushImageType> */ __um(ImageType);                                   // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FDeprecateSlateVector2D                            ImageSize;                                                  // 0x0018   (0x0008)  
	FMargin                                            Margin;                                                     // 0x0020   (0x0010)  
	FSlateColor                                        TintColor;                                                  // 0x0030   (0x0014)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0044   (0x000C)  MISSED
	FSlateBrushOutlineSettings                         OutlineSettings;                                            // 0x0050   (0x0040)  
	class UObject*                                     ResourceObject;                                             // 0x0090   (0x0008)  
	FName                                              ResourceName;                                               // 0x0098   (0x0004)  
	FBox2f                                             UVRegion;                                                   // 0x009C   (0x0014)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00B0   (0x0010)  MISSED
};

/// Struct /Script/SlateCore.InputEvent
/// Size: 0x0020 (0x000000 - 0x000020)
struct FInputEvent
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/SlateCore.PointerEvent
/// Size: 0x0058 (0x000020 - 0x000078)
struct FPointerEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0020   (0x0058)  MISSED
};

/// Struct /Script/SlateCore.SlateWidgetStyle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.ScrollBarStyle
/// Size: 0x06D8 (0x000008 - 0x0006E0)
struct FScrollBarStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        HorizontalBackgroundImage;                                  // 0x0010   (0x00C0)  
	FSlateBrush                                        VerticalBackgroundImage;                                    // 0x00D0   (0x00C0)  
	FSlateBrush                                        VerticalTopSlotImage;                                       // 0x0190   (0x00C0)  
	FSlateBrush                                        HorizontalTopSlotImage;                                     // 0x0250   (0x00C0)  
	FSlateBrush                                        VerticalBottomSlotImage;                                    // 0x0310   (0x00C0)  
	FSlateBrush                                        HorizontalBottomSlotImage;                                  // 0x03D0   (0x00C0)  
	FSlateBrush                                        NormalThumbImage;                                           // 0x0490   (0x00C0)  
	FSlateBrush                                        HoveredThumbImage;                                          // 0x0550   (0x00C0)  
	FSlateBrush                                        DraggedThumbImage;                                          // 0x0610   (0x00C0)  
	float                                              Thickness;                                                  // 0x06D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x06D4   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.TableRowStyle
/// Size: 0x0C48 (0x000008 - 0x000C50)
struct FTableRowStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        SelectorFocusedBrush;                                       // 0x0010   (0x00C0)  
	FSlateBrush                                        ActiveHoveredBrush;                                         // 0x00D0   (0x00C0)  
	FSlateBrush                                        ActiveBrush;                                                // 0x0190   (0x00C0)  
	FSlateBrush                                        InactiveHoveredBrush;                                       // 0x0250   (0x00C0)  
	FSlateBrush                                        InactiveBrush;                                              // 0x0310   (0x00C0)  
	bool                                               bUseParentRowBrush;                                         // 0x03D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x03D1   (0x000F)  MISSED
	FSlateBrush                                        ParentRowBackgroundBrush;                                   // 0x03E0   (0x00C0)  
	FSlateBrush                                        ParentRowBackgroundHoveredBrush;                            // 0x04A0   (0x00C0)  
	FSlateBrush                                        EvenRowBackgroundHoveredBrush;                              // 0x0560   (0x00C0)  
	FSlateBrush                                        EvenRowBackgroundBrush;                                     // 0x0620   (0x00C0)  
	FSlateBrush                                        OddRowBackgroundHoveredBrush;                               // 0x06E0   (0x00C0)  
	FSlateBrush                                        OddRowBackgroundBrush;                                      // 0x07A0   (0x00C0)  
	FSlateColor                                        TextColor;                                                  // 0x0860   (0x0014)  
	FSlateColor                                        SelectedTextColor;                                          // 0x0874   (0x0014)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0888   (0x0008)  MISSED
	FSlateBrush                                        DropIndicator_Above;                                        // 0x0890   (0x00C0)  
	FSlateBrush                                        DropIndicator_Onto;                                         // 0x0950   (0x00C0)  
	FSlateBrush                                        DropIndicator_Below;                                        // 0x0A10   (0x00C0)  
	FSlateBrush                                        ActiveHighlightedBrush;                                     // 0x0AD0   (0x00C0)  
	FSlateBrush                                        InactiveHighlightedBrush;                                   // 0x0B90   (0x00C0)  
};

/// Struct /Script/SlateCore.SlateSound
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSlateSound
{ 
	class UObject*                                     ResourceObject;                                             // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/SlateCore.ButtonStyle
/// Size: 0x03A8 (0x000008 - 0x0003B0)
struct FButtonStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        Normal;                                                     // 0x0010   (0x00C0)  
	FSlateBrush                                        Hovered;                                                    // 0x00D0   (0x00C0)  
	FSlateBrush                                        Pressed;                                                    // 0x0190   (0x00C0)  
	FSlateBrush                                        Disabled;                                                   // 0x0250   (0x00C0)  
	FSlateColor                                        NormalForeground;                                           // 0x0310   (0x0014)  
	FSlateColor                                        HoveredForeground;                                          // 0x0324   (0x0014)  
	FSlateColor                                        PressedForeground;                                          // 0x0338   (0x0014)  
	FSlateColor                                        DisabledForeground;                                         // 0x034C   (0x0014)  
	FMargin                                            NormalPadding;                                              // 0x0360   (0x0010)  
	FMargin                                            PressedPadding;                                             // 0x0370   (0x0010)  
	FSlateSound                                        PressedSlateSound;                                          // 0x0380   (0x0018)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x0398   (0x0018)  
};

/// Struct /Script/SlateCore.ComboButtonStyle
/// Size: 0x0598 (0x000008 - 0x0005A0)
struct FComboButtonStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FButtonStyle                                       ButtonStyle;                                                // 0x0010   (0x03B0)  
	FSlateBrush                                        DownArrowImage;                                             // 0x03C0   (0x00C0)  
	FDeprecateSlateVector2D                            ShadowOffset;                                               // 0x0480   (0x0008)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x0488   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0498   (0x0008)  MISSED
	FSlateBrush                                        MenuBorderBrush;                                            // 0x04A0   (0x00C0)  
	FMargin                                            MenuBorderPadding;                                          // 0x0560   (0x0010)  
	FMargin                                            ContentPadding;                                             // 0x0570   (0x0010)  
	FMargin                                            DownArrowPadding;                                           // 0x0580   (0x0010)  
	SDK_UNDEFINED(1,61) /* TEnumAsByte<EVerticalAlignment> */ __um(DownArrowAlign);                                // 0x0590   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0591   (0x000F)  MISSED
};

/// Struct /Script/SlateCore.ComboBoxStyle
/// Size: 0x05F8 (0x000008 - 0x000600)
struct FComboBoxStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FComboButtonStyle                                  ComboButtonStyle;                                           // 0x0010   (0x05A0)  
	FSlateSound                                        PressedSlateSound;                                          // 0x05B0   (0x0018)  
	FSlateSound                                        SelectionChangeSlateSound;                                  // 0x05C8   (0x0018)  
	FMargin                                            ContentPadding;                                             // 0x05E0   (0x0010)  
	FMargin                                            MenuRowPadding;                                             // 0x05F0   (0x0010)  
};

/// Struct /Script/SlateCore.FontOutlineSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFontOutlineSettings
{ 
	int32_t                                            OutlineSize;                                                // 0x0000   (0x0004)  
	bool                                               bMiteredCorners;                                            // 0x0004   (0x0001)  
	bool                                               bSeparateFillAlpha;                                         // 0x0005   (0x0001)  
	bool                                               bApplyOutlineToDropShadows;                                 // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0007   (0x0001)  MISSED
	class UObject*                                     OutlineMaterial;                                            // 0x0008   (0x0008)  
	FLinearColor                                       OutlineColor;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/SlateCore.SlateFontInfo
/// Size: 0x0058 (0x000000 - 0x000058)
struct FSlateFontInfo
{ 
	class UObject*                                     FontObject;                                                 // 0x0000   (0x0008)  
	class UObject*                                     FontMaterial;                                               // 0x0008   (0x0008)  
	FFontOutlineSettings                               OutlineSettings;                                            // 0x0010   (0x0020)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0030   (0x0010)  MISSED
	FName                                              TypefaceFontName;                                           // 0x0040   (0x0004)  
	float                                              Size;                                                       // 0x0044   (0x0004)  
	int32_t                                            LetterSpacing;                                              // 0x0048   (0x0004)  
	float                                              SkewAmount;                                                 // 0x004C   (0x0004)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0050   (0x0001)  MISSED
	bool                                               bForceMonospaced;                                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0052   (0x0002)  MISSED
	float                                              MonospacedWidth;                                            // 0x0054   (0x0004)  
};

/// Struct /Script/SlateCore.EditableTextStyle
/// Size: 0x02B8 (0x000008 - 0x0002C0)
struct FEditableTextStyle : FSlateWidgetStyle
{ 
	FSlateFontInfo                                     Font;                                                       // 0x0008   (0x0058)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x0060   (0x0014)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0074   (0x000C)  MISSED
	FSlateBrush                                        BackgroundImageSelected;                                    // 0x0080   (0x00C0)  
	FSlateBrush                                        BackgroundImageComposing;                                   // 0x0140   (0x00C0)  
	FSlateBrush                                        CaretImage;                                                 // 0x0200   (0x00C0)  
};

/// Struct /Script/SlateCore.TextBlockStyle
/// Size: 0x0308 (0x000008 - 0x000310)
struct FTextBlockStyle : FSlateWidgetStyle
{ 
	FSlateFontInfo                                     Font;                                                       // 0x0008   (0x0058)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x0060   (0x0014)  
	FDeprecateSlateVector2D                            ShadowOffset;                                               // 0x0074   (0x0008)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x007C   (0x0010)  
	FSlateColor                                        SelectedBackgroundColor;                                    // 0x008C   (0x0014)  
	FSlateColor                                        HighlightColor;                                             // 0x00A0   (0x0014)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00B4   (0x000C)  MISSED
	FSlateBrush                                        HighlightShape;                                             // 0x00C0   (0x00C0)  
	FSlateBrush                                        StrikeBrush;                                                // 0x0180   (0x00C0)  
	FSlateBrush                                        UnderlineBrush;                                             // 0x0240   (0x00C0)  
	ETextTransformPolicy                               TransformPolicy;                                            // 0x0300   (0x0001)  
	ETextOverflowPolicy                                OverflowPolicy;                                             // 0x0301   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x0302   (0x000E)  MISSED
};

/// Struct /Script/SlateCore.EditableTextBoxStyle
/// Size: 0x0D78 (0x000008 - 0x000D80)
struct FEditableTextBoxStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundImageNormal;                                      // 0x0010   (0x00C0)  
	FSlateBrush                                        BackgroundImageHovered;                                     // 0x00D0   (0x00C0)  
	FSlateBrush                                        BackgroundImageFocused;                                     // 0x0190   (0x00C0)  
	FSlateBrush                                        BackgroundImageReadOnly;                                    // 0x0250   (0x00C0)  
	FMargin                                            Padding;                                                    // 0x0310   (0x0010)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0320   (0x0310)  
	FSlateColor                                        ForegroundColor;                                            // 0x0630   (0x0014)  
	FSlateColor                                        BackgroundColor;                                            // 0x0644   (0x0014)  
	FSlateColor                                        ReadOnlyForegroundColor;                                    // 0x0658   (0x0014)  
	FSlateColor                                        FocusedForegroundColor;                                     // 0x066C   (0x0014)  
	FMargin                                            HScrollBarPadding;                                          // 0x0680   (0x0010)  
	FMargin                                            VScrollBarPadding;                                          // 0x0690   (0x0010)  
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x06A0   (0x06E0)  
};

/// Struct /Script/SlateCore.SpinBoxStyle
/// Size: 0x0588 (0x000008 - 0x000590)
struct FSpinBoxStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x0010   (0x00C0)  
	FSlateBrush                                        ActiveBackgroundBrush;                                      // 0x00D0   (0x00C0)  
	FSlateBrush                                        HoveredBackgroundBrush;                                     // 0x0190   (0x00C0)  
	FSlateBrush                                        ActiveFillBrush;                                            // 0x0250   (0x00C0)  
	FSlateBrush                                        HoveredFillBrush;                                           // 0x0310   (0x00C0)  
	FSlateBrush                                        InactiveFillBrush;                                          // 0x03D0   (0x00C0)  
	FSlateBrush                                        ArrowsImage;                                                // 0x0490   (0x00C0)  
	FSlateColor                                        ForegroundColor;                                            // 0x0550   (0x0014)  
	FMargin                                            TextPadding;                                                // 0x0564   (0x0010)  
	FMargin                                            InsetPadding;                                               // 0x0574   (0x0010)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0584   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.CharacterEvent
/// Size: 0x0008 (0x000020 - 0x000028)
struct FCharacterEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.KeyEvent
/// Size: 0x0020 (0x000020 - 0x000040)
struct FKeyEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0020   (0x0020)  MISSED
};

/// Struct /Script/SlateCore.NavigationEvent
/// Size: 0x0008 (0x000020 - 0x000028)
struct FNavigationEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.AnalogInputEvent
/// Size: 0x0008 (0x000040 - 0x000048)
struct FAnalogInputEvent : FKeyEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.FocusEvent
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFocusEvent
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.MotionEvent
/// Size: 0x0060 (0x000020 - 0x000080)
struct FMotionEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0020   (0x0060)  MISSED
};

/// Struct /Script/SlateCore.TableViewStyle
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FTableViewStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x0010   (0x00C0)  
};

/// Struct /Script/SlateCore.FontSdfSettings
/// Size: 0x0004 (0x000000 - 0x000004)
struct FFontSdfSettings
{ 
	int32_t                                            BasePpem;                                                   // 0x0000   (0x0004)  
};

/// Struct /Script/SlateCore.FontData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFontData
{ 
	SDK_UNDEFINED(16,62) /* FString */                 __um(FontFilename);                                         // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0010   (0x0004)  MISSED
	EFontHinting                                       Hinting;                                                    // 0x0014   (0x0001)  
	EFontLoadingPolicy                                 LoadingPolicy;                                              // 0x0015   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	int32_t                                            SubFaceIndex;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	class UObject*                                     FontFaceAsset;                                              // 0x0020   (0x0008)  
};

/// Struct /Script/SlateCore.TypefaceEntry
/// Size: 0x0030 (0x000000 - 0x000030)
struct FTypefaceEntry
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FFontData                                          Font;                                                       // 0x0008   (0x0028)  
};

/// Struct /Script/SlateCore.Typeface
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTypeface
{ 
	TArray<FTypefaceEntry>                             Fonts;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/SlateCore.CompositeFallbackFont
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCompositeFallbackFont
{ 
	FTypeface                                          Typeface;                                                   // 0x0000   (0x0010)  
	float                                              ScalingFactor;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SlateCore.CompositeSubFont
/// Size: 0x0020 (0x000018 - 0x000038)
struct FCompositeSubFont : FCompositeFallbackFont
{ 
	TArray<FInt32Range>                                CharacterRanges;                                            // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,63) /* FString */                 __um(Cultures);                                             // 0x0028   (0x0010)  
};

/// Struct /Script/SlateCore.CompositeFont
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCompositeFont
{ 
	FTypeface                                          DefaultTypeface;                                            // 0x0000   (0x0010)  
	FCompositeFallbackFont                             FallbackTypeface;                                           // 0x0010   (0x0018)  
	TArray<FCompositeSubFont>                          SubTypefaces;                                               // 0x0028   (0x0010)  
	bool                                               bEnableAscentDescentOverride;                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/SlateCore.CaptureLostEvent
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCaptureLostEvent
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.CheckBoxStyle
/// Size: 0x0A08 (0x000008 - 0x000A10)
struct FCheckBoxStyle : FSlateWidgetStyle
{ 
	SDK_UNDEFINED(1,64) /* TEnumAsByte<ESlateCheckBoxType> */ __um(CheckBoxType);                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FSlateBrush                                        UncheckedImage;                                             // 0x0010   (0x00C0)  
	FSlateBrush                                        UncheckedHoveredImage;                                      // 0x00D0   (0x00C0)  
	FSlateBrush                                        UncheckedPressedImage;                                      // 0x0190   (0x00C0)  
	FSlateBrush                                        CheckedImage;                                               // 0x0250   (0x00C0)  
	FSlateBrush                                        CheckedHoveredImage;                                        // 0x0310   (0x00C0)  
	FSlateBrush                                        CheckedPressedImage;                                        // 0x03D0   (0x00C0)  
	FSlateBrush                                        UndeterminedImage;                                          // 0x0490   (0x00C0)  
	FSlateBrush                                        UndeterminedHoveredImage;                                   // 0x0550   (0x00C0)  
	FSlateBrush                                        UndeterminedPressedImage;                                   // 0x0610   (0x00C0)  
	FMargin                                            Padding;                                                    // 0x06D0   (0x0010)  
	FSlateBrush                                        BackgroundImage;                                            // 0x06E0   (0x00C0)  
	FSlateBrush                                        BackgroundHoveredImage;                                     // 0x07A0   (0x00C0)  
	FSlateBrush                                        BackgroundPressedImage;                                     // 0x0860   (0x00C0)  
	FSlateColor                                        ForegroundColor;                                            // 0x0920   (0x0014)  
	FSlateColor                                        HoveredForeground;                                          // 0x0934   (0x0014)  
	FSlateColor                                        PressedForeground;                                          // 0x0948   (0x0014)  
	FSlateColor                                        CheckedForeground;                                          // 0x095C   (0x0014)  
	FSlateColor                                        CheckedHoveredForeground;                                   // 0x0970   (0x0014)  
	FSlateColor                                        CheckedPressedForeground;                                   // 0x0984   (0x0014)  
	FSlateColor                                        UndeterminedForeground;                                     // 0x0998   (0x0014)  
	FSlateColor                                        BorderBackgroundColor;                                      // 0x09AC   (0x0014)  
	FSlateSound                                        CheckedSlateSound;                                          // 0x09C0   (0x0018)  
	FSlateSound                                        UncheckedSlateSound;                                        // 0x09D8   (0x0018)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x09F0   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0A08   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.SegmentedControlStyle
/// Size: 0x1F08 (0x000008 - 0x001F10)
struct FSegmentedControlStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FCheckBoxStyle                                     ControlStyle;                                               // 0x0010   (0x0A10)  
	FCheckBoxStyle                                     FirstControlStyle;                                          // 0x0A20   (0x0A10)  
	FCheckBoxStyle                                     LastControlStyle;                                           // 0x1430   (0x0A10)  
	FSlateBrush                                        BackgroundBrush;                                            // 0x1E40   (0x00C0)  
	FMargin                                            UniformPadding;                                             // 0x1F00   (0x0010)  
};

/// Struct /Script/SlateCore.HyperlinkStyle
/// Size: 0x06D8 (0x000008 - 0x0006E0)
struct FHyperlinkStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FButtonStyle                                       UnderlineStyle;                                             // 0x0010   (0x03B0)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x03C0   (0x0310)  
	FMargin                                            Padding;                                                    // 0x06D0   (0x0010)  
};

/// Struct /Script/SlateCore.InlineEditableTextBlockStyle
/// Size: 0x1098 (0x000008 - 0x0010A0)
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FEditableTextBoxStyle                              EditableTextBoxStyle;                                       // 0x0010   (0x0D80)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0D90   (0x0310)  
};

/// Struct /Script/SlateCore.ProgressBarStyle
/// Size: 0x0258 (0x000008 - 0x000260)
struct FProgressBarStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundImage;                                            // 0x0010   (0x00C0)  
	FSlateBrush                                        FillImage;                                                  // 0x00D0   (0x00C0)  
	FSlateBrush                                        MarqueeImage;                                               // 0x0190   (0x00C0)  
	bool                                               EnableFillAnimation;                                        // 0x0250   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0251   (0x000F)  MISSED
};

/// Struct /Script/SlateCore.ExpandableAreaStyle
/// Size: 0x0198 (0x000008 - 0x0001A0)
struct FExpandableAreaStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        CollapsedImage;                                             // 0x0010   (0x00C0)  
	FSlateBrush                                        ExpandedImage;                                              // 0x00D0   (0x00C0)  
	float                                              RolloutAnimationSeconds;                                    // 0x0190   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0194   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.SearchBoxStyle
/// Size: 0x1108 (0x000008 - 0x001110)
struct FSearchBoxStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FEditableTextBoxStyle                              TextBoxStyle;                                               // 0x0010   (0x0D80)  
	FSlateFontInfo                                     ActiveFontInfo;                                             // 0x0D90   (0x0058)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0DE8   (0x0008)  MISSED
	FSlateBrush                                        UpArrowImage;                                               // 0x0DF0   (0x00C0)  
	FSlateBrush                                        DownArrowImage;                                             // 0x0EB0   (0x00C0)  
	FSlateBrush                                        GlassImage;                                                 // 0x0F70   (0x00C0)  
	FSlateBrush                                        ClearImage;                                                 // 0x1030   (0x00C0)  
	FMargin                                            ImagePadding;                                               // 0x10F0   (0x0010)  
	bool                                               bLeftAlignButtons;                                          // 0x1100   (0x0001)  
	bool                                               bLeftAlignSearchResultButtons;                              // 0x1101   (0x0001)  
	bool                                               bLeftAlignGlassImageAndClearButton;                         // 0x1102   (0x0001)  
	unsigned char                                      UnknownData02_6[0xD];                                       // 0x1103   (0x000D)  MISSED
};

/// Struct /Script/SlateCore.SliderStyle
/// Size: 0x0498 (0x000008 - 0x0004A0)
struct FSliderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        NormalBarImage;                                             // 0x0010   (0x00C0)  
	FSlateBrush                                        HoveredBarImage;                                            // 0x00D0   (0x00C0)  
	FSlateBrush                                        DisabledBarImage;                                           // 0x0190   (0x00C0)  
	FSlateBrush                                        NormalThumbImage;                                           // 0x0250   (0x00C0)  
	FSlateBrush                                        HoveredThumbImage;                                          // 0x0310   (0x00C0)  
	FSlateBrush                                        DisabledThumbImage;                                         // 0x03D0   (0x00C0)  
	float                                              BarThickness;                                               // 0x0490   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0494   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.VolumeControlStyle
/// Size: 0x0868 (0x000008 - 0x000870)
struct FVolumeControlStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSliderStyle                                       SliderStyle;                                                // 0x0010   (0x04A0)  
	FSlateBrush                                        HighVolumeImage;                                            // 0x04B0   (0x00C0)  
	FSlateBrush                                        MidVolumeImage;                                             // 0x0570   (0x00C0)  
	FSlateBrush                                        LowVolumeImage;                                             // 0x0630   (0x00C0)  
	FSlateBrush                                        NoVolumeImage;                                              // 0x06F0   (0x00C0)  
	FSlateBrush                                        MutedImage;                                                 // 0x07B0   (0x00C0)  
};

/// Struct /Script/SlateCore.InlineTextImageStyle
/// Size: 0x00D8 (0x000008 - 0x0000E0)
struct FInlineTextImageStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        Image;                                                      // 0x0010   (0x00C0)  
	int16_t                                            Baseline;                                                   // 0x00D0   (0x0002)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x00D2   (0x000E)  MISSED
};

/// Struct /Script/SlateCore.SplitterStyle
/// Size: 0x0188 (0x000008 - 0x000190)
struct FSplitterStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        HandleNormalBrush;                                          // 0x0010   (0x00C0)  
	FSlateBrush                                        HandleHighlightBrush;                                       // 0x00D0   (0x00C0)  
};

/// Struct /Script/SlateCore.TableColumnHeaderStyle
/// Size: 0x06C8 (0x000008 - 0x0006D0)
struct FTableColumnHeaderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        SortPrimaryAscendingImage;                                  // 0x0010   (0x00C0)  
	FSlateBrush                                        SortPrimaryDescendingImage;                                 // 0x00D0   (0x00C0)  
	FSlateBrush                                        SortSecondaryAscendingImage;                                // 0x0190   (0x00C0)  
	FSlateBrush                                        SortSecondaryDescendingImage;                               // 0x0250   (0x00C0)  
	FSlateBrush                                        NormalBrush;                                                // 0x0310   (0x00C0)  
	FSlateBrush                                        HoveredBrush;                                               // 0x03D0   (0x00C0)  
	FSlateBrush                                        MenuDropdownImage;                                          // 0x0490   (0x00C0)  
	FSlateBrush                                        MenuDropdownNormalBorderBrush;                              // 0x0550   (0x00C0)  
	FSlateBrush                                        MenuDropdownHoveredBorderBrush;                             // 0x0610   (0x00C0)  
};

/// Struct /Script/SlateCore.HeaderRowStyle
/// Size: 0x10F8 (0x000008 - 0x001100)
struct FHeaderRowStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTableColumnHeaderStyle                            ColumnStyle;                                                // 0x0010   (0x06D0)  
	FTableColumnHeaderStyle                            LastColumnStyle;                                            // 0x06E0   (0x06D0)  
	FSplitterStyle                                     ColumnSplitterStyle;                                        // 0x0DB0   (0x0190)  
	float                                              SplitterHandleSize;                                         // 0x0F40   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0F44   (0x000C)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x0F50   (0x00C0)  
	FSlateColor                                        ForegroundColor;                                            // 0x1010   (0x0014)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x1024   (0x000C)  MISSED
	FSlateBrush                                        HorizontalSeparatorBrush;                                   // 0x1030   (0x00C0)  
	float                                              HorizontalSeparatorThickness;                               // 0x10F0   (0x0004)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x10F4   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.DockTabStyle
/// Size: 0x0C98 (0x000008 - 0x000CA0)
struct FDockTabStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FButtonStyle                                       CloseButtonStyle;                                           // 0x0010   (0x03B0)  
	FSlateBrush                                        NormalBrush;                                                // 0x03C0   (0x00C0)  
	FSlateBrush                                        ColorOverlayTabBrush;                                       // 0x0480   (0x00C0)  
	FSlateBrush                                        ColorOverlayIconBrush;                                      // 0x0540   (0x00C0)  
	FSlateBrush                                        ForegroundBrush;                                            // 0x0600   (0x00C0)  
	FSlateBrush                                        HoveredBrush;                                               // 0x06C0   (0x00C0)  
	FSlateBrush                                        ContentAreaBrush;                                           // 0x0780   (0x00C0)  
	FSlateBrush                                        TabWellBrush;                                               // 0x0840   (0x00C0)  
	FTextBlockStyle                                    TabTextStyle;                                               // 0x0900   (0x0310)  
	FMargin                                            TabPadding;                                                 // 0x0C10   (0x0010)  
	FDeprecateSlateVector2D                            IconSize;                                                   // 0x0C20   (0x0008)  
	float                                              OverlapWidth;                                               // 0x0C28   (0x0004)  
	FSlateColor                                        FlashColor;                                                 // 0x0C2C   (0x0014)  
	FSlateColor                                        NormalForegroundColor;                                      // 0x0C40   (0x0014)  
	FSlateColor                                        HoveredForegroundColor;                                     // 0x0C54   (0x0014)  
	FSlateColor                                        ActiveForegroundColor;                                      // 0x0C68   (0x0014)  
	FSlateColor                                        ForegroundForegroundColor;                                  // 0x0C7C   (0x0014)  
	float                                              IconBorderPadding;                                          // 0x0C90   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0C94   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.ScrollBoxStyle
/// Size: 0x0328 (0x000008 - 0x000330)
struct FScrollBoxStyle : FSlateWidgetStyle
{ 
	float                                              BarThickness;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FSlateBrush                                        TopShadowBrush;                                             // 0x0010   (0x00C0)  
	FSlateBrush                                        BottomShadowBrush;                                          // 0x00D0   (0x00C0)  
	FSlateBrush                                        LeftShadowBrush;                                            // 0x0190   (0x00C0)  
	FSlateBrush                                        RightShadowBrush;                                           // 0x0250   (0x00C0)  
	FMargin                                            HorizontalScrolledContentPadding;                           // 0x0310   (0x0010)  
	FMargin                                            VerticalScrolledContentPadding;                             // 0x0320   (0x0010)  
};

/// Struct /Script/SlateCore.ScrollBorderStyle
/// Size: 0x0188 (0x000008 - 0x000190)
struct FScrollBorderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        TopShadowBrush;                                             // 0x0010   (0x00C0)  
	FSlateBrush                                        BottomShadowBrush;                                          // 0x00D0   (0x00C0)  
};

/// Struct /Script/SlateCore.WindowStyle
/// Size: 0x1798 (0x000008 - 0x0017A0)
struct FWindowStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FButtonStyle                                       MinimizeButtonStyle;                                        // 0x0010   (0x03B0)  
	FButtonStyle                                       MaximizeButtonStyle;                                        // 0x03C0   (0x03B0)  
	FButtonStyle                                       RestoreButtonStyle;                                         // 0x0770   (0x03B0)  
	FButtonStyle                                       CloseButtonStyle;                                           // 0x0B20   (0x03B0)  
	FTextBlockStyle                                    TitleTextStyle;                                             // 0x0ED0   (0x0310)  
	FSlateBrush                                        ActiveTitleBrush;                                           // 0x11E0   (0x00C0)  
	FSlateBrush                                        InactiveTitleBrush;                                         // 0x12A0   (0x00C0)  
	FSlateBrush                                        FlashTitleBrush;                                            // 0x1360   (0x00C0)  
	FSlateColor                                        BackgroundColor;                                            // 0x1420   (0x0014)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x1434   (0x000C)  MISSED
	FSlateBrush                                        OutlineBrush;                                               // 0x1440   (0x00C0)  
	FSlateColor                                        OutlineColor;                                               // 0x1500   (0x0014)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x1514   (0x000C)  MISSED
	FSlateBrush                                        BorderBrush;                                                // 0x1520   (0x00C0)  
	FSlateColor                                        BorderColor;                                                // 0x15E0   (0x0014)  
	unsigned char                                      UnknownData03_5[0xC];                                       // 0x15F4   (0x000C)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x1600   (0x00C0)  
	FSlateBrush                                        ChildBackgroundBrush;                                       // 0x16C0   (0x00C0)  
	int32_t                                            WindowCornerRadius;                                         // 0x1780   (0x0004)  
	FMargin                                            BorderPadding;                                              // 0x1784   (0x0010)  
	unsigned char                                      UnknownData04_6[0xC];                                       // 0x1794   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.StyleTheme
/// Size: 0x0048 (0x000000 - 0x000048)
struct FStyleTheme
{ 
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Struct /Script/SlateCore.ToolBarStyle
/// Size: 0x3A68 (0x000008 - 0x003A70)
struct FToolBarStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x0010   (0x00C0)  
	FSlateBrush                                        ExpandBrush;                                                // 0x00D0   (0x00C0)  
	FSlateBrush                                        SeparatorBrush;                                             // 0x0190   (0x00C0)  
	FTextBlockStyle                                    LabelStyle;                                                 // 0x0250   (0x0310)  
	FEditableTextBoxStyle                              EditableTextStyle;                                          // 0x0560   (0x0D80)  
	FCheckBoxStyle                                     ToggleButton;                                               // 0x12E0   (0x0A10)  
	FComboButtonStyle                                  ComboButtonStyle;                                           // 0x1CF0   (0x05A0)  
	FButtonStyle                                       SettingsButtonStyle;                                        // 0x2290   (0x03B0)  
	FComboButtonStyle                                  SettingsComboButton;                                        // 0x2640   (0x05A0)  
	FCheckBoxStyle                                     SettingsToggleButton;                                       // 0x2BE0   (0x0A10)  
	FButtonStyle                                       ButtonStyle;                                                // 0x35F0   (0x03B0)  
	FMargin                                            LabelPadding;                                               // 0x39A0   (0x0010)  
	float                                              UniformBlockWidth;                                          // 0x39B0   (0x0004)  
	float                                              UniformBlockHeight;                                         // 0x39B4   (0x0004)  
	int32_t                                            NumColumns;                                                 // 0x39B8   (0x0004)  
	FMargin                                            IconPadding;                                                // 0x39BC   (0x0010)  
	FMargin                                            SeparatorPadding;                                           // 0x39CC   (0x0010)  
	FMargin                                            ComboButtonPadding;                                         // 0x39DC   (0x0010)  
	FMargin                                            ButtonPadding;                                              // 0x39EC   (0x0010)  
	FMargin                                            CheckBoxPadding;                                            // 0x39FC   (0x0010)  
	FMargin                                            BlockPadding;                                               // 0x3A0C   (0x0010)  
	FMargin                                            IndentedBlockPadding;                                       // 0x3A1C   (0x0010)  
	FMargin                                            BackgroundPadding;                                          // 0x3A2C   (0x0010)  
	FDeprecateSlateVector2D                            IconSize;                                                   // 0x3A3C   (0x0008)  
	bool                                               bShowLabels;                                                // 0x3A44   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x3A45   (0x0003)  MISSED
	float                                              ButtonContentMaxWidth;                                      // 0x3A48   (0x0004)  
	float                                              ButtonContentFillWidth;                                     // 0x3A4C   (0x0004)  
	FMargin                                            IconPaddingWithVisibleLabel;                                // 0x3A50   (0x0010)  
	FMargin                                            IconPaddingWithCollapsedLabel;                              // 0x3A60   (0x0010)  
};

