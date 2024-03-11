
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GeometryCache
/// dependency: MovieScene
/// dependency: Niagara
/// dependency: NiagaraCore

/// Class /Script/HairStrandsCore.GroomCacheImportOptions
/// Size: 0x0060 (0x000028 - 0x000088)
class UGroomCacheImportOptions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGroomCacheImportSettings)                 ImportSettings                                              OFFSET(getStruct<T>, {0x28, 96, 0, 0})
};

/// Class /Script/HairStrandsCore.GroomCacheImportData
/// Size: 0x0060 (0x000028 - 0x000088)
class UGroomCacheImportData : public UAssetImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGroomCacheImportSettings)                 Settings                                                    OFFSET(getStruct<T>, {0x28, 96, 0, 0})
};

/// Class /Script/HairStrandsCore.GroomActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AGroomActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UGroomComponent*)                    GroomComponent                                              OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/HairStrandsCore.GroomAsset
/// Size: 0x0100 (0x000028 - 0x000128)
class UGroomAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(EGroomLODMode)                             LODMode                                                     OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     AutoLODBias                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(TArray<FHairGroupInfoWithVisibility>)      HairGroupsInfo                                              OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FHairGroupsRendering>)              HairGroupsRendering                                         OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FHairGroupsPhysics>)                HairGroupsPhysics                                           OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FHairGroupsInterpolation>)          HairGroupsInterpolation                                     OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FHairGroupsLOD>)                    HairGroupsLOD                                               OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FHairGroupsCardsSourceDescription>) HairGroupsCards                                             OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<FHairGroupsMeshesSourceDescription>) HairGroupsMeshes                                           OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<FHairGroupsMaterial>)               HairGroupsMaterials                                         OFFSET(get<T>, {0xA8, 16, 0, 0})
	DMember(bool)                                      EnableGlobalInterpolation                                   OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(bool)                                      EnableSimulationCache                                       OFFSET(get<bool>, {0xB9, 1, 0, 0})
	CMember(EGroomInterpolationType)                   HairInterpolationType                                       OFFSET(get<T>, {0xBA, 1, 0, 0})
	CMember(class USkeletalMesh*)                      RiggedSkeletalMesh                                          OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TArray<int32_t>)                           DeformedGroupSections                                       OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FPerPlatformInt)                           MinLOD                                                      OFFSET(getStruct<T>, {0xD8, 4, 0, 0})
	SMember(FPerPlatformBool)                          DisableBelowMinLodStripping                                 OFFSET(getStruct<T>, {0xDC, 1, 0, 0})
	CMember(TArray<float>)                             EffectiveLODBias                                            OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<class UAssetUserData*>)             AssetUserData                                               OFFSET(get<T>, {0x110, 16, 0, 0})


	/// Functions
	// Function /Script/HairStrandsCore.GroomAsset.SetRiggedSkeletalMesh
	// void SetRiggedSkeletalMesh(class USkeletalMesh* In);                                                                     // [0xb9b7bbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetHairInterpolationType
	// void SetHairInterpolationType(EGroomInterpolationType In);                                                               // [0xb9b7a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetHairGroupsRendering
	// void SetHairGroupsRendering(TArray<FHairGroupsRendering>& In);                                                           // [0xb9b78e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetHairGroupsPhysics
	// void SetHairGroupsPhysics(TArray<FHairGroupsPhysics>& In);                                                               // [0xb9b7848] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetHairGroupsMeshes
	// void SetHairGroupsMeshes(TArray<FHairGroupsMeshesSourceDescription>& In);                                                // [0xb9b77ac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetHairGroupsMaterials
	// void SetHairGroupsMaterials(TArray<FHairGroupsMaterial>& In);                                                            // [0xb9b763c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetHairGroupsLOD
	// void SetHairGroupsLOD(TArray<FHairGroupsLOD>& In);                                                                       // [0xb9b75a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetHairGroupsInterpolation
	// void SetHairGroupsInterpolation(TArray<FHairGroupsInterpolation>& In);                                                   // [0xb9b7434] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetHairGroupsCards
	// void SetHairGroupsCards(TArray<FHairGroupsCardsSourceDescription>& In);                                                  // [0xb9b7398] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetEnableSimulationCache
	// void SetEnableSimulationCache(bool In);                                                                                  // [0xb9b7130] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetEnableGlobalInterpolation
	// void SetEnableGlobalInterpolation(bool In);                                                                              // [0xb9b70b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.SetDeformedGroupSections
	// void SetDeformedGroupSections(TArray<int32_t>& In);                                                                      // [0xb9b7010] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomAsset.GetRiggedSkeletalMesh
	// class USkeletalMesh* GetRiggedSkeletalMesh();                                                                            // [0x6b2d9dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomAsset.GetHairInterpolationType
	// EGroomInterpolationType GetHairInterpolationType();                                                                      // [0x893f0e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomAsset.GetHairGroupsRendering
	// TArray<FHairGroupsRendering> GetHairGroupsRendering();                                                                   // [0xb9b6fe0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HairStrandsCore.GroomAsset.GetHairGroupsPhysics
	// TArray<FHairGroupsPhysics> GetHairGroupsPhysics();                                                                       // [0xb9b6fc4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HairStrandsCore.GroomAsset.GetHairGroupsMeshes
	// TArray<FHairGroupsMeshesSourceDescription> GetHairGroupsMeshes();                                                        // [0xb9b6fa8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HairStrandsCore.GroomAsset.GetHairGroupsMaterials
	// TArray<FHairGroupsMaterial> GetHairGroupsMaterials();                                                                    // [0xb9b6f8c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HairStrandsCore.GroomAsset.GetHairGroupsLOD
	// TArray<FHairGroupsLOD> GetHairGroupsLOD();                                                                               // [0xb9b6f70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HairStrandsCore.GroomAsset.GetHairGroupsInterpolation
	// TArray<FHairGroupsInterpolation> GetHairGroupsInterpolation();                                                           // [0xb9b6f54] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HairStrandsCore.GroomAsset.GetHairGroupsCards
	// TArray<FHairGroupsCardsSourceDescription> GetHairGroupsCards();                                                          // [0xb9b6f38] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HairStrandsCore.GroomAsset.GetEnableSimulationCache
	// bool GetEnableSimulationCache();                                                                                         // [0xb9b6f04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomAsset.GetEnableGlobalInterpolation
	// bool GetEnableGlobalInterpolation();                                                                                     // [0xabbd240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomAsset.GetDeformedGroupSections
	// TArray<int32_t> GetDeformedGroupSections();                                                                              // [0xb9b6ee8] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/HairStrandsCore.HairCardGenerationSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UHairCardGenerationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/HairStrandsCore.GroomAssetImportData
