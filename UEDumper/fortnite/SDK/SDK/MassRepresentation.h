
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MassActors
/// dependency: MassEntity
/// dependency: MassLOD
/// dependency: MassSpawner

/// Enum /Script/MassRepresentation.EMassRepresentationType
/// Size: 0x05
enum class EMassRepresentationType : uint8_t
{
	EMassRepresentationType__HighResSpawnedActor                                     = 0,
	EMassRepresentationType__LowResSpawnedActor                                      = 1,
	EMassRepresentationType__StaticMeshInstance                                      = 2,
	EMassRepresentationType__None                                                    = 3,
	EMassRepresentationType__EMassRepresentationType_MAX                             = 4
};

/// Class /Script/MassRepresentation.MassDistanceLODProcessor
/// Size: 0x07F0 (0x0000C0 - 0x0008B0)
class UMassDistanceLODProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_3[0x7E8];                                     // 0x00C0   (0x07E8)  MISSED
	class UScriptStruct*                               FilterTag;                                                  // 0x08A8   (0x0008)  
};

/// Struct /Script/MassRepresentation.MassStaticMeshInstanceVisualizationMeshDesc
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMassStaticMeshInstanceVisualizationMeshDesc
{ 
	class UStaticMesh*                                 Mesh;                                                       // 0x0000   (0x0008)  
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                          // 0x0008   (0x0010)  
	float                                              MinLODSignificance;                                         // 0x0018   (0x0004)  
	float                                              MaxLODSignificance;                                         // 0x001C   (0x0004)  
	bool                                               bCastShadows;                                               // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	class UClass*                                      ISMComponentClass;                                          // 0x0028   (0x0008)  
};

/// Struct /Script/MassRepresentation.StaticMeshInstanceVisualizationDesc
/// Size: 0x0078 (0x000008 - 0x000080)
struct FStaticMeshInstanceVisualizationDesc : FTableRowBase
{ 
	TArray<FMassStaticMeshInstanceVisualizationMeshDesc> Meshes;                                                   // 0x0008   (0x0010)  
	bool                                               bUseTransformOffset;                                        // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	FTransform                                         TransformOffset;                                            // 0x0020   (0x0060)  
};

/// Struct /Script/MassRepresentation.MassRepresentationParameters
/// Size: 0x0027 (0x000001 - 0x000028)
struct FMassRepresentationParameters : FMassSharedFragment
{ 
	class UClass*                                      RepresentationActorManagementClass;                         // 0x0000   (0x0008)  
	EMassRepresentationType                            LODRepresentation;                                          // 0x0008   (0x0004)  
	bool                                               bForceActorRepresentationForExternalActors : 1;             // 0x000C:0 (0x0001)  
	bool                                               bKeepLowResActors : 1;                                      // 0x000C:1 (0x0001)  
	bool                                               bKeepActorExtraFrame : 1;                                   // 0x000C:2 (0x0001)  
	bool                                               bSpreadFirstVisualizationUpdate : 1;                        // 0x000C:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x000D   (0x0003)  MISSED
	FName                                              WorldPartitionGridNameContainingCollision;                  // 0x0010   (0x0004)  
	float                                              NotVisibleUpdateRate;                                       // 0x0014   (0x0004)  
	EMassRepresentationType                            CachedDefaultRepresentationType;                            // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	class UMassRepresentationActorManagement*          CachedRepresentationActorManagement;                        // 0x0020   (0x0008)  
};

/// Struct /Script/MassRepresentation.MassDistanceLODParameters
/// Size: 0x001F (0x000001 - 0x000020)
struct FMassDistanceLODParameters : FMassSharedFragment
{ 
	float                                              LODDistance;                                                // 0x0000   (0x0010)  
	float                                              BufferHysteresisOnDistancePercentage;                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UScriptStruct*                               FilterTag;                                                  // 0x0018   (0x0008)  
};

