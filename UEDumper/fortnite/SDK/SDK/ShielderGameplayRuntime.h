
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: ModularGameplay

/// Class /Script/ShielderGameplayRuntime.ShielderCollisionHelperComponent
/// Size: 0x0088 (0x0000A0 - 0x000128)
class UShielderCollisionHelperComponent : public UGameFrameworkComponent
{ 
public:
	class ABuildingGameplayActor*                      ShielderBGA;                                                // 0x00A0   (0x0008)  
	FVector                                            StaticOffset;                                               // 0x00A8   (0x0018)  
	FVector                                            AimOffset;                                                  // 0x00C0   (0x0018)  
	FVector                                            AimOffset2D;                                                // 0x00D8   (0x0018)  
	float                                              PitchMultiplier;                                            // 0x00F0   (0x0004)  
	float                                              PitchMin;                                                   // 0x00F4   (0x0004)  
	float                                              PitchMax;                                                   // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FScalableFloat                                     ShouldUpdateShielderSkelMesh;                               // 0x0100   (0x0028)  
};

