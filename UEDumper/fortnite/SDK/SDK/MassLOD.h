
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MassEntity
/// dependency: MassSpawner

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

/// Class /Script/MassLOD.MassLODCollectorProcessor
/// Size: 0x0AA0 (0x0000C0 - 0x000B60)
class UMassLODCollectorProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0xAA0];                                     // 0x00C0   (0x0AA0)  MISSED
};

/// Class /Script/MassLOD.MassLODDistanceCollectorProcessor
/// Size: 0x0AA0 (0x0000C0 - 0x000B60)
class UMassLODDistanceCollectorProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0xAA0];                                     // 0x00C0   (0x0AA0)  MISSED
};

/// Struct /Script/MassLOD.ViewerInfo
/// Size: 0x0060 (0x000000 - 0x000060)
struct FViewerInfo
{ 
	class AActor*                                      ActorViewer;                                                // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0008   (0x0058)  MISSED
};

/// Class /Script/MassLOD.MassLODSubsystem
/// Size: 0x00C8 (0x000038 - 0x000100)
class UMassLODSubsystem : public UMassSubsystemBase
{ 
public:
	bool                                               bGatherPlayerControllers : 1;                               // 0x0038:0 (0x0001)  
	bool                                               bGatherStreamingSources : 1;                                // 0x0038:1 (0x0001)  
	bool                                               bAllowNonPlayerViwerActors : 1;                             // 0x0038:2 (0x0001)  
	bool                                               bUsePlayerPawnLocationInsteadOfCamera : 1;                  // 0x0038:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FViewerInfo>                                Viewers;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(80,14517) /* TMap<uint32_t, FMassViewerHandle> */ __um(ViewerMap);                               // 0x0050   (0x0050)  
	TArray<class AActor*>                              RegisteredActorViewers;                                     // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x00B0   (0x0050)  MISSED


	/// Functions
	// Function /Script/MassLOD.MassLODSubsystem.OnPlayerControllerEndPlay
	// void OnPlayerControllerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                       // [0xa0f81c0] Final|Native|Protected 
};

/// Class /Script/MassLOD.MassLODCollectorTrait
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassLODCollectorTrait : public UMassEntityTraitBase
{ 
public:
};

/// Class /Script/MassLOD.MassDistanceLODCollectorTrait
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassDistanceLODCollectorTrait : public UMassEntityTraitBase
{ 
public:
};

