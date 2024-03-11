
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/StructUtils.EPropertyBagPropertyType
/// Size: 0x20
enum class EPropertyBagPropertyType : uint8_t
{
	EPropertyBagPropertyType__None                                                   = 0,
	EPropertyBagPropertyType__Bool                                                   = 1,
	EPropertyBagPropertyType__Byte                                                   = 2,
	EPropertyBagPropertyType__Int32                                                  = 3,
	EPropertyBagPropertyType__Int64                                                  = 4,
	EPropertyBagPropertyType__Float                                                  = 5,
	EPropertyBagPropertyType__Double                                                 = 6,
	EPropertyBagPropertyType__Name                                                   = 7,
	EPropertyBagPropertyType__String                                                 = 8,
	EPropertyBagPropertyType__Text                                                   = 9,
	EPropertyBagPropertyType__Enum                                                   = 10,
	EPropertyBagPropertyType__Struct                                                 = 11,
	EPropertyBagPropertyType__Object                                                 = 12,
	EPropertyBagPropertyType__SoftObject                                             = 13,
	EPropertyBagPropertyType__Class                                                  = 14,
	EPropertyBagPropertyType__SoftClass                                              = 15,
	EPropertyBagPropertyType__UInt32                                                 = 16,
	EPropertyBagPropertyType__UInt64                                                 = 17,
	EPropertyBagPropertyType__Count                                                  = 18,
	EPropertyBagPropertyType__EPropertyBagPropertyType_MAX                           = 19
};

/// Enum /Script/StructUtils.EPropertyBagContainerType
/// Size: 0x04
enum class EPropertyBagContainerType : uint8_t
{
	EPropertyBagContainerType__None                                                  = 0,
	EPropertyBagContainerType__Array                                                 = 1,
	EPropertyBagContainerType__Count                                                 = 2,
	EPropertyBagContainerType__EPropertyBagContainerType_MAX                         = 3
};

/// Enum /Script/StructUtils.EPropertyBagResult
/// Size: 0x05
enum class EPropertyBagResult : uint8_t
{
	EPropertyBagResult__Success                                                      = 0,
	EPropertyBagResult__TypeMismatch                                                 = 1,
	EPropertyBagResult__OutOfBounds                                                  = 2,
	EPropertyBagResult__PropertyNotFound                                             = 3,
	EPropertyBagResult__EPropertyBagResult_MAX                                       = 4
};

/// Enum /Script/StructUtils.EPropertyBagMissingEnum
/// Size: 0x02
enum class EPropertyBagMissingEnum : uint8_t
{
	EPropertyBagMissingEnum__Missing                                                 = 0,
	EPropertyBagMissingEnum__EPropertyBagMissingEnum_MAX                             = 1
};

/// Class /Script/StructUtils.PropertyBagMissingObject
/// Size: 0x0000 (0x000028 - 0x000028)
class UPropertyBagMissingObject : public UObject
{ 
public:
};

/// Struct /Script/StructUtils.PropertyBagContainerTypes
/// Size: 0x0003 (0x000000 - 0x000003)
struct FPropertyBagContainerTypes
{ 
	unsigned char                                      UnknownData00_2[0x3];                                       // 0x0000   (0x0003)  MISSED
};

/// Struct /Script/StructUtils.PropertyBagPropertyDesc
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPropertyBagPropertyDesc
{ 
	class UObject*                                     ValueTypeObject;                                            // 0x0000   (0x0008)  
	FGuid                                              ID;                                                         // 0x0008   (0x0010)  
	FName                                              Name;                                                       // 0x0018   (0x0004)  
	EPropertyBagPropertyType                           ValueType;                                                  // 0x001C   (0x0001)  
	FPropertyBagContainerTypes                         ContainerTypes;                                             // 0x001D   (0x0003)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Class /Script/StructUtils.PropertyBag
/// Size: 0x0018 (0x0000C0 - 0x0000D8)
class UPropertyBag : public UScriptStruct
{ 
public:
	TArray<FPropertyBagPropertyDesc>                   PropertyDescs;                                              // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00D0   (0x0008)  MISSED
};

/// Struct /Script/StructUtils.InstancedStruct
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInstancedStruct
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/StructUtils.InstancedStructContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInstancedStructContainer
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/StructUtils.PropertyBagPropertyDescMetaData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBagPropertyDescMetaData
{ 
	FName                                              Key;                                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,1279) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
};

/// Struct /Script/StructUtils.InstancedPropertyBag
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInstancedPropertyBag
{ 
	FInstancedStruct                                   Value;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/StructUtils.PropertyBagMissingStruct
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPropertyBagMissingStruct
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/StructUtils.SharedStruct
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSharedStruct
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/StructUtils.ConstSharedStruct
/// Size: 0x0010 (0x000000 - 0x000010)
struct FConstSharedStruct
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

