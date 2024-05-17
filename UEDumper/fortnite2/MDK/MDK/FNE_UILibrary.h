
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

/// Class /Script/FNE_UILibrary.FNE_ModularButton
/// Size: 0x0010 (0x0014A0 - 0x0014B0)
class UFNE_ModularButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5296;

public:
	CMember(TArray<class UFNE_UIBlock*>)               ModularBlocks                                               OFFSET(get<T>, {0x14A0, 16, 0, 0})


	/// Functions
	// Function /Script/FNE_UILibrary.FNE_ModularButton.UnregisterModularBlock
	// void UnregisterModularBlock(class UFNE_UIBlock* bLock);                                                                  // [0xca9465c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_ModularButton.UnregisterAllModularBlocks
	// void UnregisterAllModularBlocks();                                                                                       // [0xca94648] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_ModularButton.SetBlocksTiming
	// void SetBlocksTiming(FFNE_UIBlockTiming& Timing);                                                                        // [0xca94480] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_ModularButton.RequestTransitionOnBlocks
	// void RequestTransitionOnBlocks(EFNE_UIBlockVisualState State);                                                           // [0xca9434c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_ModularButton.RequestInstantTransitionOnBlocks
	// void RequestInstantTransitionOnBlocks(EFNE_UIBlockInstantTransitionState State);                                         // [0xca9424c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_ModularButton.RegisterModularBlock
	// void RegisterModularBlock(class UFNE_UIBlock* bLock);                                                                    // [0xca940f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FNE_UILibrary.FNE_UIBlock
/// Size: 0x0040 (0x0002C8 - 0x000308)
class UFNE_UIBlock : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	SMember(FMulticastInlineDelegate)                  ViewportResizedEvent                                        OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})
	SMember(FFNE_UIBlockTiming)                        TransitionTiming                                            OFFSET(getStruct<T>, {0x2D8, 44, 0, 0})


	/// Functions
	// Function /Script/FNE_UILibrary.FNE_UIBlock.ViewportResizedEvent_Blueprint__DelegateSignature
	// void ViewportResizedEvent_Blueprint__DelegateSignature();                                                                // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.SetBlockTiming
	// void SetBlockTiming(FFNE_UIBlockTiming& Timing);                                                                         // [0xca943cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.RequestTransition
	// void RequestTransition(EFNE_UIBlockVisualState State);                                                                   // [0xca942cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.RequestInstantTransition
	// void RequestInstantTransition(EFNE_UIBlockInstantTransitionState State);                                                 // [0xca941cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.PlayTransition
	// void PlayTransition(class UWidgetAnimation* Animation, bool bPlayForward);                                               // [0xca93fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionUnhoveredRequested
	// void OnTransitionUnhoveredRequested();                                                                                   // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionUnfocusedRequested
	// void OnTransitionUnfocusedRequested();                                                                                   // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionSelectedRequested
	// void OnTransitionSelectedRequested();                                                                                    // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionReleasedRequested
	// void OnTransitionReleasedRequested();                                                                                    // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionPressedRequested
	// void OnTransitionPressedRequested();                                                                                     // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionHoveredRequested
	// void OnTransitionHoveredRequested();                                                                                     // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionFocusedRequested
	// void OnTransitionFocusedRequested();                                                                                     // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionEnabledRequested
	// void OnTransitionEnabledRequested();                                                                                     // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionDisabledRequested
	// void OnTransitionDisabledRequested();                                                                                    // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionDeselectedIdleRequested
	// void OnTransitionDeselectedIdleRequested();                                                                              // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionDeselectedFocusedRequested
	// void OnTransitionDeselectedFocusedRequested();                                                                           // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnInstantTransitionToUnlocked
	// void OnInstantTransitionToUnlocked();                                                                                    // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnInstantTransitionToSelected
	// void OnInstantTransitionToSelected();                                                                                    // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnInstantTransitionToLocked
	// void OnInstantTransitionToLocked();                                                                                      // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnInstantTransitionToEnabled
	// void OnInstantTransitionToEnabled();                                                                                     // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnInstantTransitionToDisabled
	// void OnInstantTransitionToDisabled();                                                                                    // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnInstantTransitionToDeselected
	// void OnInstantTransitionToDeselected();                                                                                  // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.GetTransitionTime
	// float GetTransitionTime(EFNE_UIBlockVisualState State);                                                                  // [0xca93f10] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FNE_UILibrary.FNE_UIBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFNE_UIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FNE_UILibrary.FNE_UIBlueprintFunctionLibrary.PlayAnimationDuringTime
	// void PlayAnimationDuringTime(class UUserWidget* Widget, class UWidgetAnimation* Animation, float PlayTime, bool bPlayForward); // [0xa96112c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FNE_UILibrary.FNE_CTAButton
