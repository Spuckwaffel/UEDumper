
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MassEntity
/// dependency: MassSpawner

/// Class /Script/MassGameplayDebug.AssignDebugVisProcessor
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UAssignDebugVisProcessor : public UMassObserverProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/MassGameplayDebug.DebugVisLocationProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UDebugVisLocationProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/MassGameplayDebug.MassProcessor_UpdateDebugVis
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassProcessor_UpdateDebugVis : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/MassGameplayDebug.MassDebuggerSubsystem
/// Size: 0x0098 (0x000038 - 0x0000D0)
class UMassDebuggerSubsystem : public UMassSubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UMassDebugVisualizationComponent*)   VisualizationComponent                                      OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class AMassDebugVisualizer*)               DebugVisualizer                                             OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/MassGameplayDebug.MassDebugVisualizationComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UMassDebugVisualizationComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/MassGameplayDebug.MassDebugVisualizationTrait
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassDebugVisualizationTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MassGameplayDebug.MassDebugVisualizer
/// Size: 0x0000 (0x000290 - 0x000290)
class AMassDebugVisualizer : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Struct /Script/MassGameplayDebug.SimDebugDataRow
/// Size: 0x0018 (0x000008 - 0x000020)
class FSimDebugDataRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UStaticMesh*)                        Mesh                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 MaterialOverride                                            OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/MassGameplayDebug.SimDebugVisFragment
/// Size: 0x0008 (0x000000 - 0x000008)
class FSimDebugVisFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MassGameplayDebug.DataFragment_DebugVis
/// Size: 0x0001 (0x000000 - 0x000001)
class FDataFragment_DebugVis : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(EMassEntityDebugShape)                     Shape                                                       OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/MassGameplayDebug.MassDebuggableTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassDebuggableTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassGameplayDebug.AgentDebugVisualization
/// Size: 0x0020 (0x000008 - 0x000028)
class FAgentDebugVisualization : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UStaticMesh*)                        Mesh                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 MaterialOverride                                            OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(uint32_t)                                  VisualNearCullDistance                                      OFFSET(get<uint32_t>, {0x18, 4, 0, 0})
	DMember(uint32_t)                                  VisualFarCullDistance                                       OFFSET(get<uint32_t>, {0x1C, 4, 0, 0})
	CMember(EMassEntityDebugShape)                     WireShape                                                   OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Enum /Script/MassGameplayDebug.EMassEntityDebugShape
/// Size: 0x04
enum class EMassEntityDebugShape : uint8_t
{
	EMassEntityDebugShape__Box                                                       = 0,
	EMassEntityDebugShape__Cone                                                      = 1,
	EMassEntityDebugShape__Cylinder                                                  = 2,
	EMassEntityDebugShape__Capsule                                                   = 3
};

