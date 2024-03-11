
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: TargetingSystem

/// Class /Script/SunRoseChainWhipGameplay.Chains_SunRose_Sharp_Wep_AnimInstance
/// Size: 0x0040 (0x000720 - 0x000760)
class UChains_SunRose_Sharp_Wep_AnimInstance : public UCustomCharacterPartAnimInstance
{ 
public:
	float                                              AttackRange;                                                // 0x0720   (0x0004)  
	int32_t                                            ActiveTechniqueIndex;                                       // 0x0724   (0x0004)  
	bool                                               bIsTechniqueActive;                                         // 0x0728   (0x0001)  
	bool                                               bHasIsTargetingTag;                                         // 0x0729   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x072A   (0x0002)  MISSED
	float                                              PawnVelocitySpeed;                                          // 0x072C   (0x0004)  
	float                                              PawnVelocitySpeedCutoff;                                    // 0x0730   (0x0004)  
	bool                                               bIsAttack_01;                                               // 0x0734   (0x0001)  
	bool                                               bIsAttack_02;                                               // 0x0735   (0x0001)  
	bool                                               bIsAttack_03;                                               // 0x0736   (0x0001)  
	bool                                               bIsAllowPhysics;                                            // 0x0737   (0x0001)  
	bool                                               bIsMantisDone;                                              // 0x0738   (0x0001)  
	bool                                               bIsUpperBodyAttack_01;                                      // 0x0739   (0x0001)  
	bool                                               bIsUpperBodyAttack_02;                                      // 0x073A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x073B   (0x0001)  MISSED
	float                                              XMoveRight;                                                 // 0x073C   (0x0004)  
	float                                              XMoveLeft;                                                  // 0x0740   (0x0004)  
	float                                              YMoveFwd;                                                   // 0x0744   (0x0004)  
	bool                                               bIs700Distance;                                             // 0x0748   (0x0001)  
	bool                                               bIs1200Distance;                                            // 0x0749   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x074A   (0x0002)  MISSED
	float                                              AttackRange700;                                             // 0x074C   (0x0004)  
	float                                              AttackRange1200;                                            // 0x0750   (0x0004)  
	float                                              AttackRange1500;                                            // 0x0754   (0x0004)  
	FGameplayTag                                       IsTargetingTag;                                             // 0x0758   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x075C   (0x0004)  MISSED
};

/// Class /Script/SunRoseChainWhipGameplay.Hades_Player_LayerAnimInstance
/// Size: 0x0020 (0x001620 - 0x001640)
class UHades_Player_LayerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
public:
	bool                                               bIsMotorcycle;                                              // 0x1620   (0x0001)  
	bool                                               bIsHookshot;                                                // 0x1621   (0x0001)  
	bool                                               bIsTechniqueActive;                                         // 0x1622   (0x0001)  
	bool                                               bIsHadesAO;                                                 // 0x1623   (0x0001)  
	bool                                               bIsUpperBodyReplacement;                                    // 0x1624   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x1625   (0x0003)  MISSED
	FGameplayTag                                       MotorcycleTag;                                              // 0x1628   (0x0004)  
	FGameplayTag                                       HookshotTag;                                                // 0x162C   (0x0004)  
	FGameplayTag                                       DisableGrindRailUpperBodyCorrectTag;                        // 0x1630   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x1634   (0x000C)  MISSED
};

/// Class /Script/SunRoseChainWhipGameplay.FortCheatManager_SunRoseChainWhip
/// Size: 0x0040 (0x000028 - 0x000068)
class UFortCheatManager_SunRoseChainWhip : public UChildCheatManager
{ 
public:
	SDK_UNDEFINED(32,15664) /* TWeakObjectPtr<UClass*> */ __um(HookShotGameplayEffectClass);                       // 0x0028   (0x0020)  
	SDK_UNDEFINED(32,15665) /* TWeakObjectPtr<UClass*> */ __um(HookShooterAISpawnerData);                          // 0x0048   (0x0020)  


	/// Functions
	// Function /Script/SunRoseChainWhipGameplay.FortCheatManager_SunRoseChainWhip.SunRoseSpawnHookShotShooter
	// void SunRoseSpawnHookShotShooter();                                                                                   // [0x36203b0] Final|Exec|Native|Public 
	// Function /Script/SunRoseChainWhipGameplay.FortCheatManager_SunRoseChainWhip.SunRoseRemoveHookShotShooter
	// void SunRoseRemoveHookShotShooter();                                                                                  // [0xa2b7e18] Final|Exec|Native|Public 
	// Function /Script/SunRoseChainWhipGameplay.FortCheatManager_SunRoseChainWhip.SunRoseApplyHookShot
	// void SunRoseApplyHookShot(float Delay);                                                                               // [0x67d85bc] Final|Exec|Native|Public 
};

/// Class /Script/SunRoseChainWhipGameplay.TargetingSelectionTask_SunRoseChainWhip
/// Size: 0x0000 (0x000170 - 0x000170)
class UTargetingSelectionTask_SunRoseChainWhip : public UTargetingSelectionTask_Trace
{ 
public:
};

/// Class /Script/SunRoseChainWhipGameplay.TargetingSelectionTask_SunRoseChainWhip_Melee
/// Size: 0x0020 (0x000170 - 0x000190)
class UTargetingSelectionTask_SunRoseChainWhip_Melee : public UTargetingSelectionTask_SunRoseChainWhip
{ 
public:
	float                                              YawOffsetDegrees;                                           // 0x0170   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0174   (0x0004)  MISSED
	FVector                                            SourceLocationRelativeOffset;                               // 0x0178   (0x0018)  
};

