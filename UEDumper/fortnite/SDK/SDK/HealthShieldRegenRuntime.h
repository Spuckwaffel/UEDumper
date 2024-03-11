
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent
/// Size: 0x00F8 (0x0000A0 - 0x000198)
class UFortHealthShieldRegenComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xF8];                                      // 0x00A0   (0x00F8)  MISSED


	/// Functions
	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.ClearHealthShieldRegen_ShieldListenerDelegates
	// void ClearHealthShieldRegen_ShieldListenerDelegates(class UGameplayAbility* OwningAbility);                           // [0xaca7a54] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.ClearHealthShieldRegen_HealthListenerDelegates
	// void ClearHealthShieldRegen_HealthListenerDelegates(class UGameplayAbility* OwningAbility);                           // [0xaca77b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AssignHealthShieldRegen_ShieldListenerDelegates
	// void AssignHealthShieldRegen_ShieldListenerDelegates(class UGameplayAbility* OwningAbility, FFortHealthShieldRegen_ShieldDelegateContainer Delegates); // [0xaca7624] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AssignHealthShieldRegen_HealthListenerDelegates
	// void AssignHealthShieldRegen_HealthListenerDelegates(class UGameplayAbility* OwningAbility, FFortHealthShieldRegen_HealthDelegateContainer Delegates); // [0xaca74a8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AllowHealthShieldRegen
	// bool AllowHealthShieldRegen();                                                                                        // [0xaca748c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/HealthShieldRegenRuntime.FortHealthShieldRegen_ShieldDelegateContainer
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFortHealthShieldRegen_ShieldDelegateContainer
{ 
	SDK_UNDEFINED(12,14186) /* FDelegateProperty */    __um(OnShieldChanged);                                      // 0x0000   (0x000C)  
	SDK_UNDEFINED(12,14187) /* FDelegateProperty */    __um(OnShieldedDamage);                                     // 0x000C   (0x000C)  
	SDK_UNDEFINED(12,14188) /* FDelegateProperty */    __um(OnShieldDestroyed);                                    // 0x0018   (0x000C)  
	SDK_UNDEFINED(12,14189) /* FDelegateProperty */    __um(OnDamageReceived);                                     // 0x0024   (0x000C)  
};

/// Struct /Script/HealthShieldRegenRuntime.FortHealthShieldRegen_HealthDelegateContainer
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFortHealthShieldRegen_HealthDelegateContainer
{ 
	SDK_UNDEFINED(12,14190) /* FDelegateProperty */    __um(OnHealthChanged);                                      // 0x0000   (0x000C)  
	SDK_UNDEFINED(12,14191) /* FDelegateProperty */    __um(OnDamageReceived);                                     // 0x000C   (0x000C)  
};

