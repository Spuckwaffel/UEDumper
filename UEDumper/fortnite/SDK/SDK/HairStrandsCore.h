
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GeometryCache
/// dependency: MovieScene
/// dependency: Niagara
/// dependency: NiagaraCore

/// Enum /Script/HairStrandsCore.EGroomCacheImportType
/// Size: 0x05
enum class EGroomCacheImportType : uint8_t
{
	EGroomCacheImportType__None                                                      = 0,
	EGroomCacheImportType__Strands                                                   = 1,
	EGroomCacheImportType__Guides                                                    = 2,
	EGroomCacheImportType__All                                                       = 3,
	EGroomCacheImportType__EGroomCacheImportType_MAX                                 = 4
};

/// Enum /Script/HairStrandsCore.EHairAtlasTextureType
/// Size: 0x07
enum class EHairAtlasTextureType : uint8_t
{
	EHairAtlasTextureType__Depth                                                     = 0,
	EHairAtlasTextureType__Tangent                                                   = 1,
	EHairAtlasTextureType__Attribute                                                 = 2,
	EHairAtlasTextureType__Coverage                                                  = 3,
	EHairAtlasTextureType__AuxilaryData                                              = 4,
	EHairAtlasTextureType__Material                                                  = 5,
	EHairAtlasTextureType__EHairAtlasTextureType_MAX                                 = 6
};

/// Enum /Script/HairStrandsCore.EHairCardsSourceType
/// Size: 0x03
enum class EHairCardsSourceType : uint8_t
{
	EHairCardsSourceType__Procedural                                                 = 0,
	EHairCardsSourceType__Imported                                                   = 1,
	EHairCardsSourceType__EHairCardsSourceType_MAX                                   = 2
};

/// Enum /Script/HairStrandsCore.EHairCardsGuideType
/// Size: 0x03
enum class EHairCardsGuideType : uint8_t
{
	EHairCardsGuideType__Generated                                                   = 0,
	EHairCardsGuideType__GuideBased                                                  = 1,
	EHairCardsGuideType__EHairCardsGuideType_MAX                                     = 2
};

/// Enum /Script/HairStrandsCore.EHairTextureLayout
/// Size: 0x05
enum class EHairTextureLayout : uint8_t
{
	EHairTextureLayout__Layout0                                                      = 0,
	EHairTextureLayout__Layout1                                                      = 1,
	EHairTextureLayout__Layout2                                                      = 2,
	EHairTextureLayout__Layout3                                                      = 3,
	EHairTextureLayout__EHairTextureLayout_MAX                                       = 4
};

/// Enum /Script/HairStrandsCore.EHairInterpolationQuality
/// Size: 0x05
enum class EHairInterpolationQuality : uint8_t
{
	EHairInterpolationQuality__Low                                                   = 0,
	EHairInterpolationQuality__Medium                                                = 1,
	EHairInterpolationQuality__High                                                  = 2,
	EHairInterpolationQuality__Unknown                                               = 3,
	EHairInterpolationQuality__EHairInterpolationQuality_MAX                         = 4
};

/// Enum /Script/HairStrandsCore.EHairInterpolationWeight
/// Size: 0x06
enum class EHairInterpolationWeight : uint8_t
{
	EHairInterpolationWeight__Parametric                                             = 0,
	EHairInterpolationWeight__Root                                                   = 1,
	EHairInterpolationWeight__Index                                                  = 2,
	EHairInterpolationWeight__Distance                                               = 3,
	EHairInterpolationWeight__Unknown                                                = 4,
	EHairInterpolationWeight__EHairInterpolationWeight_MAX                           = 5
};

/// Enum /Script/HairStrandsCore.EGroomGeometryType
/// Size: 0x04
enum class EGroomGeometryType : uint8_t
{
	EGroomGeometryType__Strands                                                      = 0,
	EGroomGeometryType__Cards                                                        = 1,
	EGroomGeometryType__Meshes                                                       = 2,
	EGroomGeometryType__EGroomGeometryType_MAX                                       = 3
};

/// Enum /Script/HairStrandsCore.EGroomBindingType
/// Size: 0x04
enum class EGroomBindingType : uint8_t
{
	EGroomBindingType__NoneBinding                                                   = 0,
	EGroomBindingType__Rigid                                                         = 1,
	EGroomBindingType__Skinning                                                      = 2,
	EGroomBindingType__EGroomBindingType_MAX                                         = 3
};

/// Enum /Script/HairStrandsCore.EGroomOverrideType
/// Size: 0x04
enum class EGroomOverrideType : uint8_t
{
	EGroomOverrideType__Auto                                                         = 0,
	EGroomOverrideType__Enable                                                       = 1,
	EGroomOverrideType__Disable                                                      = 2,
	EGroomOverrideType__EGroomOverrideType_MAX                                       = 3
};

/// Enum /Script/HairStrandsCore.EGroomGuideType
/// Size: 0x04
enum class EGroomGuideType : uint8_t
{
	EGroomGuideType__Imported                                                        = 0,
	EGroomGuideType__Generated                                                       = 1,
	EGroomGuideType__Rigged                                                          = 2,
	EGroomGuideType__EGroomGuideType_MAX                                             = 3
};

/// Enum /Script/HairStrandsCore.EGroomLODMode
/// Size: 0x04
enum class EGroomLODMode : uint8_t
{
	EGroomLODMode__Default                                                           = 0,
	EGroomLODMode__Manual                                                            = 1,
	EGroomLODMode__Auto                                                              = 2,
	EGroomLODMode__EGroomLODMode_MAX                                                 = 3
};

/// Enum /Script/HairStrandsCore.EGroomNiagaraSolvers
/// Size: 0x05
enum class EGroomNiagaraSolvers : uint8_t
{
	EGroomNiagaraSolvers__None                                                       = 0,
	EGroomNiagaraSolvers__CosseratRods                                               = 2,
	EGroomNiagaraSolvers__AngularSprings                                             = 4,
	EGroomNiagaraSolvers__CustomSolver                                               = 8,
	EGroomNiagaraSolvers__EGroomNiagaraSolvers_MAX                                   = 9
};

/// Enum /Script/HairStrandsCore.EGroomStrandsSize
/// Size: 0x07
enum class EGroomStrandsSize : uint8_t
{
	EGroomStrandsSize__None                                                          = 0,
	EGroomStrandsSize__Size2                                                         = 2,
	EGroomStrandsSize__Size4                                                         = 4,
	EGroomStrandsSize__Size8                                                         = 8,
	EGroomStrandsSize__Size16                                                        = 16,
	EGroomStrandsSize__Size32                                                        = 32,
	EGroomStrandsSize__EGroomStrandsSize_MAX                                         = 33
};

/// Enum /Script/HairStrandsCore.EGroomInterpolationType
/// Size: 0x05
enum class EGroomInterpolationType : uint8_t
{
	EGroomInterpolationType__None                                                    = 0,
	EGroomInterpolationType__RigidTransform                                          = 2,
	EGroomInterpolationType__OffsetTransform                                         = 4,
	EGroomInterpolationType__SmoothTransform                                         = 8,
	EGroomInterpolationType__EGroomInterpolationType_MAX                             = 9
};

