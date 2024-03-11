
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: MediaAssets
/// dependency: UMG

/// Enum /Script/CreativeVideoPlayerRuntime.ECreativeVideoPlayerFullscreenEffects
/// Size: 0x05
enum class ECreativeVideoPlayerFullscreenEffects : uint8_t
{
	ECreativeVideoPlayerFullscreenEffects__None                                      = 0,
	ECreativeVideoPlayerFullscreenEffects__NoCollisionOnly                           = 1,
	ECreativeVideoPlayerFullscreenEffects__NoDamageOnly                              = 2,
	ECreativeVideoPlayerFullscreenEffects__NoCollisionAndNoDamage                    = 3,
	ECreativeVideoPlayerFullscreenEffects__ECreativeVideoPlayerFullscreenEffects_MAX = 4
};

/// Class /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility
/// Size: 0x0080 (0x000B60 - 0x000BE0)
class UCreativeVideoPlayerFullscreenGameplayAbility : public UFortGameplayAbility
{ 
public:
	class UClass*                                      NoCollisionGameplayEffectClass;                             // 0x0B60   (0x0008)  
	class UClass*                                      NoDamageGameplayEffectClass;                                // 0x0B68   (0x0008)  
	TArray<class UClass*>                              AnimationStateGameplayEffectClasses;                        // 0x0B70   (0x0010)  
	class UClass*                                      FullscreenWidgetClass;                                      // 0x0B80   (0x0008)  
	ECreativeVideoPlayerFullscreenEffects              FullscreenEffects;                                          // 0x0B88   (0x0001)  
	bool                                               bPromptToConfirmFullscreen;                                 // 0x0B89   (0x0001)  
	bool                                               bIsDismissable;                                             // 0x0B8A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0B8B   (0x0005)  MISSED
	class UFortInputComponent*                         OverrideMovementInputComponent;                             // 0x0B90   (0x0008)  
	class UFortInputComponent*                         SelectFullscreenModeInputComponent;                         // 0x0B98   (0x0008)  
	TArray<FActiveGameplayEffectHandle>                ActiveGameplayEffects;                                      // 0x0BA0   (0x0010)  
	ECreativeVideoPlayerFullscreenEffects              RequestedFullscreenEffects;                                 // 0x0BB0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0BB1   (0x0007)  MISSED
	class UUserWidget*                                 VideoPlayerWidget;                                          // 0x0BB8   (0x0008)  
	class UMediaTexture*                               ExtMediaTextureCached;                                      // 0x0BC0   (0x0008)  
	class USoundSourceBus*                             ExtSourceBusCached;                                         // 0x0BC8   (0x0008)  
	class UMediaSoundComponent*                        ExtMediaSoundComponentCached;                               // 0x0BD0   (0x0008)  
	bool                                               bExtComponentsSet;                                          // 0x0BD8   (0x0001)  
	bool                                               bActivatedFullscreen;                                       // 0x0BD9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0BDA   (0x0006)  MISSED


	/// Functions
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.SetExternalComponents
	// void SetExternalComponents(class UMediaTexture* ExtMediaTexture, class USoundSourceBus* ExtSourceBus, class UMediaSoundComponent* ExtMediaSoundComponent); // [0xab83b48] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ServerLeaveFullscreenMode
	// void ServerLeaveFullscreenMode();                                                                                     // [0x82b9fb4] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ServerEnterFullscreenMode
	// void ServerEnterFullscreenMode();                                                                                     // [0x92aae80] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.OnFullscreenUIEnds
	// void OnFullscreenUIEnds();                                                                                            // [0xab83b34] Final|Native|Private 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.HandleEnterFullscreenActionReleased
	// void HandleEnterFullscreenActionReleased();                                                                           // [0xab83b20] Final|Native|Private 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.HandleEnterFullscreenActionPressed
	// void HandleEnterFullscreenActionPressed();                                                                            // [0x36203b0] Final|Native|Private 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ExitFullscreenState
	// void ExitFullscreenState();                                                                                           // [0xab83af4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.EnterFullscreenStateWithOptions
	// void EnterFullscreenStateWithOptions(FCreativeVideoPlayerFullscreenOptions Options);                                  // [0xab839c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.EnterFullscreenState
	// void EnterFullscreenState();                                                                                          // [0xab83994] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ClientTransitionToFullscreenVideo
	// void ClientTransitionToFullscreenVideo();                                                                             // [0x82b9fcc] Final|Net|NetReliableNative|Event|Private|NetClient 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ClientLeaveFullscreenVideo
	// void ClientLeaveFullscreenVideo();                                                                                    // [0x82b9ed4] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCreativeVideoPlayerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFunctionLibrary.ShutdownFullscreenVideoMode
	// void ShutdownFullscreenVideoMode(class AController* Controller);                                                      // [0xab83c40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerWorldSubsystem
/// Size: 0x0010 (0x000030 - 0x000040)
class UCreativeVideoPlayerWorldSubsystem : public UWorldSubsystem
{ 
public:
	SDK_UNDEFINED(16,12738) /* FMulticastInlineDelegate */ __um(OnNotifyFullscreenChange);                         // 0x0030   (0x0010)  
};

/// Struct /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenOptions
/// Size: 0x0002 (0x000000 - 0x000002)
struct FCreativeVideoPlayerFullscreenOptions
{ 
	ECreativeVideoPlayerFullscreenEffects              GameplayEffects;                                            // 0x0000   (0x0001)  
	bool                                               bPromptFirst;                                               // 0x0001   (0x0001)  
};

