
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AttachableWheelsRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ItemizationCoreRuntime
/// dependency: JunoGameNative

/// Class /Script/JunoWheelsDemoRuntime.JunoWheelActor
/// Size: 0x0150 (0x000328 - 0x000478)
class AJunoWheelActor : public AAttachableWheel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	DMember(float)                                     MaxSteerAngle                                               OFFSET(get<float>, {0x3B0, 4, 0, 0})
	DMember(float)                                     MaxTorque                                                   OFFSET(get<float>, {0x3B4, 4, 0, 0})
	DMember(float)                                     MaxAngularVelocity                                          OFFSET(get<float>, {0x3B8, 4, 0, 0})
	CMember(class UFortHealthSet*)                     HealthSet                                                   OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(class UFortAbilitySystemComponent*)        AbilitySystemComponent                                      OFFSET(get<T>, {0x3C8, 8, 0, 0})
	SMember(FGuid)                                     WheelGuid                                                   OFFSET(getStruct<T>, {0x3E8, 16, 0, 0})
	CMember(class UItemDefinitionBase*)                AssociatedItem                                              OFFSET(get<T>, {0x400, 8, 0, 0})
	SMember(FAttachableWheelAttachData)                LocalAttachData                                             OFFSET(getStruct<T>, {0x408, 88, 0, 0})
	SMember(FGameplayTag)                              ControlChannelTag_Steering                                  OFFSET(getStruct<T>, {0x460, 4, 0, 0})
	SMember(FGameplayTag)                              ControlChannelTag_Velocity                                  OFFSET(getStruct<T>, {0x464, 4, 0, 0})
	CMember(class UJunoControlChannelComponent*)       ControlChannelComponent                                     OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class AActor*)                             ActorRef                                                    OFFSET(get<T>, {0x470, 8, 0, 0})


	/// Functions
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetSteerAngle
	// void SetSteerAngle(float SteerAnglePercent);                                                                             // [0xb56cb68] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetControlChannel_SteerAngle
	// void SetControlChannel_SteerAngle(FGameplayTag InChannelTag);                                                            // [0xb56ca34] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetControlChannel_AngularVelocity
	// void SetControlChannel_AngularVelocity(FGameplayTag InChannelTag);                                                       // [0xb56c900] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetAssociatedItem
	// void SetAssociatedItem(class UItemDefinitionBase* ItemDefinition);                                                       // [0xb56c87c] Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetAngularVelocity
	// void SetAngularVelocity(float AngularVelocityPercent);                                                                   // [0xb56c7fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetActorRef
	// void SetActorRef(class AActor* NewActorRef);                                                                             // [0xb56c77c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.OnHeldObjectPickedUp
	// void OnHeldObjectPickedUp();                                                                                             // [0xb56c768] Final|Native|Private 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.HandleOutOfHealth
	// void HandleOutOfHealth(float InDamage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& InEffectContext, class AController* InEventInstigator, class AActor* InDamageCauser); // [0xab2704c] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.HandleDamaged
	// void HandleDamaged(float Damage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.GetMaxHealth
	// float GetMaxHealth();                                                                                                    // [0xb56c738] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.GetHealth
	// float GetHealth();                                                                                                       // [0xb56c708] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.GetActorRef
	// class AActor* GetActorRef();                                                                                             // [0xb56c6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.AttachToUsingCachedData
	// bool AttachToUsingCachedData(class UPrimitiveComponent* InAttachComponent);                                              // [0xb56c660] Final|Native|Public|BlueprintCallable 
};

