
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: InputCore
/// dependency: SlateCore

/// Enum /Script/Slate.EVirtualKeyboardTrigger
/// Size: 0x03
enum class EVirtualKeyboardTrigger : uint8_t
{
	EVirtualKeyboardTrigger__OnFocusByPointer                                        = 0,
	EVirtualKeyboardTrigger__OnAllFocusEvents                                        = 1,
	EVirtualKeyboardTrigger__EVirtualKeyboardTrigger_MAX                             = 2
};

/// Enum /Script/Slate.EVirtualKeyboardDismissAction
/// Size: 0x04
enum class EVirtualKeyboardDismissAction : uint8_t
{
	EVirtualKeyboardDismissAction__TextChangeOnDismiss                               = 0,
	EVirtualKeyboardDismissAction__TextCommitOnAccept                                = 1,
	EVirtualKeyboardDismissAction__TextCommitOnDismiss                               = 2,
	EVirtualKeyboardDismissAction__EVirtualKeyboardDismissAction_MAX                 = 3
};

/// Enum /Script/Slate.ESelectionMode
/// Size: 0x05
enum class ESelectionMode : uint8_t
{
	ESelectionMode__None                                                             = 0,
	ESelectionMode__Single                                                           = 1,
	ESelectionMode__SingleToggle                                                     = 2,
	ESelectionMode__Multi                                                            = 3,
	ESelectionMode__ESelectionMode_MAX                                               = 4
};

/// Enum /Script/Slate.ETableViewMode
/// Size: 0x04
enum class ETableViewMode : uint8_t
{
	ETableViewMode__List                                                             = 0,
	ETableViewMode__Tile                                                             = 1,
	ETableViewMode__Tree                                                             = 2,
	ETableViewMode__ETableViewMode_MAX                                               = 3
};

/// Enum /Script/Slate.EMultiBoxType
/// Size: 0x09
enum class EMultiBoxType : uint8_t
{
	EMultiBoxType__MenuBar                                                           = 0,
	EMultiBoxType__ToolBar                                                           = 1,
	EMultiBoxType__VerticalToolBar                                                   = 2,
	EMultiBoxType__SlimHorizontalToolBar                                             = 3,
	EMultiBoxType__UniformToolBar                                                    = 4,
	EMultiBoxType__Menu                                                              = 5,
	EMultiBoxType__ButtonRow                                                         = 6,
	EMultiBoxType__SlimHorizontalUniformToolBar                                      = 7,
	EMultiBoxType__EMultiBoxType_MAX                                                 = 8
};

/// Enum /Script/Slate.EMultiBlockType
/// Size: 0x10
enum class EMultiBlockType : uint8_t
{
	EMultiBlockType__None                                                            = 0,
	EMultiBlockType__ButtonRow                                                       = 1,
	EMultiBlockType__EditableText                                                    = 2,
	EMultiBlockType__Heading                                                         = 3,
	EMultiBlockType__MenuEntry                                                       = 4,
	EMultiBlockType__Separator                                                       = 5,
	EMultiBlockType__ToolBarButton                                                   = 6,
	EMultiBlockType__ToolBarComboButton                                              = 7,
	EMultiBlockType__Widget                                                          = 8,
	EMultiBlockType__EMultiBlockType_MAX                                             = 9
};

/// Enum /Script/Slate.EDescendantScrollDestination
/// Size: 0x05
enum class EDescendantScrollDestination : uint8_t
{
	EDescendantScrollDestination__IntoView                                           = 0,
	EDescendantScrollDestination__TopOrLeft                                          = 1,
	EDescendantScrollDestination__Center                                             = 2,
	EDescendantScrollDestination__BottomOrRight                                      = 3,
	EDescendantScrollDestination__EDescendantScrollDestination_MAX                   = 4
};

