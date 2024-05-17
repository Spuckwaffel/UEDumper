
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: TargetingSystem

/// Class /Script/SunRoseChainWhipGameplay.Chains_SunRose_Sharp_Wep_AnimInstance
/// Size: 0x0040 (0x000720 - 0x000760)
class UChains_SunRose_Sharp_Wep_AnimInstance : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1888;

public:
	DMember(float)                                     AttackRange                                                 OFFSET(get<float>, {0x720, 4, 0, 0})
	DMember(int32_t)                                   ActiveTechniqueIndex                                        OFFSET(get<int32_t>, {0x724, 4, 0, 0})
	DMember(bool)                                      bIsTechniqueActive                                          OFFSET(get<bool>, {0x728, 1, 0, 0})
	DMember(bool)                                      bHasIsTargetingTag                                          OFFSET(get<bool>, {0x729, 1, 0, 0})
	DMember(float)                                     PawnVelocitySpeed                                           OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     PawnVelocitySpeedCutoff                                     OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(bool)                                      bIsAttack_01                                                OFFSET(get<bool>, {0x734, 1, 0, 0})
	DMember(bool)                                      bIsAttack_02                                                OFFSET(get<bool>, {0x735, 1, 0, 0})
	DMember(bool)                                      bIsAttack_03                                                OFFSET(get<bool>, {0x736, 1, 0, 0})
	DMember(bool)                                      bIsAllowPhysics                                             OFFSET(get<bool>, {0x737, 1, 0, 0})
	DMember(bool)                                      bIsMantisDone                                               OFFSET(get<bool>, {0x738, 1, 0, 0})
	DMember(bool)                                      bIsUpperBodyAttack_01                                       OFFSET(get<bool>, {0x739, 1, 0, 0})
	DMember(bool)                                      bIsUpperBodyAttack_02                                       OFFSET(get<bool>, {0x73A, 1, 0, 0})
	DMember(float)                                     XMoveRight                                                  OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     XMoveLeft                                                   OFFSET(get<float>, {0x740, 4, 0, 0})
	DMember(float)                                     YMoveFwd                                                    OFFSET(get<float>, {0x744, 4, 0, 0})
	DMember(bool)                                      bIs700Distance                                              OFFSET(get<bool>, {0x748, 1, 0, 0})
	DMember(bool)                                      bIs1200Distance                                             OFFSET(get<bool>, {0x749, 1, 0, 0})
	DMember(bool)                                      bIsTurnOffPhysics                                           OFFSET(get<bool>, {0x74A, 1, 0, 0})
	DMember(float)                                     AttackRange700                                              OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     AttackRange1200                                             OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(float)                                     AttackRange1500                                             OFFSET(get<float>, {0x754, 4, 0, 0})
	SMember(FGameplayTag)                              IsTargetingTag                                              OFFSET(getStruct<T>, {0x758, 4, 0, 0})
};

/// Class /Script/SunRoseChainWhipGameplay.Hades_Player_LayerAnimInstance
/// Size: 0x0018 (0x001388 - 0x0013A0)
class UHades_Player_LayerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5024;

public:
	DMember(bool)                                      bIsMotorcycle                                               OFFSET(get<bool>, {0x1388, 1, 0, 0})
	DMember(bool)                                      bIsHookshot                                                 OFFSET(get<bool>, {0x1389, 1, 0, 0})
	DMember(bool)                                      bIsTechniqueActive                                          OFFSET(get<bool>, {0x138A, 1, 0, 0})
	DMember(bool)                                      bIsHadesAO                                                  OFFSET(get<bool>, {0x138B, 1, 0, 0})
	DMember(bool)                                      bIsUpperBodyReplacement                                     OFFSET(get<bool>, {0x138C, 1, 0, 0})
	SMember(FGameplayTag)                              MotorcycleTag                                               OFFSET(getStruct<T>, {0x1390, 4, 0, 0})
	SMember(FGameplayTag)                              HookshotTag                                                 OFFSET(getStruct<T>, {0x1394, 4, 0, 0})
	SMember(FGameplayTag)                              DisableGrindRailUpperBodyCorrectTag                         OFFSET(getStruct<T>, {0x1398, 4, 0, 0})
};

/// Class /Script/SunRoseChainWhipGameplay.FortCheatManager_SunRoseChainWhip
/// Size: 0x0040 (0x000028 - 0x000068)
class UFortCheatManager_SunRoseChainWhip : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<UClass*>)                   HookShotGameplayEffectClass                                 OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   HookShooterAISpawnerData                                    OFFSET(get<T>, {0x48, 32, 0, 0})


	/// Functions
	// Function /Script/SunRoseChainWhipGameplay.FortCheatManager_SunRoseChainWhip.SunRoseSpawnHookShotShooter
	// void SunRoseSpawnHookShotShooter();                                                                                      // [0x36569a8] Final|Exec|Native|Public 
	// Function /Script/SunRoseChainWhipGameplay.FortCheatManager_SunRoseChainWhip.SunRoseRemoveHookShotShooter
	// void SunRoseRemoveHookShotShooter();                                                                                     // [0xb58459c] Final|Exec|Native|Public 
	// Function /Script/SunRoseChainWhipGameplay.FortCheatManager_SunRoseChainWhip.SunRoseApplyHookShot
	// void SunRoseApplyHookShot(float Delay);                                                                                  // [0x6a35050] Final|Exec|Native|Public 
};

/// Class /Script/SunRoseChainWhipGameplay.TargetingSelectionTask_SunRoseChainWhip
/// Size: 0x0000 (0x000170 - 0x000170)
class UTargetingSelectionTask_SunRoseChainWhip : public UTargetingSelectionTask_Trace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
};

/// Class /Script/SunRoseChainWhipGameplay.TargetingSelectionTask_SunRoseChainWhip_Melee
/// Size: 0x0020 (0x000170 - 0x000190)
class UTargetingSelectionTask_SunRoseChainWhip_Melee : public UTargetingSelectionTask_SunRoseChainWhip
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	DMember(float)                                     YawOffsetDegrees                                            OFFSET(get<float>, {0x170, 4, 0, 0})
	SMember(FVector)                                   SourceLocationRelativeOffset                                OFFSET(getStruct<T>, {0x178, 24, 0, 0})
};

