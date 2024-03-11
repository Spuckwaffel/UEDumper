
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayTasks
/// dependency: NavigationSystem

/// Class /Script/CaretakerRuntime.FortAthenaCaretakerAIController
/// Size: 0x0008 (0x000618 - 0x000620)
class AFortAthenaCaretakerAIController : public AAthenaAIController
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0618   (0x0008)  MISSED


	/// Functions
	// Function /Script/CaretakerRuntime.FortAthenaCaretakerAIController.OnMovementModeChanged
	// void OnMovementModeChanged(class ACharacter* CharacterOwner, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // [0xa87e618] Final|Native|Public  
	// Function /Script/CaretakerRuntime.FortAthenaCaretakerAIController.DebugUpdate
	// void DebugUpdate(float UpdateInterval);                                                                               // [0x67d85bc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CaretakerRuntime.FortBTTask_CaretakerMoveTo
/// Size: 0x0030 (0x0000B0 - 0x0000E0)
class UFortBTTask_CaretakerMoveTo : public UBTTask_MoveTo
{ 
public:
	FBlackboardKeySelector                             FocalPointWhileMoving;                                      // 0x00B0   (0x0028)  
	SDK_UNDEFINED(1,12380) /* TEnumAsByte<EPathObstacleAction> */ __um(PathObstacleAction);                        // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00D9   (0x0003)  MISSED
	bool                                               bEnableSlowdownAtGoal : 1;                                  // 0x00DC:0 (0x0001)  
	bool                                               bMoveDirectlyTowards : 1;                                   // 0x00DC:1 (0x0001)  
	bool                                               bStopAtGoal : 1;                                            // 0x00DC:2 (0x0001)  
	bool                                               bFinishMoveOnOverlap : 1;                                   // 0x00DC:3 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00DD   (0x0003)  MISSED
};

/// Class /Script/CaretakerRuntime.FortNavigationFilter_Caretaker
/// Size: 0x0018 (0x000048 - 0x000060)
class UFortNavigationFilter_Caretaker : public UFortNavigationFilter
{ 
public:
	float                                              EndPointAcceptableRadius;                                   // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	class UClass*                                      EndPointFilterClass;                                        // 0x0050   (0x0008)  
	bool                                               bEndPointReachTestIncludesAgentRadius : 1;                  // 0x0058:0 (0x0001)  
	bool                                               bEndPointReachTestIncludesGoalRadius : 1;                   // 0x0058:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Class /Script/CaretakerRuntime.FortAITask_CaretakerMove
/// Size: 0x0000 (0x000198 - 0x000198)
class UFortAITask_CaretakerMove : public UFortAbilityTask_MoveAI
{ 
public:
};

/// Class /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker
/// Size: 0x0050 (0x0005A0 - 0x0005F0)
class UFortAIAnimInstance_Caretaker : public UFortAIAnimInstance
{ 
public:
	bool                                               bIsMoving;                                                  // 0x0598   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0599   (0x0003)  MISSED
	float                                              WalkPlayRate;                                               // 0x059C   (0x0004)  
	float                                              AimOffsetCurve;                                             // 0x05A0   (0x0004)  
	bool                                               bFootPhase_StopLeftPlant;                                   // 0x05A4   (0x0001)  
	bool                                               bFootPhase_StopLeftPass;                                    // 0x05A5   (0x0001)  
	bool                                               bFootPhase_StopRightPlant;                                  // 0x05A6   (0x0001)  
	bool                                               bFootPhase_StopRightPass;                                   // 0x05A7   (0x0001)  
	float                                              BreathingCurve;                                             // 0x05A8   (0x0004)  
	float                                              MovingTreshold;                                             // 0x05AC   (0x0004)  
	FName                                              CurveName_AimOffsetCurve;                                   // 0x05B0   (0x0004)  
	FName                                              CurveName_FootPhase;                                        // 0x05B4   (0x0004)  
	FName                                              CurveName_BreathingCurve;                                   // 0x05B8   (0x0004)  
	FName                                              SocketName_FX_Chest;                                        // 0x05BC   (0x0004)  
	FName                                              ParamName_ChestSocketLocation;                              // 0x05C0   (0x0004)  
	FName                                              ParamName_ChestSocketVector;                                // 0x05C4   (0x0004)  
	float                                              FirstFootPhaseMin;                                          // 0x05C8   (0x0004)  
	float                                              SecondFootPhaseMin;                                         // 0x05CC   (0x0004)  
	float                                              ThirdFootPhaseMin;                                          // 0x05D0   (0x0004)  
	float                                              FourthFootPhaseMin;                                         // 0x05D4   (0x0004)  
	float                                              FootPhaseMax;                                               // 0x05D8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x05DC   (0x0004)  MISSED
	class UFortAnimWorldStriderComponent*              WorldStriderComponent;                                      // 0x05E0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x05E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker.SetDelayedMaterialParameters
	// void SetDelayedMaterialParameters();                                                                                  // [0xa87ec4c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWorldStriderComponent
	// class UFortAnimWorldStriderComponent* GetWorldStriderComponent();                                                     // [0xa87e5f0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWalkSpeedWarpingValue
	// float GetWalkSpeedWarpingValue();                                                                                     // [0xa87e5c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWalkPlayRateValue
	// float GetWalkPlayRateValue();                                                                                         // [0xa87e5a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker.GetStartAnimPosition
	// float GetStartAnimPosition();                                                                                         // [0xa87e578] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

