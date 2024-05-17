
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
/// Size: 0x0048 (0x000898 - 0x0008E0)
class UChaosClothComponent : public USkinnedMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2272;

public:
	DMember(bool)                                      bUseAttachedParentAsPoseComponent                           OFFSET(get<bool>, {0x898, 1, 1, 0})
	DMember(bool)                                      bWaitForParallelTask                                        OFFSET(get<bool>, {0x898, 1, 1, 1})
	DMember(bool)                                      bEnableSimulation                                           OFFSET(get<bool>, {0x898, 1, 1, 2})
	DMember(bool)                                      bSuspendSimulation                                          OFFSET(get<bool>, {0x898, 1, 1, 3})
	DMember(bool)                                      bBindToLeaderComponent                                      OFFSET(get<bool>, {0x898, 1, 1, 4})
	DMember(bool)                                      bTeleport                                                   OFFSET(get<bool>, {0x898, 1, 1, 5})
	DMember(bool)                                      bReset                                                      OFFSET(get<bool>, {0x898, 1, 1, 6})
	DMember(float)                                     BlendWeight                                                 OFFSET(get<float>, {0x89C, 4, 0, 0})
	CMember(class UChaosClothAssetInteractor*)         ClothOutfitInteractor                                       OFFSET(get<T>, {0x8A0, 8, 0, 0})


	/// Functions
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.SuspendSimulation
	// void SuspendSimulation();                                                                                                // [0xd38e8b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.SetEnableSimulation
	// void SetEnableSimulation(bool bEnable);                                                                                  // [0xd38b9b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.SetClothAsset
	// void SetClothAsset(class UChaosClothAsset* InClothAsset);                                                                // [0xd38b92c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.ResumeSimulation
	// void ResumeSimulation();                                                                                                 // [0xd38b914] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.ResetTeleportMode
	// void ResetTeleportMode();                                                                                                // [0xd38b8fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.ResetConfigProperties
	// void ResetConfigProperties();                                                                                            // [0xd38b8e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.RecreateClothSimulationProxy
	// void RecreateClothSimulationProxy();                                                                                     // [0xd38b8d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.IsSimulationSuspended
	// bool IsSimulationSuspended();                                                                                            // [0xd38b8b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.IsSimulationEnabled
	// bool IsSimulationEnabled();                                                                                              // [0xd38b88c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.GetClothOutfitInteractor
	// class UChaosClothAssetInteractor* GetClothOutfitInteractor();                                                            // [0xd388bf4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.GetClothAsset
	// class UChaosClothAsset* GetClothAsset();                                                                                 // [0xd388bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.ForceNextUpdateTeleportAndReset
	// void ForceNextUpdateTeleportAndReset();                                                                                  // [0xd388b14] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.ForceNextUpdateTeleport
	// void ForceNextUpdateTeleport();                                                                                          // [0xd388af4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosClothAssetEngine.ChaosClothAsset
/// Size: 0x0270 (0x0000D0 - 0x000340)
class UChaosClothAsset : public USkinnedAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(class UDataflow*)                          DataflowAsset                                               OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FString)                                   DataflowTerminal                                            OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FSkeletalMaterial>)                 Materials                                                   OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(class USkeleton*)                          Skeleton                                                    OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UPhysicsAsset*)                      PhysicsAsset                                                OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(TArray<FSkeletalMeshLODInfo>)              LODInfo                                                     OFFSET(get<T>, {0x108, 16, 0, 0})
	SMember(FPerQualityLevelInt)                       MinQualityLevelLOD                                          OFFSET(getStruct<T>, {0x118, 104, 0, 0})
	SMember(FPerPlatformBool)                          DisableBelowMinLodStripping                                 OFFSET(getStruct<T>, {0x180, 1, 0, 0})
	SMember(FPerPlatformInt)                           MinLOD                                                      OFFSET(getStruct<T>, {0x184, 4, 0, 0})
	DMember(bool)                                      bSupportRayTracing                                          OFFSET(get<bool>, {0x188, 1, 1, 0})
	DMember(int32_t)                                   RayTracingMinLOD                                            OFFSET(get<int32_t>, {0x18C, 4, 0, 0})
	DMember(bool)                                      bSmoothTransition                                           OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      bUseMultipleInfluences                                      OFFSET(get<bool>, {0x191, 1, 0, 0})
	DMember(float)                                     SkinningKernelRadius                                        OFFSET(get<float>, {0x194, 4, 0, 0})
	CMember(class UPhysicsAsset*)                      ShadowPhysicsAsset                                          OFFSET(get<T>, {0x198, 8, 0, 0})
	SMember(FGuid)                                     AssetGuid                                                   OFFSET(getStruct<T>, {0x1A0, 16, 0, 0})


	/// Functions
	// Function /Script/ChaosClothAssetEngine.ChaosClothAsset.GetShadowPhysicsAsset
	// class UPhysicsAsset* GetShadowPhysicsAsset();                                                                            // [0x6ed0ba0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ChaosClothAssetEngine.ChaosClothAssetInteractor