/// Size: 0x0008 (0x000028 - 0x000030)
class UGroomAssetImportData : public UAssetImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UGroomImportOptions*)                ImportOptions                                               OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/HairStrandsCore.GroomBindingAsset
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UGroomBindingAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EGroomBindingMeshType)                     GroomBindingType                                            OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(class UGroomAsset*)                        Groom                                                       OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class USkeletalMesh*)                      SourceSkeletalMesh                                          OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class USkeletalMesh*)                      TargetSkeletalMesh                                          OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UGeometryCache*)                     SourceGeometryCache                                         OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UGeometryCache*)                     TargetGeometryCache                                         OFFSET(get<T>, {0x50, 8, 0, 0})
	DMember(int32_t)                                   NumInterpolationPoints                                      OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   MatchingSection                                             OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	CMember(TArray<FGoomBindingGroupInfo>)             GroupInfos                                                  OFFSET(get<T>, {0x60, 16, 0, 0})


	/// Functions
	// Function /Script/HairStrandsCore.GroomBindingAsset.SetTargetSkeletalMesh
	// void SetTargetSkeletalMesh(class USkeletalMesh* InSkeletalMesh);                                                         // [0xb9b7de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBindingAsset.SetTargetGeometryCache
	// void SetTargetGeometryCache(class UGeometryCache* InGeometryCache);                                                      // [0xb9b7d58] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBindingAsset.SetSourceSkeletalMesh
	// void SetSourceSkeletalMesh(class USkeletalMesh* InSkeletalMesh);                                                         // [0xb9b7cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBindingAsset.SetSourceGeometryCache
	// void SetSourceGeometryCache(class UGeometryCache* InGeometryCache);                                                      // [0xb9b7c48] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBindingAsset.SetNumInterpolationPoints
	// void SetNumInterpolationPoints(int32_t InNumInterpolationPoints);                                                        // [0xb9b7b44] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBindingAsset.SetMatchingSection
	// void SetMatchingSection(int32_t InMatchingSection);                                                                      // [0xb9b7acc] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBindingAsset.SetGroupInfos
	// void SetGroupInfos(TArray<FGoomBindingGroupInfo>& InGroupInfos);                                                         // [0xb9b722c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBindingAsset.SetGroomBindingType
	// void SetGroomBindingType(EGroomBindingMeshType InGroomBindingType);                                                      // [0xb9b71b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBindingAsset.SetGroom
	// void SetGroom(class UGroomAsset* InGroom);                                                                               // [0x7e4a208] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBindingAsset.GetTargetSkeletalMesh
	// class USkeletalMesh* GetTargetSkeletalMesh();                                                                            // [0x6473ba8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomBindingAsset.GetTargetGeometryCache
	// class UGeometryCache* GetTargetGeometryCache();                                                                          // [0x7217488] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomBindingAsset.GetSourceSkeletalMesh
	// class USkeletalMesh* GetSourceSkeletalMesh();                                                                            // [0x9fb9040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomBindingAsset.GetSourceGeometryCache
	// class UGeometryCache* GetSourceGeometryCache();                                                                          // [0x9443d7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomBindingAsset.GetNumInterpolationPoints
	// int32_t GetNumInterpolationPoints();                                                                                     // [0x6987a9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomBindingAsset.GetMatchingSection
	// int32_t GetMatchingSection();                                                                                            // [0xb9b6ffc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomBindingAsset.GetGroupInfos
	// TArray<FGoomBindingGroupInfo> GetGroupInfos();                                                                           // [0xb9b6f1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomBindingAsset.GetGroomBindingType
	// EGroomBindingMeshType GetGroomBindingType();                                                                             // [0x3eacdc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HairStrandsCore.GroomBindingAsset.GetGroom
	// class UGroomAsset* GetGroom();                                                                                           // [0x68142b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/HairStrandsCore.GroomBindingAssetList
