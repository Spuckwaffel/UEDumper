
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Enum /Script/CorruptionGameplayCodeUI.EPowerupHeatState
/// Size: 0x04
enum class EPowerupHeatState : uint8_t
{
	EPowerupHeatState__Normal                                                        = 0,
	EPowerupHeatState__Superheated                                                   = 1,
	EPowerupHeatState__Overheated                                                    = 2,
	EPowerupHeatState__EPowerupHeatState_MAX                                         = 3
};

/// Class /Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget
/// Size: 0x0008 (0x000360 - 0x000368)
class UFortPowerupReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{ 
public:
	EPowerupHeatState                                  LastPowerupHeatState;                                       // 0x0360   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0361   (0x0007)  MISSED


	/// Functions
	// Function /Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetOverheatingMaxValue
	// float GetOverheatingMaxValue();                                                                                       // [0xa8b2bf4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetCurrentOverheatValue
	// float GetCurrentOverheatValue();                                                                                      // [0xa8b2bcc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetCurrentOverheatPercent
	// float GetCurrentOverheatPercent();                                                                                    // [0xa8b2ba4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