/// Class /Script/MassRepresentation.MassDistanceVisualizationTrait
/// Size: 0x00F8 (0x000028 - 0x000120)
#pragma pack(push, 0x1)
class alignas(0x10) UMassDistanceVisualizationTrait : public UMassEntityTraitBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	FStaticMeshInstanceVisualizationDesc               StaticMeshInstanceDesc;                                     // 0x0030   (0x0080)  
	class UClass*                                      HighResTemplateActor;                                       // 0x00B0   (0x0008)  
	class UClass*                                      LowResTemplateActor;                                        // 0x00B8   (0x0008)  
	class UClass*                                      RepresentationSubsystemClass;                               // 0x00C0   (0x0008)  
	FMassRepresentationParameters                      Params;                                                     // 0x00C8   (0x0028)  
	FMassDistanceLODParameters                         LODParams;                                                  // 0x00F0   (0x0020)  
	bool                                               bAllowServerSideVisualization;                              // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0111   (0x0007)  MISSED
};
#pragma pack(pop)

/// Struct /Script/MassRepresentation.MassVisualizationLODParameters
/// Size: 0x0047 (0x000001 - 0x000048)
struct FMassVisualizationLODParameters : FMassSharedFragment
{ 
	float                                              BaseLODDistance;                                            // 0x0000   (0x0010)  
	float                                              VisibleLODDistance;                                         // 0x0010   (0x0010)  
	float                                              BufferHysteresisOnDistancePercentage;                       // 0x0020   (0x0004)  
	int32_t                                            LODMaxCount;                                                // 0x0024   (0x0010)  
	float                                              DistanceToFrustum;                                          // 0x0034   (0x0004)  
	float                                              DistanceToFrustumHysteresis;                                // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	class UScriptStruct*                               FilterTag;                                                  // 0x0040   (0x0008)  
};

/// Class /Script/MassRepresentation.MassVisualizationTrait
/// Size: 0x0118 (0x000028 - 0x000140)
class UMassVisualizationTrait : public UMassEntityTraitBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	FStaticMeshInstanceVisualizationDesc               StaticMeshInstanceDesc;                                     // 0x0030   (0x0080)  
	class UClass*                                      HighResTemplateActor;                                       // 0x00B0   (0x0008)  
	class UClass*                                      LowResTemplateActor;                                        // 0x00B8   (0x0008)  
	class UClass*                                      RepresentationSubsystemClass;                               // 0x00C0   (0x0008)  
	FMassRepresentationParameters                      Params;                                                     // 0x00C8   (0x0028)  
	FMassVisualizationLODParameters                    LODParams;                                                  // 0x00F0   (0x0048)  
	bool                                               bAllowServerSideVisualization;                              // 0x0138   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0139   (0x0007)  MISSED
};

/// Class /Script/MassRepresentation.MassMovableVisualizationTrait
/// Size: 0x0000 (0x000140 - 0x000140)
class UMassMovableVisualizationTrait : public UMassVisualizationTrait
{ 
public:
};

/// Class /Script/MassRepresentation.MassRepresentationActorManagement
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassRepresentationActorManagement : public UObject
{ 
public:
};

/// Struct /Script/MassRepresentation.MassRepresentationUpdateParams
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMassRepresentationUpdateParams
{ 
	bool                                               bTestCollisionAvailibilityForActorVisualization;            // 0x0000   (0x0001)  
};

/// Class /Script/MassRepresentation.MassRepresentationProcessor
/// Size: 0x02B0 (0x0000C0 - 0x000370)
class UMassRepresentationProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_3[0x2A0];                                     // 0x00C0   (0x02A0)  MISSED
	FMassRepresentationUpdateParams                    UpdateParams;                                               // 0x0360   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0361   (0x000F)  MISSED
};

/// Class /Script/MassRepresentation.MassVisualizationProcessor
/// Size: 0x0000 (0x000370 - 0x000370)
class UMassVisualizationProcessor : public UMassRepresentationProcessor
{ 
public:
};