/// Enum /Script/Slate.EScrollWhenFocusChanges
/// Size: 0x04
enum class EScrollWhenFocusChanges : uint8_t
{
	EScrollWhenFocusChanges__NoScroll                                                = 0,
	EScrollWhenFocusChanges__InstantScroll                                           = 1,
	EScrollWhenFocusChanges__AnimatedScroll                                          = 2,
	EScrollWhenFocusChanges__EScrollWhenFocusChanges_MAX                             = 3
};

/// Enum /Script/Slate.ECustomizedToolMenuVisibility
/// Size: 0x04
enum class ECustomizedToolMenuVisibility : uint32_t
{
	ECustomizedToolMenuVisibility__None                                              = 0,
	ECustomizedToolMenuVisibility__Visible                                           = 1,
	ECustomizedToolMenuVisibility__Hidden                                            = 2,
	ECustomizedToolMenuVisibility__ECustomizedToolMenuVisibility_MAX                 = 3
};

/// Enum /Script/Slate.EUserInterfaceActionType
/// Size: 0x07
enum class EUserInterfaceActionType : uint8_t
{
	EUserInterfaceActionType__None                                                   = 0,
	EUserInterfaceActionType__Button                                                 = 1,
	EUserInterfaceActionType__ToggleButton                                           = 2,
	EUserInterfaceActionType__RadioButton                                            = 3,
	EUserInterfaceActionType__Check                                                  = 4,
	EUserInterfaceActionType__CollapsedButton                                        = 5,
	EUserInterfaceActionType__EUserInterfaceActionType_MAX                           = 6
};

/// Enum /Script/Slate.EMultipleKeyBindingIndex
/// Size: 0x04
enum class EMultipleKeyBindingIndex : uint8_t
{
	EMultipleKeyBindingIndex__Primary                                                = 0,
	EMultipleKeyBindingIndex__Secondary                                              = 1,
	EMultipleKeyBindingIndex__NumChords                                              = 2,
	EMultipleKeyBindingIndex__EMultipleKeyBindingIndex_MAX                           = 3
};

/// Enum /Script/Slate.ETextJustify
/// Size: 0x06
enum class ETextJustify : uint8_t
{
	ETextJustify__Left                                                               = 0,
	ETextJustify__Center                                                             = 1,
	ETextJustify__Right                                                              = 2,
	ETextJustify__InvariantLeft                                                      = 3,
	ETextJustify__InvariantRight                                                     = 4,
	ETextJustify__ETextJustify_MAX                                                   = 5
};

/// Enum /Script/Slate.ETextWrappingPolicy
/// Size: 0x03
enum class ETextWrappingPolicy : uint8_t
{
	ETextWrappingPolicy__DefaultWrapping                                             = 0,
	ETextWrappingPolicy__AllowPerCharacterWrapping                                   = 1,
	ETextWrappingPolicy__ETextWrappingPolicy_MAX                                     = 2
};

/// Enum /Script/Slate.ETextFlowDirection
/// Size: 0x05
enum class ETextFlowDirection : uint8_t
{
	ETextFlowDirection__Auto                                                         = 0,
	ETextFlowDirection__LeftToRight                                                  = 1,
	ETextFlowDirection__RightToLeft                                                  = 2,
	ETextFlowDirection__Culture                                                      = 3,
	ETextFlowDirection__ETextFlowDirection_MAX                                       = 4
};

/// Enum /Script/Slate.EStretchDirection
/// Size: 0x04
enum class EStretchDirection : uint8_t
{
	EStretchDirection__Both                                                          = 0,
	EStretchDirection__DownOnly                                                      = 1,
	EStretchDirection__UpOnly                                                        = 2,
	EStretchDirection__EStretchDirection_MAX                                         = 3
};

