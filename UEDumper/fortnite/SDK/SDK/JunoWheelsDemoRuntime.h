
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:
	unsigned char                                      UnknownData00_3[0x88];                                      // 0x0328   (0x0088)  MISSED
	float                                              MaxSteerAngle;                                              // 0x03B0   (0x0004)  
	float                                              MaxTorque;                                                  // 0x03B4   (0x0004)  
	float                                              MaxAngularVelocity;                                         // 0x03B8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03BC   (0x0004)  MISSED
	class UFortHealthSet*                              HealthSet;                                                  // 0x03C0   (0x0008)  
	class UFortAbilitySystemComponent*                 AbilitySystemComponent;                                     // 0x03C8   (0x0008)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x03D0   (0x0018)  MISSED
	FGuid                                              WheelGuid;                                                  // 0x03E8   (0x0010)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x03F8   (0x0008)  MISSED
	class UItemDefinitionBase*                         AssociatedItem;                                             // 0x0400   (0x0008)  
	FAttachableWheelAttachData                         LocalAttachData;                                            // 0x0408   (0x0058)  
	FGameplayTag                                       ControlChannelTag_Steering;                                 // 0x0460   (0x0004)  
	FGameplayTag                                       ControlChannelTag_Velocity;                                 // 0x0464   (0x0004)  
	class UJunoControlChannelComponent*                ControlChannelComponent;                                    // 0x0468   (0x0008)  
	class AActor*                                      ActorRef;                                                   // 0x0470   (0x0008)  


	/// Functions
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetSteerAngle
	// void SetSteerAngle(float SteerAnglePercent);                                                                          // [0xb56cb68] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetControlChannel_SteerAngle
	// void SetControlChannel_SteerAngle(FGameplayTag InChannelTag);                                                         // [0xb56ca34] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetControlChannel_AngularVelocity
	// void SetControlChannel_AngularVelocity(FGameplayTag InChannelTag);                                                    // [0xb56c900] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetAssociatedItem
	// void SetAssociatedItem(class UItemDefinitionBase* ItemDefinition);                                                    // [0xb56c87c] Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetAngularVelocity
	// void SetAngularVelocity(float AngularVelocityPercent);                                                                // [0xb56c7fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.SetActorRef
	// void SetActorRef(class AActor* NewActorRef);                                                                          // [0xb56c77c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.OnHeldObjectPickedUp
	// void OnHeldObjectPickedUp();                                                                                          // [0xb56c768] Final|Native|Private 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.HandleOutOfHealth
	// void HandleOutOfHealth(float InDamage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& InEffectContext, class AController* InEventInstigator, class AActor* InDamageCauser); // [0xab2704c] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.HandleDamaged
	// void HandleDamaged(float Damage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.GetMaxHealth
	// float GetMaxHealth();                                                                                                 // [0xb56c738] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.GetHealth
	// float GetHealth();                                                                                                    // [0xb56c708] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.GetActorRef
	// class AActor* GetActorRef();                                                                                          // [0xb56c6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoWheelsDemoRuntime.JunoWheelActor.AttachToUsingCachedData
	// bool AttachToUsingCachedData(class UPrimitiveComponent* InAttachComponent);                                           // [0xb56c660] Final|Native|Public|BlueprintCallable 
};