/// Enum /Script/HairStrandsCore.EGroomBindingMeshType
/// Size: 0x03
enum class EGroomBindingMeshType : uint8_t
{
	EGroomBindingMeshType__SkeletalMesh                                              = 0,
	EGroomBindingMeshType__GeometryCache                                             = 1,
	EGroomBindingMeshType__EGroomBindingMeshType_MAX                                 = 2
};

/// Enum /Script/HairStrandsCore.EGroomCacheAttributes
/// Size: 0x09
enum class EGroomCacheAttributes : uint8_t
{
	EGroomCacheAttributes__None                                                      = 0,
	EGroomCacheAttributes__Position                                                  = 1,
	EGroomCacheAttributes__Width                                                     = 2,
	EGroomCacheAttributes__Color                                                     = 4,
	EGroomCacheAttributes__PositionWidth                                             = 3,
	EGroomCacheAttributes__PositionColor                                             = 5,
	EGroomCacheAttributes__WidthColor                                                = 5,
	EGroomCacheAttributes__PositionWidthColor                                        = 7,
	EGroomCacheAttributes__EGroomCacheAttributes_MAX                                 = 8
};

/// Enum /Script/HairStrandsCore.EGroomCacheType
/// Size: 0x04
enum class EGroomCacheType : uint8_t
{
	EGroomCacheType__None                                                            = 0,
	EGroomCacheType__Strands                                                         = 1,
	EGroomCacheType__Guides                                                          = 2,
	EGroomCacheType__EGroomCacheType_MAX                                             = 3
};

/// Enum /Script/HairStrandsCore.EGroomBasisType
/// Size: 0x07
enum class EGroomBasisType : uint8_t
{
	EGroomBasisType__NoBasis                                                         = 0,
	EGroomBasisType__BezierBasis                                                     = 1,
	EGroomBasisType__BsplineBasis                                                    = 2,
	EGroomBasisType__CatmullromBasis                                                 = 3,
	EGroomBasisType__HermiteBasis                                                    = 4,
	EGroomBasisType__PowerBasis                                                      = 5,
	EGroomBasisType__EGroomBasisType_MAX                                             = 6
};

/// Enum /Script/HairStrandsCore.EGroomCurveType
/// Size: 0x04
enum class EGroomCurveType : uint8_t
{
	EGroomCurveType__Cubic                                                           = 0,
	EGroomCurveType__Linear                                                          = 1,
	EGroomCurveType__VariableOrder                                                   = 2,
	EGroomCurveType__EGroomCurveType_MAX                                             = 3
};

/// Enum /Script/HairStrandsCore.EFollicleMaskChannel
/// Size: 0x05
enum class EFollicleMaskChannel : uint8_t
{
	EFollicleMaskChannel__R                                                          = 0,
	EFollicleMaskChannel__G                                                          = 1,
	EFollicleMaskChannel__B                                                          = 2,
	EFollicleMaskChannel__A                                                          = 3,
	EFollicleMaskChannel__EFollicleMaskChannel_MAX                                   = 4
};

/// Enum /Script/HairStrandsCore.EStrandsTexturesTraceType
/// Size: 0x04
enum class EStrandsTexturesTraceType : uint8_t
{
	EStrandsTexturesTraceType__TraceInside                                           = 0,
	EStrandsTexturesTraceType__TraceOuside                                           = 1,
	EStrandsTexturesTraceType__TraceBidirectional                                    = 2,
	EStrandsTexturesTraceType__EStrandsTexturesTraceType_MAX                         = 3
};

/// Enum /Script/HairStrandsCore.EStrandsTexturesMeshType
/// Size: 0x03
enum class EStrandsTexturesMeshType : uint8_t
{
	EStrandsTexturesMeshType__Static                                                 = 0,
	EStrandsTexturesMeshType__Skeletal                                               = 1,
	EStrandsTexturesMeshType__EStrandsTexturesMeshType_MAX                           = 2
};

/// Enum /Script/HairStrandsCore.EGroomInterpolationQuality
/// Size: 0x05
enum class EGroomInterpolationQuality : uint8_t
{
	EGroomInterpolationQuality__Low                                                  = 0,
	EGroomInterpolationQuality__Medium                                               = 1,
	EGroomInterpolationQuality__High                                                 = 2,
	EGroomInterpolationQuality__Unknown                                              = 3,
	EGroomInterpolationQuality__EGroomInterpolationQuality_MAX                       = 4
};

/// Enum /Script/HairStrandsCore.EGroomInterpolationWeight
/// Size: 0x05
enum class EGroomInterpolationWeight : uint8_t
{
	EGroomInterpolationWeight__Parametric                                            = 0,
	EGroomInterpolationWeight__Root                                                  = 1,
	EGroomInterpolationWeight__Index                                                 = 2,
	EGroomInterpolationWeight__Unknown                                               = 3,
	EGroomInterpolationWeight__EGroomInterpolationWeight_MAX                         = 4
};

/// Struct /Script/HairStrandsCore.GroomConversionSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGroomConversionSettings
{ 
	FVector                                            Rotation;                                                   // 0x0000   (0x0018)  
	FVector                                            Scale;                                                      // 0x0018   (0x0018)  
};

/// Struct /Script/HairStrandsCore.GroomCacheImportSettings
/// Size: 0x0060 (0x000000 - 0x000060)
struct FGroomCacheImportSettings
{ 
	bool                                               bImportGroomCache;                                          // 0x0000   (0x0001)  
	EGroomCacheImportType                              ImportType;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            FrameStart;                                                 // 0x0004   (0x0004)  
	int32_t                                            FrameEnd;                                                   // 0x0008   (0x0004)  
	bool                                               bSkipEmptyFrames;                                           // 0x000C   (0x0001)  
	bool                                               bImportGroomAsset;                                          // 0x000D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	FSoftObjectPath                                    GroomAsset;                                                 // 0x0010   (0x0018)  
	bool                                               bOverrideConversionSettings;                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FGroomConversionSettings                           ConversionSettings;                                         // 0x0030   (0x0030)  
};

/// Class /Script/HairStrandsCore.GroomCacheImportOptions
/// Size: 0x0060 (0x000028 - 0x000088)
class UGroomCacheImportOptions : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FGroomCacheImportSettings                          ImportSettings;                                             // 0x0028   (0x0060)  
};

/// Class /Script/HairStrandsCore.GroomCacheImportData
/// Size: 0x0060 (0x000028 - 0x000088)
class UGroomCacheImportData : public UAssetImportData
{ 
public:
	FGroomCacheImportSettings                          Settings;                                                   // 0x0028   (0x0060)  
};

/// Class /Script/HairStrandsCore.GroomActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AGroomActor : public AActor
{ 
public:
	class UGroomComponent*                             GroomComponent;                                             // 0x0290   (0x0008)  
};

