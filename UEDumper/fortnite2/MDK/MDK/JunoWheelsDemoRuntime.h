
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AttachableWheelsRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ItemizationCoreRuntime
/// dependency: JunoGameNative
/// dependency: JunoPowerSystemRuntime

/// Class /Script/JunoWheelsDemoRuntime.JunoWheelSubsystem
/// Size: 0x0020 (0x000040 - 0x000060)
class UJunoWheelSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/JunoWheelsDemoRuntime.JunoWheelActor
/// Size: 0x02E0 (0x000330 - 0x000610)
class AJunoWheelActor : public AAttachableWheel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	CMember(class UFortHealthSet*)                     HealthSet                                                   OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(class UFortAbilitySystemComponent*)        AbilitySystemComponent                                      OFFSET(get<T>, {0x3F0, 8, 0, 0})
	SMember(FGuid)                                     WheelGuid                                                   OFFSET(getStruct<T>, {0x410, 16, 0, 0})
	CMember(class UItemDefinitionBase*)                AssociatedItem                                              OFFSET(get<T>, {0x428, 8, 0, 0})
	SMember(FAttachableWheelAttachData)                LocalAttachData                                             OFFSET(getStruct<T>, {0x430, 88, 0, 0})
	SMember(FGameplayTag)                              ControlChannelTag_Steering                                  OFFSET(getStruct<T>, {0x488, 4, 0, 0})
	SMember(FGameplayTag)                              ControlChannelTag_Velocity                                  OFFSET(getStruct<T>, {0x48C, 4, 0, 0})
	SMember(FGameplayTag)                              ControlChannelTag_Brake                                     OFFSET(getStruct<T>, {0x490, 4, 0, 0})
	SMember(FScalableFloat)                            MaxSteerAngle                                               OFFSET(getStruct<T>, {0x498, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAccelerationTorque                                       OFFSET(getStruct<T>, {0x4C0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxBrakeTorque                                              OFFSET(getStruct<T>, {0x4E8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAngularVelocity                                          OFFSET(getStruct<T>, {0x510, 40, 0, 0})
	DMember(bool)                                      bControlChannelInvert_Steering                              OFFSET(get<bool>, {0x538, 1, 0, 0})
	DMember(bool)                                      bControlChannelInvert_Velocity                              OFFSET(get<bool>, {0x539, 1, 0, 0})
	SMember(FScalableFloat)                            SteeringMatchRate                                           OFFSET(getStruct<T>, {0x540, 40, 0, 0})
	SMember(FScalableFloat)                            VelocityMatchRate                                           OFFSET(getStruct<T>, {0x568, 40, 0, 0})
	SMember(FScalableFloat)                            BrakeMatchRate                                              OFFSET(getStruct<T>, {0x590, 40, 0, 0})
	SMember(FScalableFloat)                            AngularVelocityBrakeThreshold                               OFFSET(getStruct<T>, {0x5B8, 40, 0, 0})
	CMember(class UJunoControlChannelComponent*)       ControlChannelComponent                                     OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(class UJunoPowerConsumerComponent*)        PowerConsumerComponent                                      OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(class AActor*)                             ActorRef                                                    OFFSET(get<T>, {0x5F8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetControlChannel_SteerAngle
	// void SetControlChannel_SteerAngle(FGameplayTag InChannelTag);                                                            // [0xce10e9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetControlChannel_Brake
	// void SetControlChannel_Brake(FGameplayTag InChannelTag);                                                                 // [0xce10e18] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetControlChannel_AngularVelocity
	// void SetControlChannel_AngularVelocity(FGameplayTag InChannelTag);                                                       // [0xce10d94] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetAssociatedItem
	// void SetAssociatedItem(class UItemDefinitionBase* ItemDefinition);                                                       // [0xce10d10] Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetActorRef
	// void SetActorRef(class AActor* NewActorRef);                                                                             // [0xce10c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.OnLocalInteractStop
	// void OnLocalInteractStop(class AFortPlayerController* FortPC);                                                           // [0x228deb8] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.OnLocalInteractStart
	// void OnLocalInteractStart(class AFortPlayerController* FortPC);                                                          // [0x228deb8] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.OnHeldObjectPickedUp
	// void OnHeldObjectPickedUp();                                                                                             // [0xce10c7c] Final|Native|Private 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.K2_RemoveGameplayCue
	// void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters);                   // [0xce10b30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.K2_ExecuteGameplayCueWithParams
	// void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters);        // [0xce109e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.K2_AddGameplayCueWithParams
	// void K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters);            // [0xce10898] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.HandleOutOfHealth
	// void HandleOutOfHealth(float InDamage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& InEffectContext, class AController* InEventInstigator, class AActor* InDamageCauser); // [0xc01d6f0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.HandleDamaged
	// void HandleDamaged(float Damage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser); // [0x228deb8] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.GetMaxHealth
	// float GetMaxHealth();                                                                                                    // [0xce10868] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.GetHealth
	// float GetHealth();                                                                                                       // [0xce10838] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.GetActorRef
	// class AActor* GetActorRef();                                                                                             // [0x366c6d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.GameplayCue_Damage
	// void GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters);                    // [0xce10744] Final|Native|Public  
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.Die
	// void Die(FGameplayTag DeathReason, class AController* Killer, class AActor* DamageCauser);                               // [0xce1064c] Final|BlueprintAuthorityOnly|Native|Private|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.BlueprintOnInteract
	// void BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted); // [0x228deb8] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.BlueprintGetInteractionTime
	// bool BlueprintGetInteractionTime(class AFortPawn* InteractingPawn, float& OutInteractionTime, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted); // [0xce104f0] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.BlueprintGetInteractionString
	// FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted); // [0x228deb8] Event|Public|BlueprintEvent|Const 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.BlueprintFillContextInfo
	// void BlueprintFillContextInfo(FInteractionType& InteractType, class UFortInteractContextInfo* ContextInfo);              // [0x228deb8] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.BlueprintCanInteract
	// bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<TInteractionType> InteractionType); // [0x228deb8] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.AttachToUsingCachedData
	// bool AttachToUsingCachedData(class UPrimitiveComponent* InAttachComponent);                                              // [0xce10460] Final|Native|Public|BlueprintCallable 
};