/// Enum /Script/Slate.EStretch
/// Size: 0x10
enum class EStretch : uint8_t
{
	EStretch__None                                                                   = 0,
	EStretch__Fill                                                                   = 1,
	EStretch__ScaleToFit                                                             = 2,
	EStretch__ScaleToFitX                                                            = 3,
	EStretch__ScaleToFitY                                                            = 4,
	EStretch__ScaleToFill                                                            = 5,
	EStretch__ScaleBySafeZone                                                        = 6,
	EStretch__UserSpecified                                                          = 7,
	EStretch__UserSpecifiedWithClipping                                              = 8,
	EStretch__EStretch_MAX                                                           = 9
};

/// Enum /Script/Slate.EProgressBarFillType
/// Size: 0x08
enum class EProgressBarFillType : uint8_t
{
	EProgressBarFillType__LeftToRight                                                = 0,
	EProgressBarFillType__RightToLeft                                                = 1,
	EProgressBarFillType__FillFromCenter                                             = 2,
	EProgressBarFillType__FillFromCenterHorizontal                                   = 3,
	EProgressBarFillType__FillFromCenterVertical                                     = 4,
	EProgressBarFillType__TopToBottom                                                = 5,
	EProgressBarFillType__BottomToTop                                                = 6,
	EProgressBarFillType__EProgressBarFillType_MAX                                   = 7
};

/// Enum /Script/Slate.EProgressBarFillStyle
/// Size: 0x03
enum class EProgressBarFillStyle : uint8_t
{
	EProgressBarFillStyle__Mask                                                      = 0,
	EProgressBarFillStyle__Scale                                                     = 1,
	EProgressBarFillStyle__EProgressBarFillStyle_MAX                                 = 2
};

/// Enum /Script/Slate.EListItemAlignment
/// Size: 0x08
enum class EListItemAlignment : uint8_t
{
	EListItemAlignment__EvenlyDistributed                                            = 0,
	EListItemAlignment__EvenlySize                                                   = 1,
	EListItemAlignment__EvenlyWide                                                   = 2,
	EListItemAlignment__LeftAligned                                                  = 3,
	EListItemAlignment__RightAligned                                                 = 4,
	EListItemAlignment__CenterAligned                                                = 5,
	EListItemAlignment__Fill                                                         = 6,
	EListItemAlignment__EListItemAlignment_MAX                                       = 7
};

/// Class /Script/Slate.ToolMenuBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UToolMenuBase : public UObject
{ 
public:
};

/// Class /Script/Slate.SlateSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class USlateSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bExplicitCanvasChildZOrder;                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/Slate.ButtonWidgetStyle
/// Size: 0x03B0 (0x000030 - 0x0003E0)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FButtonStyle                                       ButtonStyle;                                                // 0x0030   (0x03B0)  
};

/// Class /Script/Slate.CheckBoxWidgetStyle
/// Size: 0x0A10 (0x000030 - 0x000A40)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FCheckBoxStyle                                     CheckBoxStyle;                                              // 0x0030   (0x0A10)  
};

/// Class /Script/Slate.ComboBoxWidgetStyle
/// Size: 0x0600 (0x000030 - 0x000630)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FComboBoxStyle                                     ComboBoxStyle;                                              // 0x0030   (0x0600)  
};

/// Class /Script/Slate.ComboButtonWidgetStyle
/// Size: 0x05A0 (0x000030 - 0x0005D0)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FComboButtonStyle                                  ComboButtonStyle;                                           // 0x0030   (0x05A0)  
};

/// Class /Script/Slate.EditableTextBoxWidgetStyle
/// Size: 0x0D80 (0x000030 - 0x000DB0)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FEditableTextBoxStyle                              EditableTextBoxStyle;                                       // 0x0030   (0x0D80)  
};

/// Class /Script/Slate.EditableTextWidgetStyle
/// Size: 0x02C0 (0x000030 - 0x0002F0)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FEditableTextStyle                                 EditableTextStyle;                                          // 0x0030   (0x02C0)  
};

/// Class /Script/Slate.ProgressWidgetStyle
/// Size: 0x0260 (0x000030 - 0x000290)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FProgressBarStyle                                  ProgressBarStyle;                                           // 0x0030   (0x0260)  
};

