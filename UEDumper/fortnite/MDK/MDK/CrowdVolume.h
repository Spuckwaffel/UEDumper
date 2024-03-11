
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CrowdVolume.CrowdSpawner
/// Size: 0x0040 (0x000220 - 0x000260)
class UCrowdSpawner : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	CMember(TArray<class UHierarchicalInstancedStaticMeshComponent*>) CharacterMeshes                              OFFSET(get<T>, {0x220, 16, 0, 0})


	/// Functions
	// Function /Script/CrowdVolume.CrowdSpawner.SpawnCrowd
	// void SpawnCrowd(int32_t Width, int32_t Depth, int32_t Height, int32_t Precision, int32_t CharacterScaleRandomness, int32_t CharacterAngleRandomness, int32_t Density); // [0xab890a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CrowdVolume.CrowdSpawner.RefreshTrackedActors
	// void RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker);      // [0xab89034] Final|Native|Public|BlueprintCallable 
};

