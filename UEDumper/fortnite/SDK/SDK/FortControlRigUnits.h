
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: GameplayTags
/// dependency: RigVM

/// Enum /Script/FortControlRigUnits.EFortRigUnitTraceType
/// Size: 0x03
enum class EFortRigUnitTraceType : uint8_t
{
	EFortRigUnitTraceType__SingleTrace                                               = 0,
	EFortRigUnitTraceType__MultiTrace                                                = 1,
	EFortRigUnitTraceType__EFortRigUnitTraceType_MAX                                 = 2
};

/// Struct /Script/FortControlRigUnits.FortRigUnit_SphereTrace_WorkData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FFortRigUnit_SphereTrace_WorkData
{ 
	uint32_t                                           Hash;                                                       // 0x0000   (0x0004)  
	bool                                               bHit;                                                       // 0x0004   (0x0001)  
	bool                                               bInitialOverlap;                                            // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	FVector                                            HitLocation;                                                // 0x0008   (0x0018)  
	FVector                                            HitNormal;                                                  // 0x0020   (0x0018)  
};

/// Struct /Script/FortControlRigUnits.FortRigUnit_SphereTraceByChannel
/// Size: 0x00E0 (0x000008 - 0x0000E8)
struct FFortRigUnit_SphereTraceByChannel : FRigUnit
{ 
	FVector                                            Start;                                                      // 0x0008   (0x0018)  
	FVector                                            End;                                                        // 0x0020   (0x0018)  
	SDK_UNDEFINED(1,13942) /* TEnumAsByte<ETraceTypeQuery> */ __um(TraceChannel);                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x003C   (0x0004)  
	bool                                               bTraceComplex;                                              // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	TArray<FName>                                      IgnoreActorTags;                                            // 0x0048   (0x0010)  
	FGameplayTagContainer                              IgnoreGameplayTags;                                         // 0x0058   (0x0020)  
	EFortRigUnitTraceType                              TraceType;                                                  // 0x0078   (0x0001)  
	bool                                               bHit;                                                       // 0x0079   (0x0001)  
	bool                                               bInitialOverlap;                                            // 0x007A   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x007B   (0x0005)  MISSED
	FVector                                            HitLocation;                                                // 0x0080   (0x0018)  
	FVector                                            HitNormal;                                                  // 0x0098   (0x0018)  
	FFortRigUnit_SphereTrace_WorkData                  WorkData;                                                   // 0x00B0   (0x0038)  
};

