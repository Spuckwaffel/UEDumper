
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/ModularGameplay.GameFrameworkComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UGameFrameworkComponent : public UActorComponent
{ 
public:
};

/// Class /Script/ModularGameplay.ControllerComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UControllerComponent : public UGameFrameworkComponent
{ 
public:
};

/// Class /Script/ModularGameplay.GameFrameworkComponentManager
/// Size: 0x0208 (0x000030 - 0x000238)
class UGameFrameworkComponentManager : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x208];                                     // 0x0030   (0x0208)  MISSED


	/// Functions
	// Function /Script/ModularGameplay.GameFrameworkComponentManager.UnregisterClassInitStateDelegate
	// bool UnregisterClassInitStateDelegate(TWeakObjectPtr<UClass*> ActorClass, FDelegateProperty DelegateToRemove);        // [0x6f87434] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModularGameplay.GameFrameworkComponentManager.UnregisterActorInitStateDelegate
	// bool UnregisterActorInitStateDelegate(class AActor* Actor, FDelegateProperty DelegateToRemove);                       // [0x6f871ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModularGameplay.GameFrameworkComponentManager.SendExtensionEvent
	// void SendExtensionEvent(class AActor* Receiver, FName EventName, bool bOnlyInGameWorlds);                             // [0x6f87074] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModularGameplay.GameFrameworkComponentManager.RemoveReceiver
	// void RemoveReceiver(class AActor* Receiver);                                                                          // [0x6f86ff8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForClassInitState
	// bool RegisterAndCallForClassInitState(TWeakObjectPtr<UClass*> ActorClass, FName FeatureName, FGameplayTag RequiredState, FDelegateProperty Delegate, bool bCallImmediately); // [0x6f868fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForActorInitState
	// bool RegisterAndCallForActorInitState(class AActor* Actor, FName FeatureName, FGameplayTag RequiredState, FDelegateProperty Delegate, bool bCallImmediately); // [0x6f8645c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModularGameplay.GameFrameworkComponentManager.AddReceiver
	// void AddReceiver(class AActor* Receiver, bool bAddOnlyInGameWorlds);                                                  // [0x6f86200] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModularGameplay.GameFrameworkInitStateInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFrameworkInitStateInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/ModularGameplay.GameFrameworkInitStateInterface.UnregisterInitStateDelegate
	// bool UnregisterInitStateDelegate(FDelegateProperty Delegate);                                                         // [0x6f87584] Native|Public|BlueprintCallable 
	// Function /Script/ModularGameplay.GameFrameworkInitStateInterface.RegisterAndCallForInitStateChange
	// bool RegisterAndCallForInitStateChange(FGameplayTag RequiredState, FDelegateProperty Delegate, bool bCallImmediately); // [0x6f86cf8] Native|Public|BlueprintCallable 
	// Function /Script/ModularGameplay.GameFrameworkInitStateInterface.HasReachedInitState
	// bool HasReachedInitState(FGameplayTag DesiredState);                                                                  // [0x6f8631c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModularGameplay.GameFrameworkInitStateInterface.GetInitState
	// FGameplayTag GetInitState();                                                                                          // [0x28d2d7c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModularGameplay.GameFrameworkInitStateInterface.GetFeatureName
	// FName GetFeatureName();                                                                                               // [0x6f862f0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ModularGameplay.GameStateComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UGameStateComponent : public UGameFrameworkComponent
{ 
public:
};

/// Class /Script/ModularGameplay.PawnComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPawnComponent : public UGameFrameworkComponent
{ 
public:
};

/// Class /Script/ModularGameplay.PlayerStateComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPlayerStateComponent : public UGameFrameworkComponent
{ 
public:
};

/// Struct /Script/ModularGameplay.ActorInitStateChangedParams
/// Size: 0x0020 (0x000000 - 0x000020)
struct FActorInitStateChangedParams
{ 
	class AActor*                                      OwningActor;                                                // 0x0000   (0x0008)  
	FName                                              FeatureName;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UObject*                                     Implementer;                                                // 0x0010   (0x0008)  
	FGameplayTag                                       FeatureState;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

