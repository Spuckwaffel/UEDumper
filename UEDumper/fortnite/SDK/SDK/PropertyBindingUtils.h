
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

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

/// Struct /Script/PropertyBindingUtils.BindableStructDesc
/// Size: 0x0010 (0x000000 - 0x000010)
struct FBindableStructDesc
{ 
	class UStruct*                                     Struct;                                                     // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/PropertyBindingUtils.PropertyBindingPathSegment
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBindingPathSegment
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	int32_t                                            ArrayIndex;                                                 // 0x0004   (0x0004)  
	class UStruct*                                     InstanceStruct;                                             // 0x0008   (0x0008)  
};

/// Struct /Script/PropertyBindingUtils.PropertyBindingPath
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBindingPath
{ 
	TArray<FPropertyBindingPathSegment>                Segments;                                                   // 0x0000   (0x0010)  
};