/// Class /Script/MassRepresentation.MassRepresentationFragmentDestructor
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UMassRepresentationFragmentDestructor : public UMassObserverProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A8];                                     // 0x00D8   (0x02A8)  MISSED
};

/// Class /Script/MassRepresentation.MassRepresentationSubsystem
/// Size: 0x0098 (0x000038 - 0x0000D0)
class UMassRepresentationSubsystem : public UMassSubsystemBase
{ 
public:
	TArray<class UClass*>                              TemplateActors;                                             // 0x0038   (0x0010)  
	class UMassVisualizationComponent*                 VisualizationComponent;                                     // 0x0048   (0x0008)  
	class AMassVisualizer*                             Visualizer;                                                 // 0x0050   (0x0008)  
	class UMassActorSpawnerSubsystem*                  ActorSpawnerSubsystem;                                      // 0x0058   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0060   (0x0010)  MISSED
	class UWorldPartitionSubsystem*                    WorldPartitionSubsystem;                                    // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_6[0x58];                                      // 0x0078   (0x0058)  MISSED
};

/// Class /Script/MassRepresentation.MassStationaryDistanceVisualizationTrait
/// Size: 0x0000 (0x000120 - 0x000120)
class UMassStationaryDistanceVisualizationTrait : public UMassDistanceVisualizationTrait
{ 
public:
};

/// Class /Script/MassRepresentation.MassStationaryISMRepresentationFragmentDestructor
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UMassStationaryISMRepresentationFragmentDestructor : public UMassObserverProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A8];                                     // 0x00D8   (0x02A8)  MISSED
};

/// Class /Script/MassRepresentation.MassStationaryISMSwitcherProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassStationaryISMSwitcherProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00C0   (0x02A0)  MISSED
};

/// Class /Script/MassRepresentation.MassStationaryVisualizationTrait
/// Size: 0x0000 (0x000140 - 0x000140)
class UMassStationaryVisualizationTrait : public UMassVisualizationTrait
{ 
public:
};

/// Class /Script/MassRepresentation.MassUpdateISMProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassUpdateISMProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00C0   (0x02A0)  MISSED
};

/// Struct /Script/MassRepresentation.MassLODSignificanceRange
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMassLODSignificanceRange
{ 
	TArray<uint32_t>                                   StaticMeshRefs;                                             // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/MassRepresentation.MassInstancedStaticMeshInfo
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FMassInstancedStaticMeshInfo
{ 
	FStaticMeshInstanceVisualizationDesc               Desc;                                                       // 0x0000   (0x0080)  
	TArray<class UInstancedStaticMeshComponent*>       InstancedStaticMeshComponents;                              // 0x0080   (0x0010)  
	TArray<FMassLODSignificanceRange>                  LODSignificanceRanges;                                      // 0x0090   (0x0010)  
};

/// Class /Script/MassRepresentation.MassVisualizationComponent
/// Size: 0x0110 (0x0000A0 - 0x0001B0)
class UMassVisualizationComponent : public UActorComponent
{ 
public:
	TArray<FMassInstancedStaticMeshInfo>               InstancedStaticMeshInfos;                                   // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x100];                                     // 0x00B0   (0x0100)  MISSED
};

/// Class /Script/MassRepresentation.MassVisualizationLODProcessor
/// Size: 0x0AA0 (0x0000C0 - 0x000B60)
class UMassVisualizationLODProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_3[0xA88];                                     // 0x00C0   (0x0A88)  MISSED
	class UScriptStruct*                               FilterTag;                                                  // 0x0B48   (0x0008)  
	bool                                               bDoAdjustmentFromCount;                                     // 0x0B50   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0B51   (0x000F)  MISSED
};

/// Class /Script/MassRepresentation.MassVisualizer
/// Size: 0x0008 (0x000290 - 0x000298)
class AMassVisualizer : public AActor
{ 
public:
	class UMassVisualizationComponent*                 VisComponent;                                               // 0x0290   (0x0008)  
};

