
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: RigVM

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

/// Class /Script/RigLogicModule.DNAIndexMapping
/// Size: 0x0000 (0x000028 - 0x000028)
class UDNAIndexMapping : public UAssetUserData
{ 
public:
};

/// Class /Script/RigLogicModule.DNAAsset
/// Size: 0x0100 (0x000028 - 0x000128)
class UDNAAsset : public UAssetUserData
{ 
public:
	SDK_UNDEFINED(16,15358) /* FString */              __um(DnaFileName);                                          // 0x0028   (0x0010)  
	bool                                               bKeepDNAAfterInitialization;                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	SDK_UNDEFINED(80,15359) /* TMap<FString, FString> */ __um(MetaData);                                           // 0x0040   (0x0050)  
	unsigned char                                      UnknownData01_6[0x98];                                      // 0x0090   (0x0098)  MISSED
};

/// Class /Script/RigLogicModule.SkelMeshDNAUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class USkelMeshDNAUtils : public UObject
{ 
public:
};

/// Struct /Script/RigLogicModule.CoordinateSystem
/// Size: 0x0003 (0x000000 - 0x000003)
struct FCoordinateSystem
{ 
	EDirection                                         XAxis;                                                      // 0x0000   (0x0001)  
	EDirection                                         YAxis;                                                      // 0x0001   (0x0001)  
	EDirection                                         ZAxis;                                                      // 0x0002   (0x0001)  
};

/// Struct /Script/RigLogicModule.MeshBlendShapeChannelMapping
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMeshBlendShapeChannelMapping
{ 
	int32_t                                            MeshIndex;                                                  // 0x0000   (0x0004)  
	int32_t                                            BlendShapeChannelIndex;                                     // 0x0004   (0x0004)  
};

/// Struct /Script/RigLogicModule.TextureCoordinate
/// Size: 0x0008 (0x000000 - 0x000008)
struct FTextureCoordinate
{ 
	float                                              U;                                                          // 0x0000   (0x0004)  
	float                                              V;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/RigLogicModule.VertexLayout
/// Size: 0x000C (0x000000 - 0x00000C)
struct FVertexLayout
{ 
	int32_t                                            Position;                                                   // 0x0000   (0x0004)  
	int32_t                                            TextureCoordinate;                                          // 0x0004   (0x0004)  
	int32_t                                            Normal;                                                     // 0x0008   (0x0004)  
};

/// Struct /Script/RigLogicModule.AnimNode_RigLogic
/// Size: 0x0050 (0x000010 - 0x000060)
struct FAnimNode_RigLogic : FAnimNode_Base
{ 
	FPoseLink                                          AnimSequence;                                               // 0x0010   (0x0010)  
	int32_t                                            LODThreshold;                                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x3C];                                      // 0x0024   (0x003C)  MISSED
};

/// Struct /Script/RigLogicModule.RigUnit_RigLogic_IntArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_RigLogic_IntArray
{ 
	TArray<int32_t>                                    Values;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/RigLogicModule.RigUnit_RigLogic_Data
/// Size: 0x0098 (0x000000 - 0x000098)
struct FRigUnit_RigLogic_Data
{ 
	SDK_UNDEFINED(8,15360) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(SkelMeshComponent);                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0008   (0x0018)  MISSED
	TArray<int32_t>                                    InputCurveIndices;                                          // 0x0020   (0x0010)  
	TArray<int32_t>                                    NeuralNetMaskCurveIndices;                                  // 0x0030   (0x0010)  
	TArray<int32_t>                                    HierarchyBoneIndices;                                       // 0x0040   (0x0010)  
	TArray<FRigUnit_RigLogic_IntArray>                 MorphTargetCurveIndices;                                    // 0x0050   (0x0010)  
	TArray<FRigUnit_RigLogic_IntArray>                 BlendShapeIndices;                                          // 0x0060   (0x0010)  
	TArray<FRigUnit_RigLogic_IntArray>                 CurveElementIndicesForAnimMaps;                             // 0x0070   (0x0010)  
	TArray<FRigUnit_RigLogic_IntArray>                 RigLogicIndicesForAnimMaps;                                 // 0x0080   (0x0010)  
	uint32_t                                           CurrentLOD;                                                 // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/RigLogicModule.RigUnit_RigLogic
/// Size: 0x00A0 (0x0001D0 - 0x000270)
struct FRigUnit_RigLogic : FRigUnitMutable
{ 
	FRigUnit_RigLogic_Data                             Data;                                                       // 0x01D0   (0x0098)  
	bool                                               bIsInitialized;                                             // 0x0268   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0269   (0x0007)  MISSED
};

