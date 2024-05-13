
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MassEntity
/// dependency: MassSpawner

/// Class /Script/MassLOD.MassLODCollectorProcessor
/// Size: 0x0AA0 (0x0000C0 - 0x000B60)
class UMassLODCollectorProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2912;

public:
};

/// Class /Script/MassLOD.MassLODDistanceCollectorProcessor
/// Size: 0x0AA0 (0x0000C0 - 0x000B60)
class UMassLODDistanceCollectorProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2912;

public:
};

/// Class /Script/MassLOD.MassLODSubsystem
/// Size: 0x00C8 (0x000038 - 0x000100)
class UMassLODSubsystem : public UMassSubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	DMember(bool)                                      bGatherPlayerControllers                                    OFFSET(get<bool>, {0x38, 1, 1, 0})
	DMember(bool)                                      bGatherStreamingSources                                     OFFSET(get<bool>, {0x38, 1, 1, 1})
	DMember(bool)                                      bAllowNonPlayerViwerActors                                  OFFSET(get<bool>, {0x38, 1, 1, 2})
	DMember(bool)                                      bUsePlayerPawnLocationInsteadOfCamera                       OFFSET(get<bool>, {0x38, 1, 1, 3})
	CMember(TArray<FViewerInfo>)                       Viewers                                                     OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TMap<uint32_t, FMassViewerHandle>)         ViewerMap                                                   OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TArray<class AActor*>)                     RegisteredActorViewers                                      OFFSET(get<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/MassLOD.MassLODSubsystem.OnPlayerControllerEndPlay
	// void OnPlayerControllerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                          // [0xb29ef24] Final|Native|Protected 
};

/// Class /Script/MassLOD.MassLODCollectorTrait
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassLODCollectorTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MassLOD.MassDistanceLODCollectorTrait
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassDistanceLODCollectorTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MassLOD.MassSimulationLODTrait
/// Size: 0x0040 (0x000028 - 0x000068)
class UMassSimulationLODTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FMassSimulationLODParameters)              Params                                                      OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	DMember(bool)                                      bEnableVariableTicking                                      OFFSET(get<bool>, {0x50, 1, 0, 0})
	SMember(FMassSimulationVariableTickParameters)     VariableTickParams                                          OFFSET(getStruct<T>, {0x54, 20, 0, 0})
};

/// Class /Script/MassLOD.MassSimulationLODProcessor
/// Size: 0x0D30 (0x0000C0 - 0x000DF0)
class UMassSimulationLODProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3568;

public:
	DMember(bool)                                      bDoAdjustmentFromCount                                      OFFSET(get<bool>, {0xDE0, 1, 0, 0})
};

/// Struct /Script/MassLOD.MassHighLODTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassHighLODTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassLOD.MassMediumLODTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassMediumLODTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassLOD.MassLowLODTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassLowLODTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassLOD.MassOffLODTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassOffLODTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassLOD.MassViewerInfoFragment
/// Size: 0x0008 (0x000000 - 0x000008)
class FMassViewerInfoFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     ClosestViewerDistanceSq                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ClosestDistanceToFrustum                                    OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/MassLOD.MassVariableTickChunkFragment
/// Size: 0x000C (0x000000 - 0x00000C)
class FMassVariableTickChunkFragment : public FMassChunkFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bShouldTickThisFrame                                        OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<EMassLOD>)                     LOD                                                         OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     TimeUntilNextTick                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   LastChunkSerialModificationNumber                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/MassLOD.MassCollectLODViewerInfoTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassCollectLODViewerInfoTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassLOD.MassCollectDistanceLODViewerInfoTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassCollectDistanceLODViewerInfoTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassLOD.MassVisibilityCanBeSeenTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassVisibilityCanBeSeenTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassLOD.MassVisibilityCulledByFrustumTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassVisibilityCulledByFrustumTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassLOD.MassVisibilityCulledByDistanceTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassVisibilityCulledByDistanceTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassLOD.MassVisualizationChunkFragment
/// Size: 0x0008 (0x000000 - 0x000008)
class FMassVisualizationChunkFragment : public FMassChunkFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EMassVisibility)                           Visibility                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bContainsNewlyVisibleEntity                                 OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     DeltaTime                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/MassLOD.MassViewerHandle
/// Size: 0x0000 (0x000008 - 0x000008)
class FMassViewerHandle : public FIndexedHandleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MassLOD.ViewerInfo
/// Size: 0x0060 (0x000000 - 0x000060)
class FViewerInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class AActor*)                             ActorViewer                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MassLOD.MassSimulationLODFragment
/// Size: 0x0008 (0x000000 - 0x000008)
class FMassSimulationLODFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MassLOD.MassSimulationVariableTickFragment
/// Size: 0x0010 (0x000000 - 0x000010)
class FMassSimulationVariableTickFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/MassLOD.MassSimulationVariableTickChunkFragment
/// Size: 0x0000 (0x00000C - 0x00000C)
class FMassSimulationVariableTickChunkFragment : public FMassVariableTickChunkFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/MassLOD.MassSimulationLODParameters
/// Size: 0x0028 (0x000000 - 0x000028)
class FMassSimulationLODParameters : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     LODDistance                                                 OFFSET(get<float>, {0x0, 16, 0, 0})
	DMember(float)                                     BufferHysteresisOnDistancePercentage                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   LODMaxCount                                                 OFFSET(get<int32_t>, {0x14, 16, 0, 0})
	DMember(bool)                                      bSetLODTags                                                 OFFSET(get<bool>, {0x24, 1, 0, 0})
};

/// Struct /Script/MassLOD.MassSimulationVariableTickParameters
/// Size: 0x0014 (0x000000 - 0x000014)
class FMassSimulationVariableTickParameters : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     TickRates                                                   OFFSET(get<float>, {0x0, 16, 0, 0})
	DMember(bool)                                      bSpreadFirstSimulationUpdate                                OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/MassLOD.MassSimulationLODSharedFragment
/// Size: 0x2020 (0x000000 - 0x002020)
class FMassSimulationLODSharedFragment : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8224;

public:
};

/// Struct /Script/MassLOD.MassSimulationVariableTickSharedFragment
/// Size: 0x0030 (0x000000 - 0x000030)
class FMassSimulationVariableTickSharedFragment : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Enum /Script/MassLOD.EMassLOD
/// Size: 0x05
enum class EMassLOD : uint8_t
{
	EMassLOD__High                                                                   = 0,
	EMassLOD__Medium                                                                 = 1,
	EMassLOD__Low                                                                    = 2,
	EMassLOD__Off                                                                    = 3,
	EMassLOD__Max                                                                    = 4
};

/// Enum /Script/MassLOD.EMassVisibility
/// Size: 0x04
enum class EMassVisibility : uint8_t
{
	EMassVisibility__CanBeSeen                                                       = 0,
	EMassVisibility__CulledByFrustum                                                 = 1,
	EMassVisibility__CulledByDistance                                                = 2,
	EMassVisibility__Max                                                             = 3
};

