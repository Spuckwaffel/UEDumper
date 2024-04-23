
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: IrwinRuntime

/// Class /Script/LabradorRuntime.FortAIFaunaAnimInstance_Labrador
/// Size: 0x0030 (0x000720 - 0x000750)
class UFortAIFaunaAnimInstance_Labrador : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
	DMember(bool)                                      bHighVelocity                                               OFFSET(get<bool>, {0x718, 1, 0, 0})
	DMember(bool)                                      bIsInterruptible                                            OFFSET(get<bool>, {0x719, 1, 0, 0})
	DMember(bool)                                      bLocoToIdle                                                 OFFSET(get<bool>, {0x71A, 1, 0, 0})
	DMember(bool)                                      bIdleToLoco                                                 OFFSET(get<bool>, {0x71B, 1, 0, 0})
	DMember(bool)                                      bJumpStartToJumpLoop                                        OFFSET(get<bool>, {0x71C, 1, 0, 0})
	DMember(bool)                                      bJumpLandToMovement                                         OFFSET(get<bool>, {0x71D, 1, 0, 0})
	DMember(bool)                                      bIsRunning                                                  OFFSET(get<bool>, {0x71E, 1, 0, 0})
	DMember(bool)                                      bIdleToFalling                                              OFFSET(get<bool>, {0x71F, 1, 0, 0})
	DMember(bool)                                      bToppledOnGround                                            OFFSET(get<bool>, {0x720, 1, 0, 0})
	DMember(bool)                                      bTransitionToLand                                           OFFSET(get<bool>, {0x721, 1, 0, 0})
	DMember(float)                                     TargetDistance                                              OFFSET(get<float>, {0x724, 4, 0, 0})
	DMember(bool)                                      bTargetIsClose                                              OFFSET(get<bool>, {0x728, 1, 0, 0})
	DMember(bool)                                      bIsToppled                                                  OFFSET(get<bool>, {0x729, 1, 0, 0})
	DMember(bool)                                      bIsLeaking                                                  OFFSET(get<bool>, {0x72A, 1, 0, 0})
	DMember(float)                                     MinHighVelocityMagnitude                                    OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     MaxInterruptibleCurveValue                                  OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     LocoIdleTransitionThreshold                                 OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     RunSpeedThreshold                                           OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(float)                                     JumpLandToMovementInterruptibleThreshold                    OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     MinTargetIsCloseDistance                                    OFFSET(get<float>, {0x740, 4, 0, 0})
	SMember(FName)                                     CurveName_Interruptible                                     OFFSET(getStruct<T>, {0x744, 4, 0, 0})
};

/// Class /Script/LabradorRuntime.FortLabradorComponent_Telemetry
/// Size: 0x0020 (0x000108 - 0x000128)
class UFortLabradorComponent_Telemetry : public UFortAIComponent_Telemetry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(bool)                                      bWasAwake                                                   OFFSET(get<bool>, {0x108, 1, 0, 0})
	SMember(FString)                                   InstigatorAwakeNetIDString                                  OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	CMember(ELabradorDespawnReason)                    DespawnReason                                               OFFSET(get<T>, {0x120, 1, 0, 0})
	DMember(float)                                     DamageReceivedFromPlayers                                   OFFSET(get<float>, {0x124, 4, 0, 0})


	/// Functions
	// Function /Script/LabradorRuntime.FortLabradorComponent_Telemetry.OnWakeUp
	// void OnWakeUp(class AActor* GoalActor);                                                                                  // [0xbbeb614] Final|Native|Public|BlueprintCallable 
	// Function /Script/LabradorRuntime.FortLabradorComponent_Telemetry.OnTeleport
	// void OnTeleport();                                                                                                       // [0xbbeb5fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/LabradorRuntime.FortLabradorComponent_Telemetry.OnDamaged
	// void OnDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xbbeb260] Final|Native|Private|HasDefaults 
};

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

