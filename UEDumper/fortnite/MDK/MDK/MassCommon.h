
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: MassEntity

/// Class /Script/MassCommon.MassGameplaySettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UMassGameplaySettings : public UMassModuleSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bLogSpawnLocations                                          OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/MassCommon.TransformFragment
/// Size: 0x0060 (0x000000 - 0x000060)
class FTransformFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x0, 96, 0, 0})
};

/// Struct /Script/MassCommon.AgentRadiusFragment
/// Size: 0x0004 (0x000000 - 0x000004)
class FAgentRadiusFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/MassCommon.ObjectWrapperFragment
/// Size: 0x0001 (0x000000 - 0x000001)
class FObjectWrapperFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassCommon.MassNetworkID
/// Size: 0x0000 (0x000004 - 0x000004)
class FMassNetworkID : public FSequentialIDBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/MassCommon.MassInt16Real
/// Size: 0x0002 (0x000000 - 0x000002)
class FMassInt16Real : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(int16_t)                                   Value                                                       OFFSET(get<int16_t>, {0x0, 2, 0, 0})
};

/// Struct /Script/MassCommon.MassInt16Real10
/// Size: 0x0002 (0x000000 - 0x000002)
class FMassInt16Real10 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(int16_t)                                   Value                                                       OFFSET(get<int16_t>, {0x0, 2, 0, 0})
};

/// Struct /Script/MassCommon.MassSnorm8Vector
/// Size: 0x0003 (0x000000 - 0x000003)
class FMassSnorm8Vector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(int8_t)                                    X                                                           OFFSET(get<int8_t>, {0x0, 1, 0, 0})
	DMember(int8_t)                                    Y                                                           OFFSET(get<int8_t>, {0x1, 1, 0, 0})
	DMember(int8_t)                                    Z                                                           OFFSET(get<int8_t>, {0x2, 1, 0, 0})
};

/// Struct /Script/MassCommon.MassSnorm8Vector2D
/// Size: 0x0002 (0x000000 - 0x000002)
class FMassSnorm8Vector2D : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(int8_t)                                    X                                                           OFFSET(get<int8_t>, {0x0, 1, 0, 0})
	DMember(int8_t)                                    Y                                                           OFFSET(get<int8_t>, {0x1, 1, 0, 0})
};

/// Struct /Script/MassCommon.MassUnorm8Real
/// Size: 0x0001 (0x000000 - 0x000001)
class FMassUnorm8Real : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      Value                                                       OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Struct /Script/MassCommon.MassInt16Vector
/// Size: 0x0006 (0x000000 - 0x000006)
class FMassInt16Vector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	DMember(int16_t)                                   X                                                           OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	DMember(int16_t)                                   Y                                                           OFFSET(get<int16_t>, {0x2, 2, 0, 0})
	DMember(int16_t)                                   Z                                                           OFFSET(get<int16_t>, {0x4, 2, 0, 0})
};

/// Struct /Script/MassCommon.MassInt16Vector2D
/// Size: 0x0004 (0x000000 - 0x000004)
class FMassInt16Vector2D : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int16_t)                                   X                                                           OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	DMember(int16_t)                                   Y                                                           OFFSET(get<int16_t>, {0x2, 2, 0, 0})
};

