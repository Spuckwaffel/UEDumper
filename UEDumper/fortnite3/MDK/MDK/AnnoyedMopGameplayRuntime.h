
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags

/// Class /Script/AnnoyedMopGameplayRuntime.AnnoyedMopPlayerAnimInstance
/// Size: 0x0040 (0x001510 - 0x001550)
class UAnnoyedMopPlayerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5456;

public:
	DMember(bool)                                      bIsActionInput                                              OFFSET(get<bool>, {0x1510, 1, 1, 0})
	DMember(bool)                                      bIsJumpAOELand                                              OFFSET(get<bool>, {0x1510, 1, 1, 1})
	DMember(bool)                                      bIsJumpAOEStart                                             OFFSET(get<bool>, {0x1510, 1, 1, 2})
	DMember(bool)                                      bIsInAirAttack                                              OFFSET(get<bool>, {0x1510, 1, 1, 3})
	DMember(bool)                                      bIsCombo04                                                  OFFSET(get<bool>, {0x1510, 1, 1, 4})
	DMember(bool)                                      bIsInAirAttackLanding                                       OFFSET(get<bool>, {0x1510, 1, 1, 5})
	DMember(float)                                     Combo04AOAlpha                                              OFFSET(get<float>, {0x1514, 4, 0, 0})
	SMember(FName)                                     CurveName_UserCurve01                                       OFFSET(getStruct<T>, {0x1518, 4, 0, 0})
	SMember(FName)                                     CurveName_UserCurve02                                       OFFSET(getStruct<T>, {0x151C, 4, 0, 0})
	SMember(FString)                                   MontageName_AnnoyedMop_InAirAttack_M                        OFFSET(getStruct<T>, {0x1520, 16, 0, 0})
	SMember(FString)                                   MontageName_Combo_04                                        OFFSET(getStruct<T>, {0x1530, 16, 0, 0})
	SMember(FGameplayTag)                              Granted_Athena_Power_ActivePower_IsActive_Tag               OFFSET(getStruct<T>, {0x1540, 4, 0, 0})
	SMember(FGameplayTag)                              MovementMode_Falling_Tag                                    OFFSET(getStruct<T>, {0x1544, 4, 0, 0})
};

/// Class /Script/AnnoyedMopGameplayRuntime.FortProjectileAnnoyedMop
/// Size: 0x0030 (0x000AB8 - 0x000AE8)
class AFortProjectileAnnoyedMop : public AFortProjectileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2792;

public:
	DMember(float)                                     currentScale                                                OFFSET(get<float>, {0xAB8, 4, 0, 0})


	/// Functions
	// Function /Script/AnnoyedMopGameplayRuntime.FortProjectileAnnoyedMop.UpdateSize
	// float UpdateSize(float DeltaSeconds, float GrowthSpeed);                                                                 // [0xb46a878] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AnnoyedMopGameplayRuntime.FortProjectileAnnoyedMop.InitializeFXComponent
	// void InitializeFXComponent(class UNiagaraComponent* FXComponent);                                                        // [0xb46a738] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AnnoyedMopGameplayRuntime.FortProjectileAnnoyedMop.InitializeCollisionSegments
	// void InitializeCollisionSegments(TArray<UCapsuleComponent*>& SegmentInitializers, class UFortProjectileSegmentedCollisionComponent* SegmentedCollisionComp); // [0xb469d68] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

