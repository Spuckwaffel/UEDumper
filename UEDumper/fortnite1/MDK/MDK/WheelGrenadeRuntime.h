
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AttachableWheelsRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/WheelGrenadeRuntime.WheelGrenadeWheel
/// Size: 0x0018 (0x000330 - 0x000348)
class AWheelGrenadeWheel : public AAttachableWheel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	DMember(float)                                     MaxHealth                                                   OFFSET(get<float>, {0x338, 4, 0, 0})
	CMember(class UFortAbilitySystemComponent*)        AbilitySystemComponent                                      OFFSET(get<T>, {0x340, 8, 0, 0})


	/// Functions
	// Function /Script/WheelGrenadeRuntime.WheelGrenadeWheel.HandleOutOfHealth
	// void HandleOutOfHealth(float InDamage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& InEffectContext, class AController* InEventInstigator, class AActor* InDamageCauser); // [0xbbc70d8] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/WheelGrenadeRuntime.WheelGrenadeWheel.HandleDamaged
	// void HandleDamaged(float Damage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser); // [0x246f7d8] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/WheelGrenadeRuntime.WheelGrenadeWheel.GetMaxHealth
	// float GetMaxHealth();                                                                                                    // [0xbbc7098] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WheelGrenadeRuntime.WheelGrenadeWheel.GetHealth
	// float GetHealth();                                                                                                       // [0xbbc7058] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

