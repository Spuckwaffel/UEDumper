
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
/// dependency: GameplayMessages
/// dependency: GameplayTags
/// dependency: UMG

/// Class /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget
/// Size: 0x00A0 (0x000328 - 0x0003C8)
class UAvocadoEaterHealthBarWidget : public UFortHUDElementWidget
{ 
public:
	FEventMessageTag                                   AttachedMessageTag;                                         // 0x0328   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x032C   (0x0004)  MISSED
	class UScriptStruct*                               AttachedMessageType;                                        // 0x0330   (0x0008)  
	FEventMessageTag                                   DetachedMessageTag;                                         // 0x0338   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x033C   (0x0004)  MISSED
	class UScriptStruct*                               DetachedMessageType;                                        // 0x0340   (0x0008)  
	FEventMessageTag                                   SetMarkerPositionMessageTag;                                // 0x0348   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x034C   (0x0004)  MISSED
	class UScriptStruct*                               SetMarkerPositionMessageType;                               // 0x0350   (0x0008)  
	FName                                              SetMarkerPositionMessagePropertyName;                       // 0x0358   (0x0004)  
	FEventMessageTag                                   TargetDamagedMessageTag;                                    // 0x035C   (0x0004)  
	class UScriptStruct*                               TargetDamagedMessageType;                                   // 0x0360   (0x0008)  
	unsigned char                                      UnknownData03_6[0x60];                                      // 0x0368   (0x0060)  MISSED


	/// Functions
	// Function /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget.OnTargetDamaged
	// void OnTargetDamaged();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget.OnSetMarkerPosition
	// void OnSetMarkerPosition(float MarkerPosition);                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget.OnParasiteDetached
	// void OnParasiteDetached();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget.OnParasiteAttached
	// void OnParasiteAttached();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/MotherGameplayUI.FortGravyGoblinReticleExtensionWidget
/// Size: 0x0020 (0x000360 - 0x000380)
class UFortGravyGoblinReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0360   (0x0020)  MISSED


	/// Functions
	// Function /Script/MotherGameplayUI.FortGravyGoblinReticleExtensionWidget.OnItemInactivatable
	// void OnItemInactivatable();                                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MotherGameplayUI.FortGravyGoblinReticleExtensionWidget.OnItemActivatable
	// void OnItemActivatable();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/MotherGameplayUI.FortLlamaRoasterReticleExtensionWidget
/// Size: 0x0000 (0x000360 - 0x000360)
class UFortLlamaRoasterReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{ 
public:
};

/// Class /Script/MotherGameplayUI.FortPaddleGingerReticleExtensionWidget
/// Size: 0x0060 (0x000360 - 0x0003C0)
class UFortPaddleGingerReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{ 
public:
	class UFortKeybindWidget*                          Keybind_ActivateAction;                                     // 0x0360   (0x0008)  
	class UFortKeybindWidget*                          Keybind_CycleCategoryAction;                                // 0x0368   (0x0008)  
	class UFortKeybindWidget*                          Keybind_CyclePropAction;                                    // 0x0370   (0x0008)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0378   (0x0048)  MISSED


	/// Functions
	// Function /Script/MotherGameplayUI.FortPaddleGingerReticleExtensionWidget.OnPropIndexChanged
	// void OnPropIndexChanged(FText& CategoryText, int32_t PropIndex, int32_t MaxPropCount, int32_t CategoryIndex, int32_t MaxCategoryCount); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MotherGameplayUI.FortPaddleGingerReticleExtensionWidget.OnPropActivationChanged
	// void OnPropActivationChanged(bool Activated);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/MotherGameplayUI.FortReactorGradeReticleExtensionWidget
/// Size: 0x0000 (0x000360 - 0x000360)
class UFortReactorGradeReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{ 
public:


	/// Functions
	// Function /Script/MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnUpdateChargeToMin
	// void OnUpdateChargeToMin(float ChargePercent);                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnUpdateChargeToAutoDischarge
	// void OnUpdateChargeToAutoDischarge(float ChargePercent);                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnMinimumChargeReached
	// void OnMinimumChargeReached();                                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/MotherGameplayUI.FortMobileActionBBE_GravyGoblinRotate
/// Size: 0x0028 (0x000080 - 0x0000A8)
class UFortMobileActionBBE_GravyGoblinRotate : public UFortMobileActionButtonBehaviorExtension
{ 
public:
	FGameplayTag                                       GravyGoblinTag;                                             // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x0084   (0x0024)  MISSED
};