/// Size: 0x0010 (0x000028 - 0x000038)
class UGroomBindingAssetList : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UGroomBindingAsset*>)         Bindings                                                    OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/HairStrandsCore.GroomBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

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

/// Class /Script/HairStrandsCore.GroomCache
/// Size: 0x0060 (0x000028 - 0x000088)
class UGroomCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<class UAssetUserData*>)             AssetUserData                                               OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FGroomCacheInfo)                           GroomCacheInfo                                              OFFSET(getStruct<T>, {0x50, 40, 0, 0})
};

/// Class /Script/HairStrandsCore.GroomComponent
/// Size: 0x0240 (0x000540 - 0x000780)
class UGroomComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
	CMember(class UGroomAsset*)                        GroomAsset                                                  OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UGroomCache*)                        GroomCache                                                  OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          NiagaraComponents                                           OFFSET(get<T>, {0x558, 16, 0, 0})
	CMember(class USkeletalMesh*)                      SourceSkeletalMesh                                          OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(class UGroomBindingAsset*)                 BindingAsset                                                OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UPhysicsAsset*)                      PhysicsAsset                                                OFFSET(get<T>, {0x578, 8, 0, 0})
	SMember(FHairSimulationSettings)                   SimulationSettings                                          OFFSET(getStruct<T>, {0x590, 144, 0, 0})
	CMember(class UMeshDeformer*)                      MeshDeformer                                                OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(class UMeshDeformerInstance*)              MeshDeformerInstance                                        OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(class UMeshDeformerInstanceSettings*)      MeshDeformerInstanceSettings                                OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(class UMaterialInterface*)                 Strands_DebugMaterial                                       OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(class UMaterialInterface*)                 Strands_DefaultMaterial                                     OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(class UMaterialInterface*)                 Cards_DefaultMaterial                                       OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(class UMaterialInterface*)                 Meshes_DefaultMaterial                                      OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     AngularSpringsSystem                                        OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     CosseratRodsSystem                                          OFFSET(get<T>, {0x660, 8, 0, 0})
	SMember(FString)                                   AttachmentName                                              OFFSET(getStruct<T>, {0x668, 16, 0, 0})
	CMember(TArray<FHairGroupDesc>)                    GroomGroupsDesc                                             OFFSET(get<T>, {0x700, 16, 0, 0})
	DMember(bool)                                      bUseCards                                                   OFFSET(get<bool>, {0x710, 1, 0, 0})
	DMember(bool)                                      bRunning                                                    OFFSET(get<bool>, {0x711, 1, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x712, 1, 0, 0})
	DMember(bool)                                      bManualTick                                                 OFFSET(get<bool>, {0x713, 1, 0, 0})
	DMember(float)                                     ElapsedTime                                                 OFFSET(get<float>, {0x714, 4, 0, 0})


	/// Functions
	// Function /Script/HairStrandsCore.GroomComponent.SetPhysicsAsset
	// void SetPhysicsAsset(class UPhysicsAsset* InPhysicsAsset);                                                               // [0xb9d743c] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetMeshDeformer
	// void SetMeshDeformer(class UMeshDeformer* InMeshDeformer);                                                               // [0xb9d73bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetHairLengthScaleEnable
	// void SetHairLengthScaleEnable(bool bEnable);                                                                             // [0xb9d730c] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetHairLengthScale
	// void SetHairLengthScale(float Scale);                                                                                    // [0xb9d7264] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetGroomCache
	// void SetGroomCache(class UGroomCache* InGroomCache);                                                                     // [0xb9d71e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetGroomAsset
	// void SetGroomAsset(class UGroomAsset* Asset);                                                                            // [0xb9d7158] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetEnableSimulation
	// void SetEnableSimulation(bool bInEnableSimulation);                                                                      // [0xb9d70d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetBindingAsset
	// void SetBindingAsset(class UGroomBindingAsset* InBinding);                                                               // [0xb9d6ffc] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.ResetSimulation
	// void ResetSimulation();                                                                                                  // [0xb9d6fe4] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.ResetCollisionComponents
	// void ResetCollisionComponents();                                                                                         // [0xb9d6fb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.GetNiagaraComponent
	// class UNiagaraComponent* GetNiagaraComponent(int32_t GroupIndex);                                                        // [0xb9d6f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.GetIsHairLengthScaleEnabled
	// bool GetIsHairLengthScaleEnabled();                                                                                      // [0xb9d6ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.AddCollisionComponent
	// void AddCollisionComponent(class USkeletalMeshComponent* SkeletalMeshComponent);                                         // [0xb9d6cfc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HairStrandsCore.GroomCreateBindingOptions
