
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
/// Size: 0x0040 (0x001530 - 0x001570)
class UAnnoyedMopPlayerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5488;

public:
	DMember(bool)                                      bIsActionInput                                              OFFSET(get<bool>, {0x1528, 1, 1, 0})
	DMember(bool)                                      bIsJumpAOELand                                              OFFSET(get<bool>, {0x1528, 1, 1, 1})
	DMember(bool)                                      bIsJumpAOEStart                                             OFFSET(get<bool>, {0x1528, 1, 1, 2})
	DMember(bool)                                      bIsInAirAttack                                              OFFSET(get<bool>, {0x1528, 1, 1, 3})
	DMember(bool)                                      bIsCombo04                                                  OFFSET(get<bool>, {0x1528, 1, 1, 4})
	DMember(bool)                                      bIsInAirAttackLanding                                       OFFSET(get<bool>, {0x1528, 1, 1, 5})
	DMember(float)                                     Combo04AOAlpha                                              OFFSET(get<float>, {0x152C, 4, 0, 0})
	SMember(FName)                                     CurveName_UserCurve01                                       OFFSET(getStruct<T>, {0x1530, 4, 0, 0})
	SMember(FName)                                     CurveName_UserCurve02                                       OFFSET(getStruct<T>, {0x1534, 4, 0, 0})
	SMember(FString)                                   MontageName_AnnoyedMop_InAirAttack_M                        OFFSET(getStruct<T>, {0x1538, 16, 0, 0})
	SMember(FString)                                   MontageName_Combo_04                                        OFFSET(getStruct<T>, {0x1548, 16, 0, 0})
	SMember(FGameplayTag)                              Granted_Athena_Power_ActivePower_IsActive_Tag               OFFSET(getStruct<T>, {0x1558, 4, 0, 0})
	SMember(FGameplayTag)                              MovementMode_Falling_Tag                                    OFFSET(getStruct<T>, {0x155C, 4, 0, 0})
};

/// Class /Script/AnnoyedMopGameplayRuntime.FortProjectileAnnoyedMop
/// Size: 0x0020 (0x000AB8 - 0x000AD8)
class AFortProjectileAnnoyedMop : public AFortProjectileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2776;

public:
	DMember(float)                                     currentScale                                                OFFSET(get<float>, {0xAB8, 4, 0, 0})


	/// Functions
	// Function /Script/AnnoyedMopGameplayRuntime.FortProjectileAnnoyedMop.UpdateSize
	// float UpdateSize(float DeltaSeconds, float GrowthSpeed);                                                                 // [0x2e88ca8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AnnoyedMopGameplayRuntime.FortProjectileAnnoyedMop.InitializeCollisionSegments
	// void InitializeCollisionSegments(TArray<UCapsuleComponent*>& SegmentInitializers, class UFortProjectileSegmentedCollisionComponent* SegmentedCollisionComp); // [0x32eae60] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