/// Struct /Script/MassLOD.MassSimulationLODParameters
/// Size: 0x0027 (0x000001 - 0x000028)
struct FMassSimulationLODParameters : FMassSharedFragment
{ 
	float                                              LODDistance;                                                // 0x0000   (0x0010)  
	float                                              BufferHysteresisOnDistancePercentage;                       // 0x0010   (0x0004)  
	int32_t                                            LODMaxCount;                                                // 0x0014   (0x0010)  
	bool                                               bSetLODTags;                                                // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/MassLOD.MassSimulationVariableTickParameters
/// Size: 0x0013 (0x000001 - 0x000014)
struct FMassSimulationVariableTickParameters : FMassSharedFragment
{ 
	float                                              TickRates;                                                  // 0x0000   (0x0010)  
	bool                                               bSpreadFirstSimulationUpdate;                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Class /Script/MassLOD.MassSimulationLODTrait
/// Size: 0x0040 (0x000028 - 0x000068)
class UMassSimulationLODTrait : public UMassEntityTraitBase
{ 
public:
	FMassSimulationLODParameters                       Params;                                                     // 0x0028   (0x0028)  
	bool                                               bEnableVariableTicking;                                     // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	FMassSimulationVariableTickParameters              VariableTickParams;                                         // 0x0054   (0x0014)  
};

/// Class /Script/MassLOD.MassSimulationLODProcessor
/// Size: 0x0D30 (0x0000C0 - 0x000DF0)
class UMassSimulationLODProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_3[0xD20];                                     // 0x00C0   (0x0D20)  MISSED
	bool                                               bDoAdjustmentFromCount;                                     // 0x0DE0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0DE1   (0x000F)  MISSED
};

/// Struct /Script/MassLOD.MassHighLODTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassHighLODTag : FMassTag
{ 
};

/// Struct /Script/MassLOD.MassMediumLODTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassMediumLODTag : FMassTag
{ 
};

/// Struct /Script/MassLOD.MassLowLODTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassLowLODTag : FMassTag
{ 
};

/// Struct /Script/MassLOD.MassOffLODTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassOffLODTag : FMassTag
{ 
};

/// Struct /Script/MassLOD.MassViewerInfoFragment
/// Size: 0x0007 (0x000001 - 0x000008)
struct FMassViewerInfoFragment : FMassFragment
{ 
	float                                              ClosestViewerDistanceSq;                                    // 0x0000   (0x0004)  
	float                                              ClosestDistanceToFrustum;                                   // 0x0004   (0x0004)  
};

/// Struct /Script/MassLOD.MassVariableTickChunkFragment
/// Size: 0x000B (0x000001 - 0x00000C)
struct FMassVariableTickChunkFragment : FMassChunkFragment
{ 
	bool                                               bShouldTickThisFrame;                                       // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,14518) /* TEnumAsByte<EMassLOD> */ __um(LOD);                                                  // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              TimeUntilNextTick;                                          // 0x0004   (0x0004)  
	int32_t                                            LastChunkSerialModificationNumber;                          // 0x0008   (0x0004)  
};

/// Struct /Script/MassLOD.MassCollectLODViewerInfoTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassCollectLODViewerInfoTag : FMassTag
{ 
};

/// Struct /Script/MassLOD.MassCollectDistanceLODViewerInfoTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassCollectDistanceLODViewerInfoTag : FMassTag
{ 
};

/// Struct /Script/MassLOD.MassVisibilityCanBeSeenTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassVisibilityCanBeSeenTag : FMassTag
{ 
};

/// Struct /Script/MassLOD.MassVisibilityCulledByFrustumTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassVisibilityCulledByFrustumTag : FMassTag
{ 
};

/// Struct /Script/MassLOD.MassVisibilityCulledByDistanceTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassVisibilityCulledByDistanceTag : FMassTag
{ 
};

/// Struct /Script/MassLOD.MassVisualizationChunkFragment
/// Size: 0x0007 (0x000001 - 0x000008)
struct FMassVisualizationChunkFragment : FMassChunkFragment
{ 
	EMassVisibility                                    Visibility;                                                 // 0x0000   (0x0001)  
	bool                                               bContainsNewlyVisibleEntity;                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              DeltaTime;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/MassLOD.MassViewerHandle
/// Size: 0x0000 (0x000008 - 0x000008)
struct FMassViewerHandle : FIndexedHandleBase
{ 
};

/// Struct /Script/MassLOD.MassSimulationLODFragment
/// Size: 0x0007 (0x000001 - 0x000008)
struct FMassSimulationLODFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/MassLOD.MassSimulationVariableTickFragment
/// Size: 0x000F (0x000001 - 0x000010)
struct FMassSimulationVariableTickFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/MassLOD.MassSimulationVariableTickChunkFragment
/// Size: 0x0000 (0x00000C - 0x00000C)
struct FMassSimulationVariableTickChunkFragment : FMassVariableTickChunkFragment
{ 
};

/// Struct /Script/MassLOD.MassSimulationLODSharedFragment
/// Size: 0x201F (0x000001 - 0x002020)
struct FMassSimulationLODSharedFragment : FMassSharedFragment
{ 
	unsigned char                                      UnknownData00_1[0x2020];                                    // 0x0000   (0x2020)  MISSED
};

/// Struct /Script/MassLOD.MassSimulationVariableTickSharedFragment
/// Size: 0x002F (0x000001 - 0x000030)
struct FMassSimulationVariableTickSharedFragment : FMassSharedFragment
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

