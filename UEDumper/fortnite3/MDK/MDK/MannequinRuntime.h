
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MannequinRuntime.MannequinAnalyticsComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UMannequinAnalyticsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/MannequinRuntime.MannequinAnalyticsComponent.FireMannequinAnalytics_Interact
	// void FireMannequinAnalytics_Interact(class AFortPlayerController* Controller, ECreativeMannequinAnalyticsInteractType InteractType, class UFortItemDefinition* Character, class UFortItemDefinition* BackBling); // [0xc5f82fc] Native|Public|BlueprintCallable|Const 
};

/// Enum /Script/MannequinRuntime.ECreativeMannequinAnalyticsInteractType
/// Size: 0x03
enum class ECreativeMannequinAnalyticsInteractType : uint8_t
{
	ECreativeMannequinAnalyticsInteractType__Equip                                   = 0,
	ECreativeMannequinAnalyticsInteractType__OpenStore                               = 1,
	ECreativeMannequinAnalyticsInteractType__ECreativeMannequinAnalyticsInteractType_MAX = 2
};

