
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MassActors
/// dependency: MassEntity
/// dependency: MassLOD
/// dependency: MassSpawner

/// Class /Script/MassRepresentation.MassDistanceLODProcessor
/// Size: 0x07F0 (0x0000C0 - 0x0008B0)
class UMassDistanceLODProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2224;

public:
	CMember(class UScriptStruct*)                      FilterTag                                                   OFFSET(get<T>, {0x8A8, 8, 0, 0})
};

/// Class /Script/MassRepresentation.MassDistanceVisualizationTrait
/// Size: 0x00F8 (0x000028 - 0x000120)
class UMassDistanceVisualizationTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FStaticMeshInstanceVisualizationDesc)      StaticMeshInstanceDesc                                      OFFSET(getStruct<T>, {0x30, 128, 0, 0})
	CMember(class UClass*)                             HighResTemplateActor                                        OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UClass*)                             LowResTemplateActor                                         OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UClass*)                             RepresentationSubsystemClass                                OFFSET(get<T>, {0xC0, 8, 0, 0})
	SMember(FMassRepresentationParameters)             Params                                                      OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FMassDistanceLODParameters)                LODParams                                                   OFFSET(getStruct<T>, {0xF0, 32, 0, 0})
	DMember(bool)                                      bAllowServerSideVisualization                               OFFSET(get<bool>, {0x110, 1, 0, 0})
};

/// Class /Script/MassRepresentation.MassVisualizationTrait
/// Size: 0x0118 (0x000028 - 0x000140)
class UMassVisualizationTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FStaticMeshInstanceVisualizationDesc)      StaticMeshInstanceDesc                                      OFFSET(getStruct<T>, {0x30, 128, 0, 0})
	CMember(class UClass*)                             HighResTemplateActor                                        OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UClass*)                             LowResTemplateActor                                         OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UClass*)                             RepresentationSubsystemClass                                OFFSET(get<T>, {0xC0, 8, 0, 0})
	SMember(FMassRepresentationParameters)             Params                                                      OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FMassVisualizationLODParameters)           LODParams                                                   OFFSET(getStruct<T>, {0xF0, 72, 0, 0})
	DMember(bool)                                      bAllowServerSideVisualization                               OFFSET(get<bool>, {0x138, 1, 0, 0})
};

/// Class /Script/MassRepresentation.MassMovableVisualizationTrait
/// Size: 0x0000 (0x000140 - 0x000140)
class UMassMovableVisualizationTrait : public UMassVisualizationTrait
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/MassRepresentation.MassRepresentationActorManagement
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassRepresentationActorManagement : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MassRepresentation.MassRepresentationProcessor
/// Size: 0x02B0 (0x0000C0 - 0x000370)
class UMassRepresentationProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FMassRepresentationUpdateParams)           UpdateParams                                                OFFSET(getStruct<T>, {0x360, 1, 0, 0})
};

/// Class /Script/MassRepresentation.MassVisualizationProcessor
/// Size: 0x0000 (0x000370 - 0x000370)
class UMassVisualizationProcessor : public UMassRepresentationProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Script/MassRepresentation.MassRepresentationFragmentDestructor
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UMassRepresentationFragmentDestructor : public UMassObserverProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/MassRepresentation.MassRepresentationSubsystem
/// Size: 0x0098 (0x000038 - 0x0000D0)
class UMassRepresentationSubsystem : public UMassSubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<class UClass*>)                     TemplateActors                                              OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(class UMassVisualizationComponent*)        VisualizationComponent                                      OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class AMassVisualizer*)                    Visualizer                                                  OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UMassActorSpawnerSubsystem*)         ActorSpawnerSubsystem                                       OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UWorldPartitionSubsystem*)           WorldPartitionSubsystem                                     OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/MassRepresentation.MassStationaryDistanceVisualizationTrait
/// Size: 0x0000 (0x000120 - 0x000120)
class UMassStationaryDistanceVisualizationTrait : public UMassDistanceVisualizationTrait
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/MassRepresentation.MassStationaryISMRepresentationFragmentDestructor
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UMassStationaryISMRepresentationFragmentDestructor : public UMassObserverProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/MassRepresentation.MassStationaryISMSwitcherProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassStationaryISMSwitcherProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/MassRepresentation.MassStationaryVisualizationTrait
/// Size: 0x0000 (0x000140 - 0x000140)
class UMassStationaryVisualizationTrait : public UMassVisualizationTrait
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/MassRepresentation.MassUpdateISMProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassUpdateISMProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/MassRepresentation.MassVisualizationComponent
/// Size: 0x0160 (0x0000A0 - 0x000200)
class UMassVisualizationComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(TArray<FMassInstancedStaticMeshInfo>)      InstancedStaticMeshInfos                                    OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/MassRepresentation.MassVisualizationLODProcessor
/// Size: 0x0AA0 (0x0000C0 - 0x000B60)
class UMassVisualizationLODProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2912;