/// Size: 0x0038 (0x000028 - 0x000060)
class UGroomCreateBindingOptions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TWeakObjectPtr<UGroomAsset*>)              GroomAsset                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(EGroomBindingMeshType)                     GroomBindingType                                            OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(class USkeletalMesh*)                      SourceSkeletalMesh                                          OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class USkeletalMesh*)                      TargetSkeletalMesh                                          OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UGeometryCache*)                     SourceGeometryCache                                         OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UGeometryCache*)                     TargetGeometryCache                                         OFFSET(get<T>, {0x50, 8, 0, 0})
	DMember(int32_t)                                   NumInterpolationPoints                                      OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   MatchingSection                                             OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
};

/// Class /Script/HairStrandsCore.GroomCreateFollicleMaskOptions
/// Size: 0x0018 (0x000028 - 0x000040)
class UGroomCreateFollicleMaskOptions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   Resolution                                                  OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   RootRadius                                                  OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(TArray<FFollicleMaskOptions>)              Grooms                                                      OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/HairStrandsCore.GroomCreateStrandsTexturesOptions
/// Size: 0x0048 (0x000028 - 0x000070)
class UGroomCreateStrandsTexturesOptions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(EHairTextureLayout)                        Layout                                                      OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(int32_t)                                   Resolution                                                  OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(EStrandsTexturesTraceType)                 TraceType                                                   OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     TraceDistance                                               OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(EStrandsTexturesMeshType)                  MeshType                                                    OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(class UStaticMesh*)                        StaticMesh                                                  OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class USkeletalMesh*)                      SkeletalMesh                                                OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(int32_t)                                   LODIndex                                                    OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   SectionIndex                                                OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(int32_t)                                   UVChannelIndex                                              OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	CMember(TArray<int32_t>)                           GroupIndex                                                  OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/HairStrandsCore.GroomImportOptions
/// Size: 0x0040 (0x000028 - 0x000068)
class UGroomImportOptions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGroomConversionSettings)                  ConversionSettings                                          OFFSET(getStruct<T>, {0x28, 48, 0, 0})
	CMember(TArray<FHairGroupsInterpolation>)          InterpolationSettings                                       OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/HairStrandsCore.GroomHairGroupsPreview
