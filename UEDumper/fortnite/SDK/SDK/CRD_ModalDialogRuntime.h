
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: UMG

/// Enum /Script/CRD_ModalDialogRuntime.ECreativeModalBackActionBoundButtonOption
/// Size: 0x09
enum class ECreativeModalBackActionBoundButtonOption : uint8_t
{
	ECreativeModalBackActionBoundButtonOption__None                                  = 0,
	ECreativeModalBackActionBoundButtonOption__LastButton                            = 1,
	ECreativeModalBackActionBoundButtonOption__Button1                               = 2,
	ECreativeModalBackActionBoundButtonOption__Button2                               = 3,
	ECreativeModalBackActionBoundButtonOption__Button3                               = 4,
	ECreativeModalBackActionBoundButtonOption__Button4                               = 5,
	ECreativeModalBackActionBoundButtonOption__Button5                               = 6,
	ECreativeModalBackActionBoundButtonOption__Button6                               = 7,
	ECreativeModalBackActionBoundButtonOption__ECreativeModalBackActionBoundButtonOption_MAX = 8
};

/// Enum /Script/CRD_ModalDialogRuntime.ECreativeModalDialogTimerOption
/// Size: 0x03
enum class ECreativeModalDialogTimerOption : uint8_t
{
	ECreativeModalDialogTimerOption__None                                            = 0,
	ECreativeModalDialogTimerOption__Countdown                                       = 1,
	ECreativeModalDialogTimerOption__ECreativeModalDialogTimerOption_MAX             = 2
};

/// Enum /Script/CRD_ModalDialogRuntime.ECreativeModalDialogAlignmentOption
/// Size: 0x17
enum class ECreativeModalDialogAlignmentOption : uint8_t
{
	ECreativeModalDialogAlignmentOption__TopLeft                                     = 0,
	ECreativeModalDialogAlignmentOption__TopCenter                                   = 1,
	ECreativeModalDialogAlignmentOption__TopRight                                    = 2,
	ECreativeModalDialogAlignmentOption__MiddleLeft                                  = 3,
	ECreativeModalDialogAlignmentOption__Centered                                    = 4,
	ECreativeModalDialogAlignmentOption__MiddleRight                                 = 5,
	ECreativeModalDialogAlignmentOption__BottomLeft                                  = 6,
	ECreativeModalDialogAlignmentOption__BottomCenter                                = 7,
	ECreativeModalDialogAlignmentOption__BottomRight                                 = 8,
	ECreativeModalDialogAlignmentOption__CenteredFull                                = 9,
	ECreativeModalDialogAlignmentOption__LeftTall                                    = 10,
	ECreativeModalDialogAlignmentOption__CenteredTall                                = 11,
	ECreativeModalDialogAlignmentOption__RightTall                                   = 12,
	ECreativeModalDialogAlignmentOption__TopWide                                     = 13,
	ECreativeModalDialogAlignmentOption__CenteredWide                                = 14,
	ECreativeModalDialogAlignmentOption__BottomWide                                  = 15,
	ECreativeModalDialogAlignmentOption__ECreativeModalDialogAlignmentOption_MAX     = 16
};

/// Class /Script/CRD_ModalDialogRuntime.ModalDialogVariant
/// Size: 0x0020 (0x000400 - 0x000420)
class UModalDialogVariant : public UCommonActivatableWidget
{ 
public:
	class UWidgetAnimation*                            BoundAnim_Open;                                             // 0x0400   (0x0008)  
	class UWidgetAnimation*                            BoundAnim_Response;                                         // 0x0408   (0x0008)  
	SDK_UNDEFINED(16,12589) /* FMulticastInlineDelegate */ __um(OnResponseAnimationFinished);                      // 0x0410   (0x0010)  


	/// Functions
	// Function /Script/CRD_ModalDialogRuntime.ModalDialogVariant.OnResponseAnimationFinished__DelegateSignature
	// void OnResponseAnimationFinished__DelegateSignature();                                                                // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/CRD_ModalDialogRuntime.ModalDialogVariant.HasResponseAnimation
	// bool HasResponseAnimation();                                                                                          // [0xac4b018] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogRuntime.ModalDialogVariant.HandleResponseAnimationFinished
	// void HandleResponseAnimationFinished();                                                                               // [0xac4b004] Final|Native|Private 
	// Function /Script/CRD_ModalDialogRuntime.ModalDialogVariant.AttemptToPlayResponseAnimation
	// void AttemptToPlayResponseAnimation();                                                                                // [0xac4afc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_ModalDialogRuntime.ModalDialogVariant.AttemptToPlayOpenAnimation
	// void AttemptToPlayOpenAnimation();                                                                                    // [0xac4af84] Final|Native|Public|BlueprintCallable 
};

