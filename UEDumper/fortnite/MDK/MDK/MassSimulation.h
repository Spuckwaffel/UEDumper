
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MassEntity

/// Class /Script/MassSimulation.MassSimulationSettings
/// Size: 0x0028 (0x000028 - 0x000050)
class UMassSimulationSettings : public UMassModuleSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(double)                                    DesiredActorSpawningTimeSlicePerTick                        OFFSET(get<double>, {0x28, 8, 0, 0})
	DMember(double)                                    DesiredActorDestructionTimeSlicePerTick                     OFFSET(get<double>, {0x30, 8, 0, 0})
	DMember(bool)                                      bEntityCompactionEnabled                                    OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(double)                                    DesiredEntityCompactionTimeSlicePerTick                     OFFSET(get<double>, {0x40, 8, 0, 0})
	DMember(float)                                     DesiredActorFailedSpawningRetryTimeInterval                 OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     DesiredActorFailedSpawningRetryMoveDistance                 OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Class /Script/MassSimulation.MassSimulationSubsystem
/// Size: 0x0480 (0x000038 - 0x0004B8)
class UMassSimulationSubsystem : public UMassSubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	SMember(FMassRuntimePipeline)                      RuntimePipeline                                             OFFSET(getStruct<T>, {0x498, 24, 0, 0})
};

