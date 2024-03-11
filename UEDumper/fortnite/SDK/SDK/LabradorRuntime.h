
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: IrwinRuntime

/// Enum /Script/LabradorRuntime.ELabradorDespawnReason
/// Size: 0x07
enum class ELabradorDespawnReason : uint8_t
{
	ELabradorDespawnReason__DeathByPlayer                                            = 0,
	ELabradorDespawnReason__DeathByBot                                               = 1,
	ELabradorDespawnReason__DeathByAIPawn                                            = 2,
	ELabradorDespawnReason__DeathByStorm                                             = 3,
	ELabradorDespawnReason__Teleport                                                 = 4,
	ELabradorDespawnReason__Unknown                                                  = 5,
	ELabradorDespawnReason__ELabradorDespawnReason_MAX                               = 6
};

/// Class /Script/LabradorRuntime.FortAIFaunaAnimInstance_Labrador
/// Size: 0x0030 (0x000720 - 0x000750)
class UFortAIFaunaAnimInstance_Labrador : public UFortAIFaunaAnimInstance
{ 
public:
	bool                                               bHighVelocity;                                              // 0x0718   (0x0001)  
	bool                                               bIsInterruptible;                                           // 0x0719   (0x0001)  
	bool                                               bLocoToIdle;                                                // 0x071A   (0x0001)  
	bool                                               bIdleToLoco;                                                // 0x071B   (0x0001)  
	bool                                               bJumpStartToJumpLoop;                                       // 0x071C   (0x0001)  
	bool                                               bJumpLandToMovement;                                        // 0x071D   (0x0001)  
	bool                                               bIsRunning;                                                 // 0x071E   (0x0001)  
	bool                                               bIdleToFalling;                                             // 0x071F   (0x0001)  
	bool                                               bToppledOnGround;                                           // 0x0720   (0x0001)  
	bool                                               bTransitionToLand;                                          // 0x0721   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0722   (0x0002)  MISSED
	float                                              TargetDistance;                                             // 0x0724   (0x0004)  
	bool                                               bTargetIsClose;                                             // 0x0728   (0x0001)  
	bool                                               bIsToppled;                                                 // 0x0729   (0x0001)  
	bool                                               bIsLeaking;                                                 // 0x072A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x072B   (0x0001)  MISSED
	float                                              MinHighVelocityMagnitude;                                   // 0x072C   (0x0004)  
	float                                              MaxInterruptibleCurveValue;                                 // 0x0730   (0x0004)  
	float                                              LocoIdleTransitionThreshold;                                // 0x0734   (0x0004)  
	float                                              RunSpeedThreshold;                                          // 0x0738   (0x0004)  
	float                                              JumpLandToMovementInterruptibleThreshold;                   // 0x073C   (0x0004)  
	float                                              MinTargetIsCloseDistance;                                   // 0x0740   (0x0004)  
	FName                                              CurveName_Interruptible;                                    // 0x0744   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0748   (0x0008)  MISSED
};

/// Class /Script/LabradorRuntime.FortLabradorComponent_Telemetry
/// Size: 0x0020 (0x000108 - 0x000128)
class UFortLabradorComponent_Telemetry : public UFortAIComponent_Telemetry
{ 
public:
	bool                                               bWasAwake;                                                  // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0109   (0x0007)  MISSED
	SDK_UNDEFINED(16,14837) /* FString */              __um(InstigatorAwakeNetIDString);                           // 0x0110   (0x0010)  
	ELabradorDespawnReason                             DespawnReason;                                              // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0121   (0x0003)  MISSED
	float                                              DamageReceivedFromPlayers;                                  // 0x0124   (0x0004)  


	/// Functions
	// Function /Script/LabradorRuntime.FortLabradorComponent_Telemetry.OnWakeUp
	// void OnWakeUp(class AActor* GoalActor);                                                                               // [0xa8be914] Final|Native|Public|BlueprintCallable 
	// Function /Script/LabradorRuntime.FortLabradorComponent_Telemetry.OnTeleport
	// void OnTeleport();                                                                                                    // [0xa8be8fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/LabradorRuntime.FortLabradorComponent_Telemetry.OnDamaged
	// void OnDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xa8be464] Final|Native|Private|HasDefaults 
};

