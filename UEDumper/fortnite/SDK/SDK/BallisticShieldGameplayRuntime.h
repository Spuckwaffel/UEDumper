
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
/// dependency: GameplayAbilities
/// dependency: TacticalSprintRuntime
/// dependency: TargetingSystem

/// Enum /Script/BallisticShieldGameplayRuntime.EBallisticShieldPlayerActionState
/// Size: 0x04
enum class EBallisticShieldPlayerActionState : uint8_t
{
	EBallisticShieldPlayerActionState__Idling                                        = 0,
	EBallisticShieldPlayerActionState__Blocking                                      = 1,
	EBallisticShieldPlayerActionState__Charging                                      = 2,
	EBallisticShieldPlayerActionState__EBallisticShieldPlayerActionState_MAX         = 3
};

/// Class /Script/BallisticShieldGameplayRuntime.BallisticShieldItemLayerAnimInstance
/// Size: 0x00E0 (0x0006F0 - 0x0007D0)
class UBallisticShieldItemLayerAnimInstance : public UFortItemLayerAnimInstance
{ 
public:
	bool                                               bIsRush;                                                    // 0x06F0   (0x0001)  
	bool                                               bIsEquipping;                                               // 0x06F1   (0x0001)  
	bool                                               bIsReloading;                                               // 0x06F2   (0x0001)  
	bool                                               bEnterLanding;                                              // 0x06F3   (0x0001)  
	bool                                               bExitLanding;                                               // 0x06F4   (0x0001)  
	bool                                               bIsShieldBlocking;                                          // 0x06F5   (0x0001)  
	bool                                               bIsStaggerBuildup;                                          // 0x06F6   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x06F7   (0x0001)  MISSED
	float                                              Yaw;                                                        // 0x06F8   (0x0004)  
	float                                              ChargeAOAlpha;                                              // 0x06FC   (0x0004)  
	int32_t                                            GenderAndSize;                                              // 0x0700   (0x0004)  
	float                                              ReloadUBAlpha;                                              // 0x0704   (0x0004)  
	float                                              MaskLeftArmAlpha;                                           // 0x0708   (0x0004)  
	float                                              StaggerAmount;                                              // 0x070C   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC0];                                      // 0x0710   (0x00C0)  MISSED
};

/// Class /Script/BallisticShieldGameplayRuntime.BallisticShieldWeaponInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UBallisticShieldWeaponInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/BallisticShieldGameplayRuntime.BallisticShieldWeaponInterface.GetBallisticShieldData
	// void GetBallisticShieldData(EBallisticShieldPlayerActionState& BallisticShieldPlayerState, float& StaggerBuildupPercent); // [0xa327368] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/BallisticShieldGameplayRuntime.FortMovementMode_ELBShieldSprint
/// Size: 0x0038 (0x0003C8 - 0x000400)
class UFortMovementMode_ELBShieldSprint : public UFortMovementMode_ELTacSprint
{ 
public:
	FScalableFloat                                     ChargeRotationRate;                                         // 0x03C8   (0x0028)  
	class UClass*                                      GrantedAbility;                                             // 0x03F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x03F8   (0x0008)  MISSED
};

/// Class /Script/BallisticShieldGameplayRuntime.TargetingFilterTask_BShieldCharge
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UTargetingFilterTask_BShieldCharge : public UTargetingFilterTask_BasicFilterTemplate
{ 
public:
	TArray<class UClass*>                              WalkableActorClasses;                                       // 0x0028   (0x0010)  
	FScalableFloat                                     BashableActorAngle;                                         // 0x0038   (0x0028)  
	FScalableFloat                                     MainTraceDistance;                                          // 0x0060   (0x0028)  
	FScalableFloat                                     FloorHitZTolerance;                                         // 0x0088   (0x0028)  
};

