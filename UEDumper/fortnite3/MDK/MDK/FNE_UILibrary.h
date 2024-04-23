
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
/// Size: 0x0010 (0x001480 - 0x001490)
class UFNE_ModularButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5264;

public:
	CMember(TArray<class UFNE_UIBlock*>)               ModularBlocks                                               OFFSET(get<T>, {0x1480, 16, 0, 0})


	/// Functions
	// Function /Script/FNE_UILibrary.FNE_ModularButton.UnregisterModularBlock
	// void UnregisterModularBlock(class UFNE_UIBlock* bLock);                                                                  // [0xc960d38] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_ModularButton.UnregisterAllModularBlocks
	// void UnregisterAllModularBlocks();                                                                                       // [0xc960d24] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_ModularButton.SetBlocksTiming
	// void SetBlocksTiming(FFNE_UIBlockTiming& Timing);                                                                        // [0xc960b5c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_ModularButton.RequestTransitionOnBlocks
	// void RequestTransitionOnBlocks(EFNE_UIBlockVisualState State);                                                           // [0xc960a28] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_ModularButton.RequestInstantTransitionOnBlocks
	// void RequestInstantTransitionOnBlocks(EFNE_UIBlockInstantTransitionState State);                                         // [0xc960928] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_ModularButton.RegisterModularBlock
	// void RegisterModularBlock(class UFNE_UIBlock* bLock);                                                                    // [0xc9607cc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FNE_UILibrary.FNE_UIBlock
/// Size: 0x0030 (0x0002C8 - 0x0002F8)
class UFNE_UIBlock : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FFNE_UIBlockTiming)                        TransitionTiming                                            OFFSET(getStruct<T>, {0x2C8, 44, 0, 0})


	/// Functions
	// Function /Script/FNE_UILibrary.FNE_UIBlock.SetBlockTiming
	// void SetBlockTiming(FFNE_UIBlockTiming& Timing);                                                                         // [0xc960aa8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.RequestTransition
	// void RequestTransition(EFNE_UIBlockVisualState State);                                                                   // [0xc9609a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.RequestInstantTransition
	// void RequestInstantTransition(EFNE_UIBlockInstantTransitionState State);                                                 // [0xc9608a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.PlayTransition
	// void PlayTransition(class UWidgetAnimation* Animation, bool bPlayForward);                                               // [0xc96067c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionUnhoveredRequested
	// void OnTransitionUnhoveredRequested();                                                                                   // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionUnfocusedRequested
	// void OnTransitionUnfocusedRequested();                                                                                   // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionSelectedRequested
	// void OnTransitionSelectedRequested();                                                                                    // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionReleasedRequested
	// void OnTransitionReleasedRequested();                                                                                    // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionPressedRequested
	// void OnTransitionPressedRequested();                                                                                     // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionHoveredRequested
	// void OnTransitionHoveredRequested();                                                                                     // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionFocusedRequested
	// void OnTransitionFocusedRequested();                                                                                     // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionEnabledRequested
	// void OnTransitionEnabledRequested();                                                                                     // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionDisabledRequested
	// void OnTransitionDisabledRequested();                                                                                    // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionDeselectedIdleRequested
	// void OnTransitionDeselectedIdleRequested();                                                                              // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionDeselectedFocusedRequested
	// void OnTransitionDeselectedFocusedRequested();                                                                           // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnInstantTransitionToUnlocked
	// void OnInstantTransitionToUnlocked();                                                                                    // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnInstantTransitionToSelected
	// void OnInstantTransitionToSelected();                                                                                    // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnInstantTransitionToLocked
	// void OnInstantTransitionToLocked();                                                                                      // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnInstantTransitionToEnabled
	// void OnInstantTransitionToEnabled();                                                                                     // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnInstantTransitionToDisabled
	// void OnInstantTransitionToDisabled();                                                                                    // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnInstantTransitionToDeselected
	// void OnInstantTransitionToDeselected();                                                                                  // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.GetTransitionTime
	// float GetTransitionTime(EFNE_UIBlockVisualState State);                                                                  // [0xc9605ec] Final|Native|Public|BlueprintCallable|BlueprintPure 
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
	// void PlayAnimationDuringTime(class UUserWidget* Widget, class UWidgetAnimation* Animation, float PlayTime, bool bPlayForward); // [0xa85be30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FNE_UILibrary.FNE_CTAButton
/// Size: 0x0020 (0x001490 - 0x0014B0)
class UFNE_CTAButton : public UFNE_ModularButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5296;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x1490, 16, 0, 0})
	SMember(FText)                                     SecondaryText                                               OFFSET(getStruct<T>, {0x14A0, 16, 0, 0})


	/// Functions
	// Function /Script/FNE_UILibrary.FNE_CTAButton.SetText
	// void SetText(FText& ButtonText);                                                                                         // [0xc960c88] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_CTAButton.SetSecondaryText
	// void SetSecondaryText(FText& ButtonSecondaryText);                                                                       // [0xc960bec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_CTAButton.BP_SetText
	// void BP_SetText(FText& ButtonText);                                                                                      // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_CTAButton.BP_SetSecondaryText
	// void BP_SetSecondaryText(FText& ButtonSecondaryText);                                                                    // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/FNE_UILibrary.FNE_StylableButton
/// Size: 0x0020 (0x001490 - 0x0014B0)
class UFNE_StylableButton : public UFNE_ModularButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5296;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x1490, 16, 0, 0})
	SMember(FText)                                     SecondaryText                                               OFFSET(getStruct<T>, {0x14A0, 16, 0, 0})


	/// Functions
	// Function /Script/FNE_UILibrary.FNE_StylableButton.BP_SetText
	// void BP_SetText(FText& ButtonText);                                                                                      // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_StylableButton.BP_SetSecondaryText
	// void BP_SetSecondaryText(FText& ButtonSecondaryText);                                                                    // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
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
/// Size: 0x13
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
	EFNE_UIBlockVisualState__DeselectedFocused                                       = 11,
	EFNE_UIBlockVisualState__EFNE_MAX                                                = 12
};

/// Enum /Script/FNE_UILibrary.EFNE_UIBlockInstantTransitionState
/// Size: 0x08
enum class EFNE_UIBlockInstantTransitionState : uint8_t
{
	EFNE_UIBlockInstantTransitionState__Invalid                                      = 0,
	EFNE_UIBlockInstantTransitionState__InstantEnabled                               = 1,
	EFNE_UIBlockInstantTransitionState__InstantDisabled                              = 2,
	EFNE_UIBlockInstantTransitionState__InstantSelected                              = 3,
	EFNE_UIBlockInstantTransitionState__InstantDeselected                            = 4,
	EFNE_UIBlockInstantTransitionState__InstantLocked                                = 5,
	EFNE_UIBlockInstantTransitionState__InstantUnlocked                              = 6,
	EFNE_UIBlockInstantTransitionState__EFNE_MAX                                     = 7
};