/// Struct /Script/MassRepresentation.MassDistanceLODProcessorTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassDistanceLODProcessorTag : FMassTag
{ 
};

/// Struct /Script/MassRepresentation.MassStaticRepresentationTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassStaticRepresentationTag : FMassTag
{ 
};

/// Struct /Script/MassRepresentation.MassRepresentationLODFragment
/// Size: 0x0007 (0x000001 - 0x000008)
struct FMassRepresentationLODFragment : FMassFragment
{ 
	SDK_UNDEFINED(1,14523) /* TEnumAsByte<EMassLOD> */ __um(LOD);                                                  // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,14524) /* TEnumAsByte<EMassLOD> */ __um(PrevLOD);                                              // 0x0001   (0x0001)  
	EMassVisibility                                    Visibility;                                                 // 0x0002   (0x0001)  
	EMassVisibility                                    PrevVisibility;                                             // 0x0003   (0x0001)  
	float                                              LODSignificance;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/MassRepresentation.StaticMeshInstanceVisualizationDescHandle
/// Size: 0x0002 (0x000000 - 0x000002)
struct FStaticMeshInstanceVisualizationDescHandle
{ 
	uint16_t                                           Index;                                                      // 0x0000   (0x0002)  
};

/// Struct /Script/MassRepresentation.MassRepresentationFragment
/// Size: 0x007F (0x000001 - 0x000080)
struct FMassRepresentationFragment : FMassFragment
{ 
	EMassRepresentationType                            CurrentRepresentation;                                      // 0x0000   (0x0001)  
	EMassRepresentationType                            PrevRepresentation;                                         // 0x0001   (0x0001)  
	int16_t                                            HighResTemplateActorIndex;                                  // 0x0002   (0x0002)  
	int16_t                                            LowResTemplateActorIndex;                                   // 0x0004   (0x0002)  
	FStaticMeshInstanceVisualizationDescHandle         StaticMeshDescHandle;                                       // 0x0006   (0x0002)  
	FMassActorSpawnRequestHandle                       ActorSpawnRequestHandle;                                    // 0x0008   (0x0008)  
	FTransform                                         PrevTransform;                                              // 0x0010   (0x0060)  
	float                                              PrevLODSignificance;                                        // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0074   (0x000C)  MISSED
};

/// Struct /Script/MassRepresentation.MassRepresentationSubsystemSharedFragment
/// Size: 0x0007 (0x000001 - 0x000008)
struct FMassRepresentationSubsystemSharedFragment : FMassSharedFragment
{ 
	class UMassRepresentationSubsystem*                RepresentationSubsystem;                                    // 0x0000   (0x0008)  
};

/// Struct /Script/MassRepresentation.MassVisualizationLODSharedFragment
/// Size: 0x2027 (0x000001 - 0x002028)
struct FMassVisualizationLODSharedFragment : FMassSharedFragment
{ 
	unsigned char                                      UnknownData00_3[0x2020];                                    // 0x0000   (0x2020)  MISSED
	class UScriptStruct*                               FilterTag;                                                  // 0x2020   (0x0008)  
};

/// Struct /Script/MassRepresentation.MassDistanceLODSharedFragment
/// Size: 0x201F (0x000001 - 0x002020)
struct FMassDistanceLODSharedFragment : FMassSharedFragment
{ 
	unsigned char                                      UnknownData00_3[0x2018];                                    // 0x0000   (0x2018)  MISSED
	class UScriptStruct*                               FilterTag;                                                  // 0x2018   (0x0008)  
};

/// Struct /Script/MassRepresentation.MassVisualizationProcessorTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassVisualizationProcessorTag : FMassTag
{ 
};

/// Struct /Script/MassRepresentation.MassStationaryISMSwitcherProcessorTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassStationaryISMSwitcherProcessorTag : FMassTag
{ 
};

/// Struct /Script/MassRepresentation.MassVisualizationLODProcessorTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassVisualizationLODProcessorTag : FMassTag
{ 
};