/// Size: 0x0010 (0x000028 - 0x000038)
class UGroomHairGroupsPreview : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FGroomHairGroupPreview>)            Groups                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/HairStrandsCore.GroomPluginSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UGroomPluginSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     GroomCacheLookAheadBuffer                                   OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Class /Script/HairStrandsCore.MovieSceneGroomCacheSection
/// Size: 0x0020 (0x0000F0 - 0x000110)
class UMovieSceneGroomCacheSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FMovieSceneGroomCacheParams)               Params                                                      OFFSET(getStruct<T>, {0xF0, 32, 0, 0})
};

/// Class /Script/HairStrandsCore.MovieSceneGroomCacheTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneGroomCacheTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<class UMovieSceneSection*>)         AnimationSections                                           OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfaceHairStrands
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UGroomAsset*)                        DefaultSource                                               OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class AActor*)                             SourceActor                                                 OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfaceVelocityGrid
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FIntVector)                                GridSize                                                    OFFSET(getStruct<T>, {0x38, 12, 0, 0})
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfacePressureGrid
/// Size: 0x0000 (0x000048 - 0x000048)
class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/HairStrandsCore.GroomCacheImportSettings
/// Size: 0x0060 (0x000000 - 0x000060)
class FGroomCacheImportSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bImportGroomCache                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(EGroomCacheImportType)                     ImportType                                                  OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(int32_t)                                   FrameStart                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   FrameEnd                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bSkipEmptyFrames                                            OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bImportGroomAsset                                           OFFSET(get<bool>, {0xD, 1, 0, 0})
	SMember(FSoftObjectPath)                           GroomAsset                                                  OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(bool)                                      bOverrideConversionSettings                                 OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FGroomConversionSettings)                  ConversionSettings                                          OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/HairStrandsCore.GroomConversionSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FGroomConversionSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Rotation                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairGroupDesc
/// Size: 0x0040 (0x000000 - 0x000040)
class FHairGroupDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     HairLength                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     HairWidth                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      HairWidth_Override                                          OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     HairRootScale                                               OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      HairRootScale_Override                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     HairTipScale                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      HairTipScale_Override                                       OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(float)                                     HairShadowDensity                                           OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      HairShadowDensity_Override                                  OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(float)                                     HairRaytracingRadiusScale                                   OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      HairRaytracingRadiusScale_Override                          OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bUseHairRaytracingGeometry                                  OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bUseHairRaytracingGeometry_Override                         OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(float)                                     LODBias                                                     OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bUseStableRasterization                                     OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bUseStableRasterization_Override                            OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bScatterSceneLighting                                       OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bScatterSceneLighting_Override                              OFFSET(get<bool>, {0x33, 1, 0, 0})
	DMember(bool)                                      bSupportVoxelization                                        OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(bool)                                      bSupportVoxelization_Override                               OFFSET(get<bool>, {0x35, 1, 0, 0})
	DMember(float)                                     HairLengthScale                                             OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      HairLengthScale_Override                                    OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairGroupLODInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FHairGroupLODInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   NumPoints                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   NumCurves                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairGroupInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FHairGroupInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   GroupId                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FName)                                     GroupName                                                   OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   NumCurves                                                   OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   NumGuides                                                   OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   NumCurveVertices                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   NumGuideVertices                                            OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxCurveLength                                              OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(uint32_t)                                  Flags                                                       OFFSET(get<uint32_t>, {0x1C, 4, 0, 0})
	CMember(TArray<FHairGroupLODInfo>)                 LODInfos                                                    OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairGroupsMaterial
