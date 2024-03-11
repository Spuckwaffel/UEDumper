
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
/// dependency: NetCore

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

/// Class /Script/CRDPostProcess.CRDPostProcessDeviceComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UCRDPostProcessDeviceComponent : public UActorComponent
{ 
public:
	class UPostProcessComponent*                       PostProcessComponent;                                       // 0x00A0   (0x0008)  
	class APlayerController*                           BlendInstigator;                                            // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x00B0   (0x0048)  MISSED


	/// Functions
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.StartEffectTimer
	// void StartEffectTimer(class APlayerController* InBlendInstigator);                                                    // [0xac6c268] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.StartBlendingFromPriority
	// void StartBlendingFromPriority(bool bShouldHide, float duration);                                                     // [0xac6c1a4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.StartBlending
	// void StartBlending(class APlayerController* InBlendInstigator, bool bBlendIn, float duration);                        // [0xac6c098] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.SetPostProcessEnabled
	// void SetPostProcessEnabled(bool bEnabled);                                                                            // [0xac6bffc] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.SetHiddenStrength
	// void SetHiddenStrength(float Value);                                                                                  // [0xac6bf7c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.SetCurrentStrength
	// void SetCurrentStrength(float Value);                                                                                 // [0xac6befc] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.GetPriority
	// int32_t GetPriority();                                                                                                // [0x70cea6c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.GetCurrentStrength
	// float GetCurrentStrength();                                                                                           // [0x3ead764] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.GetClientEnabled
	// bool GetClientEnabled();                                                                                              // [0x7e2af64] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.GetBlendOutTime
	// float GetBlendOutTime();                                                                                              // [0x66de910] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.GetBlendInTime
	// float GetBlendInTime();                                                                                               // [0x70cea84] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceComponent.ApplyPostProcessSettingsToDeviceComponent
	// bool ApplyPostProcessSettingsToDeviceComponent(class UClass* ActorClass, bool bInEnabled, float InMaxStrength, int32_t InPriority, float InEffectDuration, float InBlendInDuration, float InBlendOutDuration); // [0xac6b530] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/CRDPostProcess.CRDPostProcessDevicePriorityControllerComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UCRDPostProcessDevicePriorityControllerComponent : public UActorComponent
{ 
public:
	TArray<class UCRDPostProcessDeviceComponent*>      CachedAppliedEffects;                                       // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/CRDPostProcess.CRDPostProcessDevicePriorityControllerComponent.RemovePostProcessDevice
	// void RemovePostProcessDevice(class UCRDPostProcessDeviceComponent* InPostProcessDeviceComponent);                     // [0xac6bd54] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDevicePriorityControllerComponent.GetPostProcessDevicePriorityControllerComponentFromPlayerController
	// class UCRDPostProcessDevicePriorityControllerComponent* GetPostProcessDevicePriorityControllerComponentFromPlayerController(class APlayerController* PC, bool bCreateIfNotFound); // [0xac6bc20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDevicePriorityControllerComponent.GetHighestPriorityValue
	// int32_t GetHighestPriorityValue();                                                                                    // [0xac6babc] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CRDPostProcess.CRDPostProcessDevicePriorityControllerComponent.GetEffectsForPriority
	// void GetEffectsForPriority(int32_t Priority, TArray<UCRDPostProcessDeviceComponent*>& OutEffects);                    // [0xac6b90c] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CRDPostProcess.CRDPostProcessDevicePriorityControllerComponent.CachePostProcessDeviceApplication
	// void CachePostProcessDeviceApplication(class UCRDPostProcessDeviceComponent* InPostProcessDeviceComponent);           // [0xac6b850] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Struct /Script/CRDPostProcess.PostProcessDeviceMessageRepl
/// Size: 0x001C (0x00000C - 0x000028)
struct FPostProcessDeviceMessageRepl : FFastArraySerializerItem
{ 
	int32_t                                            MessageIndex;                                               // 0x000C   (0x0004)  
	class AFortCreativeDeviceProp*                     PostProcessDevice;                                          // 0x0010   (0x0008)  
	class AFortPlayerState*                            PlayerStateMessage;                                         // 0x0018   (0x0008)  
	EPostProcessDeviceState                            EndState;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/CRDPostProcess.PostProcessDeviceMessageRingBuffer
/// Size: 0x0028 (0x000108 - 0x000130)
struct FPostProcessDeviceMessageRingBuffer : FFastArraySerializer
{ 
	TArray<FPostProcessDeviceMessageRepl>              Items;                                                      // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0118   (0x0018)  MISSED
};

/// Struct /Script/CRDPostProcess.PostProcessDeviceMessage
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPostProcessDeviceMessage
{ 
	class AFortCreativeDeviceProp*                     PostProcessDevice;                                          // 0x0000   (0x0008)  
	class AFortPlayerState*                            PlayerStateMessage;                                         // 0x0008   (0x0008)  
	EPostProcessDeviceState                            EndState;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Class /Script/CRDPostProcess.CRDPostProcessDeviceControllerComponent
/// Size: 0x0190 (0x0000A0 - 0x000230)
class UCRDPostProcessDeviceControllerComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,12618) /* FMulticastInlineDelegate */ __um(OnPostProcessDeviceMessageRecieved);               // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,12619) /* FMulticastInlineDelegate */ __um(OnPostProcessDeviceBlendFinished);                 // 0x00B0   (0x0010)  
	FPostProcessDeviceMessageRingBuffer                PostProcessDeviceMessageBatch;                              // 0x00C0   (0x0130)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01F0   (0x0008)  MISSED
	TArray<FPostProcessDeviceMessage>                  PostProcessDeviceMessageQueue;                              // 0x01F8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0208   (0x0028)  MISSED


	/// Functions
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceControllerComponent.ServerBlendFinished
	// void ServerBlendFinished(class AFortCreativeDeviceProp* PostProcessDevice, class APlayerController* Instigator, bool bBlendIn); // [0xac6bdfc] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceControllerComponent.Reset
	// void Reset();                                                                                                         // [0xac6bde8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceControllerComponent.OnRep_PostProcessDeviceMessageBatch
	// void OnRep_PostProcessDeviceMessageBatch();                                                                           // [0x30fd094] Final|Native|Private 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceControllerComponent.GetPostProcessDeviceControllerComponentFromPlayerController
	// class UCRDPostProcessDeviceControllerComponent* GetPostProcessDeviceControllerComponentFromPlayerController(class APlayerController* PC, bool bCreateIfNotFound); // [0xac6baec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceControllerComponent.GetMinigamePlayersForPostProcessDevice
	// void GetMinigamePlayersForPostProcessDevice(class AFortMinigame* FortMinigame, TArray<APlayerState*>& OutPlayers);    // [0x841cd94] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CRDPostProcess.CRDPostProcessDeviceControllerComponent.AddBlendMessageToQueue
	// void AddBlendMessageToQueue(class AFortCreativeDeviceProp* PostProcessDevice, class AFortPlayerState* PlayerStateMessage, EPostProcessDeviceState EndState); // [0xac6b438] Final|Native|Protected|BlueprintCallable 
};

