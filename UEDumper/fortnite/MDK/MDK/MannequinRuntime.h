
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/MannequinRuntime.MannequinAnalyticsComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UMannequinAnalyticsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/MannequinRuntime.MannequinAnalyticsComponent.FireMannequinAnalytics_Interact
	// void FireMannequinAnalytics_Interact(class AFortPlayerController* Controller, ECreativeMannequinAnalyticsInteractType InteractType, class UFortItemDefinition* Character, class UFortItemDefinition* BackBling); // [0xc66af50] Native|Public|BlueprintCallable|Const 
};

/// Enum /Script/MannequinRuntime.ECreativeMannequinAnalyticsInteractType
/// Size: 0x02
enum class ECreativeMannequinAnalyticsInteractType : uint8_t
{
	ECreativeMannequinAnalyticsInteractType__Equip                                   = 0,
	ECreativeMannequinAnalyticsInteractType__OpenStore                               = 1
};

