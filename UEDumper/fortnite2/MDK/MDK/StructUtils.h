
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/StructUtils.PropertyBagMissingObject
/// Size: 0x0000 (0x000028 - 0x000028)
class UPropertyBagMissingObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/StructUtils.PropertyBag
/// Size: 0x0018 (0x0000C0 - 0x0000D8)
class UPropertyBag : public UScriptStruct
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TArray<FPropertyBagPropertyDesc>)          PropertyDescs                                               OFFSET(get<T>, {0xC0, 16, 0, 0})
};

/// Struct /Script/StructUtils.InstancedStruct
/// Size: 0x0010 (0x000000 - 0x000010)
class FInstancedStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/StructUtils.InstancedStructContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FInstancedStructContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/StructUtils.PropertyBagContainerTypes
/// Size: 0x0003 (0x000000 - 0x000003)
class FPropertyBagContainerTypes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
};

/// Struct /Script/StructUtils.PropertyBagPropertyDescMetaData
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyBagPropertyDescMetaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Key                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/StructUtils.PropertyBagPropertyDesc
/// Size: 0x0028 (0x000000 - 0x000028)
class FPropertyBagPropertyDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UObject*)                            ValueTypeObject                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	CMember(EPropertyBagPropertyType)                  ValueType                                                   OFFSET(get<T>, {0x1C, 1, 0, 0})
	SMember(FPropertyBagContainerTypes)                ContainerTypes                                              OFFSET(getStruct<T>, {0x1D, 3, 0, 0})
};

/// Struct /Script/StructUtils.InstancedPropertyBag
/// Size: 0x0010 (0x000000 - 0x000010)
class FInstancedPropertyBag : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FInstancedStruct)                          Value                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/StructUtils.PropertyBagMissingStruct
/// Size: 0x0001 (0x000000 - 0x000001)
class FPropertyBagMissingStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/StructUtils.SharedStruct
/// Size: 0x0010 (0x000000 - 0x000010)
class FSharedStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/StructUtils.ConstSharedStruct
/// Size: 0x0010 (0x000000 - 0x000010)
class FConstSharedStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Enum /Script/StructUtils.EPropertyBagPropertyType
/// Size: 0x19
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
	EPropertyBagPropertyType__Count                                                  = 18
};

/// Enum /Script/StructUtils.EPropertyBagContainerType
/// Size: 0x03
enum class EPropertyBagContainerType : uint8_t
{
	EPropertyBagContainerType__None                                                  = 0,
	EPropertyBagContainerType__Array                                                 = 1,
	EPropertyBagContainerType__Count                                                 = 2
};

/// Enum /Script/StructUtils.EPropertyBagResult
/// Size: 0x04
enum class EPropertyBagResult : uint8_t
{
	EPropertyBagResult__Success                                                      = 0,
	EPropertyBagResult__TypeMismatch                                                 = 1,
	EPropertyBagResult__OutOfBounds                                                  = 2,
	EPropertyBagResult__PropertyNotFound                                             = 3
};

/// Enum /Script/StructUtils.EPropertyBagMissingEnum
/// Size: 0x01
enum class EPropertyBagMissingEnum : uint8_t
{
	EPropertyBagMissingEnum__Missing                                                 = 0
};

