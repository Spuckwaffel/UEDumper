
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/PropertyBindingUtils.BindableStructDesc
/// Size: 0x0010 (0x000000 - 0x000010)
class FBindableStructDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UStruct*)                            Struct                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/PropertyBindingUtils.PropertyBindingPathSegment
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBindingPathSegment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ArrayIndex                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(class UStruct*)                            InstanceStruct                                              OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PropertyBindingUtils.PropertyBindingPath
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBindingPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FPropertyBindingPathSegment>)       Segments                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/PropertyBindingUtils.EPropertyBindingAccessType
/// Size: 0x08
enum class EPropertyBindingAccessType : uint8_t
{
	EPropertyBindingAccessType__Offset                                               = 0,
	EPropertyBindingAccessType__Object                                               = 1,
	EPropertyBindingAccessType__WeakObject                                           = 2,
	EPropertyBindingAccessType__SoftObject                                           = 3,
	EPropertyBindingAccessType__ObjectInstance                                       = 4,
	EPropertyBindingAccessType__StructInstance                                       = 5,
	EPropertyBindingAccessType__IndexArray                                           = 6,
	EPropertyBindingAccessType__EPropertyBindingAccessType_MAX                       = 7
};

