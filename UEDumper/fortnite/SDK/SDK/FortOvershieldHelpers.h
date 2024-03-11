
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/FortOvershieldHelpers.FortOvershieldHelperComponent
/// Size: 0x00A8 (0x0000A0 - 0x000148)
class UFortOvershieldHelperComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x00A0   (0x00A8)  MISSED


	/// Functions
	// Function /Script/FortOvershieldHelpers.FortOvershieldHelperComponent.ClearOvershieldListenerDelegates
	// void ClearOvershieldListenerDelegates(class UGameplayAbility* OwningAbility);                                         // [0xace4080] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FortOvershieldHelpers.FortOvershieldHelperComponent.AssignOvershieldListenerDelegates
	// void AssignOvershieldListenerDelegates(class UGameplayAbility* OwningAbility, FFortOvershieldDelegateContainer Delegates); // [0xace3ee0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/FortOvershieldHelpers.FortOvershieldDelegateContainer
/// Size: 0x0048 (0x000000 - 0x000048)
struct FFortOvershieldDelegateContainer
{ 
	SDK_UNDEFINED(12,14015) /* FDelegateProperty */    __um(OnOvershieldChanged);                                  // 0x0000   (0x000C)  
	SDK_UNDEFINED(12,14016) /* FDelegateProperty */    __um(OnShieldedDamage);                                     // 0x000C   (0x000C)  
	SDK_UNDEFINED(12,14017) /* FDelegateProperty */    __um(OnOvershieldedDamage);                                 // 0x0018   (0x000C)  
	SDK_UNDEFINED(12,14018) /* FDelegateProperty */    __um(OnShieldDestroyed);                                    // 0x0024   (0x000C)  
	SDK_UNDEFINED(12,14019) /* FDelegateProperty */    __um(OnOvershieldDestroyed);                                // 0x0030   (0x000C)  
	SDK_UNDEFINED(12,14020) /* FDelegateProperty */    __um(OnDamageReceived);                                     // 0x003C   (0x000C)  
};