/// Struct /Script/HairStrandsCore.HairGroupLODInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FHairGroupLODInfo
{ 
	int32_t                                            NumPoints;                                                  // 0x0000   (0x0004)  
	int32_t                                            NumCurves;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairGroupInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FHairGroupInfo
{ 
	int32_t                                            GroupId;                                                    // 0x0000   (0x0004)  
	FName                                              GroupName;                                                  // 0x0004   (0x0004)  
	int32_t                                            NumCurves;                                                  // 0x0008   (0x0004)  
	int32_t                                            NumGuides;                                                  // 0x000C   (0x0004)  
	int32_t                                            NumCurveVertices;                                           // 0x0010   (0x0004)  
	int32_t                                            NumGuideVertices;                                           // 0x0014   (0x0004)  
	float                                              MaxCurveLength;                                             // 0x0018   (0x0004)  
	uint32_t                                           Flags;                                                      // 0x001C   (0x0004)  
	TArray<FHairGroupLODInfo>                          LODInfos;                                                   // 0x0020   (0x0010)  
};

/// Struct /Script/HairStrandsCore.HairGroupInfoWithVisibility
/// Size: 0x0008 (0x000030 - 0x000038)
struct FHairGroupInfoWithVisibility : FHairGroupInfo
{ 
	bool                                               bIsVisible;                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/HairStrandsCore.HairGeometrySettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FHairGeometrySettings
{ 
	float                                              HairWidth;                                                  // 0x0000   (0x0004)  
	bool                                               HairWidth_Override;                                         // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              HairRootScale;                                              // 0x0008   (0x0004)  
	float                                              HairTipScale;                                               // 0x000C   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairShadowSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FHairShadowSettings
{ 
	float                                              HairShadowDensity;                                          // 0x0000   (0x0004)  
	float                                              HairRaytracingRadiusScale;                                  // 0x0004   (0x0004)  
	bool                                               bUseHairRaytracingGeometry;                                 // 0x0008   (0x0001)  
	bool                                               bVoxelize;                                                  // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/HairStrandsCore.HairAdvancedRenderingSettings
/// Size: 0x0002 (0x000000 - 0x000002)
struct FHairAdvancedRenderingSettings
{ 
	bool                                               bUseStableRasterization;                                    // 0x0000   (0x0001)  
	bool                                               bScatterSceneLighting;                                      // 0x0001   (0x0001)  
};

/// Struct /Script/HairStrandsCore.HairGroupsRendering
/// Size: 0x0030 (0x000000 - 0x000030)
struct FHairGroupsRendering
{ 
	FName                                              MaterialSlotName;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
	FHairGeometrySettings                              GeometrySettings;                                           // 0x0010   (0x0010)  
	FHairShadowSettings                                ShadowSettings;                                             // 0x0020   (0x000C)  
	FHairAdvancedRenderingSettings                     AdvancedSettings;                                           // 0x002C   (0x0002)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x002E   (0x0002)  MISSED
};

/// Struct /Script/HairStrandsCore.HairSolverSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FHairSolverSettings
{ 
	bool                                               EnableSimulation;                                           // 0x0000   (0x0001)  
	EGroomNiagaraSolvers                               NiagaraSolver;                                              // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	SDK_UNDEFINED(32,14134) /* TWeakObjectPtr<UNiagaraSystem*> */ __um(CustomSystem);                              // 0x0008   (0x0020)  
	float                                              GravityPreloading;                                          // 0x0028   (0x0004)  
	int32_t                                            SubSteps;                                                   // 0x002C   (0x0004)  
	int32_t                                            IterationCount;                                             // 0x0030   (0x0004)  
	bool                                               bForceVisible;                                              // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Struct /Script/HairStrandsCore.HairExternalForces
/// Size: 0x0038 (0x000000 - 0x000038)
struct FHairExternalForces
{ 
	FVector                                            GravityVector;                                              // 0x0000   (0x0018)  
	float                                              AirDrag;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FVector                                            AirVelocity;                                                // 0x0020   (0x0018)  
};

/// Struct /Script/HairStrandsCore.HairBendConstraint
/// Size: 0x0098 (0x000000 - 0x000098)
struct FHairBendConstraint
{ 
	bool                                               SolveBend;                                                  // 0x0000   (0x0001)  
	bool                                               ProjectBend;                                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              BendDamping;                                                // 0x0004   (0x0004)  
	float                                              BendStiffness;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 BendScale;                                                  // 0x0010   (0x0088)  
};

/// Struct /Script/HairStrandsCore.HairStretchConstraint
/// Size: 0x0098 (0x000000 - 0x000098)
struct FHairStretchConstraint
{ 
	bool                                               SolveStretch;                                               // 0x0000   (0x0001)  
	bool                                               ProjectStretch;                                             // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              StretchDamping;                                             // 0x0004   (0x0004)  
	float                                              StretchStiffness;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 StretchScale;                                               // 0x0010   (0x0088)  
};

/// Struct /Script/HairStrandsCore.HairCollisionConstraint
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FHairCollisionConstraint
{ 
	bool                                               SolveCollision;                                             // 0x0000   (0x0001)  
	bool                                               ProjectCollision;                                           // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              StaticFriction;                                             // 0x0004   (0x0004)  
	float                                              KineticFriction;                                            // 0x0008   (0x0004)  
	float                                              StrandsViscosity;                                           // 0x000C   (0x0004)  
	FIntVector                                         GridDimension;                                              // 0x0010   (0x000C)  
	float                                              CollisionRadius;                                            // 0x001C   (0x0004)  
	FRuntimeFloatCurve                                 RadiusScale;                                                // 0x0020   (0x0088)  
};

/// Struct /Script/HairStrandsCore.HairMaterialConstraints
/// Size: 0x01D8 (0x000000 - 0x0001D8)
struct FHairMaterialConstraints
{ 
	FHairBendConstraint                                BendConstraint;                                             // 0x0000   (0x0098)  
	FHairStretchConstraint                             StretchConstraint;                                          // 0x0098   (0x0098)  
	FHairCollisionConstraint                           CollisionConstraint;                                        // 0x0130   (0x00A8)  
};

/// Struct /Script/HairStrandsCore.HairStrandsParameters
/// Size: 0x0098 (0x000000 - 0x000098)
struct FHairStrandsParameters
{ 
	EGroomStrandsSize                                  StrandsSize;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              StrandsDensity;                                             // 0x0004   (0x0004)  
	float                                              StrandsSmoothing;                                           // 0x0008   (0x0004)  
	float                                              StrandsThickness;                                           // 0x000C   (0x0004)  
	FRuntimeFloatCurve                                 ThicknessScale;                                             // 0x0010   (0x0088)  
};

/// Struct /Script/HairStrandsCore.HairGroupsPhysics
/// Size: 0x02E0 (0x000000 - 0x0002E0)
struct FHairGroupsPhysics
{ 
	FHairSolverSettings                                SolverSettings;                                             // 0x0000   (0x0038)  
	FHairExternalForces                                ExternalForces;                                             // 0x0038   (0x0038)  
	FHairMaterialConstraints                           MaterialConstraints;                                        // 0x0070   (0x01D8)  
	FHairStrandsParameters                             StrandsParameters;                                          // 0x0248   (0x0098)  
};

/// Struct /Script/HairStrandsCore.HairDecimationSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FHairDecimationSettings
{ 
	float                                              CurveDecimation;                                            // 0x0000   (0x0004)  
	float                                              VertexDecimation;                                           // 0x0004   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairInterpolationSettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FHairInterpolationSettings
{ 
	EGroomGuideType                                    GuideType;                                                  // 0x0000   (0x0001)  
	bool                                               bOverrideGuides;                                            // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              HairToGuideDensity;                                         // 0x0004   (0x0004)  
	int32_t                                            RiggedGuideNumCurves;                                       // 0x0008   (0x0004)  
	int32_t                                            RiggedGuideNumPoints;                                       // 0x000C   (0x0004)  
	EHairInterpolationQuality                          InterpolationQuality;                                       // 0x0010   (0x0001)  
	EHairInterpolationWeight                           InterpolationDistance;                                      // 0x0011   (0x0001)  
	bool                                               bRandomizeGuide;                                            // 0x0012   (0x0001)  
	bool                                               bUseUniqueGuide;                                            // 0x0013   (0x0001)  
};

/// Struct /Script/HairStrandsCore.HairDeformationSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FHairDeformationSettings
{ 
	bool                                               bEnableRigging;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            NumCurves;                                                  // 0x0004   (0x0004)  
	int32_t                                            NumPoints;                                                  // 0x0008   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairGroupsInterpolation
/// Size: 0x0028 (0x000000 - 0x000028)
struct FHairGroupsInterpolation
{ 
	FHairDecimationSettings                            DecimationSettings;                                         // 0x0000   (0x0008)  
	FHairInterpolationSettings                         InterpolationSettings;                                      // 0x0008   (0x0014)  
	FHairDeformationSettings                           RiggingSettings;                                            // 0x001C   (0x000C)  
};

/// Struct /Script/HairStrandsCore.HairLODSettings
/// Size: 0x001C (0x000000 - 0x00001C)
struct FHairLODSettings
{ 
	float                                              CurveDecimation;                                            // 0x0000   (0x0004)  
	float                                              VertexDecimation;                                           // 0x0004   (0x0004)  
	float                                              AngularThreshold;                                           // 0x0008   (0x0004)  
	float                                              ScreenSize;                                                 // 0x000C   (0x0004)  
	float                                              ThicknessScale;                                             // 0x0010   (0x0004)  
	bool                                               bVisible;                                                   // 0x0014   (0x0001)  
	EGroomGeometryType                                 GeometryType;                                               // 0x0015   (0x0001)  
	EGroomBindingType                                  BindingType;                                                // 0x0016   (0x0001)  
	EGroomOverrideType                                 Simulation;                                                 // 0x0017   (0x0001)  
	EGroomOverrideType                                 GlobalInterpolation;                                        // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/HairStrandsCore.HairGroupsLOD
/// Size: 0x0010 (0x000000 - 0x000010)
struct FHairGroupsLOD
{ 
	TArray<FHairLODSettings>                           Lods;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/HairStrandsCore.HairGroupCardsTextures
/// Size: 0x0050 (0x000000 - 0x000050)
struct FHairGroupCardsTextures
{ 
	EHairTextureLayout                                 Layout;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<class UTexture2D*>                          Textures;                                                   // 0x0008   (0x0010)  
	class UTexture2D*                                  DepthTexture;                                               // 0x0018   (0x0008)  
	class UTexture2D*                                  CoverageTexture;                                            // 0x0020   (0x0008)  
	class UTexture2D*                                  TangentTexture;                                             // 0x0028   (0x0008)  
	class UTexture2D*                                  AttributeTexture;                                           // 0x0030   (0x0008)  
	class UTexture2D*                                  AuxilaryDataTexture;                                        // 0x0038   (0x0008)  
	class UTexture2D*                                  MaterialTexture;                                            // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Struct /Script/HairStrandsCore.HairGroupCardsInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FHairGroupCardsInfo
{ 
	int32_t                                            NumCards;                                                   // 0x0000   (0x0004)  
	int32_t                                            NumCardVertices;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairGroupsCardsSourceDescription
/// Size: 0x0098 (0x000000 - 0x000098)
struct FHairGroupsCardsSourceDescription
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	FName                                              MaterialSlotName;                                           // 0x0008   (0x0004)  
	EHairCardsSourceType                               SourceType;                                                 // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	class UStaticMesh*                                 ProceduralMesh;                                             // 0x0010   (0x0008)  
	bool                                               bInvertUV;                                                  // 0x0018   (0x0001)  
	EHairCardsGuideType                                GuideType;                                                  // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x001A   (0x0006)  MISSED
	class UStaticMesh*                                 ImportedMesh;                                               // 0x0020   (0x0008)  
	FHairGroupCardsTextures                            Textures;                                                   // 0x0028   (0x0050)  
	int32_t                                            GroupIndex;                                                 // 0x0078   (0x0004)  
	int32_t                                            LODIndex;                                                   // 0x007C   (0x0004)  
	FHairGroupCardsInfo                                CardsInfo;                                                  // 0x0080   (0x0008)  
	SDK_UNDEFINED(16,14135) /* FString */              __um(ImportedMeshKey);                                      // 0x0088   (0x0010)  
};

/// Struct /Script/HairStrandsCore.HairGroupsMeshesSourceDescription
/// Size: 0x0080 (0x000000 - 0x000080)
struct FHairGroupsMeshesSourceDescription
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	FName                                              MaterialSlotName;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UStaticMesh*                                 ImportedMesh;                                               // 0x0010   (0x0008)  
	FHairGroupCardsTextures                            Textures;                                                   // 0x0018   (0x0050)  
	int32_t                                            GroupIndex;                                                 // 0x0068   (0x0004)  
	int32_t                                            LODIndex;                                                   // 0x006C   (0x0004)  
	SDK_UNDEFINED(16,14136) /* FString */              __um(ImportedMeshKey);                                      // 0x0070   (0x0010)  
};

/// Struct /Script/HairStrandsCore.HairGroupsMaterial
/// Size: 0x0010 (0x000000 - 0x000010)
struct FHairGroupsMaterial
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	FName                                              SlotName;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Class /Script/HairStrandsCore.GroomAsset
/// Size: 0x0100 (0x000028 - 0x000128)
class UGroomAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	EGroomLODMode                                      LODMode;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              AutoLODBias;                                                // 0x0034   (0x0004)  
	TArray<FHairGroupInfoWithVisibility>               HairGroupsInfo;                                             // 0x0038   (0x0010)  
	TArray<FHairGroupsRendering>                       HairGroupsRendering;                                        // 0x0048   (0x0010)  
	TArray<FHairGroupsPhysics>                         HairGroupsPhysics;                                          // 0x0058   (0x0010)  
	TArray<FHairGroupsInterpolation>                   HairGroupsInterpolation;                                    // 0x0068   (0x0010)  
	TArray<FHairGroupsLOD>                             HairGroupsLOD;                                              // 0x0078   (0x0010)  
	TArray<FHairGroupsCardsSourceDescription>          HairGroupsCards;                                            // 0x0088   (0x0010)  
	TArray<FHairGroupsMeshesSourceDescription>         HairGroupsMeshes;                                           // 0x0098   (0x0010)  
	TArray<FHairGroupsMaterial>                        HairGroupsMaterials;                                        // 0x00A8   (0x0010)  
	bool                                               EnableGlobalInterpolation;                                  // 0x00B8   (0x0001)  
	bool                                               EnableSimulationCache;                                      // 0x00B9   (0x0001)  
	EGroomInterpolationType                            HairInterpolationType;                                      // 0x00BA   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x00BB   (0x0005)  MISSED
	class USkeletalMesh*                               RiggedSkeletalMesh;                                         // 0x00C0   (0x0008)  
	TArray<int32_t>                                    DeformedGroupSections;                                      // 0x00C8   (0x0010)  
	FPerPlatformInt                                    MinLOD;                                                     // 0x00D8   (0x0004)  
	FPerPlatformBool                                   DisableBelowMinLodStripping;                                // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00DD   (0x0003)  MISSED
	TArray<float>                                      EffectiveLODBias;                                           // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData04_5[0x20];                                      // 0x00F0   (0x0020)  MISSED
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0110   (0x0010)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x0120   (0x0008)  MISSED


	/// Functions
	// Function /Script/HairStrandsCore.GroomAsset.SetRiggedSkeletalMesh
	// void SetRiggedSkeletalMesh(class USkeletalMesh* In);                                                                  // [0xb9b7bbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetHairInterpolationType
	// void SetHairInterpolationType(EGroomInterpolationType In);                                                            // [0xb9b7a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetHairGroupsRendering
	// void SetHairGroupsRendering(TArray<FHairGroupsRendering>& In);                                                        // [0xb9b78e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetHairGroupsPhysics
	// void SetHairGroupsPhysics(TArray<FHairGroupsPhysics>& In);                                                            // [0xb9b7848] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetHairGroupsMeshes
	// void SetHairGroupsMeshes(TArray<FHairGroupsMeshesSourceDescription>& In);                                             // [0xb9b77ac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetHairGroupsMaterials
	// void SetHairGroupsMaterials(TArray<FHairGroupsMaterial>& In);                                                         // [0xb9b763c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetHairGroupsLOD
	// void SetHairGroupsLOD(TArray<FHairGroupsLOD>& In);                                                                    // [0xb9b75a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetHairGroupsInterpolation
	// void SetHairGroupsInterpolation(TArray<FHairGroupsInterpolation>& In);                                                // [0xb9b7434] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetHairGroupsCards
	// void SetHairGroupsCards(TArray<FHairGroupsCardsSourceDescription>& In);                                               // [0xb9b7398] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetEnableSimulationCache
	// void SetEnableSimulationCache(bool In);                                                                               // [0xb9b7130] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetEnableGlobalInterpolation
	// void SetEnableGlobalInterpolation(bool In);                                                                           // [0xb9b70b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetDeformedGroupSections
	// void SetDeformedGroupSections(TArray<int32_t>& In);                                                                   // [0xb9b7010] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.GetRiggedSkeletalMesh
	// class USkeletalMesh* GetRiggedSkeletalMesh();                                                                         // [0x6b2d9dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomAsset.GetHairInterpolationType
	// EGroomInterpolationType GetHairInterpolationType();                                                                   // [0x893f0e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomAsset.GetHairGroupsRendering
	// TArray<FHairGroupsRendering> GetHairGroupsRendering();                                                                // [0xb9b6fe0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HairStrandsCore.GroomAsset.GetHairGroupsPhysics
	// TArray<FHairGroupsPhysics> GetHairGroupsPhysics();                                                                    // [0xb9b6fc4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HairStrandsCore.GroomAsset.GetHairGroupsMeshes
	// TArray<FHairGroupsMeshesSourceDescription> GetHairGroupsMeshes();                                                     // [0xb9b6fa8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HairStrandsCore.GroomAsset.GetHairGroupsMaterials
	// TArray<FHairGroupsMaterial> GetHairGroupsMaterials();                                                                 // [0xb9b6f8c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HairStrandsCore.GroomAsset.GetHairGroupsLOD
	// TArray<FHairGroupsLOD> GetHairGroupsLOD();                                                                            // [0xb9b6f70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HairStrandsCore.GroomAsset.GetHairGroupsInterpolation
	// TArray<FHairGroupsInterpolation> GetHairGroupsInterpolation();                                                        // [0xb9b6f54] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HairStrandsCore.GroomAsset.GetHairGroupsCards
	// TArray<FHairGroupsCardsSourceDescription> GetHairGroupsCards();                                                       // [0xb9b6f38] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HairStrandsCore.GroomAsset.GetEnableSimulationCache
	// bool GetEnableSimulationCache();                                                                                      // [0xb9b6f04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomAsset.GetEnableGlobalInterpolation
	// bool GetEnableGlobalInterpolation();                                                                                  // [0xabbd240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomAsset.GetDeformedGroupSections
	// TArray<int32_t> GetDeformedGroupSections();                                                                           // [0xb9b6ee8] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/HairStrandsCore.HairCardGenerationSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UHairCardGenerationSettings : public UObject
{ 
public:
};

/// Class /Script/HairStrandsCore.GroomAssetImportData
/// Size: 0x0008 (0x000028 - 0x000030)
class UGroomAssetImportData : public UAssetImportData
{ 
public:
	class UGroomImportOptions*                         ImportOptions;                                              // 0x0028   (0x0008)  
};

/// Struct /Script/HairStrandsCore.GoomBindingGroupInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGoomBindingGroupInfo
{ 
	int32_t                                            RenRootCount;                                               // 0x0000   (0x0004)  
	int32_t                                            RenLODCount;                                                // 0x0004   (0x0004)  
	int32_t                                            SimRootCount;                                               // 0x0008   (0x0004)  
	int32_t                                            SimLODCount;                                                // 0x000C   (0x0004)  
};

/// Class /Script/HairStrandsCore.GroomBindingAsset
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UGroomBindingAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	EGroomBindingMeshType                              GroomBindingType;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	class UGroomAsset*                                 Groom;                                                      // 0x0030   (0x0008)  
	class USkeletalMesh*                               SourceSkeletalMesh;                                         // 0x0038   (0x0008)  
	class USkeletalMesh*                               TargetSkeletalMesh;                                         // 0x0040   (0x0008)  
	class UGeometryCache*                              SourceGeometryCache;                                        // 0x0048   (0x0008)  
	class UGeometryCache*                              TargetGeometryCache;                                        // 0x0050   (0x0008)  
	int32_t                                            NumInterpolationPoints;                                     // 0x0058   (0x0004)  
	int32_t                                            MatchingSection;                                            // 0x005C   (0x0004)  
	TArray<FGoomBindingGroupInfo>                      GroupInfos;                                                 // 0x0060   (0x0010)  
	unsigned char                                      UnknownData02_6[0x40];                                      // 0x0070   (0x0040)  MISSED


	/// Functions
	// Function /Script/HairStrandsCore.GroomBindingAsset.SetTargetSkeletalMesh
	// void SetTargetSkeletalMesh(class USkeletalMesh* InSkeletalMesh);                                                      // [0xb9b7de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBindingAsset.SetTargetGeometryCache
	// void SetTargetGeometryCache(class UGeometryCache* InGeometryCache);                                                   // [0xb9b7d58] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBindingAsset.SetSourceSkeletalMesh
	// void SetSourceSkeletalMesh(class USkeletalMesh* InSkeletalMesh);                                                      // [0xb9b7cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBindingAsset.SetSourceGeometryCache
	// void SetSourceGeometryCache(class UGeometryCache* InGeometryCache);                                                   // [0xb9b7c48] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBindingAsset.SetNumInterpolationPoints
	// void SetNumInterpolationPoints(int32_t InNumInterpolationPoints);                                                     // [0xb9b7b44] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBindingAsset.SetMatchingSection
	// void SetMatchingSection(int32_t InMatchingSection);                                                                   // [0xb9b7acc] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBindingAsset.SetGroupInfos
	// void SetGroupInfos(TArray<FGoomBindingGroupInfo>& InGroupInfos);                                                      // [0xb9b722c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBindingAsset.SetGroomBindingType
	// void SetGroomBindingType(EGroomBindingMeshType InGroomBindingType);                                                   // [0xb9b71b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBindingAsset.SetGroom
	// void SetGroom(class UGroomAsset* InGroom);                                                                            // [0x7e4a208] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBindingAsset.GetTargetSkeletalMesh
	// class USkeletalMesh* GetTargetSkeletalMesh();                                                                         // [0x6473ba8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomBindingAsset.GetTargetGeometryCache
	// class UGeometryCache* GetTargetGeometryCache();                                                                       // [0x7217488] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomBindingAsset.GetSourceSkeletalMesh
	// class USkeletalMesh* GetSourceSkeletalMesh();                                                                         // [0x9fb9040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomBindingAsset.GetSourceGeometryCache
	// class UGeometryCache* GetSourceGeometryCache();                                                                       // [0x9443d7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomBindingAsset.GetNumInterpolationPoints
	// int32_t GetNumInterpolationPoints();                                                                                  // [0x6987a9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomBindingAsset.GetMatchingSection
	// int32_t GetMatchingSection();                                                                                         // [0xb9b6ffc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomBindingAsset.GetGroupInfos
	// TArray<FGoomBindingGroupInfo> GetGroupInfos();                                                                        // [0xb9b6f1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomBindingAsset.GetGroomBindingType
	// EGroomBindingMeshType GetGroomBindingType();                                                                          // [0x3eacdc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomBindingAsset.GetGroom
	// class UGroomAsset* GetGroom();                                                                                        // [0x68142b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/HairStrandsCore.GroomBindingAssetList
/// Size: 0x0010 (0x000028 - 0x000038)
class UGroomBindingAssetList : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UGroomBindingAsset*>                  Bindings;                                                   // 0x0028   (0x0010)  
};

/// Class /Script/HairStrandsCore.GroomBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
	// class UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(FString InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // [0xb9b6c8c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
	// class UGroomBindingAsset* CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // [0xb9b6b2c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath
	// class UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAssetWithPath(FString DesiredPackagePath, class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // [0xb9b6c8c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset
	// class UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAsset(class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // [0xb9b6b2c] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/HairStrandsCore.GroomAnimationInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGroomAnimationInfo
{ 
	uint32_t                                           NumFrames;                                                  // 0x0000   (0x0004)  
	float                                              SecondsPerFrame;                                            // 0x0004   (0x0004)  
	float                                              duration;                                                   // 0x0008   (0x0004)  
	float                                              StartTime;                                                  // 0x000C   (0x0004)  
	float                                              EndTime;                                                    // 0x0010   (0x0004)  
	int32_t                                            StartFrame;                                                 // 0x0014   (0x0004)  
	int32_t                                            EndFrame;                                                   // 0x0018   (0x0004)  
	EGroomCacheAttributes                              Attributes;                                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/HairStrandsCore.GroomCacheInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGroomCacheInfo
{ 
	int32_t                                            Version;                                                    // 0x0000   (0x0004)  
	EGroomCacheType                                    Type;                                                       // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FGroomAnimationInfo                                AnimationInfo;                                              // 0x0008   (0x0020)  
};

/// Class /Script/HairStrandsCore.GroomCache
/// Size: 0x0060 (0x000028 - 0x000088)
class UGroomCache : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x0000   (0x0040)  MISSED
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0040   (0x0010)  
	FGroomCacheInfo                                    GroomCacheInfo;                                             // 0x0050   (0x0028)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0078   (0x0010)  MISSED
};

/// Struct /Script/HairStrandsCore.HairSimulationSetup
/// Size: 0x0028 (0x000000 - 0x000028)
struct FHairSimulationSetup
{ 
	bool                                               bResetSimulation;                                           // 0x0000   (0x0001)  
	bool                                               bDebugSimulation;                                           // 0x0001   (0x0001)  
	bool                                               bLocalSimulation;                                           // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              LinearVelocityScale;                                        // 0x0004   (0x0004)  
	float                                              AngularVelocityScale;                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(16,14137) /* FString */              __um(LocalBone);                                            // 0x0010   (0x0010)  
	float                                              TeleportDistance;                                           // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/HairStrandsCore.HairSimulationSolver
/// Size: 0x0001 (0x000000 - 0x000001)
struct FHairSimulationSolver
{ 
	bool                                               bEnableSimulation;                                          // 0x0000   (0x0001)  
};

/// Struct /Script/HairStrandsCore.HairSimulationForces
/// Size: 0x0038 (0x000000 - 0x000038)
struct FHairSimulationForces
{ 
	FVector                                            GravityVector;                                              // 0x0000   (0x0018)  
	float                                              AirDrag;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FVector                                            AirVelocity;                                                // 0x0020   (0x0018)  
};

/// Struct /Script/HairStrandsCore.HairSimulationConstraints
/// Size: 0x0020 (0x000000 - 0x000020)
struct FHairSimulationConstraints
{ 
	float                                              BendDamping;                                                // 0x0000   (0x0004)  
	float                                              BendStiffness;                                              // 0x0004   (0x0004)  
	float                                              StretchDamping;                                             // 0x0008   (0x0004)  
	float                                              StretchStiffness;                                           // 0x000C   (0x0004)  
	float                                              StaticFriction;                                             // 0x0010   (0x0004)  
	float                                              KineticFriction;                                            // 0x0014   (0x0004)  
	float                                              StrandsViscosity;                                           // 0x0018   (0x0004)  
	float                                              CollisionRadius;                                            // 0x001C   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairSimulationSettings
/// Size: 0x0090 (0x000000 - 0x000090)
struct FHairSimulationSettings
{ 
	bool                                               bOverrideSettings;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FHairSimulationSetup                               SimulationSetup;                                            // 0x0008   (0x0028)  
	FHairSimulationSolver                              SolverSettings;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FHairSimulationForces                              ExternalForces;                                             // 0x0038   (0x0038)  
	FHairSimulationConstraints                         MaterialConstraints;                                        // 0x0070   (0x0020)  
};

/// Struct /Script/HairStrandsCore.HairGroupDesc
/// Size: 0x0040 (0x000000 - 0x000040)
struct FHairGroupDesc
{ 
	float                                              HairLength;                                                 // 0x0000   (0x0004)  
	float                                              HairWidth;                                                  // 0x0004   (0x0004)  
	bool                                               HairWidth_Override;                                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              HairRootScale;                                              // 0x000C   (0x0004)  
	bool                                               HairRootScale_Override;                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              HairTipScale;                                               // 0x0014   (0x0004)  
	bool                                               HairTipScale_Override;                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              HairShadowDensity;                                          // 0x001C   (0x0004)  
	bool                                               HairShadowDensity_Override;                                 // 0x0020   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              HairRaytracingRadiusScale;                                  // 0x0024   (0x0004)  
	bool                                               HairRaytracingRadiusScale_Override;                         // 0x0028   (0x0001)  
	bool                                               bUseHairRaytracingGeometry;                                 // 0x0029   (0x0001)  
	bool                                               bUseHairRaytracingGeometry_Override;                        // 0x002A   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x002B   (0x0001)  MISSED
	float                                              LODBias;                                                    // 0x002C   (0x0004)  
	bool                                               bUseStableRasterization;                                    // 0x0030   (0x0001)  
	bool                                               bUseStableRasterization_Override;                           // 0x0031   (0x0001)  
	bool                                               bScatterSceneLighting;                                      // 0x0032   (0x0001)  
	bool                                               bScatterSceneLighting_Override;                             // 0x0033   (0x0001)  
	bool                                               bSupportVoxelization;                                       // 0x0034   (0x0001)  
	bool                                               bSupportVoxelization_Override;                              // 0x0035   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x0036   (0x0002)  MISSED
	float                                              HairLengthScale;                                            // 0x0038   (0x0004)  
	bool                                               HairLengthScale_Override;                                   // 0x003C   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/HairStrandsCore.GroomComponent
/// Size: 0x0240 (0x000540 - 0x000780)
class UGroomComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0538   (0x0010)  MISSED
	class UGroomAsset*                                 GroomAsset;                                                 // 0x0548   (0x0008)  
	class UGroomCache*                                 GroomCache;                                                 // 0x0550   (0x0008)  
	TArray<class UNiagaraComponent*>                   NiagaraComponents;                                          // 0x0558   (0x0010)  
	class USkeletalMesh*                               SourceSkeletalMesh;                                         // 0x0568   (0x0008)  
	class UGroomBindingAsset*                          BindingAsset;                                               // 0x0570   (0x0008)  
	class UPhysicsAsset*                               PhysicsAsset;                                               // 0x0578   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0580   (0x0010)  MISSED
	FHairSimulationSettings                            SimulationSettings;                                         // 0x0590   (0x0090)  
	class UMeshDeformer*                               MeshDeformer;                                               // 0x0620   (0x0008)  
	class UMeshDeformerInstance*                       MeshDeformerInstance;                                       // 0x0628   (0x0008)  
	class UMeshDeformerInstanceSettings*               MeshDeformerInstanceSettings;                               // 0x0630   (0x0008)  
	class UMaterialInterface*                          Strands_DebugMaterial;                                      // 0x0638   (0x0008)  
	class UMaterialInterface*                          Strands_DefaultMaterial;                                    // 0x0640   (0x0008)  
	class UMaterialInterface*                          Cards_DefaultMaterial;                                      // 0x0648   (0x0008)  
	class UMaterialInterface*                          Meshes_DefaultMaterial;                                     // 0x0650   (0x0008)  
	class UNiagaraSystem*                              AngularSpringsSystem;                                       // 0x0658   (0x0008)  
	class UNiagaraSystem*                              CosseratRodsSystem;                                         // 0x0660   (0x0008)  
	SDK_UNDEFINED(16,14138) /* FString */              __um(AttachmentName);                                       // 0x0668   (0x0010)  
	unsigned char                                      UnknownData02_5[0x88];                                      // 0x0678   (0x0088)  MISSED
	TArray<FHairGroupDesc>                             GroomGroupsDesc;                                            // 0x0700   (0x0010)  
	bool                                               bUseCards;                                                  // 0x0710   (0x0001)  
	bool                                               bRunning;                                                   // 0x0711   (0x0001)  
	bool                                               bLooping;                                                   // 0x0712   (0x0001)  
	bool                                               bManualTick;                                                // 0x0713   (0x0001)  
	float                                              ElapsedTime;                                                // 0x0714   (0x0004)  
	unsigned char                                      UnknownData03_6[0x68];                                      // 0x0718   (0x0068)  MISSED


	/// Functions
	// Function /Script/HairStrandsCore.GroomComponent.SetPhysicsAsset
	// void SetPhysicsAsset(class UPhysicsAsset* InPhysicsAsset);                                                            // [0xb9d743c] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetMeshDeformer
	// void SetMeshDeformer(class UMeshDeformer* InMeshDeformer);                                                            // [0xb9d73bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetHairLengthScaleEnable
	// void SetHairLengthScaleEnable(bool bEnable);                                                                          // [0xb9d730c] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetHairLengthScale
	// void SetHairLengthScale(float Scale);                                                                                 // [0xb9d7264] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetGroomCache
	// void SetGroomCache(class UGroomCache* InGroomCache);                                                                  // [0xb9d71e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetGroomAsset
	// void SetGroomAsset(class UGroomAsset* Asset);                                                                         // [0xb9d7158] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetEnableSimulation
	// void SetEnableSimulation(bool bInEnableSimulation);                                                                   // [0xb9d70d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetBindingAsset
	// void SetBindingAsset(class UGroomBindingAsset* InBinding);                                                            // [0xb9d6ffc] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.ResetSimulation
	// void ResetSimulation();                                                                                               // [0xb9d6fe4] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.ResetCollisionComponents
	// void ResetCollisionComponents();                                                                                      // [0xb9d6fb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.GetNiagaraComponent
	// class UNiagaraComponent* GetNiagaraComponent(int32_t GroupIndex);                                                     // [0xb9d6f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.GetIsHairLengthScaleEnabled
	// bool GetIsHairLengthScaleEnabled();                                                                                   // [0xb9d6ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.AddCollisionComponent
	// void AddCollisionComponent(class USkeletalMeshComponent* SkeletalMeshComponent);                                      // [0xb9d6cfc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HairStrandsCore.GroomCreateBindingOptions
/// Size: 0x0038 (0x000028 - 0x000060)
class UGroomCreateBindingOptions : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(8,14139) /* TWeakObjectPtr<UGroomAsset*> */ __um(GroomAsset);                                    // 0x0028   (0x0008)  
	EGroomBindingMeshType                              GroomBindingType;                                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	class USkeletalMesh*                               SourceSkeletalMesh;                                         // 0x0038   (0x0008)  
	class USkeletalMesh*                               TargetSkeletalMesh;                                         // 0x0040   (0x0008)  
	class UGeometryCache*                              SourceGeometryCache;                                        // 0x0048   (0x0008)  
	class UGeometryCache*                              TargetGeometryCache;                                        // 0x0050   (0x0008)  
	int32_t                                            NumInterpolationPoints;                                     // 0x0058   (0x0004)  
	int32_t                                            MatchingSection;                                            // 0x005C   (0x0004)  
};

/// Struct /Script/HairStrandsCore.FollicleMaskOptions
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFollicleMaskOptions
{ 
	class UGroomAsset*                                 Groom;                                                      // 0x0000   (0x0008)  
	EFollicleMaskChannel                               Channel;                                                    // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Class /Script/HairStrandsCore.GroomCreateFollicleMaskOptions
/// Size: 0x0018 (0x000028 - 0x000040)
class UGroomCreateFollicleMaskOptions : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            Resolution;                                                 // 0x0028   (0x0004)  
	int32_t                                            RootRadius;                                                 // 0x002C   (0x0004)  
	TArray<FFollicleMaskOptions>                       Grooms;                                                     // 0x0030   (0x0010)  
};

/// Class /Script/HairStrandsCore.GroomCreateStrandsTexturesOptions
/// Size: 0x0048 (0x000028 - 0x000070)
class UGroomCreateStrandsTexturesOptions : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	EHairTextureLayout                                 Layout;                                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            Resolution;                                                 // 0x002C   (0x0004)  
	EStrandsTexturesTraceType                          TraceType;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              TraceDistance;                                              // 0x0034   (0x0004)  
	EStrandsTexturesMeshType                           MeshType;                                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0040   (0x0008)  
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x0048   (0x0008)  
	int32_t                                            LODIndex;                                                   // 0x0050   (0x0004)  
	int32_t                                            SectionIndex;                                               // 0x0054   (0x0004)  
	int32_t                                            UVChannelIndex;                                             // 0x0058   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<int32_t>                                    GroupIndex;                                                 // 0x0060   (0x0010)  
};

/// Class /Script/HairStrandsCore.GroomImportOptions
/// Size: 0x0040 (0x000028 - 0x000068)
class UGroomImportOptions : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FGroomConversionSettings                           ConversionSettings;                                         // 0x0028   (0x0030)  
	TArray<FHairGroupsInterpolation>                   InterpolationSettings;                                      // 0x0058   (0x0010)  
};

/// Struct /Script/HairStrandsCore.GroomHairGroupPreview
/// Size: 0x0044 (0x000000 - 0x000044)
struct FGroomHairGroupPreview
{ 
	FName                                              GroupName;                                                  // 0x0000   (0x0004)  
	int32_t                                            GroupId;                                                    // 0x0004   (0x0004)  
	int32_t                                            CurveCount;                                                 // 0x0008   (0x0004)  
	int32_t                                            GuideCount;                                                 // 0x000C   (0x0004)  
	uint32_t                                           Attributes;                                                 // 0x0010   (0x0004)  
	uint32_t                                           AttributeFlags;                                             // 0x0014   (0x0004)  
	uint32_t                                           Flags;                                                      // 0x0018   (0x0004)  
	FHairGroupsInterpolation                           InterpolationSettings;                                      // 0x001C   (0x0028)  
};

/// Class /Script/HairStrandsCore.GroomHairGroupsPreview
/// Size: 0x0010 (0x000028 - 0x000038)
class UGroomHairGroupsPreview : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FGroomHairGroupPreview>                     Groups;                                                     // 0x0028   (0x0010)  
};

/// Class /Script/HairStrandsCore.GroomPluginSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UGroomPluginSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	float                                              GroomCacheLookAheadBuffer;                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/HairStrandsCore.MovieSceneGroomCacheParams
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneGroomCacheParams
{ 
	class UGroomCache*                                 GroomCache;                                                 // 0x0000   (0x0008)  
	FFrameNumber                                       FirstLoopStartFrameOffset;                                  // 0x0008   (0x0004)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x000C   (0x0004)  
	FFrameNumber                                       EndFrameOffset;                                             // 0x0010   (0x0004)  
	float                                              PlayRate;                                                   // 0x0014   (0x0004)  
	bool                                               bReverse : 1;                                               // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Class /Script/HairStrandsCore.MovieSceneGroomCacheSection
/// Size: 0x0020 (0x0000F0 - 0x000110)
class UMovieSceneGroomCacheSection : public UMovieSceneSection
{ 
public:
	FMovieSceneGroomCacheParams                        Params;                                                     // 0x00F0   (0x0020)  
};

/// Class /Script/HairStrandsCore.MovieSceneGroomCacheTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneGroomCacheTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  AnimationSections;                                          // 0x00A0   (0x0010)  
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfaceHairStrands
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0038   (0x0008)  MISSED
	class UGroomAsset*                                 DefaultSource;                                              // 0x0040   (0x0008)  
	class AActor*                                      SourceActor;                                                // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfaceVelocityGrid
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         GridSize;                                                   // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfacePressureGrid
/// Size: 0x0000 (0x000048 - 0x000048)
class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid
{ 
public:
};

/// Struct /Script/HairStrandsCore.GroomBuildSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FGroomBuildSettings
{ 
	bool                                               bOverrideGuides;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              HairToGuideDensity;                                         // 0x0004   (0x0004)  
	EGroomInterpolationQuality                         InterpolationQuality;                                       // 0x0008   (0x0001)  
	EGroomInterpolationWeight                          InterpolationDistance;                                      // 0x0009   (0x0001)  
	bool                                               bRandomizeGuide;                                            // 0x000A   (0x0001)  
	bool                                               bUseUniqueGuide;                                            // 0x000B   (0x0001)  
};

/// Struct /Script/HairStrandsCore.MovieSceneGroomCacheSectionTemplateParameters
/// Size: 0x0008 (0x000020 - 0x000028)
struct FMovieSceneGroomCacheSectionTemplateParameters : FMovieSceneGroomCacheParams
{ 
	FFrameNumber                                       SectionStartTime;                                           // 0x0020   (0x0004)  
	FFrameNumber                                       SectionEndTime;                                             // 0x0024   (0x0004)  
};

/// Struct /Script/HairStrandsCore.MovieSceneGroomCacheSectionTemplate
/// Size: 0x0028 (0x000020 - 0x000048)
struct FMovieSceneGroomCacheSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneGroomCacheSectionTemplateParameters     Params;                                                     // 0x0020   (0x0028)  
};