/// Size: 0x0020 (0x0014B0 - 0x0014D0)
class UFNE_CTAButton : public UFNE_ModularButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x14B0, 16, 0, 0})
	SMember(FText)                                     SecondaryText                                               OFFSET(getStruct<T>, {0x14C0, 16, 0, 0})


	/// Functions
	// Function /Script/FNE_UILibrary.FNE_CTAButton.SetText
	// void SetText(FText& ButtonText);                                                                                         // [0xca945ac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_CTAButton.SetSecondaryText
	// void SetSecondaryText(FText& ButtonSecondaryText);                                                                       // [0xca94510] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_CTAButton.BP_SetText
	// void BP_SetText(FText& ButtonText);                                                                                      // [0x228deb8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_CTAButton.BP_SetSecondaryText
	// void BP_SetSecondaryText(FText& ButtonSecondaryText);                                                                    // [0x228deb8] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/FNE_UILibrary.FNE_StylableButton
/// Size: 0x0020 (0x0014B0 - 0x0014D0)
class UFNE_StylableButton : public UFNE_ModularButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x14B0, 16, 0, 0})
	SMember(FText)                                     SecondaryText                                               OFFSET(getStruct<T>, {0x14C0, 16, 0, 0})


	/// Functions
	// Function /Script/FNE_UILibrary.FNE_StylableButton.BP_SetText
	// void BP_SetText(FText& ButtonText);                                                                                      // [0x228deb8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_StylableButton.BP_SetSecondaryText
	// void BP_SetSecondaryText(FText& ButtonSecondaryText);                                                                    // [0x228deb8] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Struct /Script/FNE_UILibrary.FNE_UIBlockTiming
/// Size: 0x002C (0x000000 - 0x00002C)
class FFNE_UIBlockTiming : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(float)                                     Hovering                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Unhovering                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Focusing                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Unfocusing                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Pressing                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Releasing                                                   OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Disabling                                                   OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Enabling                                                    OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Selecting                                                   OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     DeselectingIdle                                             OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     DeselectingFocused                                          OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Enum /Script/FNE_UILibrary.EFNE_UIBlockVisualState
/// Size: 0x12
enum class EFNE_UIBlockVisualState : uint8_t
{
	EFNE_UIBlockVisualState__Invalid                                                 = 0,
	EFNE_UIBlockVisualState__Hovered                                                 = 1,
	EFNE_UIBlockVisualState__Unhovered                                               = 2,
	EFNE_UIBlockVisualState__Focused                                                 = 3,
	EFNE_UIBlockVisualState__Unfocused                                               = 4,
	EFNE_UIBlockVisualState__Pressed                                                 = 5,
	EFNE_UIBlockVisualState__Released                                                = 6,
	EFNE_UIBlockVisualState__Disabled                                                = 7,
	EFNE_UIBlockVisualState__Enabled                                                 = 8,
	EFNE_UIBlockVisualState__Selected                                                = 9,
	EFNE_UIBlockVisualState__DeselectedIdle                                          = 10,
	EFNE_UIBlockVisualState__DeselectedFocused                                       = 11
};

/// Enum /Script/FNE_UILibrary.EFNE_UIBlockInstantTransitionState
/// Size: 0x07
enum class EFNE_UIBlockInstantTransitionState : uint8_t
{
	EFNE_UIBlockInstantTransitionState__Invalid                                      = 0,
	EFNE_UIBlockInstantTransitionState__InstantEnabled                               = 1,
	EFNE_UIBlockInstantTransitionState__InstantDisabled                              = 2,
	EFNE_UIBlockInstantTransitionState__InstantSelected                              = 3,
	EFNE_UIBlockInstantTransitionState__InstantDeselected                            = 4,
	EFNE_UIBlockInstantTransitionState__InstantLocked                                = 5,
	EFNE_UIBlockInstantTransitionState__InstantUnlocked                              = 6
};

