
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: Paper2D
/// dependency: UMG

/// Class /Script/EventModeUI.FocusButton
/// Size: 0x0010 (0x000430 - 0x000440)
class UFocusButton : public UBacchusActionButton
{ 
public:
	class UPaperSprite*                                StartFocusingSprite;                                        // 0x0430   (0x0008)  
	class UPaperSprite*                                StopFocusingSprite;                                         // 0x0438   (0x0008)  


	/// Functions
	// Function /Script/EventModeUI.FocusButton.HandleEventModeFocusingChanged
	// void HandleEventModeFocusingChanged(bool bIsEventModeFocusing);                                                       // [0xa90d8ec] Final|Native|Private 
	// Function /Script/EventModeUI.FocusButton.HandleCanUseEventModeFocusChanged
	// void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus);                                                   // [0xa90d870] Final|Native|Private 
};

/// Class /Script/EventModeUI.FortEventModeEmotesWidget
/// Size: 0x0098 (0x000328 - 0x0003C0)
class UFortEventModeEmotesWidget : public UFortHUDElementWidget
{ 
public:
	SDK_UNDEFINED(32,13537) /* TWeakObjectPtr<UFortMontageItemDefinitionBase*> */ __um(Emote1);                    // 0x0328   (0x0020)  
	SDK_UNDEFINED(32,13538) /* TWeakObjectPtr<UFortMontageItemDefinitionBase*> */ __um(Emote2);                    // 0x0348   (0x0020)  
	SDK_UNDEFINED(32,13539) /* TWeakObjectPtr<UFortMontageItemDefinitionBase*> */ __um(Emote3);                    // 0x0368   (0x0020)  
	SDK_UNDEFINED(16,13540) /* TArray<TWeakObjectPtr<UFortMontageItemDefinitionBase*>> */ __um(RandomEmotes);      // 0x0388   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0398   (0x0008)  MISSED
	class URichTextBlock*                              Text_Emote1;                                                // 0x03A0   (0x0008)  
	class URichTextBlock*                              Text_Emote2;                                                // 0x03A8   (0x0008)  
	class URichTextBlock*                              Text_Emote3;                                                // 0x03B0   (0x0008)  
	class URichTextBlock*                              Text_EmoteRandom;                                           // 0x03B8   (0x0008)  


	/// Functions
	// Function /Script/EventModeUI.FortEventModeEmotesWidget.OnFocusStateChanged
	// void OnFocusStateChanged(bool bIsFocusing);                                                                           // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/EventModeUI.FortEventModeEmotesWidget.OnFocusAvailableChanged
	// void OnFocusAvailableChanged(bool bIsFocusAvailable);                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/EventModeUI.FortMobileActionButtonBehavior_Focus
/// Size: 0x0008 (0x000138 - 0x000140)
class UFortMobileActionButtonBehavior_Focus : public UFortMobileActionButtonBehavior
{ 
public:
	class UPaperSprite*                                StopFocusingSprite;                                         // 0x0138   (0x0008)  


	/// Functions
	// Function /Script/EventModeUI.FortMobileActionButtonBehavior_Focus.HandleEventModeFocusingChanged
	// void HandleEventModeFocusingChanged(bool bIsEventModeFocusing);                                                       // [0x9bb0f68] Final|Native|Private 
	// Function /Script/EventModeUI.FortMobileActionButtonBehavior_Focus.HandleCanUseEventModeFocusChanged
	// void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus);                                                   // [0x9bb0fe8] Final|Native|Private 
};

