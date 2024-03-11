
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MassEntity
/// dependency: MassSpawner

/// Enum /Script/MassGameplayDebug.EMassEntityDebugShape
/// Size: 0x05
enum class EMassEntityDebugShape : uint8_t
{
	EMassEntityDebugShape__Box                                                       = 0,
	EMassEntityDebugShape__Cone                                                      = 1,
	EMassEntityDebugShape__Cylinder                                                  = 2,
	EMassEntityDebugShape__Capsule                                                   = 3,
	EMassEntityDebugShape__MAX                                                       = 4
};

/// Class /Script/MassGameplayDebug.AssignDebugVisProcessor
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UAssignDebugVisProcessor : public UMassObserverProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A8];                                     // 0x00D8   (0x02A8)  MISSED
};

/// Class /Script/MassGameplayDebug.DebugVisLocationProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UDebugVisLocationProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00C0   (0x02A0)  MISSED
};

/// Class /Script/MassGameplayDebug.MassProcessor_UpdateDebugVis
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassProcessor_UpdateDebugVis : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00C0   (0x02A0)  MISSED
};

/// Class /Script/MassGameplayDebug.MassDebuggerSubsystem
/// Size: 0x0098 (0x000038 - 0x0000D0)
class UMassDebuggerSubsystem : public UMassSubsystemBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x80];                                      // 0x0038   (0x0080)  MISSED
	class UMassDebugVisualizationComponent*            VisualizationComponent;                                     // 0x00B8   (0x0008)  
	class AMassDebugVisualizer*                        DebugVisualizer;                                            // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/MassGameplayDebug.MassDebugVisualizationComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UMassDebugVisualizationComponent : public UActorComponent
{ 
public:
};

/// Class /Script/MassGameplayDebug.MassDebugVisualizationTrait
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassDebugVisualizationTrait : public UMassEntityTraitBase
{ 
public:
};

/// Class /Script/MassGameplayDebug.MassDebugVisualizer
/// Size: 0x0000 (0x000290 - 0x000290)
class AMassDebugVisualizer : public AActor
{ 
public:
};

/// Struct /Script/MassGameplayDebug.SimDebugDataRow
/// Size: 0x0018 (0x000008 - 0x000020)
struct FSimDebugDataRow : FTableRowBase
{ 
	class UStaticMesh*                                 Mesh;                                                       // 0x0008   (0x0008)  
	class UMaterialInterface*                          MaterialOverride;                                           // 0x0010   (0x0008)  
	float                                              Scale;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/MassGameplayDebug.SimDebugVisFragment
/// Size: 0x0007 (0x000001 - 0x000008)
struct FSimDebugVisFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/MassGameplayDebug.DataFragment_DebugVis
/// Size: 0x0000 (0x000001 - 0x000001)
struct FDataFragment_DebugVis : FMassFragment
{ 
};

/// Struct /Script/MassGameplayDebug.MassDebuggableTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassDebuggableTag : FMassTag
{ 
};

/// Struct /Script/MassGameplayDebug.AgentDebugVisualization
/// Size: 0x0020 (0x000008 - 0x000028)
struct FAgentDebugVisualization : FTableRowBase
{ 
	class UStaticMesh*                                 Mesh;                                                       // 0x0008   (0x0008)  
	class UMaterialInterface*                          MaterialOverride;                                           // 0x0010   (0x0008)  
	uint32_t                                           VisualNearCullDistance;                                     // 0x0018   (0x0004)  
	uint32_t                                           VisualFarCullDistance;                                      // 0x001C   (0x0004)  
	EMassEntityDebugShape                              WireShape;                                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

