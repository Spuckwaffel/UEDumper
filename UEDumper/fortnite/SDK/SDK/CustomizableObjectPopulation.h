
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: CustomizableObject
/// dependency: Engine

/// Enum /Script/CustomizableObjectPopulation.EPopulationConstraintType
/// Size: 0x10
enum class EPopulationConstraintType : uint8_t
{
	EPopulationConstraintType__NONE                                                  = 0,
	EPopulationConstraintType__BOOL                                                  = 1,
	EPopulationConstraintType__DISCRETE                                              = 2,
	EPopulationConstraintType__DISCRETE_FLOAT                                        = 3,
	EPopulationConstraintType__DISCRETE_COLOR                                        = 4,
	EPopulationConstraintType__TAG                                                   = 5,
	EPopulationConstraintType__RANGE                                                 = 6,
	EPopulationConstraintType__CURVE                                                 = 7,
	EPopulationConstraintType__CURVE_COLOR                                           = 8,
	EPopulationConstraintType__EPopulationConstraintType_MAX                         = 9
};

/// Enum /Script/CustomizableObjectPopulation.ECurveColor
/// Size: 0x05
enum class ECurveColor : uint8_t
{
	ECurveColor__RED                                                                 = 0,
	ECurveColor__GREEN                                                               = 1,
	ECurveColor__BLUE                                                                = 2,
	ECurveColor__ALPHA                                                               = 3,
	ECurveColor__ECurveColor_MAX                                                     = 4
};

/// Struct /Script/CustomizableObjectPopulation.ClassWeightPair
/// Size: 0x0010 (0x000000 - 0x000010)
struct FClassWeightPair
{ 
	class UCustomizableObjectPopulationClass*          Class;                                                      // 0x0000   (0x0008)  
	int32_t                                            ClassWeight;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Class /Script/CustomizableObjectPopulation.CustomizableObjectPopulation
/// Size: 0x0028 (0x000028 - 0x000050)
class UCustomizableObjectPopulation : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,12773) /* FString */              __um(Name);                                                 // 0x0028   (0x0010)  
	TArray<FClassWeightPair>                           ClassWeights;                                               // 0x0038   (0x0010)  
	class UCustomizableObjectPopulationGenerator*      Generator;                                                  // 0x0048   (0x0008)  


	/// Functions
	// Function /Script/CustomizableObjectPopulation.CustomizableObjectPopulation.RegeneratePopulation
	// bool RegeneratePopulation(int32_t Seed, TArray<UCustomizableObjectInstance*>& OutInstances, int32_t NumInstancesToGenerate); // [0xa24277c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObjectPopulation.CustomizableObjectPopulation.GeneratePopulation
	// int32_t GeneratePopulation(TArray<UCustomizableObjectInstance*>& OutInstances, int32_t NumInstancesToGenerate);       // [0xa242514] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CustomizableObjectPopulation.ConstraintRanges
/// Size: 0x000C (0x000000 - 0x00000C)
struct FConstraintRanges
{ 
	float                                              MinimumValue;                                               // 0x0000   (0x0004)  
	float                                              MaximumValue;                                               // 0x0004   (0x0004)  
	int32_t                                            RangeWeight;                                                // 0x0008   (0x0004)  
};

/// Struct /Script/CustomizableObjectPopulation.CustomizableObjectPopulationConstraint
/// Size: 0x0070 (0x000000 - 0x000070)
struct FCustomizableObjectPopulationConstraint
{ 
	EPopulationConstraintType                          Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            ConstraintWeight;                                           // 0x0004   (0x0004)  
	int32_t                                            TrueWeight;                                                 // 0x0008   (0x0004)  
	int32_t                                            FalseWeight;                                                // 0x000C   (0x0004)  
	SDK_UNDEFINED(16,12774) /* FString */              __um(DiscreteValue);                                        // 0x0010   (0x0010)  
	FLinearColor                                       DiscreteColor;                                              // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,12775) /* TArray<FString> */      __um(AllowList);                                            // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,12776) /* TArray<FString> */      __um(Blocklist);                                            // 0x0040   (0x0010)  
	TArray<FConstraintRanges>                          Ranges;                                                     // 0x0050   (0x0010)  
	class UCurveBase*                                  Curve;                                                      // 0x0060   (0x0008)  
	ECurveColor                                        CurveColor;                                                 // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Struct /Script/CustomizableObjectPopulation.CustomizableObjectPopulationCharacteristic
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCustomizableObjectPopulationCharacteristic
{ 
	SDK_UNDEFINED(16,12777) /* FString */              __um(ParameterName);                                        // 0x0000   (0x0010)  
	TArray<FCustomizableObjectPopulationConstraint>    Constraints;                                                // 0x0010   (0x0010)  
};

/// Class /Script/CustomizableObjectPopulation.CustomizableObjectPopulationClass
/// Size: 0x0068 (0x000028 - 0x000090)
class UCustomizableObjectPopulationClass : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,12778) /* FString */              __um(Name);                                                 // 0x0028   (0x0010)  
	class UCustomizableObject*                         CustomizableObject;                                         // 0x0038   (0x0008)  
	SDK_UNDEFINED(16,12779) /* TArray<FString> */      __um(AllowList);                                            // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,12780) /* TArray<FString> */      __um(Blocklist);                                            // 0x0050   (0x0010)  
	TArray<FCustomizableObjectPopulationCharacteristic> Characteristics;                                           // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,12781) /* TArray<FString> */      __um(Tags);                                                 // 0x0070   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0080   (0x0010)  MISSED
};

/// Class /Script/CustomizableObjectPopulation.CustomizableObjectPopulationGenerator
/// Size: 0x0020 (0x000028 - 0x000048)
class UCustomizableObjectPopulationGenerator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UCustomizableObject*>                 PopulationObjects;                                          // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Struct /Script/CustomizableObjectPopulation.PopulationClassParameterOptions
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPopulationClassParameterOptions
{ 
	SDK_UNDEFINED(16,12782) /* TArray<FString> */      __um(Tags);                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/CustomizableObjectPopulation.PopulationClassParameter
/// Size: 0x0060 (0x000000 - 0x000060)
struct FPopulationClassParameter
{ 
	SDK_UNDEFINED(16,12783) /* TArray<FString> */      __um(Tags);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,12784) /* TMap<FString, FPopulationClassParameterOptions> */ __um(ParameterOptions);          // 0x0010   (0x0050)  
};

