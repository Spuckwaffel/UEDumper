
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: ModularGameplay

/// Class /Script/CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger
/// Size: 0x0138 (0x0000A8 - 0x0001E0)
class UFortControllerComponent_CreativeDebugger : public UFortControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A8   (0x0008)  MISSED
	FScalableFloat                                     DebuggerEnabledByDataRegistry;                              // 0x00B0   (0x0028)  
	FScalableFloat                                     VerseDebugDrawEnabledByDataRegistry;                        // 0x00D8   (0x0028)  
	FScalableFloat                                     NavigationMeshEnabledByDataRegistry;                        // 0x0100   (0x0028)  
	FScalableFloat                                     NavigationPathsEnabledByDataRegistry;                       // 0x0128   (0x0028)  
	FScalableFloat                                     GhostModeEnabledByDataRegistry;                             // 0x0150   (0x0028)  
	FScalableFloat                                     InvincibilityEnabledByDataRegistry;                         // 0x0178   (0x0028)  
	FScalableFloat                                     FastIterationEnabledByDataRegistry;                         // 0x01A0   (0x0028)  
	class UClass*                                      AIDebuggerClass;                                            // 0x01C8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x01D0   (0x0010)  MISSED


	/// Functions
	// Function /Script/CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnPlayerSpawned
	// void OnPlayerSpawned(class AFortPlayerController* PC);                                                                // [0xab72740] Final|Native|Public  
	// Function /Script/CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                              // [0xab7272c] Final|Native|Public  
	// Function /Script/CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger.OnMinigameStateChanged
	// void OnMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState MinigameState);                         // [0xab72668] Final|Native|Public  
};

