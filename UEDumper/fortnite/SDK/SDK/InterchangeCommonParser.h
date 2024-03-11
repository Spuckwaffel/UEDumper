
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType

/// Enum /Script/InterchangeCommonParser.EInterchangeCurveInterpMode
/// Size: 0x05
enum class EInterchangeCurveInterpMode : uint8_t
{
	EInterchangeCurveInterpMode__Linear                                              = 0,
	EInterchangeCurveInterpMode__Constant                                            = 1,
	EInterchangeCurveInterpMode__Cubic                                               = 2,
	EInterchangeCurveInterpMode__None                                                = 3,
	EInterchangeCurveInterpMode__EInterchangeCurveInterpMode_MAX                     = 4
};

/// Enum /Script/InterchangeCommonParser.EInterchangeCurveTangentMode
/// Size: 0x05
enum class EInterchangeCurveTangentMode : uint8_t
{
	EInterchangeCurveTangentMode__Auto                                               = 0,
	EInterchangeCurveTangentMode__User                                               = 1,
	EInterchangeCurveTangentMode__Break                                              = 2,
	EInterchangeCurveTangentMode__None                                               = 3,
	EInterchangeCurveTangentMode__EInterchangeCurveTangentMode_MAX                   = 4
};

/// Enum /Script/InterchangeCommonParser.EInterchangeCurveTangentWeightMode
/// Size: 0x05
enum class EInterchangeCurveTangentWeightMode : uint8_t
{
	EInterchangeCurveTangentWeightMode__WeightedNone                                 = 0,
	EInterchangeCurveTangentWeightMode__WeightedArrive                               = 1,
	EInterchangeCurveTangentWeightMode__WeightedLeave                                = 2,
	EInterchangeCurveTangentWeightMode__WeightedBoth                                 = 3,
	EInterchangeCurveTangentWeightMode__EInterchangeCurveTangentWeightMode_MAX       = 4
};

/// Struct /Script/InterchangeCommonParser.InterchangeCurveKey
/// Size: 0x001C (0x000000 - 0x00001C)
struct FInterchangeCurveKey
{ 
	EInterchangeCurveInterpMode                        InterpMode;                                                 // 0x0000   (0x0001)  
	EInterchangeCurveTangentMode                       TangentMode;                                                // 0x0001   (0x0001)  
	EInterchangeCurveTangentWeightMode                 TangentWeightMode;                                          // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              Time;                                                       // 0x0004   (0x0004)  
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              ArriveTangent;                                              // 0x000C   (0x0004)  
	float                                              ArriveTangentWeight;                                        // 0x0010   (0x0004)  
	float                                              LeaveTangent;                                               // 0x0014   (0x0004)  
	float                                              LeaveTangentWeight;                                         // 0x0018   (0x0004)  
};

/// Struct /Script/InterchangeCommonParser.InterchangeCurve
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInterchangeCurve
{ 
	TArray<FInterchangeCurveKey>                       Keys;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/InterchangeCommonParser.InterchangeStepCurve
/// Size: 0x0088 (0x000000 - 0x000088)
struct FInterchangeStepCurve
{ 
	TArray<float>                                      KeyTimes;                                                   // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x78];                                      // 0x0010   (0x0078)  MISSED
};

