
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: MassEntity

/// Class /Script/MassCommon.MassGameplaySettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UMassGameplaySettings : public UMassModuleSettings
{ 
public:
	bool                                               bLogSpawnLocations;                                         // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/MassCommon.TransformFragment
/// Size: 0x005F (0x000001 - 0x000060)
struct FTransformFragment : FMassFragment
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
};

/// Struct /Script/MassCommon.AgentRadiusFragment
/// Size: 0x0003 (0x000001 - 0x000004)
struct FAgentRadiusFragment : FMassFragment
{ 
	float                                              Radius;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/MassCommon.ObjectWrapperFragment
/// Size: 0x0000 (0x000001 - 0x000001)
struct FObjectWrapperFragment : FMassFragment
{ 
};

/// Struct /Script/MassCommon.MassNetworkID
/// Size: 0x0000 (0x000004 - 0x000004)
struct FMassNetworkID : FSequentialIDBase
{ 
};

/// Struct /Script/MassCommon.MassInt16Real
/// Size: 0x0002 (0x000000 - 0x000002)
struct FMassInt16Real
{ 
	int16_t                                            Value;                                                      // 0x0000   (0x0002)  
};

/// Struct /Script/MassCommon.MassInt16Real10
/// Size: 0x0002 (0x000000 - 0x000002)
struct FMassInt16Real10
{ 
	int16_t                                            Value;                                                      // 0x0000   (0x0002)  
};

/// Struct /Script/MassCommon.MassSnorm8Vector
/// Size: 0x0003 (0x000000 - 0x000003)
struct FMassSnorm8Vector
{ 
	int8_t                                             X;                                                          // 0x0000   (0x0001)  
	int8_t                                             Y;                                                          // 0x0001   (0x0001)  
	int8_t                                             Z;                                                          // 0x0002   (0x0001)  
};

/// Struct /Script/MassCommon.MassSnorm8Vector2D
/// Size: 0x0002 (0x000000 - 0x000002)
struct FMassSnorm8Vector2D
{ 
	int8_t                                             X;                                                          // 0x0000   (0x0001)  
	int8_t                                             Y;                                                          // 0x0001   (0x0001)  
};

/// Struct /Script/MassCommon.MassUnorm8Real
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMassUnorm8Real
{ 
	char                                               Value;                                                      // 0x0000   (0x0001)  
};

/// Struct /Script/MassCommon.MassInt16Vector
/// Size: 0x0006 (0x000000 - 0x000006)
struct FMassInt16Vector
{ 
	int16_t                                            X;                                                          // 0x0000   (0x0002)  
	int16_t                                            Y;                                                          // 0x0002   (0x0002)  
	int16_t                                            Z;                                                          // 0x0004   (0x0002)  
};

/// Struct /Script/MassCommon.MassInt16Vector2D
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMassInt16Vector2D
{ 
	int16_t                                            X;                                                          // 0x0000   (0x0002)  
	int16_t                                            Y;                                                          // 0x0002   (0x0002)  
};

