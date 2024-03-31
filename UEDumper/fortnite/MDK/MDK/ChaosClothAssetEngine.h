
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: ClothingSystemRuntimeCommon
/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject
/// dependency: DataflowEngine
/// dependency: Engine

/// Class /Script/ChaosClothAssetEngine.ChaosClothComponent
/// Size: 0x0030 (0x0008A0 - 0x0008D0)
class UChaosClothComponent : public USkinnedMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2256;

public:
	DMember(bool)                                      bUseAttachedParentAsPoseComponent                           OFFSET(get<bool>, {0x898, 1, 1, 0})
	DMember(bool)                                      bWaitForParallelTask                                        OFFSET(get<bool>, {0x898, 1, 1, 1})
	DMember(bool)                                      bEnableSimulation                                           OFFSET(get<bool>, {0x898, 1, 1, 2})
	DMember(bool)                                      bSuspendSimulation                                          OFFSET(get<bool>, {0x898, 1, 1, 3})
	DMember(bool)                                      bBindToLeaderComponent                                      OFFSET(get<bool>, {0x898, 1, 1, 4})
	DMember(bool)                                      bTeleport                                                   OFFSET(get<bool>, {0x898, 1, 1, 5})
	DMember(bool)                                      bReset                                                      OFFSET(get<bool>, {0x898, 1, 1, 6})
	DMember(float)                                     BlendWeight                                                 OFFSET(get<float>, {0x89C, 4, 0, 0})


	/// Functions
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.SuspendSimulation
	// void SuspendSimulation();                                                                                                // [0xcc135b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.SetEnableSimulation
	// void SetEnableSimulation(bool bEnable);                                                                                  // [0xcc134e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.SetClothAsset
	// void SetClothAsset(class UChaosClothAsset* InClothAsset);                                                                // [0xcc13420] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.ResumeSimulation
	// void ResumeSimulation();                                                                                                 // [0xcc13408] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.ResetTeleportMode
	// void ResetTeleportMode();                                                                                                // [0xcc133f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.ResetConfigProperties
	// void ResetConfigProperties();                                                                                            // [0xcc133dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.RecreateClothSimulationProxy
	// void RecreateClothSimulationProxy();                                                                                     // [0xcc133c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.IsSimulationSuspended
	// bool IsSimulationSuspended();                                                                                            // [0xcc133a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.IsSimulationEnabled
	// bool IsSimulationEnabled();                                                                                              // [0xcc13380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.GetClothAsset
	// class UChaosClothAsset* GetClothAsset();                                                                                 // [0xcc1335c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.ForceNextUpdateTeleportAndReset
	// void ForceNextUpdateTeleportAndReset();                                                                                  // [0xcc13344] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.ForceNextUpdateTeleport
	// void ForceNextUpdateTeleport();                                                                                          // [0xcc13324] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosClothAssetEngine.ChaosClothAsset
/// Size: 0x0208 (0x0000D0 - 0x0002D8)
class UChaosClothAsset : public USkinnedAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(class UDataflow*)                          DataflowAsset                                               OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FString)                                   DataflowTerminal                                            OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FSkeletalMaterial>)                 Materials                                                   OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(class USkeleton*)                          Skeleton                                                    OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UPhysicsAsset*)                      PhysicsAsset                                                OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(TArray<FSkeletalMeshLODInfo>)              LODInfo                                                     OFFSET(get<T>, {0x108, 16, 0, 0})
	SMember(FPerPlatformBool)                          DisableBelowMinLodStripping                                 OFFSET(getStruct<T>, {0x118, 1, 0, 0})
	SMember(FPerPlatformInt)                           MinLOD                                                      OFFSET(getStruct<T>, {0x11C, 4, 0, 0})
	DMember(bool)                                      bSupportRayTracing                                          OFFSET(get<bool>, {0x120, 1, 1, 0})
	DMember(int32_t)                                   RayTracingMinLOD                                            OFFSET(get<int32_t>, {0x124, 4, 0, 0})
	DMember(bool)                                      bSmoothTransition                                           OFFSET(get<bool>, {0x128, 1, 0, 0})
	DMember(bool)                                      bUseMultipleInfluences                                      OFFSET(get<bool>, {0x129, 1, 0, 0})
	DMember(float)                                     SkinningKernelRadius                                        OFFSET(get<float>, {0x12C, 4, 0, 0})
	CMember(class UPhysicsAsset*)                      ShadowPhysicsAsset                                          OFFSET(get<T>, {0x130, 8, 0, 0})
	SMember(FGuid)                                     AssetGuid                                                   OFFSET(getStruct<T>, {0x138, 16, 0, 0})


	/// Functions
	// Function /Script/ChaosClothAssetEngine.ChaosClothAsset.GetShadowPhysicsAsset
	// class UPhysicsAsset* GetShadowPhysicsAsset();                                                                            // [0x6c84e0c] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/ChaosClothAssetEngine.ChaosClothAssetLodTransitionDataCache
/// Size: 0x0038 (0x000000 - 0x000038)
class FChaosClothAssetLodTransitionDataCache : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/ChaosClothAssetEngine.ChaosClothSimulationLodModel
/// Size: 0x01F0 (0x000000 - 0x0001F0)
class FChaosClothSimulationLodModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(TArray<FVector3f>)                         Positions                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVector3f>)                         Normals                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<uint32_t>)                          Indices                                                     OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FClothVertBoneData>)                BoneData                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<uint16_t>)                          RequiredExtraBoneIndices                                    OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FVector2f>)                         PatternPositions                                            OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<uint32_t>)                          PatternIndices                                              OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<uint32_t>)                          PatternToWeldedIndices                                      OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FClothTetherData)                          TetherData                                                  OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
};

/// Struct /Script/ChaosClothAssetEngine.ChaosClothSimulationModel
/// Size: 0x0038 (0x000000 - 0x000038)
class FChaosClothSimulationModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FChaosClothSimulationLodModel>)     ClothSimulationLodModels                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FName>)                             UsedBoneNames                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<int32_t>)                           UsedBoneIndices                                             OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   ReferenceBoneIndex                                          OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Enum /Script/ChaosClothAssetEngine.EClothAssetAsyncProperties
/// Size: 0x05
enum class EClothAssetAsyncProperties : uint8_t
{
	EClothAssetAsyncProperties__None                                                 = 0,
	EClothAssetAsyncProperties__RenderData                                           = 1,
	EClothAssetAsyncProperties__ThumbnailInfo                                        = 2,
	EClothAssetAsyncProperties__All                                                  = -1,
	EClothAssetAsyncProperties__EClothAssetAsyncProperties_MAX                       = 3
};

