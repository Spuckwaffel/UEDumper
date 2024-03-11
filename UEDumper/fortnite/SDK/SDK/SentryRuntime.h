
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/SentryRuntime.CreativeSentryAnimInstance
/// Size: 0x0020 (0x0005B0 - 0x0005D0)
class UCreativeSentryAnimInstance : public UFortDefenderAnimInstance
{ 
public:
	float                                              RotateAimAnimationPitch;                                    // 0x05B0   (0x0004)  
	float                                              CounterRotateAimAnimationPitch;                             // 0x05B4   (0x0004)  
	bool                                               bIsRelaxedLevel1OrNotTargeting;                             // 0x05B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x05B9   (0x0003)  MISSED
	float                                              RightHandIKAlpha;                                           // 0x05BC   (0x0004)  
	float                                              OneMinusLeftHandFK;                                         // 0x05C0   (0x0004)  
	float                                              LeftHandIKAlpha;                                            // 0x05C4   (0x0004)  
	float                                              RetargetHandIKBonesToFKPositionWeight;                      // 0x05C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x05CC   (0x0004)  MISSED
};