/// Class /Script/Slate.ScrollBarWidgetStyle
/// Size: 0x06E0 (0x000030 - 0x000710)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0030   (0x06E0)  
};

/// Class /Script/Slate.ScrollBoxWidgetStyle
/// Size: 0x0330 (0x000030 - 0x000360)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FScrollBoxStyle                                    ScrollBoxStyle;                                             // 0x0030   (0x0330)  
};

/// Class /Script/Slate.SpinBoxWidgetStyle
/// Size: 0x0590 (0x000030 - 0x0005C0)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FSpinBoxStyle                                      SpinBoxStyle;                                               // 0x0030   (0x0590)  
};

/// Class /Script/Slate.TextBlockWidgetStyle
/// Size: 0x0310 (0x000030 - 0x000340)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FTextBlockStyle                                    TextBlockStyle;                                             // 0x0030   (0x0310)  
};

/// Struct /Script/Slate.VirtualKeyboardOptions
/// Size: 0x0001 (0x000000 - 0x000001)
struct FVirtualKeyboardOptions
{ 
	bool                                               bEnableAutocorrect;                                         // 0x0000   (0x0001)  
};

/// Struct /Script/Slate.InputChord
/// Size: 0x0020 (0x000000 - 0x000020)
struct FInputChord
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	bool                                               bShift : 1;                                                 // 0x0018:0 (0x0001)  
	bool                                               bCtrl : 1;                                                  // 0x0018:1 (0x0001)  
	bool                                               bAlt : 1;                                                   // 0x0018:2 (0x0001)  
	bool                                               bCmd : 1;                                                   // 0x0018:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/Slate.Anchors
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAnchors
{ 
	FVector2D                                          Minimum;                                                    // 0x0000   (0x0010)  
	FVector2D                                          Maximum;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/Slate.CharRange
/// Size: 0x0004 (0x000000 - 0x000004)
struct FCharRange
{ 
	uint16_t                                           First;                                                      // 0x0000   (0x0002)  
	uint16_t                                           Last;                                                       // 0x0002   (0x0002)  
};

/// Struct /Script/Slate.CharRangeList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCharRangeList
{ 
	TArray<FCharRange>                                 Ranges;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/Slate.CustomizedToolMenuEntry
/// Size: 0x0004 (0x000000 - 0x000004)
struct FCustomizedToolMenuEntry
{ 
	ECustomizedToolMenuVisibility                      Visibility;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/Slate.CustomizedToolMenuSection
/// Size: 0x0004 (0x000000 - 0x000004)
struct FCustomizedToolMenuSection
{ 
	ECustomizedToolMenuVisibility                      Visibility;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/Slate.CustomizedToolMenuNameArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCustomizedToolMenuNameArray
{ 
	TArray<FName>                                      Names;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/Slate.ToolMenuProfile
/// Size: 0x01A0 (0x000000 - 0x0001A0)
struct FToolMenuProfile
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(80,65) /* TMap<FName, FCustomizedToolMenuEntry> */ __um(Entries);                                // 0x0008   (0x0050)  
	SDK_UNDEFINED(80,66) /* TMap<FName, FCustomizedToolMenuSection> */ __um(Sections);                             // 0x0058   (0x0050)  
	TArray<FName>                                      SuppressExtenders;                                          // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData01_6[0xE8];                                      // 0x00B8   (0x00E8)  MISSED
};

/// Struct /Script/Slate.CustomizedToolMenu
/// Size: 0x0060 (0x0001A0 - 0x000200)
struct FCustomizedToolMenu : FToolMenuProfile
{ 
	SDK_UNDEFINED(80,67) /* TMap<FName, FCustomizedToolMenuNameArray> */ __um(EntryOrder);                         // 0x01A0   (0x0050)  
	TArray<FName>                                      SectionOrder;                                               // 0x01F0   (0x0010)  
};

