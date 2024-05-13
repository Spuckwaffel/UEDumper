
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
/// dependency: GameplayGraph
/// dependency: GameplayTags
/// dependency: JunoGameNative
/// dependency: ModularGameplay

/// Class /Script/JunoPowerSystemRuntime.JunoPowerBank
/// Size: 0x0010 (0x000CA0 - 0x000CB0)
class AJunoPowerBank : public AJunoBuildingActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3248;

public:
	CMember(class UJunoInventoryComponent*)            InventoryComponent                                          OFFSET(get<T>, {0xCA0, 8, 0, 0})
	CMember(class UJunoPowerManagerComponent*)         PowerManager                                                OFFSET(get<T>, {0xCA8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoPowerSystemRuntime.JunoPowerBank.HandleInventoryChanged
	// void HandleInventoryChanged(TArray<UFortItem*>& AddedItems, TArray<UFortItem*>& RemovedItems);                           // [0xccacd38] Final|Native|Protected|HasOutParms 
};

/// Class /Script/JunoPowerSystemRuntime.JunoPowerCenter
/// Size: 0x0030 (0x000CA0 - 0x000CD0)
class AJunoPowerCenter : public AJunoBuildingActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3280;

public:
	CMember(class UJunoInventoryComponent*)            InventoryComponent                                          OFFSET(get<T>, {0xCA0, 8, 0, 0})
	CMember(class UFortWeaponItemDefinition*)          PowerItemDef                                                OFFSET(get<T>, {0xCA8, 8, 0, 0})
	CMember(class UJunoPowerManagerComponent*)         PowerManager                                                OFFSET(get<T>, {0xCB0, 8, 0, 0})
	SMember(FGuid)                                     CurrentPowerItemGUID                                        OFFSET(getStruct<T>, {0xCB8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoPowerSystemRuntime.JunoPowerCenter.HandleInventoryChanged
	// void HandleInventoryChanged(TArray<UFortItem*>& AddedItems, TArray<UFortItem*>& RemovedItems);                           // [0xccace4c] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerCenter.GetPowerConsumptionAmount
	// float GetPowerConsumptionAmount();                                                                                       // [0xccaccfc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerCenter.GetPowerCapacityPercent
	// float GetPowerCapacityPercent();                                                                                         // [0xccaccac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerCenter.GetMaxPowerCapacity
	// float GetMaxPowerCapacity();                                                                                             // [0xccacc2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerCenter.GetCurrentPowerItemGUID
	// FGuid GetCurrentPowerItemGUID();                                                                                         // [0xccacc10] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerCenter.GetCurrentPowerCapacity
	// float GetCurrentPowerCapacity();                                                                                         // [0xccacb4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoPowerSystemRuntime.JunoPowerConsumerComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UJunoPowerConsumerComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FScalableFloat)                            PowerRequired                                               OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            ConsumptionInterval                                         OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FGameplayTagContainer)                     ConsumerChannelTags                                         OFFSET(getStruct<T>, {0xF0, 32, 0, 0})
	CMember(class UJunoPowerManagerComponent*)         PowerManager                                                OFFSET(get<T>, {0x110, 8, 0, 0})


	/// Functions
	// Function /Script/JunoPowerSystemRuntime.JunoPowerConsumerComponent.RemovePowerChannel
	// void RemovePowerChannel(FGameplayTag Channel);                                                                           // [0xccad170] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerConsumerComponent.RegisterPowerConsumer
	// void RegisterPowerConsumer(FGameplayTagContainer Channels);                                                              // [0xccad0b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerConsumerComponent.OnDetached
	// void OnDetached();                                                                                                       // [0xccad024] Final|Native|Private 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerConsumerComponent.OnAttached
	// void OnAttached(FGraphIslandHandle& IslandHandle);                                                                       // [0xccacf84] Final|Native|Private|HasOutParms 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerConsumerComponent.HasPower
	// bool HasPower();                                                                                                         // [0xccacf60] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerConsumerComponent.ConsumePower
	// bool ConsumePower();                                                                                                     // [0xccacab0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerConsumerComponent.AddPowerChannel
	// void AddPowerChannel(FGameplayTag Channel);                                                                              // [0xccaca30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UJunoPowerManagerComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FMulticastInlineDelegate)                  OnStartConsumingPowerEvent                                  OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStopConsumingPowerEvent                                   OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<AJunoPowerCenter*>>) AttachedPowerCenters                                        OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<AJunoPowerBank*>>)   AttachedPowerBanks                                          OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<FConsumerChannelPowerInfo>)         ConsumerChannelPowers                                       OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TWeakObjectPtr<AJunoPowerCenter*>)         CurrentPowerCenter                                          OFFSET(get<T>, {0x108, 8, 0, 0})
	DMember(bool)                                      bIsConsumingPower                                           OFFSET(get<bool>, {0x110, 1, 0, 0})


	/// Functions
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.OnStopConsumingPower__DelegateSignature
	// void OnStopConsumingPower__DelegateSignature();                                                                          // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.OnStartConsumingPower__DelegateSignature
	// void OnStartConsumingPower__DelegateSignature();                                                                         // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.OnRep_IsConsumingPower
	// void OnRep_IsConsumingPower();                                                                                           // [0xccad04c] Final|Native|Private 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.OnRep_AttachedPowerCenters
	// void OnRep_AttachedPowerCenters();                                                                                       // [0xccad038] Final|Native|Private 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetRemainingPowerItemsCount
	// int32_t GetRemainingPowerItemsCount();                                                                                   // [0xccacd14] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetPowerCenterInUse
	// class AJunoPowerCenter* GetPowerCenterInUse();                                                                           // [0xccaccd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetMaxPowerItemsCount
	// int32_t GetMaxPowerItemsCount();                                                                                         // [0xccacc94] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetMaxPowerItemDurability
	// float GetMaxPowerItemDurability();                                                                                       // [0xccacc6c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetMaxPowerCapacity
	// float GetMaxPowerCapacity();                                                                                             // [0xccacc54] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetCurrentPowerItemDurability
	// float GetCurrentPowerItemDurability();                                                                                   // [0xccacbe8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetCurrentPowerItem
	// class UFortWorldItem* GetCurrentPowerItem();                                                                             // [0xccacbc4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetCurrentPowerCapacityPercent
	// float GetCurrentPowerCapacityPercent();                                                                                  // [0xccacb9c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetCurrentPowerCapacity
	// float GetCurrentPowerCapacity();                                                                                         // [0xccacb74] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetAttachedPowerConsumerInfo
	// TArray<FConsumerChannelPowerInfo> GetAttachedPowerConsumerInfo();                                                        // [0xccacad4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoPowerSystemRuntime.JunoPowerSystemLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPowerSystemLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/JunoPowerSystemRuntime.ConsumerChannelPowerInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FConsumerChannelPowerInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              Channel                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Power                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
};

