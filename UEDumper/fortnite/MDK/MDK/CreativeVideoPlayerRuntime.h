
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: MediaAssets
/// dependency: UMG

/// Class /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility
/// Size: 0x0080 (0x000B60 - 0x000BE0)
class UCreativeVideoPlayerFullscreenGameplayAbility : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3040;

public:
	CMember(class UClass*)                             NoCollisionGameplayEffectClass                              OFFSET(get<T>, {0xB60, 8, 0, 0})
	CMember(class UClass*)                             NoDamageGameplayEffectClass                                 OFFSET(get<T>, {0xB68, 8, 0, 0})
	CMember(TArray<class UClass*>)                     AnimationStateGameplayEffectClasses                         OFFSET(get<T>, {0xB70, 16, 0, 0})
	CMember(class UClass*)                             FullscreenWidgetClass                                       OFFSET(get<T>, {0xB80, 8, 0, 0})
	CMember(ECreativeVideoPlayerFullscreenEffects)     FullscreenEffects                                           OFFSET(get<T>, {0xB88, 1, 0, 0})
	DMember(bool)                                      bPromptToConfirmFullscreen                                  OFFSET(get<bool>, {0xB89, 1, 0, 0})
	DMember(bool)                                      bIsDismissable                                              OFFSET(get<bool>, {0xB8A, 1, 0, 0})
	CMember(class UFortInputComponent*)                OverrideMovementInputComponent                              OFFSET(get<T>, {0xB90, 8, 0, 0})
	CMember(class UFortInputComponent*)                SelectFullscreenModeInputComponent                          OFFSET(get<T>, {0xB98, 8, 0, 0})
	CMember(TArray<FActiveGameplayEffectHandle>)       ActiveGameplayEffects                                       OFFSET(get<T>, {0xBA0, 16, 0, 0})
	CMember(ECreativeVideoPlayerFullscreenEffects)     RequestedFullscreenEffects                                  OFFSET(get<T>, {0xBB0, 1, 0, 0})
	CMember(class UUserWidget*)                        VideoPlayerWidget                                           OFFSET(get<T>, {0xBB8, 8, 0, 0})
	CMember(class UMediaTexture*)                      ExtMediaTextureCached                                       OFFSET(get<T>, {0xBC0, 8, 0, 0})
	CMember(class USoundSourceBus*)                    ExtSourceBusCached                                          OFFSET(get<T>, {0xBC8, 8, 0, 0})
	CMember(class UMediaSoundComponent*)               ExtMediaSoundComponentCached                                OFFSET(get<T>, {0xBD0, 8, 0, 0})
	DMember(bool)                                      bExtComponentsSet                                           OFFSET(get<bool>, {0xBD8, 1, 0, 0})
	DMember(bool)                                      bActivatedFullscreen                                        OFFSET(get<bool>, {0xBD9, 1, 0, 0})


	/// Functions
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.SetExternalComponents
	// void SetExternalComponents(class UMediaTexture* ExtMediaTexture, class USoundSourceBus* ExtSourceBus, class UMediaSoundComponent* ExtMediaSoundComponent); // [0xab83b48] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ServerLeaveFullscreenMode
	// void ServerLeaveFullscreenMode();                                                                                        // [0x82b9fb4] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ServerEnterFullscreenMode
	// void ServerEnterFullscreenMode();                                                                                        // [0x92aae80] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.OnFullscreenUIEnds
	// void OnFullscreenUIEnds();                                                                                               // [0xab83b34] Final|Native|Private 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.HandleEnterFullscreenActionReleased
	// void HandleEnterFullscreenActionReleased();                                                                              // [0xab83b20] Final|Native|Private 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.HandleEnterFullscreenActionPressed
	// void HandleEnterFullscreenActionPressed();                                                                               // [0x36203b0] Final|Native|Private 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ExitFullscreenState
	// void ExitFullscreenState();                                                                                              // [0xab83af4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.EnterFullscreenStateWithOptions
	// void EnterFullscreenStateWithOptions(FCreativeVideoPlayerFullscreenOptions Options);                                     // [0xab839c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.EnterFullscreenState
	// void EnterFullscreenState();                                                                                             // [0xab83994] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ClientTransitionToFullscreenVideo
	// void ClientTransitionToFullscreenVideo();                                                                                // [0x82b9fcc] Final|Net|NetReliableNative|Event|Private|NetClient 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ClientLeaveFullscreenVideo
	// void ClientLeaveFullscreenVideo();                                                                                       // [0x82b9ed4] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCreativeVideoPlayerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFunctionLibrary.ShutdownFullscreenVideoMode
	// void ShutdownFullscreenVideoMode(class AController* Controller);                                                         // [0xab83c40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerWorldSubsystem
/// Size: 0x0010 (0x000030 - 0x000040)
class UCreativeVideoPlayerWorldSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMulticastInlineDelegate)                  OnNotifyFullscreenChange                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenOptions
/// Size: 0x0002 (0x000000 - 0x000002)
class FCreativeVideoPlayerFullscreenOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(ECreativeVideoPlayerFullscreenEffects)     GameplayEffects                                             OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bPromptFirst                                                OFFSET(get<bool>, {0x1, 1, 0, 0})
};

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

