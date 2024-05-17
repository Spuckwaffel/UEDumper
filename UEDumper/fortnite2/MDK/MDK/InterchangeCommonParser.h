
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType

/// Struct /Script/InterchangeCommonParser.InterchangeCurveKey
/// Size: 0x001C (0x000000 - 0x00001C)
class FInterchangeCurveKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(EInterchangeCurveInterpMode)               InterpMode                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EInterchangeCurveTangentMode)              TangentMode                                                 OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(EInterchangeCurveTangentWeightMode)        TangentWeightMode                                           OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ArriveTangent                                               OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ArriveTangentWeight                                         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     LeaveTangent                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     LeaveTangentWeight                                          OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/InterchangeCommonParser.InterchangeCurve
/// Size: 0x0010 (0x000000 - 0x000010)
class FInterchangeCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FInterchangeCurveKey>)              Keys                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/InterchangeCommonParser.InterchangeStepCurve
/// Size: 0x0088 (0x000000 - 0x000088)
class FInterchangeStepCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<float>)                             KeyTimes                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/InterchangeCommonParser.EInterchangeCurveInterpMode
/// Size: 0x04
enum class EInterchangeCurveInterpMode : uint8_t
{
	EInterchangeCurveInterpMode__Linear                                              = 0,
	EInterchangeCurveInterpMode__Constant                                            = 1,
	EInterchangeCurveInterpMode__Cubic                                               = 2,
	EInterchangeCurveInterpMode__None                                                = 3
};

/// Enum /Script/InterchangeCommonParser.EInterchangeCurveTangentMode
/// Size: 0x04
enum class EInterchangeCurveTangentMode : uint8_t
{
	EInterchangeCurveTangentMode__Auto                                               = 0,
	EInterchangeCurveTangentMode__User                                               = 1,
	EInterchangeCurveTangentMode__Break                                              = 2,
	EInterchangeCurveTangentMode__None                                               = 3
};

/// Enum /Script/InterchangeCommonParser.EInterchangeCurveTangentWeightMode
/// Size: 0x04
enum class EInterchangeCurveTangentWeightMode : uint8_t
{
	EInterchangeCurveTangentWeightMode__WeightedNone                                 = 0,
	EInterchangeCurveTangentWeightMode__WeightedArrive                               = 1,
	EInterchangeCurveTangentWeightMode__WeightedLeave                                = 2,
	EInterchangeCurveTangentWeightMode__WeightedBoth                                 = 3
};

