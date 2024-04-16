
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: RigVM

/// Class /Script/RigLogicModule.DNAIndexMapping
/// Size: 0x0000 (0x000028 - 0x000028)
class UDNAIndexMapping : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/RigLogicModule.DNAAsset
/// Size: 0x0100 (0x000028 - 0x000128)
class UDNAAsset : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FString)                                   DnaFileName                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bKeepDNAAfterInitialization                                 OFFSET(get<bool>, {0x38, 1, 0, 0})
	CMember(TMap<FString, FString>)                    MetaData                                                    OFFSET(get<T>, {0x40, 80, 0, 0})
};

/// Class /Script/RigLogicModule.SkelMeshDNAUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class USkelMeshDNAUtils : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/RigLogicModule.CoordinateSystem
/// Size: 0x0003 (0x000000 - 0x000003)
class FCoordinateSystem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	CMember(EDirection)                                XAxis                                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EDirection)                                YAxis                                                       OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(EDirection)                                ZAxis                                                       OFFSET(get<T>, {0x2, 1, 0, 0})
};

/// Struct /Script/RigLogicModule.MeshBlendShapeChannelMapping
/// Size: 0x0008 (0x000000 - 0x000008)
class FMeshBlendShapeChannelMapping : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   MeshIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   BlendShapeChannelIndex                                      OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/RigLogicModule.TextureCoordinate
/// Size: 0x0008 (0x000000 - 0x000008)
class FTextureCoordinate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     U                                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     V                                                           OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/RigLogicModule.VertexLayout
/// Size: 0x000C (0x000000 - 0x00000C)
class FVertexLayout : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   Position                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   TextureCoordinate                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Normal                                                      OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/RigLogicModule.AnimNode_RigLogic
/// Size: 0x0050 (0x000010 - 0x000060)
class FAnimNode_RigLogic : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FPoseLink)                                 AnimSequence                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/RigLogicModule.RigUnit_RigLogic_IntArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_RigLogic_IntArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int32_t>)                           Values                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/RigLogicModule.RigUnit_RigLogic_Data
/// Size: 0x0098 (0x000000 - 0x000098)
class FRigUnit_RigLogic_Data : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   SkelMeshComponent                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<int32_t>)                           InputCurveIndices                                           OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<int32_t>)                           NeuralNetMaskCurveIndices                                   OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<int32_t>)                           HierarchyBoneIndices                                        OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FRigUnit_RigLogic_IntArray>)        MorphTargetCurveIndices                                     OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FRigUnit_RigLogic_IntArray>)        BlendShapeIndices                                           OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FRigUnit_RigLogic_IntArray>)        CurveElementIndicesForAnimMaps                              OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FRigUnit_RigLogic_IntArray>)        RigLogicIndicesForAnimMaps                                  OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(uint32_t)                                  CurrentLOD                                                  OFFSET(get<uint32_t>, {0x90, 4, 0, 0})
};

/// Struct /Script/RigLogicModule.RigUnit_RigLogic
/// Size: 0x00A0 (0x0001C0 - 0x000260)
class FRigUnit_RigLogic : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FRigUnit_RigLogic_Data)                    Data                                                        OFFSET(getStruct<T>, {0x1C0, 152, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x258, 1, 0, 0})
};

/// Enum /Script/RigLogicModule.EArchetype
/// Size: 0x07
enum class EArchetype : uint8_t
{
	EArchetype__Asian                                                                = 0,
	EArchetype__Black                                                                = 1,
	EArchetype__Caucasian                                                            = 2,
	EArchetype__Hispanic                                                             = 3,
	EArchetype__Alien                                                                = 4,
	EArchetype__Other                                                                = 5,
	EArchetype__EArchetype_MAX                                                       = 6
};

/// Enum /Script/RigLogicModule.EGender
/// Size: 0x04
enum class EGender : uint8_t
{
	EGender__Male                                                                    = 0,
	EGender__Female                                                                  = 1,
	EGender__Other                                                                   = 2,
	EGender__EGender_MAX                                                             = 3
};

/// Enum /Script/RigLogicModule.ETranslationUnit
/// Size: 0x03
enum class ETranslationUnit : uint8_t
{
	ETranslationUnit__CM                                                             = 0,
	ETranslationUnit__M                                                              = 1,
	ETranslationUnit__ETranslationUnit_MAX                                           = 2
};

/// Enum /Script/RigLogicModule.ERotationUnit
/// Size: 0x03
enum class ERotationUnit : uint8_t
{
	ERotationUnit__Degrees                                                           = 0,
	ERotationUnit__Radians                                                           = 1,
	ERotationUnit__ERotationUnit_MAX                                                 = 2
};

/// Enum /Script/RigLogicModule.EDirection
/// Size: 0x07
enum class EDirection : uint8_t
{
	EDirection__Left                                                                 = 0,
	EDirection__Right                                                                = 1,
	EDirection__Up                                                                   = 2,
	EDirection__Down                                                                 = 3,
	EDirection__Front                                                                = 4,
	EDirection__Back                                                                 = 5,
	EDirection__EDirection_MAX                                                       = 6
};

/// Enum /Script/RigLogicModule.EDNADataLayer
/// Size: 0x09
enum class EDNADataLayer : uint8_t
{
	EDNADataLayer__None                                                              = 0,
	EDNADataLayer__Descriptor                                                        = 1,
	EDNADataLayer__Definition                                                        = 3,
	EDNADataLayer__Behavior                                                          = 7,
	EDNADataLayer__Geometry                                                          = 11,
	EDNADataLayer__GeometryWithoutBlendShapes                                        = 19,
	EDNADataLayer__MachineLearnedBehavior                                            = 35,
	EDNADataLayer__All                                                               = 47,
	EDNADataLayer__EDNADataLayer_MAX                                                 = 48
};

/// Enum /Script/RigLogicModule.EActivationFunction
/// Size: 0x06
enum class EActivationFunction : uint8_t
{
	EActivationFunction__Linear                                                      = 0,
	EActivationFunction__ReLU                                                        = 1,
	EActivationFunction__LeakyReLU                                                   = 2,
	EActivationFunction__Tanh                                                        = 3,
	EActivationFunction__Sigmoid                                                     = 4,
	EActivationFunction__EActivationFunction_MAX                                     = 5
};

/// Enum /Script/RigLogicModule.ERigLogicCalculationType
/// Size: 0x04
enum class ERigLogicCalculationType : uint8_t
{
	ERigLogicCalculationType__Scalar                                                 = 0,
	ERigLogicCalculationType__SSE                                                    = 1,
	ERigLogicCalculationType__AVX                                                    = 2,
	ERigLogicCalculationType__ERigLogicCalculationType_MAX                           = 3
};

/// Enum /Script/RigLogicModule.ELodUpdateOption
/// Size: 0x04
enum class ELodUpdateOption : uint8_t
{
	ELodUpdateOption__LOD0Only                                                       = 0,
	ELodUpdateOption__LOD1AndHigher                                                  = 1,
	ELodUpdateOption__All                                                            = 2,
	ELodUpdateOption__ELodUpdateOption_MAX                                           = 3
};