/// Size: 0x0010 (0x000028 - 0x000038)
class UChaosClothAssetInteractor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/ChaosClothAssetEngine.ChaosClothAssetInteractor.SetWeightedFloatValue
	// void SetWeightedFloatValue(FString PropertyName, int32_t LODIndex, FVector2D Value);                                     // [0xd38e074] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothAssetInteractor.SetVectorValue
	// void SetVectorValue(FString PropertyName, int32_t LODIndex, FVector Value);                                              // [0xd38d814] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothAssetInteractor.SetLowFloatValue
	// void SetLowFloatValue(FString PropertyName, int32_t LODIndex, float Value);                                              // [0xd38d0cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothAssetInteractor.SetIntValue
	// void SetIntValue(FString PropertyName, int32_t LODIndex, int32_t Value);                                                 // [0xd38c8d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothAssetInteractor.SetHighFloatValue
	// void SetHighFloatValue(FString PropertyName, int32_t LODIndex, float Value);                                             // [0xd38c188] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothAssetInteractor.SetFloatValue
	// void SetFloatValue(FString PropertyName, int32_t LODIndex, float Value);                                                 // [0xd38ba40] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothAssetInteractor.GetWeightedFloatValue
	// FVector2D GetWeightedFloatValue(FString PropertyName, int32_t LODIndex, FVector2D DefaultValue);                         // [0xd38b138] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosClothAssetEngine.ChaosClothAssetInteractor.GetVectorValue
	// FVector GetVectorValue(FString PropertyName, int32_t LODIndex, FVector DefaultValue);                                    // [0xd38a9d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosClothAssetEngine.ChaosClothAssetInteractor.GetStringValue
	// FString GetStringValue(FString PropertyName, int32_t LODIndex, FString DefaultValue);                                    // [0xd38a208] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosClothAssetEngine.ChaosClothAssetInteractor.GetLowFloatValue
	// float GetLowFloatValue(FString PropertyName, int32_t LODIndex, float DefaultValue);                                      // [0xd388c0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosClothAssetEngine.ChaosClothAssetInteractor.GetIntValue
	// int32_t GetIntValue(FString PropertyName, int32_t LODIndex, int32_t DefaultValue);                                       // [0xd389a84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosClothAssetEngine.ChaosClothAssetInteractor.GetHighFloatValue
	// float GetHighFloatValue(FString PropertyName, int32_t LODIndex, float DefaultValue);                                     // [0xd389348] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosClothAssetEngine.ChaosClothAssetInteractor.GetFloatValue
	// float GetFloatValue(FString PropertyName, int32_t LODIndex, float DefaultValue);                                         // [0xd388c0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosClothAssetEngine.ChaosClothAssetInteractor.GetAllProperties
	// TArray<FString> GetAllProperties(int32_t LODIndex);                                                                      // [0xd388b2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
/// Size: 0x07
enum class EClothAssetAsyncProperties : uint8_t
{
	EClothAssetAsyncProperties__None                                                 = 0,
	EClothAssetAsyncProperties__RenderData                                           = 1,
	EClothAssetAsyncProperties__ThumbnailInfo                                        = 2,
	EClothAssetAsyncProperties__ImportedModel                                        = 4,
	EClothAssetAsyncProperties__ClothCollection                                      = 8,
	EClothAssetAsyncProperties__RefSkeleton                                          = 16,
	EClothAssetAsyncProperties__All                                                  = -1
};

