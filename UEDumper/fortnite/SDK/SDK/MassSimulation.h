
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MassEntity

/// Class /Script/MassSimulation.MassSimulationSettings
/// Size: 0x0028 (0x000028 - 0x000050)
class UMassSimulationSettings : public UMassModuleSettings
{ 
public:
	double                                             DesiredActorSpawningTimeSlicePerTick;                       // 0x0028   (0x0008)  
	double                                             DesiredActorDestructionTimeSlicePerTick;                    // 0x0030   (0x0008)  
	bool                                               bEntityCompactionEnabled;                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	double                                             DesiredEntityCompactionTimeSlicePerTick;                    // 0x0040   (0x0008)  
	float                                              DesiredActorFailedSpawningRetryTimeInterval;                // 0x0048   (0x0004)  
	float                                              DesiredActorFailedSpawningRetryMoveDistance;                // 0x004C   (0x0004)  
};

/// Class /Script/MassSimulation.MassSimulationSubsystem
/// Size: 0x0480 (0x000038 - 0x0004B8)
class UMassSimulationSubsystem : public UMassSubsystemBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x460];                                     // 0x0038   (0x0460)  MISSED
	FMassRuntimePipeline                               RuntimePipeline;                                            // 0x0498   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x04B0   (0x0008)  MISSED
};

