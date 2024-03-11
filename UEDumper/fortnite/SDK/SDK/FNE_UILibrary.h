
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

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

/// Class /Script/FNE_UILibrary.FNE_ModularButton
/// Size: 0x0010 (0x001490 - 0x0014A0)
class UFNE_ModularButton : public UCommonButtonBase
{ 
public:
	TArray<class UFNE_UIBlock*>                        ModularBlocks;                                              // 0x1490   (0x0010)  


	/// Functions
	// Function /Script/FNE_UILibrary.FNE_ModularButton.UnregisterModularBlock
	// void UnregisterModularBlock(class UFNE_UIBlock* bLock);                                                               // [0xaca3fa4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_ModularButton.UnregisterAllModularBlocks
	// void UnregisterAllModularBlocks();                                                                                    // [0xaca3f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_ModularButton.SetBlocksTiming
	// void SetBlocksTiming(FFNE_UIBlockTiming& Timing);                                                                     // [0xaca3dc8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_ModularButton.RequestTransitionOnBlocks
	// void RequestTransitionOnBlocks(EFNE_UIBlockVisualState State);                                                        // [0xaca3c94] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_ModularButton.RequestInstantTransitionOnBlocks
	// void RequestInstantTransitionOnBlocks(EFNE_UIBlockInstantTransitionState State);                                      // [0xaca3b94] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_ModularButton.RegisterModularBlock
	// void RegisterModularBlock(class UFNE_UIBlock* bLock);                                                                 // [0xaca3a38] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/FNE_UILibrary.FNE_UIBlockTiming
/// Size: 0x002C (0x000000 - 0x00002C)
struct FFNE_UIBlockTiming
{ 
	float                                              Hovering;                                                   // 0x0000   (0x0004)  
	float                                              Unhovering;                                                 // 0x0004   (0x0004)  
	float                                              Focusing;                                                   // 0x0008   (0x0004)  
	float                                              Unfocusing;                                                 // 0x000C   (0x0004)  
	float                                              Pressing;                                                   // 0x0010   (0x0004)  
	float                                              Releasing;                                                  // 0x0014   (0x0004)  
	float                                              Disabling;                                                  // 0x0018   (0x0004)  
	float                                              Enabling;                                                   // 0x001C   (0x0004)  
	float                                              Selecting;                                                  // 0x0020   (0x0004)  
	float                                              DeselectingIdle;                                            // 0x0024   (0x0004)  
	float                                              DeselectingFocused;                                         // 0x0028   (0x0004)  
};

/// Class /Script/FNE_UILibrary.FNE_UIBlock
/// Size: 0x0030 (0x0002C0 - 0x0002F0)
class UFNE_UIBlock : public UUserWidget
{ 
public:
	FFNE_UIBlockTiming                                 TransitionTiming;                                           // 0x02C0   (0x002C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02EC   (0x0004)  MISSED


	/// Functions
	// Function /Script/FNE_UILibrary.FNE_UIBlock.SetBlockTiming
	// void SetBlockTiming(FFNE_UIBlockTiming& Timing);                                                                      // [0xaca3d14] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.RequestTransition
	// void RequestTransition(EFNE_UIBlockVisualState State);                                                                // [0xaca3c14] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.RequestInstantTransition
	// void RequestInstantTransition(EFNE_UIBlockInstantTransitionState State);                                              // [0xaca3b14] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.PlayTransition
	// void PlayTransition(class UWidgetAnimation* Animation, bool bPlayForward);                                            // [0xaca38e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionUnhoveredRequested
	// void OnTransitionUnhoveredRequested();                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionUnfocusedRequested
	// void OnTransitionUnfocusedRequested();                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionSelectedRequested
	// void OnTransitionSelectedRequested();                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionReleasedRequested
	// void OnTransitionReleasedRequested();                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionPressedRequested
	// void OnTransitionPressedRequested();                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionHoveredRequested
	// void OnTransitionHoveredRequested();                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionFocusedRequested
	// void OnTransitionFocusedRequested();                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionEnabledRequested
	// void OnTransitionEnabledRequested();                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionDisabledRequested
	// void OnTransitionDisabledRequested();                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionDeselectedIdleRequested
	// void OnTransitionDeselectedIdleRequested();                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnTransitionDeselectedFocusedRequested
	// void OnTransitionDeselectedFocusedRequested();                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnInstantTransitionToUnlocked
	// void OnInstantTransitionToUnlocked();                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnInstantTransitionToSelected
	// void OnInstantTransitionToSelected();                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnInstantTransitionToLocked
	// void OnInstantTransitionToLocked();                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnInstantTransitionToEnabled
	// void OnInstantTransitionToEnabled();                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnInstantTransitionToDisabled
	// void OnInstantTransitionToDisabled();                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.OnInstantTransitionToDeselected
	// void OnInstantTransitionToDeselected();                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_UIBlock.GetTransitionTime
	// float GetTransitionTime(EFNE_UIBlockVisualState State);                                                               // [0xaca3858] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FNE_UILibrary.FNE_UIBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFNE_UIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/FNE_UILibrary.FNE_UIBlueprintFunctionLibrary.PlayAnimationDuringTime
	// void PlayAnimationDuringTime(class UUserWidget* Widget, class UWidgetAnimation* Animation, float PlayTime, bool bPlayForward); // [0x99ce0e4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FNE_UILibrary.FNE_CTAButton
/// Size: 0x0030 (0x0014A0 - 0x0014D0)
class UFNE_CTAButton : public UFNE_ModularButton
{ 
public:
	SDK_UNDEFINED(24,13923) /* FText */                __um(Text);                                                 // 0x14A0   (0x0018)  
	SDK_UNDEFINED(24,13924) /* FText */                __um(SecondaryText);                                        // 0x14B8   (0x0018)  


	/// Functions
	// Function /Script/FNE_UILibrary.FNE_CTAButton.SetText
	// void SetText(FText& ButtonText);                                                                                      // [0xaca3ef4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_CTAButton.SetSecondaryText
	// void SetSecondaryText(FText& ButtonSecondaryText);                                                                    // [0xaca3e58] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_UILibrary.FNE_CTAButton.BP_SetText
	// void BP_SetText(FText& ButtonText);                                                                                   // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FNE_UILibrary.FNE_CTAButton.BP_SetSecondaryText
	// void BP_SetSecondaryText(FText& ButtonSecondaryText);                                                                 // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

