
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: StructUtils

/// Enum /Script/WorldConditions.EWorldConditionResultValue
/// Size: 0x04
enum class EWorldConditionResultValue : uint8_t
{
	EWorldConditionResultValue__IsFalse                                              = 0,
	EWorldConditionResultValue__IsTrue                                               = 1,
	EWorldConditionResultValue__Invalid                                              = 2,
	EWorldConditionResultValue__EWorldConditionResultValue_MAX                       = 3
};

/// Enum /Script/WorldConditions.EWorldConditionOperator
/// Size: 0x04
enum class EWorldConditionOperator : uint8_t
{
	EWorldConditionOperator__And                                                     = 0,
	EWorldConditionOperator__Or                                                      = 1,
	EWorldConditionOperator__Copy                                                    = 2,
	EWorldConditionOperator__EWorldConditionOperator_MAX                             = 3
};

/// Enum /Script/WorldConditions.EWorldConditionContextDataType
/// Size: 0x03
enum class EWorldConditionContextDataType : uint8_t
{
	EWorldConditionContextDataType__Dynamic                                          = 0,
	EWorldConditionContextDataType__Persistent                                       = 1,
	EWorldConditionContextDataType__EWorldConditionContextDataType_MAX               = 2
};

/// Struct /Script/WorldConditions.WorldConditionContextDataDesc
/// Size: 0x0010 (0x000000 - 0x000010)
struct FWorldConditionContextDataDesc
{ 
	class UStruct*                                     Struct;                                                     // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0004)  
	EWorldConditionContextDataType                     Type;                                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Class /Script/WorldConditions.WorldConditionSchema
/// Size: 0x0010 (0x000028 - 0x000038)
class UWorldConditionSchema : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FWorldConditionContextDataDesc>             ContextDataDescs;                                           // 0x0028   (0x0010)  
};

/// Struct /Script/WorldConditions.WorldConditionQueryDefinition
/// Size: 0x0018 (0x000000 - 0x000018)
struct FWorldConditionQueryDefinition
{ 
	class UClass*                                      SchemaClass;                                                // 0x0010   (0x0008)  
};

/// Struct /Script/WorldConditions.WorldConditionBase
/// Size: 0x0010 (0x000000 - 0x000010)
struct FWorldConditionBase
{ 
	bool                                               bInvert : 1;                                                // 0x000B:2 (0x0001)  
	EWorldConditionOperator                            Operator;                                                   // 0x000C   (0x0001)  
	char                                               NextExpressionDepth;                                        // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/WorldConditions.WorldConditionCommonBase
/// Size: 0x0000 (0x000010 - 0x000010)
struct FWorldConditionCommonBase : FWorldConditionBase
{ 
};

/// Struct /Script/WorldConditions.WorldConditionCommonActorBase
/// Size: 0x0000 (0x000010 - 0x000010)
struct FWorldConditionCommonActorBase : FWorldConditionBase
{ 
};

/// Struct /Script/WorldConditions.WorldConditionEditable
/// Size: 0x0001 (0x000000 - 0x000001)
struct FWorldConditionEditable
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/WorldConditions.WorldConditionQuerySharedDefinition
/// Size: 0x0028 (0x000000 - 0x000028)
struct FWorldConditionQuerySharedDefinition
{ 
	FInstancedStructContainer                          Conditions;                                                 // 0x0000   (0x0010)  
	class UClass*                                      SchemaClass;                                                // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0018   (0x0010)  MISSED
};

/// Struct /Script/WorldConditions.WorldConditionItem
/// Size: 0x0003 (0x000000 - 0x000003)
struct FWorldConditionItem
{ 
	unsigned char                                      UnknownData00_2[0x3];                                       // 0x0000   (0x0003)  MISSED
};

/// Struct /Script/WorldConditions.WorldConditionStateObject
/// Size: 0x0008 (0x000000 - 0x000008)
struct FWorldConditionStateObject
{ 
	class UObject*                                     Object;                                                     // 0x0000   (0x0008)  
};

/// Struct /Script/WorldConditions.WorldConditionQueryState
/// Size: 0x0030 (0x000000 - 0x000030)
struct FWorldConditionQueryState
{ 
	class UObject*                                     Owner;                                                      // 0x0028   (0x0008)  
};

/// Struct /Script/WorldConditions.WorldConditionQuery
/// Size: 0x0048 (0x000000 - 0x000048)
struct FWorldConditionQuery
{ 
	FWorldConditionQueryDefinition                     QueryDefinition;                                            // 0x0000   (0x0018)  
	FWorldConditionQueryState                          QueryState;                                                 // 0x0018   (0x0030)  
};

/// Struct /Script/WorldConditions.WorldConditionResult
/// Size: 0x0002 (0x000000 - 0x000002)
struct FWorldConditionResult
{ 
	EWorldConditionResultValue                         Value;                                                      // 0x0000   (0x0001)  
	bool                                               bCanBeCached;                                               // 0x0001   (0x0001)  
};

/// Struct /Script/WorldConditions.WorldConditionContextDataRef
/// Size: 0x0008 (0x000000 - 0x000008)
struct FWorldConditionContextDataRef
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	char                                               Index;                                                      // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

