
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/ModularGameplay.GameFrameworkComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UGameFrameworkComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/ModularGameplay.ControllerComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UControllerComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/ModularGameplay.GameFrameworkComponentManager
/// Size: 0x0208 (0x000030 - 0x000238)
class UGameFrameworkComponentManager : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:


	/// Functions
	// Function /Script/ModularGameplay.GameFrameworkComponentManager.UnregisterClassInitStateDelegate
	// bool UnregisterClassInitStateDelegate(TWeakObjectPtr<UClass*> ActorClass, FDelegateProperty DelegateToRemove);           // [0x716d75c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModularGameplay.GameFrameworkComponentManager.UnregisterActorInitStateDelegate
	// bool UnregisterActorInitStateDelegate(class AActor* Actor, FDelegateProperty DelegateToRemove);                          // [0x716d488] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModularGameplay.GameFrameworkComponentManager.SendExtensionEvent
	// void SendExtensionEvent(class AActor* Receiver, FName EventName, bool bOnlyInGameWorlds);                                // [0x716d28c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModularGameplay.GameFrameworkComponentManager.RemoveReceiver
	// void RemoveReceiver(class AActor* Receiver);                                                                             // [0x716d1cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForClassInitState
	// bool RegisterAndCallForClassInitState(TWeakObjectPtr<UClass*> ActorClass, FName FeatureName, FGameplayTag RequiredState, FDelegateProperty Delegate, bool bCallImmediately); // [0x716cc98] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForActorInitState
	// bool RegisterAndCallForActorInitState(class AActor* Actor, FName FeatureName, FGameplayTag RequiredState, FDelegateProperty Delegate, bool bCallImmediately); // [0x716c8a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModularGameplay.GameFrameworkComponentManager.AddReceiver
	// void AddReceiver(class AActor* Receiver, bool bAddOnlyInGameWorlds);                                                     // [0x716c600] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModularGameplay.GameFrameworkInitStateInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFrameworkInitStateInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ModularGameplay.GameFrameworkInitStateInterface.UnregisterInitStateDelegate
	// bool UnregisterInitStateDelegate(FDelegateProperty Delegate);                                                            // [0x716d924] Native|Public|BlueprintCallable 
	// Function /Script/ModularGameplay.GameFrameworkInitStateInterface.RegisterAndCallForInitStateChange
	// bool RegisterAndCallForInitStateChange(FGameplayTag RequiredState, FDelegateProperty Delegate, bool bCallImmediately);   // [0x716cfe4] Native|Public|BlueprintCallable 
	// Function /Script/ModularGameplay.GameFrameworkInitStateInterface.HasReachedInitState
	// bool HasReachedInitState(FGameplayTag DesiredState);                                                                     // [0x716c7d0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModularGameplay.GameFrameworkInitStateInterface.GetInitState
	// FGameplayTag GetInitState();                                                                                             // [0x716c7a4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModularGameplay.GameFrameworkInitStateInterface.GetFeatureName
	// FName GetFeatureName();                                                                                                  // [0x716c778] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ModularGameplay.GameStateComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UGameStateComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/ModularGameplay.PawnComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPawnComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/ModularGameplay.PlayerStateComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPlayerStateComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/ModularGameplay.ActorInitStateChangedParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FActorInitStateChangedParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class AActor*)                             OwningActor                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     FeatureName                                                 OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(class UObject*)                            Implementer                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FGameplayTag)                              FeatureState                                                OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

/// Enum /Script/ModularGameplay.EGameFrameworkAddComponentFlags
/// Size: 0x05
enum class EGameFrameworkAddComponentFlags : uint8_t
{
	EGameFrameworkAddComponentFlags__None                                            = 0,
	EGameFrameworkAddComponentFlags__AddUnique                                       = 1,
	EGameFrameworkAddComponentFlags__AddIfNotChild                                   = 2,
	EGameFrameworkAddComponentFlags__UseAutoGeneratedName                            = 4,
	EGameFrameworkAddComponentFlags__EGameFrameworkAddComponentFlags_MAX             = 5
};

