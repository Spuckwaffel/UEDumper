
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/JunoRidableRuntime.JunoRidableCheatManager
/// Size: 0x0048 (0x000028 - 0x000070)
class UJunoRidableCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TWeakObjectPtr<UClass*>)                   CreatureRidableComponentClass                               OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PlayerRidingComponentClass                                  OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(class UClass*)                             RestoreRiderComponentClass                                  OFFSET(get<T>, {0x68, 8, 0, 0})


	/// Functions
	// Function /Script/JunoRidableRuntime.JunoRidableCheatManager.NativeAddToCheatManager
	// void NativeAddToCheatManager();                                                                                          // [0x35e6228] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoRidableRuntime.JunoRidableCheatManager.JunoStopRidingDelayedResetRiderComponent
	// void JunoStopRidingDelayedResetRiderComponent();                                                                         // [0x35e6228] Final|Native|Protected 
	// Function /Script/JunoRidableRuntime.JunoRidableCheatManager.JunoStopRiding
	// void JunoStopRiding();                                                                                                   // [0x2491aa8] BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/JunoRidableRuntime.JunoRidableCheatManager.JunoStartRiding
	// void JunoStartRiding();                                                                                                  // [0x329b518] BlueprintAuthorityOnly|Exec|Native|Public 
};

