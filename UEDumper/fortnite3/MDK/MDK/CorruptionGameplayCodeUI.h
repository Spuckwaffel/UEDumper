
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget
/// Size: 0x0008 (0x000368 - 0x000370)
class UFortPowerupReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(EPowerupHeatState)                         LastPowerupHeatState                                        OFFSET(get<T>, {0x368, 1, 0, 0})


	/// Functions
	// Function /Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetOverheatingMaxValue
	// float GetOverheatingMaxValue();                                                                                          // [0xbbe0194] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetCurrentOverheatValue
	// float GetCurrentOverheatValue();                                                                                         // [0xbbe016c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetCurrentOverheatPercent
	// float GetCurrentOverheatPercent();                                                                                       // [0xbbe0144] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Enum /Script/CorruptionGameplayCodeUI.EPowerupHeatState
/// Size: 0x04
enum class EPowerupHeatState : uint8_t
{
	EPowerupHeatState__Normal                                                        = 0,
	EPowerupHeatState__Superheated                                                   = 1,
	EPowerupHeatState__Overheated                                                    = 2,
	EPowerupHeatState__EPowerupHeatState_MAX                                         = 3
};

