
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: PlayerAugmentsUI
/// dependency: UI
/// dependency: UMG

/// Class /PlayerAugmentsUI/MobileUI/HLT/BB_AugmentsList.BB_AugmentsList_C
/// Size: 0x0000 (0x000138 - 0x000138)
class UBB_AugmentsList_C : public UFortMobileActionButtonBehavior
{ 
public:
};

/// Class /PlayerAugmentsUI/MobileUI/HLT/BBE_HideIfAugmentsOpen.BBE_HideIfAugmentsOpen_C
/// Size: 0x0000 (0x000090 - 0x000090)
class UBBE_HideIfAugmentsOpen_C : public UFortMobileActionBBE_AugmentShoot
{ 
public:
};

/// Class /PlayerAugmentsUI/MobileUI/HLT/BBE_AugmentRotate.BBE_AugmentRotate_C
/// Size: 0x0000 (0x000080 - 0x000080)
class UBBE_AugmentRotate_C : public UFortMobileActionButtonBehaviorExtension
{ 
public:
};

/// Class /PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_Augment_Selection_Proxy.WBP_Mobile_Augment_Selection_Proxy_C
/// Size: 0x0008 (0x0003D0 - 0x0003D8)
class UWBP_Mobile_Augment_Selection_Proxy_C : public UFortMobileHUDElementProxy
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03D0   (0x0008)  


	/// Functions
	// Function /PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_Augment_Selection_Proxy.WBP_Mobile_Augment_Selection_Proxy_C.ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy
	// void ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy(int32_t EntryPoint);                                         // [0x18a39e4] Final                
};

/// Class /PlayerAugmentsUI/MobileUI/HLT/BB_SwitchAugment.BB_SwitchAugment_C
/// Size: 0x0000 (0x000138 - 0x000138)
class UBB_SwitchAugment_C : public UFortMobileActionButtonBehavior
{ 
public:
};

/// Class /PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_Augment_Selection_Preview.WBP_Mobile_Augment_Selection_Preview_C
/// Size: 0x0000 (0x000330 - 0x000330)
class UWBP_Mobile_Augment_Selection_Preview_C : public UHUDLayoutToolV2_WidgetPreview
{ 
public:
};

/// Class /PlayerAugmentsUI/MobileUI/HLT/BB_RerollAugment.BB_RerollAugment_C
/// Size: 0x0000 (0x000140 - 0x000140)
class UBB_RerollAugment_C : public UFortMobileActionButtonBehavior_RerollAugments
{ 
public:
};

/// Class /PlayerAugmentsUI/MobileUI/HLT/BB_ExitAugment.BB_ExitAugment_C
/// Size: 0x0000 (0x000138 - 0x000138)
class UBB_ExitAugment_C : public UFortMobileActionButtonBehavior
{ 
public:
};

/// Class /PlayerAugmentsUI/MobileUI/HLT/BBE_AugmentShoot.BBE_AugmentShoot_C
/// Size: 0x0000 (0x000090 - 0x000090)
class UBBE_AugmentShoot_C : public UFortMobileActionBBE_AugmentShoot
{ 
public:
};

/// Class /PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_AugmentSelectorHUD.WBP_Mobile_AugmentSelectorHUD_C
/// Size: 0x0000 (0x000328 - 0x000328)
class UWBP_Mobile_AugmentSelectorHUD_C : public UFortHUDElementWidget
{ 
public:
};

/// Class /PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_Augment_SelectionTimer.WBP_Mobile_Augment_SelectionTimer_C
/// Size: 0x0010 (0x000370 - 0x000380)
class UWBP_Mobile_Augment_SelectionTimer_C : public UFortMobilePlayerAugmentTimer
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0370   (0x0008)  
	class UWBP_Augment_SelectionTimer_C*               WBP_Augment_SelectionTimer;                                 // 0x0378   (0x0008)  


	/// Functions
	// Function /PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_Augment_SelectionTimer.WBP_Mobile_Augment_SelectionTimer_C.BP_OnHUDElementVisibilityChanged
	// void BP_OnHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer, bool bIsSelectionItemEquipped, bool bForceCollapse); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /PlayerAugmentsUI/MobileUI/HLT/Widgets/WBP_Mobile_Augment_SelectionTimer.WBP_Mobile_Augment_SelectionTimer_C.ExecuteUbergraph_WBP_Mobile_Augment_SelectionTimer
	// void ExecuteUbergraph_WBP_Mobile_Augment_SelectionTimer(int32_t EntryPoint);                                          // [0x18a39e4] Final|HasDefaults    
};