public:
	CMember(class UScriptStruct*)                      FilterTag                                                   OFFSET(get<T>, {0xB48, 8, 0, 0})
	DMember(bool)                                      bDoAdjustmentFromCount                                      OFFSET(get<bool>, {0xB50, 1, 0, 0})
};

/// Class /Script/MassRepresentation.MassVisualizer
/// Size: 0x0008 (0x000290 - 0x000298)
class AMassVisualizer : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UMassVisualizationComponent*)        VisComponent                                                OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Struct /Script/MassRepresentation.MassDistanceLODProcessorTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassDistanceLODProcessorTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassRepresentation.MassStaticRepresentationTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassStaticRepresentationTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassRepresentation.MassRepresentationLODFragment
/// Size: 0x0007 (0x000001 - 0x000008)
class FMassRepresentationLODFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TEnumAsByte<EMassLOD>)                     LOD                                                         OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<EMassLOD>)                     PrevLOD                                                     OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(EMassVisibility)                           Visibility                                                  OFFSET(get<T>, {0x2, 1, 0, 0})
	CMember(EMassVisibility)                           PrevVisibility                                              OFFSET(get<T>, {0x3, 1, 0, 0})
	DMember(float)                                     LODSignificance                                             OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/MassRepresentation.MassRepresentationFragment
/// Size: 0x007F (0x000001 - 0x000080)
class FMassRepresentationFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(EMassRepresentationType)                   CurrentRepresentation                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EMassRepresentationType)                   PrevRepresentation                                          OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(int16_t)                                   HighResTemplateActorIndex                                   OFFSET(get<int16_t>, {0x2, 2, 0, 0})
	DMember(int16_t)                                   LowResTemplateActorIndex                                    OFFSET(get<int16_t>, {0x4, 2, 0, 0})
	SMember(FStaticMeshInstanceVisualizationDescHandle) StaticMeshDescHandle                                       OFFSET(getStruct<T>, {0x6, 2, 0, 0})
	SMember(FMassActorSpawnRequestHandle)              ActorSpawnRequestHandle                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FTransform)                                PrevTransform                                               OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	DMember(float)                                     PrevLODSignificance                                         OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Struct /Script/MassRepresentation.StaticMeshInstanceVisualizationDescHandle
/// Size: 0x0002 (0x000000 - 0x000002)
class FStaticMeshInstanceVisualizationDescHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(uint16_t)                                  Index                                                       OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
};

/// Struct /Script/MassRepresentation.MassRepresentationSubsystemSharedFragment
/// Size: 0x0007 (0x000001 - 0x000008)
class FMassRepresentationSubsystemSharedFragment : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UMassRepresentationSubsystem*)       RepresentationSubsystem                                     OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MassRepresentation.MassRepresentationParameters
/// Size: 0x0027 (0x000001 - 0x000028)
class FMassRepresentationParameters : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UClass*)                             RepresentationActorManagementClass                          OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EMassRepresentationType)                   LODRepresentation                                           OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bForceActorRepresentationForExternalActors                  OFFSET(get<bool>, {0xC, 1, 1, 0})
	DMember(bool)                                      bKeepLowResActors                                           OFFSET(get<bool>, {0xC, 1, 1, 1})
	DMember(bool)                                      bKeepActorExtraFrame                                        OFFSET(get<bool>, {0xC, 1, 1, 2})
	DMember(bool)                                      bSpreadFirstVisualizationUpdate                             OFFSET(get<bool>, {0xC, 1, 1, 3})
	SMember(FName)                                     WorldPartitionGridNameContainingCollision                   OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(float)                                     NotVisibleUpdateRate                                        OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(EMassRepresentationType)                   CachedDefaultRepresentationType                             OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(class UMassRepresentationActorManagement*) CachedRepresentationActorManagement                         OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/MassRepresentation.MassVisualizationLODParameters
