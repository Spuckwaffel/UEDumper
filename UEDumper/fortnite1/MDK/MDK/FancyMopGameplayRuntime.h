
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/FancyMopGameplayRuntime.FancyMop_PlayerAnimInstance
/// Size: 0x0070 (0x001530 - 0x0015A0)
class UFancyMop_PlayerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5536;

public:
	SMember(FRotator)                                  UpperBodyTwistRotator                                       OFFSET(getStruct<T>, {0x1528, 24, 0, 0})
	DMember(bool)                                      bIsIceFire                                                  OFFSET(get<bool>, {0x1540, 1, 1, 0})
	DMember(bool)                                      bIsUpperBody                                                OFFSET(get<bool>, {0x1540, 1, 1, 1})
	DMember(bool)                                      bIsIceFireToSprint                                          OFFSET(get<bool>, {0x1540, 1, 1, 2})
	DMember(bool)                                      bIsIceFireToIdle                                            OFFSET(get<bool>, {0x1540, 1, 1, 3})
	DMember(bool)                                      bIsGrindRail                                                OFFSET(get<bool>, {0x1540, 1, 1, 4})
	DMember(bool)                                      bIsIceFireUpperBody                                         OFFSET(get<bool>, {0x1540, 1, 1, 5})
	DMember(bool)                                      bIsIceFireFallStart                                         OFFSET(get<bool>, {0x1540, 1, 1, 6})
	DMember(bool)                                      bIsIceFireFallEnd                                           OFFSET(get<bool>, {0x1540, 1, 1, 7})
	DMember(bool)                                      bIsIceFireFullBodyGround                                    OFFSET(get<bool>, {0x1541, 1, 1, 0})
	DMember(bool)                                      bIsFromIceFireEndState                                      OFFSET(get<bool>, {0x1541, 1, 1, 1})
	DMember(bool)                                      bIsTrFromFireEndIdle                                        OFFSET(get<bool>, {0x1541, 1, 1, 2})
	DMember(bool)                                      bIsTrFromFireEndLoco                                        OFFSET(get<bool>, {0x1541, 1, 1, 3})
	DMember(bool)                                      bIsFireExitUnexpectedly                                     OFFSET(get<bool>, {0x1541, 1, 1, 4})
	DMember(bool)                                      bIsFireEndExitUnexpectedly                                  OFFSET(get<bool>, {0x1541, 1, 1, 5})
	DMember(bool)                                      bIsIceFireFullBodyGroundSprint                              OFFSET(get<bool>, {0x1541, 1, 1, 6})
	DMember(bool)                                      bRockThrow_01                                               OFFSET(get<bool>, {0x1541, 1, 1, 7})
	DMember(bool)                                      bRockThrowExit                                              OFFSET(get<bool>, {0x1542, 1, 1, 0})
	DMember(bool)                                      bRockThrow_02                                               OFFSET(get<bool>, {0x1542, 1, 1, 1})
	DMember(bool)                                      bIsCrouchMovingLocal                                        OFFSET(get<bool>, {0x1542, 1, 1, 2})
	DMember(float)                                     PunchAim                                                    OFFSET(get<float>, {0x1544, 4, 0, 0})
	SMember(FName)                                     CurveName_MeleeTwist                                        OFFSET(getStruct<T>, {0x1548, 4, 0, 0})
	SMember(FName)                                     CurveName_TurnEnd                                           OFFSET(getStruct<T>, {0x154C, 4, 0, 0})
	SMember(FName)                                     CurveName_Interruptible                                     OFFSET(getStruct<T>, {0x1550, 4, 0, 0})
	SMember(FName)                                     CurveName_UserCurve01                                       OFFSET(getStruct<T>, {0x1554, 4, 0, 0})
	SMember(FName)                                     CurveName_UserCurve02                                       OFFSET(getStruct<T>, {0x1558, 4, 0, 0})
	SMember(FString)                                   MontageName_FancyMop_Wall_Summon_Sprint_M                   OFFSET(getStruct<T>, {0x1560, 16, 0, 0})
	SMember(FString)                                   MontageName_FancyMop_ThrowRock_M                            OFFSET(getStruct<T>, {0x1570, 16, 0, 0})
	SMember(FString)                                   MontageName_CantDoThat                                      OFFSET(getStruct<T>, {0x1580, 16, 0, 0})
	DMember(bool)                                      bDoOnce_SetIsIceFire                                        OFFSET(get<bool>, {0x1590, 1, 1, 0})
	DMember(bool)                                      bDoOnceFlipFlop                                             OFFSET(get<bool>, {0x1590, 1, 1, 1})
	DMember(bool)                                      bFlipFlopAB                                                 OFFSET(get<bool>, {0x1590, 1, 1, 2})
};

