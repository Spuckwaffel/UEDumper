
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/AnimationCore.AnimationDataSourceRegistry
/// Size: 0x0050 (0x000028 - 0x000078)
class UAnimationDataSourceRegistry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FName, TWeakObjectPtr<UObject*>>)     DataSources                                                 OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Struct /Script/AnimationCore.Axis
/// Size: 0x0020 (0x000000 - 0x000020)
class FAxis : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Axis                                                        OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      bInLocalSpace                                               OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/AnimationCore.NodeChain
/// Size: 0x0010 (0x000000 - 0x000010)
class FNodeChain : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FName>)                             Nodes                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AnimationCore.NodeObject
/// Size: 0x0008 (0x000000 - 0x000008)
class FNodeObject : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     ParentName                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/AnimationCore.NodeHierarchyData
/// Size: 0x0070 (0x000000 - 0x000070)
class FNodeHierarchyData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FNodeObject>)                       Nodes                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TMap<FName, int32_t>)                      NodeNameToIndexMapping                                      OFFSET(get<T>, {0x20, 80, 0, 0})
};

/// Struct /Script/AnimationCore.NodeHierarchyWithUserData
/// Size: 0x0078 (0x000000 - 0x000078)
class FNodeHierarchyWithUserData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FNodeHierarchyData)                        Hierarchy                                                   OFFSET(getStruct<T>, {0x8, 112, 0, 0})
};

/// Struct /Script/AnimationCore.CCDIKChainLink
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FCCDIKChainLink : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Struct /Script/AnimationCore.FilterOptionPerAxis
/// Size: 0x0003 (0x000000 - 0x000003)
class FFilterOptionPerAxis : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(bool)                                      bX                                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bY                                                          OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bZ                                                          OFFSET(get<bool>, {0x2, 1, 0, 0})
};

/// Struct /Script/AnimationCore.TransformFilter
/// Size: 0x0009 (0x000000 - 0x000009)
class FTransformFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
	SMember(FFilterOptionPerAxis)                      TranslationFilter                                           OFFSET(getStruct<T>, {0x0, 3, 0, 0})
	SMember(FFilterOptionPerAxis)                      RotationFilter                                              OFFSET(getStruct<T>, {0x3, 3, 0, 0})
	SMember(FFilterOptionPerAxis)                      ScaleFilter                                                 OFFSET(getStruct<T>, {0x6, 3, 0, 0})
};

/// Struct /Script/AnimationCore.ConstraintDescription
/// Size: 0x000D (0x000000 - 0x00000D)
class FConstraintDescription : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 13;

public:
	DMember(bool)                                      bTranslation                                                OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bRotation                                                   OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bScale                                                      OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bParent                                                     OFFSET(get<bool>, {0x3, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      TranslationAxes                                             OFFSET(getStruct<T>, {0x4, 3, 0, 0})
	SMember(FFilterOptionPerAxis)                      RotationAxes                                                OFFSET(getStruct<T>, {0x7, 3, 0, 0})
	SMember(FFilterOptionPerAxis)                      ScaleAxes                                                   OFFSET(getStruct<T>, {0xA, 3, 0, 0})
};

/// Struct /Script/AnimationCore.ConstraintOffset
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FConstraintOffset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FVector)                                   Translation                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FTransform)                                Parent                                                      OFFSET(getStruct<T>, {0x60, 96, 0, 0})
};

/// Struct /Script/AnimationCore.TransformConstraint
/// Size: 0x0020 (0x000000 - 0x000020)
class FTransformConstraint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FConstraintDescription)                    Operator                                                    OFFSET(getStruct<T>, {0x0, 13, 0, 0})
	SMember(FName)                                     SourceNode                                                  OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     TargetNode                                                  OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/AnimationCore.ConstraintDescriptionEx
/// Size: 0x0010 (0x000000 - 0x000010)
class FConstraintDescriptionEx : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FFilterOptionPerAxis)                      AxesFilterOption                                            OFFSET(getStruct<T>, {0x8, 3, 0, 0})
};

/// Struct /Script/AnimationCore.TransformConstraintDescription
/// Size: 0x0008 (0x000010 - 0x000018)
class FTransformConstraintDescription : public FConstraintDescriptionEx
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ETransformConstraintType)                  TransformType                                               OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/AnimationCore.AimConstraintDescription
/// Size: 0x0060 (0x000010 - 0x000070)
class FAimConstraintDescription : public FConstraintDescriptionEx
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FAxis)                                     LookAt_Axis                                                 OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FAxis)                                     LookUp_Axis                                                 OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	DMember(bool)                                      bUseLookUp                                                  OFFSET(get<bool>, {0x50, 1, 0, 0})
	SMember(FVector)                                   LookUpTarget                                                OFFSET(getStruct<T>, {0x58, 24, 0, 0})
};

/// Struct /Script/AnimationCore.ConstraintDescriptor
/// Size: 0x0010 (0x000000 - 0x000010)
class FConstraintDescriptor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EConstraintType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/AnimationCore.ConstraintData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FConstraintData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FConstraintDescriptor)                     Constraint                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FTransform)                                Offset                                                      OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	SMember(FTransform)                                CurrentTransform                                            OFFSET(getStruct<T>, {0x80, 96, 0, 0})
};

/// Struct /Script/AnimationCore.EulerTransform
/// Size: 0x0048 (0x000000 - 0x000048)
class FEulerTransform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/AnimationCore.FABRIKChainLink
/// Size: 0x0050 (0x000000 - 0x000050)
class FFABRIKChainLink : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/AnimationCore.TransformNoScale
/// Size: 0x0040 (0x000000 - 0x000040)
class FTransformNoScale : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Enum /Script/AnimationCore.EConstraintType
/// Size: 0x02
enum class EConstraintType : uint8_t
{
	EConstraintType__Transform                                                       = 0,
	EConstraintType__Aim                                                             = 1
};

/// Enum /Script/AnimationCore.ETransformConstraintType
/// Size: 0x05
enum class ETransformConstraintType : uint8_t
{
	ETransformConstraintType__Translation                                            = 0,
	ETransformConstraintType__Rotation                                               = 1,
	ETransformConstraintType__Scale                                                  = 2,
	ETransformConstraintType__Parent                                                 = 3,
	ETransformConstraintType__LookAt                                                 = 4
};

/// Enum /Script/AnimationCore.EEulerRotationOrder
/// Size: 0x06
enum class EEulerRotationOrder : uint8_t
{
	EEulerRotationOrder__XYZ                                                         = 0,
	EEulerRotationOrder__XZY                                                         = 1,
	EEulerRotationOrder__YXZ                                                         = 2,
	EEulerRotationOrder__YZX                                                         = 3,
	EEulerRotationOrder__ZXY                                                         = 4,
	EEulerRotationOrder__ZYX                                                         = 5
};