/// Size: 0x0047 (0x000001 - 0x000048)
class FMassVisualizationLODParameters : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     BaseLODDistance                                             OFFSET(get<float>, {0x0, 16, 0, 0})
	DMember(float)                                     VisibleLODDistance                                          OFFSET(get<float>, {0x10, 16, 0, 0})
	DMember(float)                                     BufferHysteresisOnDistancePercentage                        OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   LODMaxCount                                                 OFFSET(get<int32_t>, {0x24, 16, 0, 0})
	DMember(float)                                     DistanceToFrustum                                           OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     DistanceToFrustumHysteresis                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	CMember(class UScriptStruct*)                      FilterTag                                                   OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Struct /Script/MassRepresentation.MassVisualizationLODSharedFragment
/// Size: 0x2027 (0x000001 - 0x002028)
class FMassVisualizationLODSharedFragment : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8232;

public:
	CMember(class UScriptStruct*)                      FilterTag                                                   OFFSET(get<T>, {0x2020, 8, 0, 0})
};

/// Struct /Script/MassRepresentation.MassDistanceLODParameters
/// Size: 0x001F (0x000001 - 0x000020)
class FMassDistanceLODParameters : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     LODDistance                                                 OFFSET(get<float>, {0x0, 16, 0, 0})
	DMember(float)                                     BufferHysteresisOnDistancePercentage                        OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(class UScriptStruct*)                      FilterTag                                                   OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/MassRepresentation.MassDistanceLODSharedFragment
/// Size: 0x201F (0x000001 - 0x002020)
class FMassDistanceLODSharedFragment : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8224;

public:
	CMember(class UScriptStruct*)                      FilterTag                                                   OFFSET(get<T>, {0x2018, 8, 0, 0})
};

/// Struct /Script/MassRepresentation.MassRepresentationUpdateParams
/// Size: 0x0001 (0x000000 - 0x000001)
class FMassRepresentationUpdateParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bTestCollisionAvailibilityForActorVisualization             OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/MassRepresentation.MassVisualizationProcessorTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassVisualizationProcessorTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassRepresentation.MassStaticMeshInstanceVisualizationMeshDesc
/// Size: 0x0030 (0x000000 - 0x000030)
class FMassStaticMeshInstanceVisualizationMeshDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UStaticMesh*)                        Mesh                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         MaterialOverrides                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     MinLODSignificance                                          OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MaxLODSignificance                                          OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bCastShadows                                                OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(class UClass*)                             ISMComponentClass                                           OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/MassRepresentation.StaticMeshInstanceVisualizationDesc
/// Size: 0x0078 (0x000008 - 0x000080)
class FStaticMeshInstanceVisualizationDesc : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FMassStaticMeshInstanceVisualizationMeshDesc>) Meshes                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bUseTransformOffset                                         OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FTransform)                                TransformOffset                                             OFFSET(getStruct<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/MassRepresentation.MassLODSignificanceRange
/// Size: 0x0020 (0x000000 - 0x000020)
class FMassLODSignificanceRange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MassRepresentation.MassInstancedStaticMeshInfo
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FMassInstancedStaticMeshInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FStaticMeshInstanceVisualizationDesc)      Desc                                                        OFFSET(getStruct<T>, {0x0, 128, 0, 0})
	CMember(TArray<class UInstancedStaticMeshComponent*>) InstancedStaticMeshComponents                            OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FMassLODSignificanceRange>)         LODSignificanceRanges                                       OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/MassRepresentation.MassStationaryISMSwitcherProcessorTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassStationaryISMSwitcherProcessorTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassRepresentation.MassVisualizationLODProcessorTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassVisualizationLODProcessorTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

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

