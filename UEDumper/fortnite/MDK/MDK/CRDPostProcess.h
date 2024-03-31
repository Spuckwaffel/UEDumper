
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: NetCore

/// Class /Script/CRDPostProcess.CRDPostProcessDeviceComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UCRDPostProcessDeviceComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(class UPostProcessComponent*)              PostProcessComponent                                        OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class APlayerController*)                  BlendInstigator                                             OFFSET(get<T>, {0xA8, 8, 0, 0})


	/// Functions
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.StartEffectTimer
	// void StartEffectTimer(class APlayerController* InBlendInstigator);                                                       // [0xc15ef00] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.StartBlendingFromPriority
	// void StartBlendingFromPriority(bool bShouldHide, float duration);                                                        // [0xc15edb0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.StartBlending
	// void StartBlending(class APlayerController* InBlendInstigator, bool bBlendIn, float duration);                           // [0xc15ebe4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.SetPostProcessEnabled
	// void SetPostProcessEnabled(bool bEnabled);                                                                               // [0xc15eb08] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.SetHiddenStrength
	// void SetHiddenStrength(float Value);                                                                                     // [0xc15ea44] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.SetCurrentStrength
	// void SetCurrentStrength(float Value);                                                                                    // [0xc15e980] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.GetPriority
	// int32_t GetPriority();                                                                                                   // [0x737487c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.GetCurrentStrength
	// float GetCurrentStrength();                                                                                              // [0x3da1188] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.GetClientEnabled
	// bool GetClientEnabled();                                                                                                 // [0x822e6bc] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.GetBlendOutTime
	// float GetBlendOutTime();                                                                                                 // [0x66b9914] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.GetBlendInTime
	// float GetBlendInTime();                                                                                                  // [0x7374894] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.ApplyPostProcessSettingsToDeviceComponent
	// bool ApplyPostProcessSettingsToDeviceComponent(class UClass* ActorClass, bool bInEnabled, float InMaxStrength, int32_t InPriority, float InEffectDuration, float InBlendInDuration, float InBlendOutDuration); // [0xc15d6cc] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/CRDPostProcess.CRDPostProcessDevicePriorityControllerComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UCRDPostProcessDevicePriorityControllerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<class UCRDPostProcessDeviceComponent*>) CachedAppliedEffects                                    OFFSET(get<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/CRDPostProcess.CRDPostProcessDevicePriorityControllerComponent.RemovePostProcessDevice
	// void RemovePostProcessDevice(class UCRDPostProcessDeviceComponent* InPostProcessDeviceComponent);                        // [0xc15e6d4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDevicePriorityControllerComponent.GetPostProcessDevicePriorityControllerComponentFromPlayerController
	// class UCRDPostProcessDevicePriorityControllerComponent* GetPostProcessDevicePriorityControllerComponentFromPlayerController(class APlayerController* PC, bool bCreateIfNotFound); // [0xc15e520] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDevicePriorityControllerComponent.GetHighestPriorityValue
	// int32_t GetHighestPriorityValue();                                                                                       // [0xc15e33c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRDPostProcess.CRDPostProcessDevicePriorityControllerComponent.GetEffectsForPriority
	// void GetEffectsForPriority(int32_t Priority, TArray<UCRDPostProcessDeviceComponent*>& OutEffects);                       // [0xc15dcac] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CRDPostProcess.CRDPostProcessDevicePriorityControllerComponent.CachePostProcessDeviceApplication
	// void CachePostProcessDeviceApplication(class UCRDPostProcessDeviceComponent* InPostProcessDeviceComponent);              // [0xc15dbb0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/CRDPostProcess.CRDPostProcessDeviceControllerComponent
/// Size: 0x0190 (0x0000A0 - 0x000230)
class UCRDPostProcessDeviceControllerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FMulticastInlineDelegate)                  OnPostProcessDeviceMessageRecieved                          OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostProcessDeviceBlendFinished                            OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FPostProcessDeviceMessageRingBuffer)       PostProcessDeviceMessageBatch                               OFFSET(getStruct<T>, {0xC0, 304, 0, 0})
	CMember(TArray<FPostProcessDeviceMessage>)         PostProcessDeviceMessageQueue                               OFFSET(get<T>, {0x1F8, 16, 0, 0})


	/// Functions
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceControllerComponent.ServerBlendFinished
	// void ServerBlendFinished(class AFortCreativeDeviceProp* PostProcessDevice, class APlayerController* Instigator, bool bBlendIn); // [0xc15e7c0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceControllerComponent.Reset
	// void Reset();                                                                                                            // [0xc15e7ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceControllerComponent.OnRep_PostProcessDeviceMessageBatch
	// void OnRep_PostProcessDeviceMessageBatch();                                                                              // [0x313dce8] Final|Native|Private 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceControllerComponent.GetPostProcessDeviceControllerComponentFromPlayerController
	// class UCRDPostProcessDeviceControllerComponent* GetPostProcessDeviceControllerComponentFromPlayerController(class APlayerController* PC, bool bCreateIfNotFound); // [0xc15e36c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceControllerComponent.GetMinigamePlayersForPostProcessDevice
	// void GetMinigamePlayersForPostProcessDevice(class AFortMinigame* FortMinigame, TArray<APlayerState*>& OutPlayers);       // [0x8935034] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceControllerComponent.AddBlendMessageToQueue
	// void AddBlendMessageToQueue(class AFortCreativeDeviceProp* PostProcessDevice, class AFortPlayerState* PlayerStateMessage, EPostProcessDeviceState EndState); // [0xc15d510] Final|Native|Protected|BlueprintCallable 
};

/// Struct /Script/CRDPostProcess.PostProcessDeviceMessage
/// Size: 0x0018 (0x000000 - 0x000018)
class FPostProcessDeviceMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AFortCreativeDeviceProp*)            PostProcessDevice                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AFortPlayerState*)                   PlayerStateMessage                                          OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(EPostProcessDeviceState)                   EndState                                                    OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/CRDPostProcess.PostProcessDeviceMessageRepl
/// Size: 0x001C (0x00000C - 0x000028)
class FPostProcessDeviceMessageRepl : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   MessageIndex                                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(class AFortCreativeDeviceProp*)            PostProcessDevice                                           OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class AFortPlayerState*)                   PlayerStateMessage                                          OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(EPostProcessDeviceState)                   EndState                                                    OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/CRDPostProcess.PostProcessDeviceMessageRingBuffer
/// Size: 0x0028 (0x000108 - 0x000130)
class FPostProcessDeviceMessageRingBuffer : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FPostProcessDeviceMessageRepl>)     Items                                                       OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Enum /Script/CRDPostProcess.EPostProcessDeviceState
/// Size: 0x07
enum class EPostProcessDeviceState : uint8_t
{
	EPostProcessDeviceState__Reset                                                   = 0,
	EPostProcessDeviceState__Enable                                                  = 1,
	EPostProcessDeviceState__Disable                                                 = 2,
	EPostProcessDeviceState__BlendIn                                                 = 3,
	EPostProcessDeviceState__BlendOut                                                = 4,
	EPostProcessDeviceState__LateApplication                                         = 5,
	EPostProcessDeviceState__EPostProcessDeviceState_MAX                             = 6
};

