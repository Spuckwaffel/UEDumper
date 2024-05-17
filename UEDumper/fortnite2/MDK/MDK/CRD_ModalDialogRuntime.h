
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: UMG

/// Class /Script/CRD_ModalDialogRuntime.ModalDialogVariant
/// Size: 0x0020 (0x000408 - 0x000428)
class UModalDialogVariant : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	CMember(class UWidgetAnimation*)                   BoundAnim_Open                                              OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   BoundAnim_Response                                          OFFSET(get<T>, {0x410, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnResponseAnimationFinished                                 OFFSET(getStruct<T>, {0x418, 16, 0, 0})


	/// Functions
	// Function /Script/CRD_ModalDialogRuntime.ModalDialogVariant.SetIsModal
	// void SetIsModal(bool ModalState);                                                                                        // [0xc840084] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_ModalDialogRuntime.ModalDialogVariant.OnResponseAnimationFinished__DelegateSignature
	// void OnResponseAnimationFinished__DelegateSignature();                                                                   // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/CRD_ModalDialogRuntime.ModalDialogVariant.HasResponseAnimation
	// bool HasResponseAnimation();                                                                                             // [0xc840068] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogRuntime.ModalDialogVariant.HandleResponseAnimationFinished
	// void HandleResponseAnimationFinished();                                                                                  // [0xc840054] Final|Native|Private 
	// Function /Script/CRD_ModalDialogRuntime.ModalDialogVariant.AttemptToPlayResponseAnimation
	// void AttemptToPlayResponseAnimation();                                                                                   // [0xc840014] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_ModalDialogRuntime.ModalDialogVariant.AttemptToPlayOpenAnimation
	// void AttemptToPlayOpenAnimation();                                                                                       // [0xc83ffd4] Final|Native|Public|BlueprintCallable 
};

/// Enum /Script/CRD_ModalDialogRuntime.ECreativeModalBackActionBoundButtonOption
/// Size: 0x08
enum class ECreativeModalBackActionBoundButtonOption : uint8_t
{
	ECreativeModalBackActionBoundButtonOption__None                                  = 0,
	ECreativeModalBackActionBoundButtonOption__LastButton                            = 1,
	ECreativeModalBackActionBoundButtonOption__Button1                               = 2,
	ECreativeModalBackActionBoundButtonOption__Button2                               = 3,
	ECreativeModalBackActionBoundButtonOption__Button3                               = 4,
	ECreativeModalBackActionBoundButtonOption__Button4                               = 5,
	ECreativeModalBackActionBoundButtonOption__Button5                               = 6,
	ECreativeModalBackActionBoundButtonOption__Button6                               = 7
};

/// Enum /Script/CRD_ModalDialogRuntime.ECreativeModalDialogTimerOption
/// Size: 0x02
enum class ECreativeModalDialogTimerOption : uint8_t
{
	ECreativeModalDialogTimerOption__None                                            = 0,
	ECreativeModalDialogTimerOption__Countdown                                       = 1
};

/// Enum /Script/CRD_ModalDialogRuntime.ECreativeModalDialogAlignmentOption
/// Size: 0x16
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
	ECreativeModalDialogAlignmentOption__BottomWide                                  = 15
};