/// Size: 0x0010 (0x000000 - 0x000010)
class FHairGroupsMaterial : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     SlotName                                                    OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairGroupInfoWithVisibility
/// Size: 0x0008 (0x000030 - 0x000038)
class FHairGroupInfoWithVisibility : public FHairGroupInfo
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bIsVisible                                                  OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairGroupCardsInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FHairGroupCardsInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   NumCards                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   NumCardVertices                                             OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairGroupCardsTextures
/// Size: 0x0050 (0x000000 - 0x000050)
class FHairGroupCardsTextures : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(EHairTextureLayout)                        Layout                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<class UTexture2D*>)                 Textures                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(class UTexture2D*)                         DepthTexture                                                OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class UTexture2D*)                         CoverageTexture                                             OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class UTexture2D*)                         TangentTexture                                              OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UTexture2D*)                         AttributeTexture                                            OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UTexture2D*)                         AuxilaryDataTexture                                         OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UTexture2D*)                         MaterialTexture                                             OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairGroupsCardsSourceDescription
/// Size: 0x0098 (0x000000 - 0x000098)
class FHairGroupsCardsSourceDescription : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     MaterialSlotName                                            OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(EHairCardsSourceType)                      SourceType                                                  OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(class UStaticMesh*)                        ProceduralMesh                                              OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bInvertUV                                                   OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(EHairCardsGuideType)                       GuideType                                                   OFFSET(get<T>, {0x19, 1, 0, 0})
	CMember(class UStaticMesh*)                        ImportedMesh                                                OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FHairGroupCardsTextures)                   Textures                                                    OFFSET(getStruct<T>, {0x28, 80, 0, 0})
	DMember(int32_t)                                   GroupIndex                                                  OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   LODIndex                                                    OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	SMember(FHairGroupCardsInfo)                       CardsInfo                                                   OFFSET(getStruct<T>, {0x80, 8, 0, 0})
	SMember(FString)                                   ImportedMeshKey                                             OFFSET(getStruct<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairLODSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FHairLODSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     CurveDecimation                                             OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     VertexDecimation                                            OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AngularThreshold                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ScreenSize                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ThicknessScale                                              OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x14, 1, 0, 0})
	CMember(EGroomGeometryType)                        GeometryType                                                OFFSET(get<T>, {0x15, 1, 0, 0})
	CMember(EGroomBindingType)                         BindingType                                                 OFFSET(get<T>, {0x16, 1, 0, 0})
	CMember(EGroomOverrideType)                        Simulation                                                  OFFSET(get<T>, {0x17, 1, 0, 0})
	CMember(EGroomOverrideType)                        GlobalInterpolation                                         OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairDecimationSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FHairDecimationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     CurveDecimation                                             OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     VertexDecimation                                            OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairInterpolationSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FHairInterpolationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(EGroomGuideType)                           GuideType                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bOverrideGuides                                             OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     HairToGuideDensity                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   RiggedGuideNumCurves                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   RiggedGuideNumPoints                                        OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(EHairInterpolationQuality)                 InterpolationQuality                                        OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(EHairInterpolationWeight)                  InterpolationDistance                                       OFFSET(get<T>, {0x11, 1, 0, 0})
	DMember(bool)                                      bRandomizeGuide                                             OFFSET(get<bool>, {0x12, 1, 0, 0})
	DMember(bool)                                      bUseUniqueGuide                                             OFFSET(get<bool>, {0x13, 1, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairDeformationSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FHairDeformationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bEnableRigging                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   NumCurves                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   NumPoints                                                   OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairGroupsInterpolation
/// Size: 0x0028 (0x000000 - 0x000028)
class FHairGroupsInterpolation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FHairDecimationSettings)                   DecimationSettings                                          OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FHairInterpolationSettings)                InterpolationSettings                                       OFFSET(getStruct<T>, {0x8, 20, 0, 0})
	SMember(FHairDeformationSettings)                  RiggingSettings                                             OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairGroupsLOD
