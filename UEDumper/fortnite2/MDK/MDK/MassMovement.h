
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MassEntity
/// dependency: MassSpawner

/// Class /Script/MassMovement.MassApplyMovementProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassApplyMovementProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/MassMovement.MassMovementSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UMassMovementSettings : public UMassModuleSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FMassMovementStyle>)                MovementStyles                                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/MassMovement.MassMovementTrait
/// Size: 0x0028 (0x000028 - 0x000050)
class UMassMovementTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FMassMovementParameters)                   Movement                                                    OFFSET(getStruct<T>, {0x28, 40, 0, 0})
};

/// Class /Script/MassMovement.MassSimpleMovementTrait
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassSimpleMovementTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MassMovement.MassSimpleMovementProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassSimpleMovementProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/MassMovement.MassVelocityRandomizerTrait
/// Size: 0x0010 (0x000028 - 0x000038)
class UMassVelocityRandomizerTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bSetZComponent                                              OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Class /Script/MassMovement.MassRandomVelocityInitializer
/// Size: 0x02C8 (0x0000D8 - 0x0003A0)
class UMassRandomVelocityInitializer : public UMassObserverProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x380, 4, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x384, 4, 0, 0})
	DMember(bool)                                      bSetZComponent                                              OFFSET(get<bool>, {0x388, 1, 0, 0})
};

/// Struct /Script/MassMovement.MassVelocityFragment
/// Size: 0x0018 (0x000000 - 0x000018)
class FMassVelocityFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/MassMovement.MassForceFragment
/// Size: 0x0018 (0x000000 - 0x000018)
class FMassForceFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/MassMovement.MassMovementParameters
/// Size: 0x0028 (0x000000 - 0x000028)
class FMassMovementParameters : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxAcceleration                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DefaultDesiredSpeed                                         OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DefaultDesiredSpeedVariance                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     HeightSmoothingTime                                         OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(TArray<FMassMovementStyleParameters>)      MovementStyles                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/MassMovement.MassMovementStyleParameters
/// Size: 0x0028 (0x000000 - 0x000028)
class FMassMovementStyleParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FMassMovementStyleRef)                     style                                                       OFFSET(getStruct<T>, {0x0, 20, 0, 0})
	CMember(TArray<FMassMovementStyleSpeedParameters>) DesiredSpeeds                                               OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/MassMovement.MassMovementStyleSpeedParameters
/// Size: 0x0010 (0x000000 - 0x000010)
class FMassMovementStyleSpeedParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Variance                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Probability                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/MassMovement.MassMovementStyleRef
/// Size: 0x0014 (0x000000 - 0x000014)
class FMassMovementStyleRef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x4, 16, 0, 0})
};

/// Struct /Script/MassMovement.MassMovementStyle
/// Size: 0x0014 (0x000000 - 0x000014)
class FMassMovementStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x4, 16, 0, 0})
};

/// Struct /Script/MassMovement.MassSimpleMovementTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassSimpleMovementTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

