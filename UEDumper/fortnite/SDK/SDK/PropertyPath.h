
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/PropertyPath.EPropertyPathTestEnum
/// Size: 0x05
enum class EPropertyPathTestEnum : uint8_t
{
	One                                                                              = 0,
	Two                                                                              = 1,
	Three                                                                            = 2,
	Four                                                                             = 3,
	EPropertyPathTestEnum_MAX                                                        = 4
};

/// Struct /Script/PropertyPath.PropertyPathTestBaseStruct
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyPathTestBaseStruct
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/PropertyPath.PropertyPathTestInnerStruct
/// Size: 0x0020 (0x000008 - 0x000028)
struct FPropertyPathTestInnerStruct : FPropertyPathTestBaseStruct
{ 
	float                                              float0;                                                     // 0x0008   (0x0004)  
	bool                                               bool1;                                                      // 0x000C   (0x0001)  
	SDK_UNDEFINED(1,1368) /* TEnumAsByte<EPropertyPathTestEnum> */ __um(EnumOne);                                  // 0x000D   (0x0001)  
	SDK_UNDEFINED(1,1369) /* TEnumAsByte<EPropertyPathTestEnum> */ __um(EnumTwo);                                  // 0x000E   (0x0001)  
	SDK_UNDEFINED(1,1370) /* TEnumAsByte<EPropertyPathTestEnum> */ __um(EnumThree);                                // 0x000F   (0x0001)  
	SDK_UNDEFINED(1,1371) /* TEnumAsByte<EPropertyPathTestEnum> */ __um(EnumFour);                                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            Integer;                                                    // 0x0014   (0x0004)  
	SDK_UNDEFINED(16,1372) /* FString */               __um(String);                                               // 0x0018   (0x0010)  
};

/// Struct /Script/PropertyPath.PropertyPathTestStruct
/// Size: 0x0058 (0x000008 - 0x000060)
struct FPropertyPathTestStruct : FPropertyPathTestBaseStruct
{ 
	bool                                               bool0;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            Integer;                                                    // 0x000C   (0x0004)  
	SDK_UNDEFINED(1,1373) /* TEnumAsByte<EPropertyPathTestEnum> */ __um(EnumOne);                                  // 0x0010   (0x0001)  
	SDK_UNDEFINED(1,1374) /* TEnumAsByte<EPropertyPathTestEnum> */ __um(EnumTwo);                                  // 0x0011   (0x0001)  
	SDK_UNDEFINED(1,1375) /* TEnumAsByte<EPropertyPathTestEnum> */ __um(EnumThree);                                // 0x0012   (0x0001)  
	SDK_UNDEFINED(1,1376) /* TEnumAsByte<EPropertyPathTestEnum> */ __um(EnumFour);                                 // 0x0013   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,1377) /* FString */               __um(String);                                               // 0x0018   (0x0010)  
	float                                              float1;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FPropertyPathTestInnerStruct                       InnerStruct;                                                // 0x0030   (0x0028)  
	class UPropertyPathTestObject*                     InnerObject;                                                // 0x0058   (0x0008)  
};

/// Class /Script/PropertyPath.PropertyPathTestObject
/// Size: 0x0158 (0x000028 - 0x000180)
class UPropertyPathTestObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bool0;                                                      // 0x0028   (0x0001)  
	SDK_UNDEFINED(1,1378) /* TEnumAsByte<EPropertyPathTestEnum> */ __um(EnumOne);                                  // 0x0029   (0x0001)  
	SDK_UNDEFINED(1,1379) /* TEnumAsByte<EPropertyPathTestEnum> */ __um(EnumTwo);                                  // 0x002A   (0x0001)  
	SDK_UNDEFINED(1,1380) /* TEnumAsByte<EPropertyPathTestEnum> */ __um(EnumThree);                                // 0x002B   (0x0001)  
	SDK_UNDEFINED(1,1381) /* TEnumAsByte<EPropertyPathTestEnum> */ __um(EnumFour);                                 // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	int32_t                                            Integer;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(16,1382) /* FString */               __um(String);                                               // 0x0038   (0x0010)  
	float                                              float1;                                                     // 0x0048   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FPropertyPathTestStruct                            Struct;                                                     // 0x0050   (0x0060)  
	FPropertyPathTestStruct                            StructRef;                                                  // 0x00B0   (0x0060)  
	FPropertyPathTestStruct                            StructConstRef;                                             // 0x0110   (0x0060)  
	class UPropertyPathTestObject*                     InnerObject;                                                // 0x0170   (0x0008)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0178   (0x0008)  MISSED


	/// Functions
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStructRef
	// void SetStructRef(FPropertyPathTestStruct InStruct);                                                                  // [0x5ef0cd4] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStructConstRef
	// void SetStructConstRef(FPropertyPathTestStruct InStruct);                                                             // [0x5ef0b7c] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStruct
	// void SetStruct(FPropertyPathTestStruct InStruct);                                                                     // [0x5ef0a24] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetFloat
	// void SetFloat(float InFloat);                                                                                         // [0x5ef09a0] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStructRef
	// FPropertyPathTestStruct GetStructRef();                                                                               // [0x5ef097c] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStructConstRef
	// FPropertyPathTestStruct GetStructConstRef();                                                                          // [0x5ef0958] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStruct
	// FPropertyPathTestStruct GetStruct();                                                                                  // [0x5ef0914] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetFloat
	// float GetFloat();                                                                                                     // [0x5ef08f8] Final|Native|Public|Const 
};

/// Struct /Script/PropertyPath.PropertyPathSegment
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyPathSegment
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	int32_t                                            ArrayIndex;                                                 // 0x0004   (0x0004)  
	class UStruct*                                     Struct;                                                     // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/PropertyPath.CachedPropertyPath
/// Size: 0x0038 (0x000000 - 0x000038)
struct FCachedPropertyPath
{ 
	TArray<FPropertyPathSegment>                       Segments;                                                   // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0010   (0x0008)  MISSED
	class UFunction*                                   CachedFunction;                                             // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0020   (0x0018)  MISSED
};

/// Struct /Script/PropertyPath.PropertyPathTestBed
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FPropertyPathTestBed
{ 
	class UPropertyPathTestObject*                     Object;                                                     // 0x0000   (0x0008)  
	class UPropertyPathTestObject*                     ModifiedObject;                                             // 0x0008   (0x0008)  
	FPropertyPathTestStruct                            ModifiedStruct;                                             // 0x0010   (0x0060)  
	FPropertyPathTestStruct                            DefaultStruct;                                              // 0x0070   (0x0060)  
};