/// Size: 0x0010 (0x000000 - 0x000010)
class FHairGroupsLOD : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FHairLODSettings>)                  Lods                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairGroupsMeshesSourceDescription
/// Size: 0x0080 (0x000000 - 0x000080)
class FHairGroupsMeshesSourceDescription : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     MaterialSlotName                                            OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(class UStaticMesh*)                        ImportedMesh                                                OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FHairGroupCardsTextures)                   Textures                                                    OFFSET(getStruct<T>, {0x18, 80, 0, 0})
	DMember(int32_t)                                   GroupIndex                                                  OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   LODIndex                                                    OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	SMember(FString)                                   ImportedMeshKey                                             OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairSolverSettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FHairSolverSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      EnableSimulation                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(EGroomNiagaraSolvers)                      NiagaraSolver                                               OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(TWeakObjectPtr<UNiagaraSystem*>)           CustomSystem                                                OFFSET(get<T>, {0x8, 32, 0, 0})
	DMember(float)                                     GravityPreloading                                           OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   SubSteps                                                    OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   IterationCount                                              OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bForceVisible                                               OFFSET(get<bool>, {0x34, 1, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairExternalForces
/// Size: 0x0038 (0x000000 - 0x000038)
class FHairExternalForces : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   GravityVector                                               OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     AirDrag                                                     OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FVector)                                   AirVelocity                                                 OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairBendConstraint
/// Size: 0x0098 (0x000000 - 0x000098)
class FHairBendConstraint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(bool)                                      SolveBend                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      ProjectBend                                                 OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     BendDamping                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     BendStiffness                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        BendScale                                                   OFFSET(getStruct<T>, {0x10, 136, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairStretchConstraint
/// Size: 0x0098 (0x000000 - 0x000098)
class FHairStretchConstraint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(bool)                                      SolveStretch                                                OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      ProjectStretch                                              OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     StretchDamping                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     StretchStiffness                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        StretchScale                                                OFFSET(getStruct<T>, {0x10, 136, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairCollisionConstraint
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FHairCollisionConstraint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(bool)                                      SolveCollision                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      ProjectCollision                                            OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     StaticFriction                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     KineticFriction                                             OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     StrandsViscosity                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FIntVector)                                GridDimension                                               OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	DMember(float)                                     CollisionRadius                                             OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        RadiusScale                                                 OFFSET(getStruct<T>, {0x20, 136, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairMaterialConstraints
/// Size: 0x01D8 (0x000000 - 0x0001D8)
class FHairMaterialConstraints : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FHairBendConstraint)                       BendConstraint                                              OFFSET(getStruct<T>, {0x0, 152, 0, 0})
	SMember(FHairStretchConstraint)                    StretchConstraint                                           OFFSET(getStruct<T>, {0x98, 152, 0, 0})
	SMember(FHairCollisionConstraint)                  CollisionConstraint                                         OFFSET(getStruct<T>, {0x130, 168, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairStrandsParameters
/// Size: 0x0098 (0x000000 - 0x000098)
class FHairStrandsParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(EGroomStrandsSize)                         StrandsSize                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     StrandsDensity                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     StrandsSmoothing                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     StrandsThickness                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        ThicknessScale                                              OFFSET(getStruct<T>, {0x10, 136, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairGroupsPhysics
/// Size: 0x02E0 (0x000000 - 0x0002E0)
class FHairGroupsPhysics : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FHairSolverSettings)                       SolverSettings                                              OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	SMember(FHairExternalForces)                       ExternalForces                                              OFFSET(getStruct<T>, {0x38, 56, 0, 0})
	SMember(FHairMaterialConstraints)                  MaterialConstraints                                         OFFSET(getStruct<T>, {0x70, 472, 0, 0})
	SMember(FHairStrandsParameters)                    StrandsParameters                                           OFFSET(getStruct<T>, {0x248, 152, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairSimulationSolver
/// Size: 0x0001 (0x000000 - 0x000001)
class FHairSimulationSolver : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bEnableSimulation                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairSimulationForces
/// Size: 0x0038 (0x000000 - 0x000038)
class FHairSimulationForces : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   GravityVector                                               OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     AirDrag                                                     OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FVector)                                   AirVelocity                                                 OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairSimulationConstraints
/// Size: 0x0020 (0x000000 - 0x000020)
class FHairSimulationConstraints : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     BendDamping                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     BendStiffness                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     StretchDamping                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     StretchStiffness                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     StaticFriction                                              OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     KineticFriction                                             OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     StrandsViscosity                                            OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     CollisionRadius                                             OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairSimulationSetup
/// Size: 0x0028 (0x000000 - 0x000028)
class FHairSimulationSetup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bResetSimulation                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bDebugSimulation                                            OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bLocalSimulation                                            OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(float)                                     LinearVelocityScale                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AngularVelocityScale                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FString)                                   LocalBone                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(float)                                     TeleportDistance                                            OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairSimulationSettings
/// Size: 0x0090 (0x000000 - 0x000090)
class FHairSimulationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bOverrideSettings                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FHairSimulationSetup)                      SimulationSetup                                             OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	SMember(FHairSimulationSolver)                     SolverSettings                                              OFFSET(getStruct<T>, {0x30, 1, 0, 0})
	SMember(FHairSimulationForces)                     ExternalForces                                              OFFSET(getStruct<T>, {0x38, 56, 0, 0})
	SMember(FHairSimulationConstraints)                MaterialConstraints                                         OFFSET(getStruct<T>, {0x70, 32, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairGeometrySettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FHairGeometrySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     HairWidth                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      HairWidth_Override                                          OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(float)                                     HairRootScale                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     HairTipScale                                                OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairShadowSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FHairShadowSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     HairShadowDensity                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     HairRaytracingRadiusScale                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bUseHairRaytracingGeometry                                  OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bVoxelize                                                   OFFSET(get<bool>, {0x9, 1, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairAdvancedRenderingSettings
/// Size: 0x0002 (0x000000 - 0x000002)
class FHairAdvancedRenderingSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bUseStableRasterization                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bScatterSceneLighting                                       OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/HairStrandsCore.HairGroupsRendering
/// Size: 0x0030 (0x000000 - 0x000030)
class FHairGroupsRendering : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     MaterialSlotName                                            OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FHairGeometrySettings)                     GeometrySettings                                            OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FHairShadowSettings)                       ShadowSettings                                              OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FHairAdvancedRenderingSettings)            AdvancedSettings                                            OFFSET(getStruct<T>, {0x2C, 2, 0, 0})
};

/// Struct /Script/HairStrandsCore.GoomBindingGroupInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FGoomBindingGroupInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   RenRootCount                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   RenLODCount                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   SimRootCount                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   SimLODCount                                                 OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/HairStrandsCore.GroomAnimationInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FGroomAnimationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(uint32_t)                                  NumFrames                                                   OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     SecondsPerFrame                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     EndTime                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   StartFrame                                                  OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   EndFrame                                                    OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(EGroomCacheAttributes)                     Attributes                                                  OFFSET(get<T>, {0x1C, 1, 0, 0})
};

/// Struct /Script/HairStrandsCore.GroomCacheInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FGroomCacheInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(EGroomCacheType)                           Type                                                        OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FGroomAnimationInfo)                       AnimationInfo                                               OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/HairStrandsCore.FollicleMaskOptions
/// Size: 0x0010 (0x000000 - 0x000010)
class FFollicleMaskOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UGroomAsset*)                        Groom                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EFollicleMaskChannel)                      Channel                                                     OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/HairStrandsCore.GroomHairGroupPreview
/// Size: 0x0044 (0x000000 - 0x000044)
class FGroomHairGroupPreview : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 68;

public:
	SMember(FName)                                     GroupName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   GroupId                                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   CurveCount                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   GuideCount                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(uint32_t)                                  Attributes                                                  OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(uint32_t)                                  AttributeFlags                                              OFFSET(get<uint32_t>, {0x14, 4, 0, 0})
	DMember(uint32_t)                                  Flags                                                       OFFSET(get<uint32_t>, {0x18, 4, 0, 0})
	SMember(FHairGroupsInterpolation)                  InterpolationSettings                                       OFFSET(getStruct<T>, {0x1C, 40, 0, 0})
};

/// Struct /Script/HairStrandsCore.GroomBuildSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FGroomBuildSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bOverrideGuides                                             OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     HairToGuideDensity                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EGroomInterpolationQuality)                InterpolationQuality                                        OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(EGroomInterpolationWeight)                 InterpolationDistance                                       OFFSET(get<T>, {0x9, 1, 0, 0})
	DMember(bool)                                      bRandomizeGuide                                             OFFSET(get<bool>, {0xA, 1, 0, 0})
	DMember(bool)                                      bUseUniqueGuide                                             OFFSET(get<bool>, {0xB, 1, 0, 0})
};

/// Struct /Script/HairStrandsCore.MovieSceneGroomCacheParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneGroomCacheParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UGroomCache*)                        GroomCache                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FFrameNumber)                              FirstLoopStartFrameOffset                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FFrameNumber)                              StartFrameOffset                                            OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FFrameNumber)                              EndFrameOffset                                              OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bReverse                                                    OFFSET(get<bool>, {0x18, 1, 1, 0})
};

/// Struct /Script/HairStrandsCore.MovieSceneGroomCacheSectionTemplateParameters
/// Size: 0x0008 (0x000020 - 0x000028)
class FMovieSceneGroomCacheSectionTemplateParameters : public FMovieSceneGroomCacheParams
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FFrameNumber)                              SectionStartTime                                            OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FFrameNumber)                              SectionEndTime                                              OFFSET(getStruct<T>, {0x24, 4, 0, 0})
};

/// Struct /Script/HairStrandsCore.MovieSceneGroomCacheSectionTemplate
/// Size: 0x0028 (0x000020 - 0x000048)
class FMovieSceneGroomCacheSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FMovieSceneGroomCacheSectionTemplateParameters) Params                                                 OFFSET(getStruct<T>, {0x20, 40, 0, 0})
};

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

