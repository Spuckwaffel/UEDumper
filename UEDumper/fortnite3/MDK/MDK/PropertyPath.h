
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/PropertyPath.PropertyPathTestObject
/// Size: 0x0158 (0x000028 - 0x000180)
class UPropertyPathTestObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	DMember(bool)                                      bool_                                                       OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumOne                                                     OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumTwo                                                     OFFSET(get<T>, {0x2A, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumThree                                                   OFFSET(get<T>, {0x2B, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumFour                                                    OFFSET(get<T>, {0x2C, 1, 0, 0})
	DMember(int32_t)                                   Integer                                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FString)                                   String                                                      OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(float)                                     float_                                                      OFFSET(get<float>, {0x48, 4, 0, 0})
	SMember(FPropertyPathTestStruct)                   Struct                                                      OFFSET(getStruct<T>, {0x50, 96, 0, 0})
	SMember(FPropertyPathTestStruct)                   StructRef                                                   OFFSET(getStruct<T>, {0xB0, 96, 0, 0})
	SMember(FPropertyPathTestStruct)                   StructConstRef                                              OFFSET(getStruct<T>, {0x110, 96, 0, 0})
	CMember(class UPropertyPathTestObject*)            InnerObject                                                 OFFSET(get<T>, {0x170, 8, 0, 0})


	/// Functions
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStructRef
	// void SetStructRef(FPropertyPathTestStruct InStruct);                                                                     // [0x5f8eddc] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStructConstRef
	// void SetStructConstRef(FPropertyPathTestStruct InStruct);                                                                // [0x5f8ed34] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStruct
	// void SetStruct(FPropertyPathTestStruct InStruct);                                                                        // [0x5f8ec8c] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetFloat
	// void SetFloat(float InFloat);                                                                                            // [0x5f8ec08] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStructRef
	// FPropertyPathTestStruct GetStructRef();                                                                                  // [0x5f8ebe4] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStructConstRef
	// FPropertyPathTestStruct GetStructConstRef();                                                                             // [0x5f8ebc0] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStruct
	// FPropertyPathTestStruct GetStruct();                                                                                     // [0x5f8eb7c] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetFloat
	// float GetFloat();                                                                                                        // [0x5f8eb60] Final|Native|Public|Const 
};

/// Struct /Script/PropertyPath.PropertyPathSegment
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyPathSegment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ArrayIndex                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(class UStruct*)                            Struct                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PropertyPath.CachedPropertyPath
/// Size: 0x0038 (0x000000 - 0x000038)
class FCachedPropertyPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FPropertyPathSegment>)              Segments                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(class UFunction*)                          CachedFunction                                              OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/PropertyPath.PropertyPathTestBaseStruct
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyPathTestBaseStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/PropertyPath.PropertyPathTestInnerStruct
/// Size: 0x0020 (0x000008 - 0x000028)
class FPropertyPathTestInnerStruct : public FPropertyPathTestBaseStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     float_                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bool_                                                       OFFSET(get<bool>, {0xC, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumOne                                                     OFFSET(get<T>, {0xD, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumTwo                                                     OFFSET(get<T>, {0xE, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumThree                                                   OFFSET(get<T>, {0xF, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumFour                                                    OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(int32_t)                                   Integer                                                     OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	SMember(FString)                                   String                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/PropertyPath.PropertyPathTestStruct
/// Size: 0x0058 (0x000008 - 0x000060)
class FPropertyPathTestStruct : public FPropertyPathTestBaseStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bool_                                                       OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   Integer                                                     OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumOne                                                     OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumTwo                                                     OFFSET(get<T>, {0x11, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumThree                                                   OFFSET(get<T>, {0x12, 1, 0, 0})
	CMember(TEnumAsByte<EPropertyPathTestEnum>)        EnumFour                                                    OFFSET(get<T>, {0x13, 1, 0, 0})
	SMember(FString)                                   String                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(float)                                     float_                                                      OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FPropertyPathTestInnerStruct)              InnerStruct                                                 OFFSET(getStruct<T>, {0x30, 40, 0, 0})
	CMember(class UPropertyPathTestObject*)            InnerObject                                                 OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Struct /Script/PropertyPath.PropertyPathTestBed
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FPropertyPathTestBed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UPropertyPathTestObject*)            Object                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UPropertyPathTestObject*)            ModifiedObject                                              OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FPropertyPathTestStruct)                   ModifiedStruct                                              OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FPropertyPathTestStruct)                   DefaultStruct                                               OFFSET(getStruct<T>, {0x70, 96, 0, 0})
};

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

