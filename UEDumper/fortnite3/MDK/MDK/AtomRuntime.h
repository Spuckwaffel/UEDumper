
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GeometryCollectionEngine
/// dependency: StructUtils

/// Class /Script/AtomRuntime.AtomAssetImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomAssetImportData : public UAssetImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AtomRuntime.AtomModelMergedMeshImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomModelMergedMeshImportData : public UAssetImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AtomRuntime.AtomModelGeometryCollectionImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomModelGeometryCollectionImportData : public UAssetImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AtomRuntime.AtomDatabaseSubsystemBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UAtomDatabaseSubsystemBase : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AtomRuntime.AtomModelActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AAtomModelActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(class UAtomModel*)                         AtomModel                                                   OFFSET(get<T>, {0x290, 8, 0, 0})
	SMember(FString)                                   PrimitiveStyleName                                          OFFSET(getStruct<T>, {0x298, 16, 0, 0})
};

/// Class /Script/AtomRuntime.AtomModelAssetUserData
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UAtomModelAssetUserData : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FSerializedConnectivityObjects)            AtomModelConnections                                        OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	SMember(FAtomCommonPartInstancesCache)             CommonPartCache                                             OFFSET(getStruct<T>, {0x48, 80, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/AtomRuntime.AtomCommonPartModelAssetUserData
/// Size: 0x0010 (0x000028 - 0x000038)
class UAtomCommonPartModelAssetUserData : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FAtomCommonPartAssetDescription)           AssetDescription                                            OFFSET(getStruct<T>, {0x28, 12, 0, 0})
};

/// Class /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomPartsCollectionBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.SetName
	// void SetName(FAtomModelPartsCollection& PartsCollection, FString Name);                                                  // [0xbff5580] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.ReplacePartInstance
	// void ReplacePartInstance(FAtomModelPartsCollection& PartCollection, FAtomModelPartInstanceInfo& SourcePartInstance, FAtomModelPartGuid& TargetPartInstanceId); // [0xbff4d04] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.RemovePartInstance
	// void RemovePartInstance(FAtomModelPartsCollection& PartCollection, FAtomModelPartGuid& PartInstanceId);                  // [0xbff4bf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.InitializeCommonParts
	// FAtomModelPartsCollection InitializeCommonParts(FAtomModelPartsCollection& PartsCollection, class UAtomModel* Model, float Scale, bool bRemoveConnectedParts, bool bRemoveAllKnobs, bool bRemoveAllTubes, bool bRemoveAllPins); // [0xbff4510] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.GetPrimitiveCommonParts
	// TArray<FAtomCommonPartAndTransform> GetPrimitiveCommonParts(class UAtomPrimitive* Primitive, double Scale);              // [0xbff41e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.GetParts
	// TArray<FAtomModelPartInstanceInfo> GetParts(FAtomModelPartsCollection& PartsCollection);                                 // [0xbff4120] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.GetName
	// FString GetName(FAtomModelPartsCollection& PartsCollection);                                                             // [0xbff390c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.GetModelPartGuidHash
	// int32_t GetModelPartGuidHash(FAtomModelPartGuid& InModelPartGuid);                                                       // [0xbff384c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.FilterTransparent
	// FAtomModelPartsCollection FilterTransparent(FAtomModelPartsCollection& PartsCollectionToFilter, FString NewPartsCollectionName); // [0xbff28a8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.FilterSelectionSet
	// FAtomModelPartsCollection FilterSelectionSet(FAtomModelPartsCollection& PartsCollectionToFilter, FString SelectionSetName, FString NewPartsCollectionName); // [0xbff1f38] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.FilterNonTransparent
	// FAtomModelPartsCollection FilterNonTransparent(FAtomModelPartsCollection& PartsCollectionToFilter, FString NewPartsCollectionName); // [0xbff16e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.FilterGroup
	// FAtomModelPartsCollection FilterGroup(class UAtomModel* Model, FAtomModelPartsCollection& PartsCollectionToFilter, FString GroupName, FString NewPartsCollectionName); // [0xbff0d2c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.CreateColorInfoFromColorId
	// FAtomModelPartColorInfo CreateColorInfoFromColorId(int32_t ColorId);                                                     // [0xbff0be8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.Conv_StringToModelPartGuid
	// FAtomModelPartGuid Conv_StringToModelPartGuid(FString InString);                                                         // [0xbfefd80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.Conv_ModelPartGuidToString
	// FString Conv_ModelPartGuidToString(FAtomModelPartGuid& InModelPartGuid);                                                 // [0xbfefccc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary.AddPartInstance
	// void AddPartInstance(FAtomModelPartsCollection& PartCollection, FAtomModelPartInstanceInfo& PartInstance);               // [0xbfeef34] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AtomRuntime.AtomPrimitiveBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomPrimitiveBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AtomRuntime.AtomPrimitiveBlueprintLibrary.GetDefaultPrimitiveScale
	// float GetDefaultPrimitiveScale();                                                                                        // [0xbff37e8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AtomRuntime.AtomPrimitiveGeometry
/// Size: 0x02C0 (0x000028 - 0x0002E8)
class UAtomPrimitiveGeometry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:


	/// Functions
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.ToSimplifiedStaticMesh
	// class UStaticMesh* ToSimplifiedStaticMesh(float Scale, class UObject* Outer, FString Name, bool bFastBuild);             // [0xbff5f84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.SplitByPolygonGroup
	// TArray<UAtomPrimitiveGeometry*> SplitByPolygonGroup();                                                                   // [0xbff5f18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.SetVertexColor
	// class UAtomPrimitiveGeometry* SetVertexColor(FColor& Color);                                                             // [0xbff5e44] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.SetTiledUVs
	// class UAtomPrimitiveGeometry* SetTiledUVs(float TileSize);                                                               // [0xbff5db4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.SetMaterialName
	// class UAtomPrimitiveGeometry* SetMaterialName(FString Name, int32_t PolygonGroupIndex);                                  // [0xbff4e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.GetNumberOfCommonPartLODs
	// int32_t GetNumberOfCommonPartLODs(FString ExportStyleName, EAtomCommonPartType CommonPartType, FString CommonPartsMeshPath); // [0xbff39e8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.GetMaterialNames
	// TArray<FString> GetMaterialNames();                                                                                      // [0xbff3810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.GetBoneIndexForName
	// int32_t GetBoneIndexForName(FString BoneName);                                                                           // [0xbff3100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.DuplicateGeometry
	// class UAtomPrimitiveGeometry* DuplicateGeometry();                                                                       // [0xbff0cf0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.CreateEmptyAtomGeometry
	// class UAtomPrimitiveGeometry* CreateEmptyAtomGeometry();                                                                 // [0xbff0c9c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.CreateAtomGeometryFromCommonPart
	// class UAtomPrimitiveGeometry* CreateAtomGeometryFromCommonPart(FString ExportStyleName, EAtomCommonPartType CommonPartType, int32_t LODIndex, FString CommonPartsMeshPath); // [0xbff047c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.BakeTransforms
	// class UAtomPrimitiveGeometry* BakeTransforms(TArray<FTransform3f>& Transforms);                                          // [0xbfefc20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.BakeTransform
	// class UAtomPrimitiveGeometry* BakeTransform(FTransform3f& Transform);                                                    // [0xbfefb54] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.BakeScale
	// class UAtomPrimitiveGeometry* BakeScale(float Scale);                                                                    // [0xbfefac4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.AttachVerticesToNamedBone
	// void AttachVerticesToNamedBone(FString BoneName);                                                                        // [0xbfef3d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.AttachVerticesToBoneIndex
	// void AttachVerticesToBoneIndex(int32_t BoneIndex);                                                                       // [0xbfef354] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.AppendAndWeld
	// class UAtomPrimitiveGeometry* AppendAndWeld(class UAtomPrimitiveGeometry* GeometryToAppend, FTransform3f& Transform);    // [0xbfef1b4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometry.Append
	// class UAtomPrimitiveGeometry* Append(class UAtomPrimitiveGeometry* GeometryToAppend, FTransform3f& Transform);           // [0xbfef064] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AtomRuntime.AtomPrimitiveGeometryContainer
/// Size: 0x00D8 (0x000028 - 0x000100)
class UAtomPrimitiveGeometryContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TWeakObjectPtr<UStaticMesh*>)              SourceMesh                                                  OFFSET(get<T>, {0x28, 32, 0, 0})
	SMember(FString)                                   ExportStyleName                                             OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	DMember(int32_t)                                   LOD                                                         OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	CMember(TMap<FString, int32_t>)                    GeometryCount                                               OFFSET(get<T>, {0x60, 80, 0, 0})


	/// Functions
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.MakePrimitiveCollisionGeometry
	// FAtomPrimitiveCollisionGeometry MakePrimitiveCollisionGeometry(float Scale);                                             // [0xbffa190] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.HasCollisionGeometry
	// bool HasCollisionGeometry();                                                                                             // [0xbffa16c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetShellGeometry
	// FAtomPrimitiveGeometryAndTransform GetShellGeometry();                                                                   // [0xbff9ef4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetScaledShellGeometry
	// FAtomPrimitiveGeometryAndTransform GetScaledShellGeometry(float Scale);                                                  // [0xbff9e40] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetScaledGeometry
	// class UAtomPrimitiveGeometry* GetScaledGeometry(EPrimitiveGeometryComplexity PrimitiveGeometryComplexity, float Scale);  // [0xbff9d7c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetScaledDetailsGeometry
	// TArray<FAtomPrimitiveGeometryAndTransform> GetScaledDetailsGeometry(float Scale);                                        // [0xbff9cd4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetScaledCollisionGeometry
	// TArray<FAtomPrimitiveGeometryAndTransform> GetScaledCollisionGeometry(float Scale);                                      // [0xbff9c2c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetScaledCapsGeometry
	// TArray<FAtomPrimitiveGeometryAndTransform> GetScaledCapsGeometry(float Scale);                                           // [0xbff9b84] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetPartsGeometry
	// TArray<FAtomPrimitiveGeometryAndTransform> GetPartsGeometry();                                                           // [0xbff9944] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetLOD
	// int32_t GetLOD();                                                                                                        // [0x6aeeda0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetGeometryWithMaterialNames
	// class UAtomPrimitiveGeometry* GetGeometryWithMaterialNames(EPrimitiveGeometryComplexity PrimitiveGeometryComplexity, FString ShellMaterial, FString UndersideMaterial); // [0xbff8f44] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetGeometry
	// class UAtomPrimitiveGeometry* GetGeometry(EPrimitiveGeometryComplexity PrimitiveGeometryComplexity);                     // [0xbff8eb4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetExportStyleName
	// FString GetExportStyleName();                                                                                            // [0xb015adc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetDetailsGeometry
	// TArray<FAtomPrimitiveGeometryAndTransform> GetDetailsGeometry();                                                         // [0xbff8d34] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetDefaultBoneTransforms
	// TArray<FTransform> GetDefaultBoneTransforms(float Scale);                                                                // [0xbff8c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetCollisionGeometry
	// TArray<FAtomPrimitiveGeometryAndTransform> GetCollisionGeometry();                                                       // [0xbff8378] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomPrimitiveGeometryContainer.GetCapsGeometry
	// TArray<FAtomPrimitiveGeometryAndTransform> GetCapsGeometry();                                                            // [0xbff8140] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AtomRuntime.AtomRuntimeBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomRuntimeBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AtomRuntime.AtomRuntimeBlueprintLibrary.GetInfoForColorId
	// FAtomColorInfo GetInfoForColorId(int32_t ColorId);                                                                       // [0xbff9694] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomRuntimeBlueprintLibrary.GetCommonPartDescriptionFromType
	// void GetCommonPartDescriptionFromType(EAtomCommonPartType CommonPartType, FAtomCommonPartDescription& OutDescription);   // [0xbff85d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomRuntimeBlueprintLibrary.GetCommonPartCategoryFromType
	// EAtomCommonPartCategory GetCommonPartCategoryFromType(EAtomCommonPartType CommonPartType);                               // [0xbff8558] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomRuntimeBlueprintLibrary.GetCommonPartAssetDescriptionFromStaticMesh
	// void GetCommonPartAssetDescriptionFromStaticMesh(class UStaticMesh* StaticMesh, FAtomCommonPartAssetDescription& OutDescription, EGetCommonPartDescriptionResult& OutIsValid); // [0xbff83d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomRuntimeBlueprintLibrary.GetBitPackForColorId
	// int32_t GetBitPackForColorId(int32_t AtomColorId);                                                                       // [0xbff8088] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomRuntimeBlueprintLibrary.GetBitPackForColor
	// int32_t GetBitPackForColor(FColor& Color);                                                                               // [0xbff7fb4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.AtomRuntimeBlueprintLibrary.GetAllColorInfo
	// TMap<int32_t, FAtomColorInfo> GetAllColorInfo();                                                                         // [0xbff7e90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AtomRuntime.AtomRuntimeSettings
/// Size: 0x0030 (0x000030 - 0x000060)
class UAtomRuntimeSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     PrimitiveGlobalScale                                        OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               ColorDataTableOverride                                      OFFSET(get<T>, {0x38, 32, 0, 0})
	DMember(bool)                                      bEnableWorldConnectivity                                    OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bCookContent                                                OFFSET(get<bool>, {0x59, 1, 0, 0})


	/// Functions
	// Function /Script/AtomRuntime.AtomRuntimeSettings.GetColorDataTable
	// class UDataTable* GetColorDataTable();                                                                                   // [0xbff83b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AtomRuntime.WorldConnectivitySubsystem
/// Size: 0x0150 (0x000030 - 0x000180)
class UWorldConnectivitySubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:


	/// Functions
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.UnregisterConnectivityActor
	// void UnregisterConnectivityActor(class AActor* Actor);                                                                   // [0xbffb204] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.TryConnectObjectAtLocation
	// bool TryConnectObjectAtLocation(FWorldConnectivityHandle ObjectToConnect, FTransform& DesiredObjectTransform, TArray<FWorldConnectivityHandle>& ConnectionCandidates, bool PerformConnection); // [0xbffa910] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.RunPlanarConnectivityQuery
	// TArray<FConnectivityQueryResult> RunPlanarConnectivityQuery(class AActor* AtomModelActorToPlace, class AActor* AtomModelActorToConnect, FVector& QueryStartLocation, FVector& QueryEndLocation, TEnumAsByte<ECollisionChannel> QueryCollisionChannel, int32_t QueryRadius); // [0xbffa42c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.RegisterModelActor
	// void RegisterModelActor(class AActor* Actor, FSerializedConnectivityObjects& Connections);                               // [0xbffa338] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.RegisterCustomConnectivityActor
	// void RegisterCustomConnectivityActor(class AActor* Actor, FSerializedConnectivityObjects& ConnectivityObject);           // [0xbffa338] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.RegisterConnectivityActor
	// void RegisterConnectivityActor(class AActor* Actor, class UAtomModel* Model);                                            // [0xbffa268] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.PlanarGridStepSize
	// double PlanarGridStepSize();                                                                                             // [0xbffa248] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetTransform
	// FTransform GetTransform(FWorldConnectivityHandle Handle);                                                                // [0xbffa0b4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetPlanarFields
	// TArray<FPlanarFieldInfo> GetPlanarFields(FWorldConnectivityHandle Handle, EConnectionFieldGender Type);                  // [0xbff9a5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetPlanarFieldCenter
	// FVector GetPlanarFieldCenter(FPlanarFieldInfo& Field);                                                                   // [0xbff9980] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetOverlapPenetrationDepth
	// FVector GetOverlapPenetrationDepth(class AStaticMeshActor* Actor1, class AStaticMeshActor* Actor2, FVector Offset);      // [0xbff9740] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetConnectivityHandles
	// TArray<FWorldConnectivityHandle> GetConnectivityHandles(class AActor* Actor);                                            // [0xbff8a4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetConnectivityHandle
	// FWorldConnectivityHandle GetConnectivityHandle(class AActor* Actor);                                                     // [0xbff8814] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetConnectedObjectsRecursively
	// TArray<FWorldConnectivityHandle> GetConnectedObjectsRecursively(FWorldConnectivityHandle Object);                        // [0xbff876c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetConnectedObjects
	// TArray<FWorldConnectivityHandle> GetConnectedObjects(FWorldConnectivityHandle Object);                                   // [0xbff86c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetClosestFieldToPoint
	// FPlanarFieldInfo GetClosestFieldToPoint(FWorldConnectivityHandle Handle, FVector& WorldLocation, EConnectionFieldGender Type, bool& bSuccess); // [0xbff817c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetAtomModelAssetUserData
	// class UAtomModelAssetUserData* GetAtomModelAssetUserData(class UObject* Object);                                         // [0xbff7f34] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.GetActor
	// class AActor* GetActor(FWorldConnectivityHandle Handle);                                                                 // [0xbff7e00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.DisconnectObjects
	// void DisconnectObjects(FWorldConnectivityHandle ObjectA, FWorldConnectivityHandle ObjectB);                              // [0xbff7c38] Final|Native|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.WorldConnectivitySubsystem.DisconnectAllObjectConnections
	// void DisconnectAllObjectConnections(FWorldConnectivityHandle Object);                                                    // [0xbff7bb8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AtomRuntime.WorldConnectivityBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWorldConnectivityBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AtomRuntime.WorldConnectivityBlueprintLibrary.IsValid
	// bool IsValid(FWorldConnectivityHandle& Handle);                                                                          // [0xad2f804] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.WorldConnectivityBlueprintLibrary.GetTransform
	// FTransform GetTransform(class UObject* WorldContext, FWorldConnectivityHandle& Handle);                                  // [0xbff9f64] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.WorldConnectivityBlueprintLibrary.GetFieldCenter
	// FVector GetFieldCenter(class UObject* WorldContext, FPlanarFieldInfo& Field);                                            // [0xbff8d70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AtomRuntime.WorldConnectivityBlueprintLibrary.GetActor
	// class AActor* GetActor(class UObject* WorldContext, FWorldConnectivityHandle& Handle);                                   // [0xbff7d08] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AtomRuntime.AtomISMPoolRenderer
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UAtomISMPoolRenderer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(class AGeometryCollectionISMPoolActor*)    ISMPoolActor                                                OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/AtomRuntime.AtomModel
/// Size: 0x0220 (0x000028 - 0x000248)
class UAtomModel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	SMember(FAtomModelAssetSettings)                   Settings                                                    OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	CMember(TArray<FAtomModelPrimitive>)               Primitives                                                  OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FAtomHingedElement>)                Elements                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FAtomModelSelectionSet>)            SelectionSets                                               OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FAtomModelConfigurationGroup>)      Groups                                                      OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TMap<EAtomCommonPartType, TWeakObjectPtr<UStaticMesh*>>) CommonPartOverrides                           OFFSET(get<T>, {0x90, 80, 0, 0})
	DMember(char)                                      CommonPartOptimization                                      OFFSET(get<char>, {0xE0, 1, 0, 0})
	SMember(FSerializedConnectivityObjects)            SerializedConnectivityObjects                               OFFSET(getStruct<T>, {0xE8, 32, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr<UTexture*>>)  TextureNameToAsset                                          OFFSET(get<T>, {0x108, 80, 0, 0})
	SMember(FAtomSourceModel)                          SourceModel                                                 OFFSET(getStruct<T>, {0x1A8, 160, 0, 0})


	/// Functions
	// Function /Script/AtomRuntime.AtomModel.GetTextureForDecorationTextureName
	// class UTexture* GetTextureForDecorationTextureName(FString TextureName);                                                 // [0xc02228c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomModel.GetPrimitivesForChildArray
	// void GetPrimitivesForChildArray(int32_t InChildIdx, TArray<FAtomModelPrimitiveInstance>& OutPrimitives);                 // [0xc021a38] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomModel.GetPartsCollection
	// FAtomModelPartsCollection GetPartsCollection();                                                                          // [0xc0219d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomModel.GetModelPath
	// FString GetModelPath();                                                                                                  // [0xc021878] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomModel.GetModelName
	// FString GetModelName();                                                                                                  // [0xc021838] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomModel.GetGeneratedMergedMeshes
	// TArray<TWeakObjectPtr<UStaticMesh*>> GetGeneratedMergedMeshes();                                                         // [0xc020e2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomModel.GetChildIdentifier
	// FString GetChildIdentifier(int32_t InChildIdx);                                                                          // [0xc020778] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AtomRuntime.AtomModelComponent
/// Size: 0x00A0 (0x000220 - 0x0002C0)
class UAtomModelComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(class UAtomModel*)                         AtomModel                                                   OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(EAtomModelInstanceType)                    InstanceType                                                OFFSET(get<T>, {0x228, 1, 0, 0})
	SMember(FString)                                   RenderStyle                                                 OFFSET(getStruct<T>, {0x230, 16, 0, 0})
	SMember(FString)                                   FallbackRenderStyle                                         OFFSET(getStruct<T>, {0x240, 16, 0, 0})
	DMember(bool)                                      bUseRenderStyle                                             OFFSET(get<bool>, {0x250, 1, 0, 0})
	DMember(bool)                                      bUseFallbackRenderStyle                                     OFFSET(get<bool>, {0x251, 1, 0, 0})
	DMember(bool)                                      bUseCombinedMeshes                                          OFFSET(get<bool>, {0x252, 1, 0, 0})
	DMember(bool)                                      bUseColorPayload                                            OFFSET(get<bool>, {0x253, 1, 0, 0})
	DMember(bool)                                      bCreateRigidElements                                        OFFSET(get<bool>, {0x254, 1, 0, 0})
	DMember(bool)                                      bEnableConnectivity                                         OFFSET(get<bool>, {0x255, 1, 0, 0})
	DMember(bool)                                      bUseAtomDefaultMaterials                                    OFFSET(get<bool>, {0x256, 1, 0, 0})
	SMember(FName)                                     SelectionSetFilter                                          OFFSET(getStruct<T>, {0x258, 4, 0, 0})
	DMember(char)                                      CommonPartOptimization                                      OFFSET(get<char>, {0x25C, 1, 0, 0})
	CMember(TArray<class USceneComponent*>)            RigidElementComponents                                      OFFSET(get<T>, {0x260, 16, 0, 0})
	CMember(TMap<FName, FModelPrimitiveEntry>)         ComponentToPrimitive                                        OFFSET(get<T>, {0x270, 80, 0, 0})
};

/// Class /Script/AtomRuntime.AtomPrimitiveComponent
/// Size: 0x0030 (0x0005C0 - 0x0005F0)
class UAtomPrimitiveComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
	CMember(class UAtomPrimitive*)                     AtomPrimitive                                               OFFSET(get<T>, {0x5C0, 8, 0, 0})
	SMember(FString)                                   RenderStyle                                                 OFFSET(getStruct<T>, {0x5C8, 16, 0, 0})
	SMember(FString)                                   FallbackRenderStyle                                         OFFSET(getStruct<T>, {0x5D8, 16, 0, 0})
	DMember(bool)                                      bUseCombinedMeshes                                          OFFSET(get<bool>, {0x5E8, 1, 0, 0})
	DMember(bool)                                      bUseRenderStyle                                             OFFSET(get<bool>, {0x5E9, 1, 0, 0})
	DMember(bool)                                      bUseFallbackRenderStyle                                     OFFSET(get<bool>, {0x5EA, 1, 0, 0})
};

/// Class /Script/AtomRuntime.AtomModelProcessor
/// Size: 0x0030 (0x000028 - 0x000058)
class UAtomModelProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bEnableRebuildProgress                                      OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     DialogDelay                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   NumProgressSteps                                            OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FString)                                   ProgressMessage                                             OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/AtomRuntime.AtomModelProcessor.OnProcessPrimitive
	// FAtomProcessorResult OnProcessPrimitive(class UAtomModel* DummyModel, class UAtomPrimitive* Primitive, FAtomModelPartsCollection& AtomModelPartsCollection, FAtomOnProcessPrimitiveSettings& Settings); // [0x1340978] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AtomRuntime.AtomModelProcessor.OnProcessModel
	// FAtomProcessorResult OnProcessModel(class UAtomModel* Model, FAtomModelPartsCollection& AtomModelPartsCollection, TArray<TWeakObjectPtr<UObject*>>& ExistingObjects); // [0x1340978] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AtomRuntime.AtomModelProcessor.OnGetTargetAssetPath
	// FString OnGetTargetAssetPath(class UAtomModel* Model, class UAtomPrimitive* Primitive, FAtomModelPartsCollection& AtomModelPartsCollection); // [0x1340978] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AtomRuntime.AtomModelProcessor.OnGetProcessPrimitiveTargetAssetPath
	// FString OnGetProcessPrimitiveTargetAssetPath(class UAtomModel* Model, class UAtomPrimitive* Primitive, FAtomModelPartsCollection& AtomModelPartsCollection, FAtomOnProcessPrimitiveSettings& Settings); // [0x1340978] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AtomRuntime.AtomModelProcessor.OnGetProcessModelTargetAssetPath
	// FString OnGetProcessModelTargetAssetPath(class UAtomModel* Model, FAtomModelPartsCollection& AtomModelPartsCollection);  // [0x1340978] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AtomRuntime.AtomModelProcessor.IncrementProgress
	// void IncrementProgress(int32_t NumSteps, FString Message);                                                               // [0xc02296c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AtomRuntime.AtomProcessorBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAtomProcessorBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AtomRuntime.AtomProcessorBlueprintLibrary.SetModelProcessor
	// void SetModelProcessor(FAtomModelProcessorInstance& ProcessorInstance, class UAtomModelProcessor* ModelProcessor, bool bUseCustomSettings); // [0xc0231a4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomProcessorBlueprintLibrary.IsValid
	// bool IsValid(FAtomModelProcessorInstance& ProcessorInstance);                                                            // [0xc0230d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomProcessorBlueprintLibrary.GetProcessorClass
	// class UClass* GetProcessorClass(FAtomModelProcessorInstance& ProcessorInstance);                                         // [0xc022134] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomProcessorBlueprintLibrary.GetModelProcessor
	// class UAtomModelProcessor* GetModelProcessor(FAtomModelProcessorInstance& ProcessorInstance);                            // [0xc0218dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomProcessorBlueprintLibrary.AppendAtomProcessorResult
	// FAtomProcessorResult AppendAtomProcessorResult(FAtomProcessorResult& Result, FAtomProcessorResult& ResultToAppend);      // [0xc02052c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AtomRuntime.AtomPrimitive
/// Size: 0x01C8 (0x000028 - 0x0001F0)
class UAtomPrimitive : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	DMember(int32_t)                                   PartId                                                      OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FString)                                   PartRevision                                                OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FName)                                     DesignName                                                  OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	DMember(bool)                                      bIsFlex                                                     OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(bool)                                      bIsVariant                                                  OFFSET(get<bool>, {0x45, 1, 0, 0})
	CMember(TArray<FString>)                           DecorationSurfaceNames                                      OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(int32_t)                                   NumberOfColorSurfaces                                       OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	CMember(EAtomPlatform)                             AtomPlatform                                                OFFSET(get<T>, {0x5C, 1, 0, 0})
	DMember(int32_t)                                   AtomMainGroupId                                             OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   AtomSubMainGroupId                                          OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	CMember(TMap<EAtomCommonPartType, FAtomPrimitiveCommonPart>) PrimitiveCommonParts                              OFFSET(get<T>, {0x68, 80, 0, 0})
	CMember(TMap<FName, FAtomPrimitiveCommonPart>)     CommonParts                                                 OFFSET(get<T>, {0xB8, 80, 0, 0})
	DMember(bool)                                      bOverrideConnectionFields                                   OFFSET(get<bool>, {0x108, 1, 0, 0})
	SMember(FBoxSphereBounds)                          Bounds                                                      OFFSET(getStruct<T>, {0x110, 56, 0, 0})
	SMember(FBoxSphereBounds)                          UnscaledBounds                                              OFFSET(getStruct<T>, {0x148, 56, 0, 0})
	CMember(TArray<class UAtomPrimitiveGeometryContainer*>) GeometryContainers                                     OFFSET(get<T>, {0x180, 16, 0, 0})
	SMember(FConnectionFieldContainer)                 ConnectionFields                                            OFFSET(getStruct<T>, {0x190, 48, 0, 0})
	SMember(FConnectionFieldContainer)                 ConnectionFieldsOverride                                    OFFSET(getStruct<T>, {0x1C0, 48, 0, 0})


	/// Functions
	// Function /Script/AtomRuntime.AtomPrimitive.IsFlexElement
	// bool IsFlexElement();                                                                                                    // [0xc0230c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomPrimitive.GetSubMainGroupName
	// FName GetSubMainGroupName(int32_t SubMainGroupId);                                                                       // [0xc022208] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitive.GetMainGroupName
	// FName GetMainGroupName(int32_t MainGroupId);                                                                             // [0xc0217b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AtomRuntime.AtomPrimitive.GetGeometryContainerForExportStyle
	// class UAtomPrimitiveGeometryContainer* GetGeometryContainerForExportStyle(FString ExportStyleName, FString FallbackExportStyleName, int32_t LODIndex); // [0xc021064] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomPrimitive.GetGeometryContainerForBestExportStyle
	// class UAtomPrimitiveGeometryContainer* GetGeometryContainerForBestExportStyle(TArray<FString>& GeometryStylePriorityList, int32_t LODIndex); // [0xc020eb8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AtomRuntime.AtomPrimitive.GetBounds
	// FBoxSphereBounds GetBounds(float Scale);                                                                                 // [0xc0206c4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AtomRuntime.AtomColorInfo
/// Size: 0x0020 (0x000008 - 0x000028)
class FAtomColorInfo : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(EAtomMaterialType)                         MaterialType                                                OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bIsActive                                                   OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomMergedMeshLODDistanceSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FAtomMergedMeshLODDistanceSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bOverrideLODScreenSizes                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     BaseLODScreenSize                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     BaseLODScreenSizeScaling                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TArray<float>)                             LODDistances                                                OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.CommonPartInstanceDescription
/// Size: 0x0040 (0x000000 - 0x000040)
class FCommonPartInstanceDescription : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FTransform3f)                              Transform                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(int16_t)                                   MeshIdx                                                     OFFSET(get<int16_t>, {0x30, 2, 0, 0})
	DMember(int16_t)                                   MaterialIdx                                                 OFFSET(get<int16_t>, {0x32, 2, 0, 0})
	DMember(int16_t)                                   UUIDIdx                                                     OFFSET(get<int16_t>, {0x34, 2, 0, 0})
	DMember(uint16_t)                                  ColorId                                                     OFFSET(get<uint16_t>, {0x36, 2, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomCommonPartInstancesCache
/// Size: 0x0050 (0x000000 - 0x000050)
class FAtomCommonPartInstancesCache : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<class UStaticMesh*>)                Meshes                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         Materials                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FGuid>)                             UUIDs                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FCommonPartInstanceDescription>)    Instances                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FTransform3f>)                      InstanceTransforms                                          OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveMaterialAssignement
/// Size: 0x0028 (0x000000 - 0x000028)
class FAtomPrimitiveMaterialAssignement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     SlotName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       Material                                                    OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
class FAtomPrimitiveInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FAtomPrimitiveMaterialAssignement>) MaterialAssignments                                         OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              MeshOverride                                                OFFSET(get<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomCommonPartAssetDescription
/// Size: 0x000C (0x000000 - 0x00000C)
class FAtomCommonPartAssetDescription : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EAtomCommonPartType)                       CommonPartType                                              OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     CommonPartStyle                                             OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelPartGuid
/// Size: 0x0014 (0x000000 - 0x000014)
class FAtomModelPartGuid : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   PartIndex                                                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelPartColorInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FAtomModelPartColorInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ColorId                                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(EAtomMaterialType)                         MaterialType                                                OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelPartDecorationInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FAtomModelPartDecorationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UTexture*)                           Texture                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FString)                                   PrimitiveSurfaceName                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   PrimitiveSurfaceIndex                                       OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomCommonPartAndTransform
/// Size: 0x0070 (0x000000 - 0x000070)
class FAtomCommonPartAndTransform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(EAtomCommonPartType)                       Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelPartInstanceInfo
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FAtomModelPartInstanceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FAtomModelPartGuid)                        PartGuid                                                    OFFSET(getStruct<T>, {0x0, 20, 0, 0})
	DMember(int32_t)                                   PartId                                                      OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(class UAtomPrimitive*)                     Primitive                                                   OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FAtomModelPartDecorationInfo>)      Decorations                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FAtomModelPartColorInfo>)           Colors                                                      OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FString>)                           SelectionSets                                               OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   Group                                                       OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   ParentGroup                                                 OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(TArray<FAtomCommonPartAndTransform>)       CommonParts                                                 OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(bool)                                      bIsUndersideVisible                                         OFFSET(get<bool>, {0x98, 1, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelPartsCollection
/// Size: 0x0080 (0x000000 - 0x000080)
class FAtomModelPartsCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FTransform)                                Pivot                                                       OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	CMember(TArray<FAtomModelPartInstanceInfo>)        Parts                                                       OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveCollisionVolumeBase
/// Size: 0x0020 (0x000000 - 0x000020)
class FAtomPrimitiveCollisionVolumeBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(uint16_t)                                  BoneIndex                                                   OFFSET(get<uint16_t>, {0x18, 2, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveCollisionVolumeBox
/// Size: 0x0030 (0x000020 - 0x000050)
class FAtomPrimitiveCollisionVolumeBox : public FAtomPrimitiveCollisionVolumeBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   HalfExtent                                                  OFFSET(getStruct<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveCollisionVolumeCapsule
/// Size: 0x0020 (0x000020 - 0x000040)
class FAtomPrimitiveCollisionVolumeCapsule : public FAtomPrimitiveCollisionVolumeBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     HalfLength                                                  OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveCollisionVolumeCylinder
/// Size: 0x0020 (0x000020 - 0x000040)
class FAtomPrimitiveCollisionVolumeCylinder : public FAtomPrimitiveCollisionVolumeBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     HalfLength                                                  OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveCollisionVolumeTube
/// Size: 0x0028 (0x000020 - 0x000048)
class FAtomPrimitiveCollisionVolumeTube : public FAtomPrimitiveCollisionVolumeBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     InnerRadius                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     OuterRadius                                                 OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     HalfLength                                                  OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveCollisionVolumeSphere
/// Size: 0x0008 (0x000020 - 0x000028)
class FAtomPrimitiveCollisionVolumeSphere : public FAtomPrimitiveCollisionVolumeBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveCollisionVolumeContainer
/// Size: 0x0050 (0x000000 - 0x000050)
class FAtomPrimitiveCollisionVolumeContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FAtomPrimitiveCollisionVolumeBox>)  Boxes                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FAtomPrimitiveCollisionVolumeSphere>) Spheres                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FAtomPrimitiveCollisionVolumeCapsule>) Capsules                                                 OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FAtomPrimitiveCollisionVolumeCylinder>) Cylinders                                               OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FAtomPrimitiveCollisionVolumeTube>) Tubes                                                       OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveCollisionGeometry
/// Size: 0x0080 (0x000000 - 0x000080)
class FAtomPrimitiveCollisionGeometry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FKAggregateGeom)                           AggGeom                                                     OFFSET(getStruct<T>, {0x0, 128, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveGeometryLODs
/// Size: 0x0098 (0x000000 - 0x000098)
class FAtomPrimitiveGeometryLODs : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<class UAtomPrimitiveGeometry*>)     GeometryLODs                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(class UAtomPrimitiveGeometry*)             HiResNaniteGeomery                                          OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FAtomPrimitiveCollisionGeometry)           Collision                                                   OFFSET(getStruct<T>, {0x18, 128, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveGeometryAndTransform
/// Size: 0x0040 (0x000000 - 0x000040)
class FAtomPrimitiveGeometryAndTransform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UAtomPrimitiveGeometry*)             AtomPrimitiveGeometry                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform3f)                              Transform                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
};

/// Struct /Script/AtomRuntime.ConnectionField
/// Size: 0x0040 (0x000000 - 0x000040)
class FConnectionField : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(uint32_t)                                  Subtype                                                     OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
	DMember(uint16_t)                                  BoneIndex                                                   OFFSET(get<uint16_t>, {0x3C, 2, 0, 0})
	CMember(EConnectionFieldType)                      Type                                                        OFFSET(get<T>, {0x3E, 1, 0, 0})
};

/// Struct /Script/AtomRuntime.ConnectionFieldLine
/// Size: 0x0010 (0x000040 - 0x000050)
class FConnectionFieldLine : public FConnectionField
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(double)                                    Length                                                      OFFSET(get<double>, {0x40, 8, 0, 0})
	DMember(bool)                                      StartCapped                                                 OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      EndCapped                                                   OFFSET(get<bool>, {0x49, 1, 0, 0})
};

/// Struct /Script/AtomRuntime.ConnectionFieldAxle
/// Size: 0x0010 (0x000050 - 0x000060)
class FConnectionFieldAxle : public FConnectionFieldLine
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      Grabbing                                                    OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      RequireGrabbing                                             OFFSET(get<bool>, {0x51, 1, 0, 0})
	DMember(float)                                     DiscreteSnapInterval                                        OFFSET(get<float>, {0x54, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.ConnectionFieldPoint
/// Size: 0x0000 (0x000040 - 0x000040)
class FConnectionFieldPoint : public FConnectionField
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/AtomRuntime.ConnectionFieldBall
/// Size: 0x0000 (0x000040 - 0x000040)
class FConnectionFieldBall : public FConnectionFieldPoint
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/AtomRuntime.ConnectionFieldContainer
/// Size: 0x0030 (0x000000 - 0x000030)
class FConnectionFieldContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FConnectionFieldPlanar>)            PlanarFields                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FInstancedStruct>)                  LineFields                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FInstancedStruct>)                  PointFields                                                 OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.ConnectionFieldPlanar
/// Size: 0x0020 (0x000040 - 0x000060)
class FConnectionFieldPlanar : public FConnectionField
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(char)                                      Width                                                       OFFSET(get<char>, {0x40, 1, 0, 0})
	DMember(char)                                      Height                                                      OFFSET(get<char>, {0x41, 1, 0, 0})
	CMember(TArray<FConnectionPoint>)                  Points                                                      OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.ConnectionPoint
/// Size: 0x0008 (0x000000 - 0x000008)
class FConnectionPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EConnectionPointFlags)                     Flags                                                       OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(EConnectionPointType)                      Type                                                        OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(char)                                      Size                                                        OFFSET(get<char>, {0x5, 1, 0, 0})
};

/// Struct /Script/AtomRuntime.ConnectionFieldFixed
/// Size: 0x0010 (0x000040 - 0x000050)
class FConnectionFieldFixed : public FConnectionFieldPoint
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(uint32_t)                                  Axes                                                        OFFSET(get<uint32_t>, {0x40, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.ConnectionFieldGear
/// Size: 0x0010 (0x000050 - 0x000060)
class FConnectionFieldGear : public FConnectionFieldLine
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(double)                                    Radius                                                      OFFSET(get<double>, {0x50, 8, 0, 0})
	DMember(uint32_t)                                  ToothCount                                                  OFFSET(get<uint32_t>, {0x58, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.ConnectionFieldHinge
/// Size: 0x0030 (0x000040 - 0x000070)
class FConnectionFieldHinge : public FConnectionFieldPoint
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      Oriented                                                    OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      Flip                                                        OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      HasLimits                                                   OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      RequireGrabbing                                             OFFSET(get<bool>, {0x43, 1, 0, 0})
	DMember(double)                                    OrientedMin                                                 OFFSET(get<double>, {0x48, 8, 0, 0})
	DMember(double)                                    OrientedMax                                                 OFFSET(get<double>, {0x50, 8, 0, 0})
	DMember(double)                                    FlippedMin                                                  OFFSET(get<double>, {0x58, 8, 0, 0})
	DMember(double)                                    FlippedMax                                                  OFFSET(get<double>, {0x60, 8, 0, 0})
};

/// Struct /Script/AtomRuntime.ConnectionFieldSlider
/// Size: 0x0020 (0x000050 - 0x000070)
class FConnectionFieldSlider : public FConnectionFieldLine
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      Cylindrical                                                 OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      HasSpring                                                   OFFSET(get<bool>, {0x51, 1, 0, 0})
	DMember(double)                                    SpringRest                                                  OFFSET(get<double>, {0x58, 8, 0, 0})
	DMember(double)                                    SpringStrength                                              OFFSET(get<double>, {0x60, 8, 0, 0})
	DMember(double)                                    SpringDamping                                               OFFSET(get<double>, {0x68, 8, 0, 0})
};

/// Struct /Script/AtomRuntime.SerializedPlanarConnection
/// Size: 0x0030 (0x000000 - 0x000030)
class FSerializedPlanarConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FPlanarFieldConnectionInfo)                Connection                                                  OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FConnectivityFieldReference)               FieldA                                                      OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	SMember(FConnectivityFieldReference)               FieldB                                                      OFFSET(getStruct<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/AtomRuntime.ConnectivityFieldReference
/// Size: 0x0008 (0x000000 - 0x000008)
class FConnectivityFieldReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   ObjectId                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(uint16_t)                                  FieldIndex                                                  OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
};

/// Struct /Script/AtomRuntime.PlanarFieldConnectionInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FPlanarFieldConnectionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FPlanarFieldPointConnectionInfo>)   PointConnections                                            OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(EFieldConnectResult)                       ConnectResult                                               OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(uint32_t)                                  OverlapA                                                    OFFSET(get<uint32_t>, {0x14, 4, 0, 0})
	DMember(uint32_t)                                  OverlapB                                                    OFFSET(get<uint32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.PlanarFieldPointConnectionInfo
/// Size: 0x0004 (0x000000 - 0x000004)
class FPlanarFieldPointConnectionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint16_t)                                  IndexA                                                      OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  IndexB                                                      OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/AtomRuntime.SerializedConnectivityObjects
/// Size: 0x0020 (0x000000 - 0x000020)
class FSerializedConnectivityObjects : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FConnectionFieldContainer>)         Fields                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FSerializedPlanarConnection>)       PlanarConnections                                           OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.PlanarFieldPointInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FPlanarFieldPointInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   PointLocation                                               OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(EConnectionPointType)                      PointType                                                   OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      IsAvailable                                                 OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Struct /Script/AtomRuntime.PlanarFieldInfo
/// Size: 0x0090 (0x000000 - 0x000090)
class FPlanarFieldInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FVector2D)                                 Size                                                        OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	CMember(EConnectionFieldGender)                    PlanarFieldType                                             OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(TArray<FPlanarFieldPointInfo>)             PointInfo                                                   OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.WorldConnectivityHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FWorldConnectivityHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/AtomRuntime.ConnectivityQueryResult
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FConnectivityQueryResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bHasValidConnection                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FTransform)                                TargetTransformToConnect                                    OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FVector)                                   HitLocation                                                 OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   OffsetToBestFit                                             OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	DMember(int32_t)                                   SourceFieldIndex                                            OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   SourceFieldObjectId                                         OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	DMember(int32_t)                                   SourceFieldConnectionPointIndex                             OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   TargetFieldIndex                                            OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	DMember(int32_t)                                   TargetFieldObjectId                                         OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   TargetFieldConnectionPointIndex                             OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	SMember(FName)                                     ErrorMessage                                                OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomColor
/// Size: 0x0018 (0x000000 - 0x000018)
class FAtomColor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(EColorEffects)                             Effects                                                     OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomColorSurface
/// Size: 0x0008 (0x000000 - 0x000008)
class FAtomColorSurface : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   ColorId                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(EAtomShaderType)                           ShaderType                                                  OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomDecorationAssignment
/// Size: 0x0030 (0x000000 - 0x000030)
class FAtomDecorationAssignment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   SurfaceName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   TextureName                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Version                                                     OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelPrimitiveInstance
/// Size: 0x0090 (0x000000 - 0x000090)
class FAtomModelPrimitiveInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UAtomPrimitive*)                     Primitive                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                PrimitiveTransform                                          OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FVector)                                   PivotOrigin                                                 OFFSET(getStruct<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelPart
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FAtomModelPart : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TWeakObjectPtr<UAtomPrimitive*>)           AtomPrimitive                                               OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       MaterialInstance                                            OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       MaterialWithPayload                                         OFFSET(get<T>, {0x40, 32, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(uint32_t)                                  PartId                                                      OFFSET(get<uint32_t>, {0x70, 4, 0, 0})
	SMember(FString)                                   PartRevision                                                OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(TArray<FAtomColorSurface>)                 ColorSurfaces                                               OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<FAtomDecorationAssignment>)         Decorations                                                 OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(bool)                                      bIgnoreCommonPartCulling                                    OFFSET(get<bool>, {0xA8, 1, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelSocket
/// Size: 0x0080 (0x000000 - 0x000080)
class FAtomModelSocket : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelPrimitive
/// Size: 0x0028 (0x000000 - 0x000028)
class FAtomModelPrimitive : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FAtomModelPart>)                    Parts                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   DesignId                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FGuid)                                     UUID                                                        OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	SMember(FName)                                     DesignName                                                  OFFSET(getStruct<T>, {0x24, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomBoneReference
/// Size: 0x000C (0x000000 - 0x00000C)
class FAtomBoneReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   PrimitiveIndex                                              OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   PartIndex                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   BoneIndex                                                   OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveConnection
/// Size: 0x0018 (0x000000 - 0x000018)
class FAtomPrimitiveConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FAtomBoneReference)                        From                                                        OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FAtomBoneReference)                        To                                                          OFFSET(getStruct<T>, {0xC, 12, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomRigidElementConnection
/// Size: 0x0080 (0x000000 - 0x000080)
class FAtomRigidElementConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	DMember(int32_t)                                   OtherElementIndex                                           OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   ConnectionUniqueId                                          OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	CMember(TArray<FAtomPrimitiveConnection>)          PrimitiveConnections                                        OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomRigidElement
/// Size: 0x0028 (0x000000 - 0x000028)
class FAtomRigidElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FAtomBoneReference>)                BoneReferences                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FAtomRigidElementConnection>)       Connections                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   IndexOfMetaBone                                             OFFSET(get<int32_t>, {0x24, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomHingedElement
/// Size: 0x0018 (0x000000 - 0x000018)
class FAtomHingedElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FAtomRigidElement>)                 RigidElements                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   HierarchyRootIndex                                          OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelPartReference
/// Size: 0x0014 (0x000000 - 0x000014)
class FAtomModelPartReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGuid)                                     PrimitiveUUID                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   PartIndex                                                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomGlueSet
/// Size: 0x0050 (0x000000 - 0x000050)
class FAtomGlueSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TSet<FAtomModelPartReference>)             Entries                                                     OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FAtomPrimitiveGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   PivotOrigin                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelGeometryOptimizationSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FAtomModelGeometryOptimizationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bEnforceLODBudgets                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bUseTagBudget                                               OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(int32_t)                                   TriangleBudget                                              OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(double)                                    SimplifyBaseTolerance                                       OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    OptimizeBaseTriCost                                         OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomSelectionSetPrimitiveGroup
/// Size: 0x0008 (0x000018 - 0x000020)
class FAtomSelectionSetPrimitiveGroup : public FAtomPrimitiveGroup
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     SelectionSetName                                            OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelPrimitiveGroup
/// Size: 0x0000 (0x000018 - 0x000018)
class FAtomModelPrimitiveGroup : public FAtomPrimitiveGroup
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/AtomRuntime.AtomRigidElementIndices
/// Size: 0x000C (0x000000 - 0x00000C)
class FAtomRigidElementIndices : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   HingedElementIndex                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   RigidElementIndex                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   BoneIndex                                                   OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomResolvedModelPartReference
/// Size: 0x0018 (0x000000 - 0x000018)
class FAtomResolvedModelPartReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FAtomBoneReference)                        Indices                                                     OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FAtomRigidElementIndices)                  ElementIndices                                              OFFSET(getStruct<T>, {0xC, 12, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomRigidElementSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FAtomRigidElementSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FAtomModelPartReference)                   ElementIdentifyingPart                                      OFFSET(getStruct<T>, {0x0, 20, 0, 0})
	SMember(FName)                                     RigidElementName                                            OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	DMember(bool)                                      MergeWithParentElement                                      OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      ShouldBeRootElement                                         OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelTags
/// Size: 0x0010 (0x000000 - 0x000010)
class FAtomModelTags : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelAssetSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FAtomModelAssetSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      CreateRigidElementComponents                                OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FAtomModelGeometryOptimizationSettings)    OptimizationSettings                                        OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bEnableConnectivity                                         OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelSelectionSet
/// Size: 0x0068 (0x000000 - 0x000068)
class FAtomModelSelectionSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TSet<FGuid>)                               PrimitiveIds                                                OFFSET(get<T>, {0x0, 80, 0, 0})
	SMember(FName)                                     SelectionSetName                                            OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	SMember(FName)                                     ImportedName                                                OFFSET(getStruct<T>, {0x54, 4, 0, 0})
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelConfigurationGroup
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FAtomModelConfigurationGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FGuid)                                     ParentGroupId                                               OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	CMember(TSet<FGuid>)                               PrimitiveIds                                                OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TArray<FAtomModelSocket>)                  Sockets                                                     OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(bool)                                      bHasGroupPivot                                              OFFSET(get<bool>, {0x88, 1, 0, 0})
	SMember(FTransform)                                GroupPivot                                                  OFFSET(getStruct<T>, {0x90, 96, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelHierarchicalSceneNode
/// Size: 0x0090 (0x000000 - 0x000090)
class FAtomModelHierarchicalSceneNode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FTransform)                                WorldTransform                                              OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	CMember(TArray<FString>)                           ItemNames                                                   OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelHierarchicalScene
/// Size: 0x0010 (0x000000 - 0x000010)
class FAtomModelHierarchicalScene : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FAtomModelHierarchicalSceneNode>)   SceneNodes                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomSourceModel
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FAtomSourceModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TArray<FAtomModelPrimitive>)               Primitives                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FAtomHingedElement>)                Elements                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FAtomModelSelectionSet>)            SelectionSets                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FAtomGlueSet>)                      GlueSets                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FAtomModelConfigurationGroup>)      Groups                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x50, 56, 0, 0})
	SMember(FVector)                                   Pivot                                                       OFFSET(getStruct<T>, {0x88, 24, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelIssue
/// Size: 0x0018 (0x000000 - 0x000018)
class FAtomModelIssue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EAtomIssue)                                Issue                                                       OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FString)                                   StringData                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.ModelPrimitiveEntry
/// Size: 0x0038 (0x000000 - 0x000038)
class FModelPrimitiveEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      Component                                                   OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FAtomModelPartReference)                   PartReference                                               OFFSET(getStruct<T>, {0x20, 20, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomProcessorResult
/// Size: 0x0028 (0x000000 - 0x000028)
class FAtomProcessorResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bSuccess                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TArray<class UObject*>)                    ProcessedObjects                                            OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<class UObject*>)                    SharedAssets                                                OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomOnProcessPrimitiveSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FAtomOnProcessPrimitiveSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   CustomLocation                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bSupportDecorations                                         OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomModelProcessorInstance
/// Size: 0x0028 (0x000000 - 0x000028)
class FAtomModelProcessorInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bUseCustomSettings                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class UAtomModelProcessor*)                Processor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UAtomModelProcessor*)                InternalTransientPropStorage                                OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<UObject*>>)          ProcessedObjects                                            OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveConnectionPointReference
/// Size: 0x0004 (0x000000 - 0x000004)
class FAtomPrimitiveConnectionPointReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int16_t)                                   PlanarFieldIndex                                            OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	DMember(int16_t)                                   ConnectionPointIndex                                        OFFSET(get<int16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomCommonPartDescription
/// Size: 0x0010 (0x000000 - 0x000010)
class FAtomCommonPartDescription : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     InnerRadius                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(char)                                      PlaneQuadrant                                               OFFSET(get<char>, {0xC, 1, 0, 0})
	DMember(bool)                                      bShowLogo                                                   OFFSET(get<bool>, {0xD, 1, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomCommonPartInstance
/// Size: 0x0040 (0x000000 - 0x000040)
class FAtomCommonPartInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FTransform3f)                              Transform                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FAtomPrimitiveConnectionPointReference)    ConnectionPointReference                                    OFFSET(getStruct<T>, {0x30, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveCommonPart
/// Size: 0x0010 (0x000000 - 0x000010)
class FAtomPrimitiveCommonPart : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FAtomCommonPartInstance>)           UnscaledInstances                                           OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitivePhysicsAttributes
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FAtomPrimitivePhysicsAttributes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FMatrix)                                   InertiaTensor                                               OFFSET(getStruct<T>, {0x0, 128, 0, 0})
	SMember(FVector)                                   CenterOfMass                                                OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x98, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveUserNote
/// Size: 0x0020 (0x000000 - 0x000020)
class FAtomPrimitiveUserNote : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Text                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   PartRevision                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveOptimizationSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FAtomPrimitiveOptimizationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EAtomPrimitiveGeoOptimization)             OptimizationType                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EAtomPrimitiveGeoOptimization_Old)         GeometryOptions                                             OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(EAtomPrimitiveApproximationShapeType)      ApproximationShapeType                                      OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(EAtomPrimitiveApproximationShapeType_Old)  ApproximationStrategy                                       OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(bool)                                      bUseOptimizationAxisOverride                                OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FVector)                                   ApproximationAxisOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveStyleImportData
/// Size: 0x0028 (0x000000 - 0x000028)
class FAtomPrimitiveStyleImportData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Revision                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   SourceDatabase                                              OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   ImportWarnings                                              OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/AtomRuntime.AtomPrimitiveBevelOptions
/// Size: 0x0001 (0x000000 - 0x000001)
class FAtomPrimitiveBevelOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/AtomRuntime.AtomPrimitiveBuildOptions
/// Size: 0x0001 (0x000000 - 0x000001)
class FAtomPrimitiveBuildOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/AtomRuntime.AtomPrimitiveBuildSettings
/// Size: 0x0001 (0x000000 - 0x000001)
class FAtomPrimitiveBuildSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/AtomRuntime.ConnectivityFieldConnection
/// Size: 0x000C (0x000000 - 0x00000C)
class FConnectivityFieldConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FConnectivityFieldReference)               Reference                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(EFieldConnectResult)                       ConnectResult                                               OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/AtomRuntime.LineFieldConnectionInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FLineFieldConnectionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      Flip                                                        OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(EFieldConnectResult)                       ConnectResult                                               OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/AtomRuntime.PointFieldConnectionInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FPointFieldConnectionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    OneAxisRotation                                             OFFSET(get<double>, {0x0, 8, 0, 0})
	CMember(EFieldConnectResult)                       ConnectResult                                               OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/AtomRuntime.HingeFieldConnectionInfo
/// Size: 0x0008 (0x000010 - 0x000018)
class FHingeFieldConnectionInfo : public FPointFieldConnectionInfo
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      Flip                                                        OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Enum /Script/AtomRuntime.EAtomModelMergedMeshSelection
/// Size: 0x04
enum class EAtomModelMergedMeshSelection : uint8_t
{
	EAtomModelMergedMeshSelection__AllMeshes                                         = 0,
	EAtomModelMergedMeshSelection__OnlyOpaqueMeshes                                  = 1,
	EAtomModelMergedMeshSelection__OnlyTransparentMeshes                             = 2,
	EAtomModelMergedMeshSelection__EAtomModelMergedMeshSelection_MAX                 = 3
};

/// Enum /Script/AtomRuntime.EAtomMaterialType
/// Size: 0x06
enum class EAtomMaterialType : uint8_t
{
	EAtomMaterialType__Standard                                                      = 0,
	EAtomMaterialType__Transparent                                                   = 1,
	EAtomMaterialType__Glitter                                                       = 2,
	EAtomMaterialType__Opalescent                                                    = 3,
	EAtomMaterialType__Metallic                                                      = 4,
	EAtomMaterialType__EAtomMaterialType_MAX                                         = 5
};

/// Enum /Script/AtomRuntime.EAtomPrimitiveCollisionVolumeType
/// Size: 0x07
enum class EAtomPrimitiveCollisionVolumeType : uint8_t
{
	EAtomPrimitiveCollisionVolumeType__Box                                           = 0,
	EAtomPrimitiveCollisionVolumeType__Sphere                                        = 1,
	EAtomPrimitiveCollisionVolumeType__Capsule                                       = 2,
	EAtomPrimitiveCollisionVolumeType__Cylinder                                      = 3,
	EAtomPrimitiveCollisionVolumeType__Tube                                          = 4,
	EAtomPrimitiveCollisionVolumeType__Crate                                         = 5,
	EAtomPrimitiveCollisionVolumeType__EAtomPrimitiveCollisionVolumeType_MAX         = 6
};

/// Enum /Script/AtomRuntime.EPrimitiveAutoCollisionType
/// Size: 0x08
enum class EPrimitiveAutoCollisionType : uint8_t
{
	EPrimitiveAutoCollisionType__Box                                                 = 0,
	EPrimitiveAutoCollisionType__Sphere                                              = 1,
	EPrimitiveAutoCollisionType__NDOP10_X                                            = 2,
	EPrimitiveAutoCollisionType__NDOP10_Y                                            = 3,
	EPrimitiveAutoCollisionType__NDOP10_Z                                            = 4,
	EPrimitiveAutoCollisionType__NDOP18                                              = 5,
	EPrimitiveAutoCollisionType__NDOP26                                              = 6,
	EPrimitiveAutoCollisionType__EPrimitiveAutoCollisionType_MAX                     = 7
};

/// Enum /Script/AtomRuntime.EPrimitiveGeometryComplexity
/// Size: 0x07
enum class EPrimitiveGeometryComplexity : uint8_t
{
	EPrimitiveGeometryComplexity__JustShell                                          = 0,
	EPrimitiveGeometryComplexity__ShellAndUncommonParts                              = 1,
	EPrimitiveGeometryComplexity__ShellWithInsideDetailsAndUncommonParts             = 2,
	EPrimitiveGeometryComplexity__ShellWithInsideDetails                             = 3,
	EPrimitiveGeometryComplexity__ShellWithFlatCapAndUncommonParts                   = 4,
	EPrimitiveGeometryComplexity__ShellWithFlatCap                                   = 5,
	EPrimitiveGeometryComplexity__EPrimitiveGeometryComplexity_MAX                   = 6
};

/// Enum /Script/AtomRuntime.EGetCommonPartDescriptionResult
/// Size: 0x03
enum class EGetCommonPartDescriptionResult : uint8_t
{
	EGetCommonPartDescriptionResult__Valid                                           = 0,
	EGetCommonPartDescriptionResult__Invalid                                         = 1,
	EGetCommonPartDescriptionResult__EGetCommonPartDescriptionResult_MAX             = 2
};

/// Enum /Script/AtomRuntime.EAtomShaderType
/// Size: 0x11
enum class EAtomShaderType : uint32_t
{
	EAtomShaderType__Unknown                                                         = 0,
	EAtomShaderType__ShinyPlastic                                                    = 1,
	EAtomShaderType__MattePlastic                                                    = 2,
	EAtomShaderType__Rubber                                                          = 3,
	EAtomShaderType__ShinySteel                                                      = 4,
	EAtomShaderType__BrushedSteel                                                    = 5,
	EAtomShaderType__MatteSteel                                                      = 6,
	EAtomShaderType__Glitter                                                         = 7,
	EAtomShaderType__Metallic                                                        = 8,
	EAtomShaderType__Opalescence                                                     = 9,
	EAtomShaderType__EAtomShaderType_MAX                                             = 10
};

/// Enum /Script/AtomRuntime.EColorEffects
/// Size: 0x05
enum class EColorEffects : uint8_t
{
	EColorEffects__None                                                              = 0,
	EColorEffects__Metallic                                                          = 1,
	EColorEffects__Glitter                                                           = 2,
	EColorEffects__Opalescent                                                        = 3,
	EColorEffects__EColorEffects_MAX                                                 = 4
};

/// Enum /Script/AtomRuntime.EAtomModelCommonPartOptimizationFlag
/// Size: 0x07
enum class EAtomModelCommonPartOptimizationFlag : uint8_t
{
	EAtomModelCommonPartOptimizationFlag__None                                       = 0,
	EAtomModelCommonPartOptimizationFlag__RemoveConnected                            = 1,
	EAtomModelCommonPartOptimizationFlag__RemoveKnobs                                = 2,
	EAtomModelCommonPartOptimizationFlag__RemoveTubes                                = 4,
	EAtomModelCommonPartOptimizationFlag__RemovePins                                 = 8,
	EAtomModelCommonPartOptimizationFlag__All                                        = 15,
	EAtomModelCommonPartOptimizationFlag__EAtomModelCommonPartOptimizationFlag_MAX   = 16
};

/// Enum /Script/AtomRuntime.EAtomModelPivotAnchor
/// Size: 0x05
enum class EAtomModelPivotAnchor : uint8_t
{
	EAtomModelPivotAnchor__Original                                                  = 0,
	EAtomModelPivotAnchor__TopCenter                                                 = 1,
	EAtomModelPivotAnchor__Center                                                    = 2,
	EAtomModelPivotAnchor__BottomCenter                                              = 3,
	EAtomModelPivotAnchor__EAtomModelPivotAnchor_MAX                                 = 4
};

/// Enum /Script/AtomRuntime.EAtomIssue
/// Size: 0x17
enum class EAtomIssue : uint32_t
{
	EAtomIssue__None                                                                 = 0,
	EAtomIssue__FailedToLoadModelFile                                                = 1,
	EAtomIssue__UnsupportedLxFMLVersion                                              = 2,
	EAtomIssue__UnsupportedLxFMLSticker                                              = 3,
	EAtomIssue__MissingPrimitive                                                     = 4,
	EAtomIssue__MismatchedPrimitive                                                  = 5,
	EAtomIssue__UnsupportedPrimitive                                                 = 6,
	EAtomIssue__UnplacedPrimitive                                                    = 7,
	EAtomIssue__MissingPrimitiveSourceGeometry                                       = 8,
	EAtomIssue__ExcludedByFilter                                                     = 9,
	EAtomIssue__UnsupportedCommonPart                                                = 10,
	EAtomIssue__OldVersionPrimitive                                                  = 11,
	EAtomIssue__UnknownDecorationTexture                                             = 12,
	EAtomIssue__UnknownDecorationSurface                                             = 13,
	EAtomIssue__DuplicatedSelectionSet                                               = 14,
	EAtomIssue__EmptySelectionSet                                                    = 15,
	EAtomIssue__EAtomIssue_MAX                                                       = 16
};

/// Enum /Script/AtomRuntime.EAtomModelInstanceType
/// Size: 0x06
enum class EAtomModelInstanceType : uint8_t
{
	EAtomModelInstanceType__Components                                               = 0,
	EAtomModelInstanceType__Actors                                                   = 1,
	EAtomModelInstanceType__HISM                                                     = 2,
	EAtomModelInstanceType__ComponentsWithVertexColor                                = 3,
	EAtomModelInstanceType__RenderStylesComponents                                   = 4,
	EAtomModelInstanceType__EAtomModelInstanceType_MAX                               = 5
};

/// Enum /Script/AtomRuntime.EAtomPlatform
/// Size: 0x22
enum class EAtomPlatform : uint8_t
{
	EAtomPlatform__NA                                                                = 0,
	EAtomPlatform__Duplo                                                             = 1,
	EAtomPlatform__Atom                                                              = 2,
	EAtomPlatform__Technic                                                           = 3,
	EAtomPlatform__Clickits                                                          = 4,
	EAtomPlatform__ActionFigures                                                     = 5,
	EAtomPlatform__Outdoor                                                           = 6,
	EAtomPlatform__SoftPrimitives                                                    = 7,
	EAtomPlatform__ExtendedLine                                                      = 8,
	EAtomPlatform__Scala                                                             = 9,
	EAtomPlatform__Znap                                                              = 10,
	EAtomPlatform__Toolo                                                             = 11,
	EAtomPlatform__Storage                                                           = 12,
	EAtomPlatform__MusicBuilder                                                      = 13,
	EAtomPlatform__StoryBuilder                                                      = 14,
	EAtomPlatform__Quatro                                                            = 15,
	EAtomPlatform__Ccbs                                                              = 16,
	EAtomPlatform__Primo1                                                            = 17,
	EAtomPlatform__AtomFoundation                                                    = 18,
	EAtomPlatform__DieCutToStickers                                                  = 98,
	EAtomPlatform__GeneralPlatform                                                   = 99,
	EAtomPlatform__EAtomPlatform_MAX                                                 = 100
};

/// Enum /Script/AtomRuntime.EAtomCommonPartType
/// Size: 0x26
enum class EAtomCommonPartType : uint8_t
{
	EAtomCommonPartType__None                                                        = 0,
	EAtomCommonPartType__Dknob_01_C                                                  = 1,
	EAtomCommonPartType__Dknob_01_D                                                  = 2,
	EAtomCommonPartType__Dpin_01_C                                                   = 3,
	EAtomCommonPartType__Dtube_01_C                                                  = 4,
	EAtomCommonPartType__Dtube_02_C                                                  = 5,
	EAtomCommonPartType__Dtube_03_C                                                  = 6,
	EAtomCommonPartType__Dtube_04_C                                                  = 7,
	EAtomCommonPartType__knob_01_C                                                   = 8,
	EAtomCommonPartType__knob_01_D                                                   = 9,
	EAtomCommonPartType__knob_01_P                                                   = 10,
	EAtomCommonPartType__knob_01_PC                                                  = 11,
	EAtomCommonPartType__knob_02_P                                                   = 12,
	EAtomCommonPartType__knob_02_PC                                                  = 13,
	EAtomCommonPartType__knob_03_P                                                   = 14,
	EAtomCommonPartType__knob_03_PC                                                  = 15,
	EAtomCommonPartType__knob_04_P                                                   = 16,
	EAtomCommonPartType__knob_04_PC                                                  = 17,
	EAtomCommonPartType__pin_01_C                                                    = 18,
	EAtomCommonPartType__pin_01_D                                                    = 19,
	EAtomCommonPartType__pin_02_C                                                    = 20,
	EAtomCommonPartType__pin_02_D                                                    = 21,
	EAtomCommonPartType__tube_01_D                                                   = 22,
	EAtomCommonPartType__tube_02_D                                                   = 23,
	EAtomCommonPartType__tube_03_D                                                   = 24,
	EAtomCommonPartType__EAtomCommonPartType_MAX                                     = 25
};

/// Enum /Script/AtomRuntime.EAtomCommonPartCategory
/// Size: 0x05
enum class EAtomCommonPartCategory : uint8_t
{
	EAtomCommonPartCategory__None                                                    = 0,
	EAtomCommonPartCategory__Knob                                                    = 1,
	EAtomCommonPartCategory__Pin                                                     = 2,
	EAtomCommonPartCategory__Tube                                                    = 3,
	EAtomCommonPartCategory__EAtomCommonPartCategory_MAX                             = 4
};

/// Enum /Script/AtomRuntime.EAtomPrimitiveImportWarningFlags
/// Size: 0x10
enum class EAtomPrimitiveImportWarningFlags : uint8_t
{
	EAtomPrimitiveImportWarningFlags__None                                           = 0,
	EAtomPrimitiveImportWarningFlags__UnableToFindUnwrappedMeshUVSet                 = 1,
	EAtomPrimitiveImportWarningFlags__BrokenPrincipalUVSet                           = 2,
	EAtomPrimitiveImportWarningFlags__InvalidFBXFile                                 = 4,
	EAtomPrimitiveImportWarningFlags__InvalidMeshInFBXScene                          = 8,
	EAtomPrimitiveImportWarningFlags__CommonPartMeshNotFound                         = 16,
	EAtomPrimitiveImportWarningFlags__FullyTriangulated                              = 32,
	EAtomPrimitiveImportWarningFlags__TransformedMeshes                              = 64,
	EAtomPrimitiveImportWarningFlags__CommonPartRotationsInconsistent                = 128,
	EAtomPrimitiveImportWarningFlags__EAtomPrimitiveImportWarningFlags_MAX           = 129
};

/// Enum /Script/AtomRuntime.EAtomPrimitiveGeoOptimization
/// Size: 0x04
enum class EAtomPrimitiveGeoOptimization : uint8_t
{
	EAtomPrimitiveGeoOptimization__Default                                           = 0,
	EAtomPrimitiveGeoOptimization__UseForDetailOnly                                  = 1,
	EAtomPrimitiveGeoOptimization__UseApproximationForLODs                           = 2,
	EAtomPrimitiveGeoOptimization__EAtomPrimitiveGeoOptimization_MAX                 = 3
};

/// Enum /Script/AtomRuntime.EAtomPrimitiveGeoOptimization_Old
/// Size: 0x04
enum class EAtomPrimitiveGeoOptimization_Old : uint32_t
{
	EAtomPrimitiveGeoOptimization_Old__Default                                       = 0,
	EAtomPrimitiveGeoOptimization_Old__UseForDetailOnly                              = 1,
	EAtomPrimitiveGeoOptimization_Old__UseApproximationForLODs                       = 2,
	EAtomPrimitiveGeoOptimization_Old__EAtomPrimitiveGeoOptimization_MAX             = 3
};

/// Enum /Script/AtomRuntime.EAtomPrimitiveApproximationShapeType
/// Size: 0x06
enum class EAtomPrimitiveApproximationShapeType : uint8_t
{
	EAtomPrimitiveApproximationShapeType__Auto                                       = 0,
	EAtomPrimitiveApproximationShapeType__OrientedBox                                = 1,
	EAtomPrimitiveApproximationShapeType__ExtrudedConvexHull2D                       = 2,
	EAtomPrimitiveApproximationShapeType__ConvexHull3D                               = 3,
	EAtomPrimitiveApproximationShapeType__Extrusion                                  = 4,
	EAtomPrimitiveApproximationShapeType__EAtomPrimitiveApproximationShapeType_MAX   = 5
};

/// Enum /Script/AtomRuntime.EAtomPrimitiveApproximationShapeType_Old
/// Size: 0x06
enum class EAtomPrimitiveApproximationShapeType_Old : uint32_t
{
	EAtomPrimitiveApproximationShapeType_Old__Auto                                   = 0,
	EAtomPrimitiveApproximationShapeType_Old__OrientedBox                            = 1,
	EAtomPrimitiveApproximationShapeType_Old__ExtrudedConvexHull2D                   = 2,
	EAtomPrimitiveApproximationShapeType_Old__ConvexHull3D                           = 3,
	EAtomPrimitiveApproximationShapeType_Old__Extrusion                              = 4,
	EAtomPrimitiveApproximationShapeType_Old__EAtomPrimitiveApproximationShapeType_MAX = 5
};

/// Enum /Script/AtomRuntime.EConnectionFieldType
/// Size: 0x11
enum class EConnectionFieldType : uint8_t
{
	EConnectionFieldType__Planar                                                     = 0,
	EConnectionFieldType__Hinge                                                      = 1,
	EConnectionFieldType__Axle                                                       = 2,
	EConnectionFieldType__Ball                                                       = 3,
	EConnectionFieldType__Cardan                                                     = 4,
	EConnectionFieldType__Fixed                                                      = 5,
	EConnectionFieldType__Rail                                                       = 6,
	EConnectionFieldType__Slider                                                     = 7,
	EConnectionFieldType__Gear                                                       = 8,
	EConnectionFieldType__User                                                       = 9,
	EConnectionFieldType__EConnectionFieldType_MAX                                   = 10
};

/// Enum /Script/AtomRuntime.EConnectionFieldSuperType
/// Size: 0x04
enum class EConnectionFieldSuperType : uint8_t
{
	EConnectionFieldSuperType__Planar                                                = 0,
	EConnectionFieldSuperType__Line                                                  = 1,
	EConnectionFieldSuperType__Point                                                 = 2,
	EConnectionFieldSuperType__EConnectionFieldSuperType_MAX                         = 3
};

/// Enum /Script/AtomRuntime.EConnectionFieldGender
/// Size: 0x04
enum class EConnectionFieldGender : uint8_t
{
	EConnectionFieldGender__Receptor                                                 = 0,
	EConnectionFieldGender__Connector                                                = 1,
	EConnectionFieldGender__Any                                                      = 2,
	EConnectionFieldGender__EConnectionFieldGender_MAX                               = 3
};

/// Enum /Script/AtomRuntime.EFieldConnectResult
/// Size: 0x15
enum class EFieldConnectResult : uint8_t
{
	EFieldConnectResult__NoConnection                                                = 0,
	EFieldConnectResult__Rejection                                                   = 1,
	EFieldConnectResult__FixedConnection                                             = 2,
	EFieldConnectResult__FreeConnection                                              = 3,
	EFieldConnectResult__HingeConnection                                             = 4,
	EFieldConnectResult__CardanConnection                                            = 5,
	EFieldConnectResult__BallConnection                                              = 6,
	EFieldConnectResult__PrismaticConnection                                         = 7,
	EFieldConnectResult__CylindricalConnection                                       = 8,
	EFieldConnectResult__PrismaticAPerpendicularHingeConnection                      = 9,
	EFieldConnectResult__PrismaticBPerpendicularHingeConnection                      = 10,
	EFieldConnectResult__ConnectResultMax                                            = 11,
	EFieldConnectResult__FirstConnection                                             = 2,
	EFieldConnectResult__LastConnection                                              = 10,
	EFieldConnectResult__EFieldConnectResult_MAX                                     = 12
};

/// Enum /Script/AtomRuntime.EAxleDiameter
/// Size: 0x04
enum class EAxleDiameter : uint8_t
{
	EAxleDiameter__Tiny                                                              = 0,
	EAxleDiameter__Medium                                                            = 1,
	EAxleDiameter__Large                                                             = 2,
	EAxleDiameter__EAxleDiameter_MAX                                                 = 3
};

/// Enum /Script/AtomRuntime.EConnectionAxleType
/// Size: 0x24
enum class EConnectionAxleType : uint8_t
{
	EConnectionAxleType__UnusedReceptor                                              = 0,
	EConnectionAxleType__UnusedConnector                                             = 1,
	EConnectionAxleType__RoundAxleReceptor                                           = 2,
	EConnectionAxleType__RoundAxleConnector                                          = 3,
	EConnectionAxleType__CrossAxleReceptor                                           = 4,
	EConnectionAxleType__CrossAxleConnector                                          = 5,
	EConnectionAxleType__SecondaryPinReceptor                                        = 6,
	EConnectionAxleType__SecondaryPinConnector                                       = 7,
	EConnectionAxleType__PlateRoundCrossAxleReceptor                                 = 8,
	EConnectionAxleType__UnusedPlateRoundCrossAxleConnector                          = 9,
	EConnectionAxleType__MiniFigNeckReceptor                                         = 10,
	EConnectionAxleType__MiniFigNeckConnector                                        = 11,
	EConnectionAxleType__RoundCrossAxleReceptor                                      = 12,
	EConnectionAxleType__RoundCrossAxleConnector                                     = 13,
	EConnectionAxleType__TinyPinReceptor                                             = 14,
	EConnectionAxleType__TinyPinConnector                                            = 15,
	EConnectionAxleType__UnusedCrossAxlePegHoleCapAlignmentReceptor                  = 16,
	EConnectionAxleType__CrossAxlePegHoleCapAlignmentConnector                       = 17,
	EConnectionAxleType__UnusedRoundAxleReceptorDontRejectSecondaryPinConnector      = 18,
	EConnectionAxleType__RoundAxleConnectorDontRejectSecondaryPinConnector           = 19,
	EConnectionAxleType__UnusedSecondaryPinReceptorDontRejectTinyPinConnector        = 20,
	EConnectionAxleType__SecondaryPinConnectorDontRejectTinyPinConnector             = 21,
	EConnectionAxleType__SubTypeSize                                                 = 22,
	EConnectionAxleType__EConnectionAxleType_MAX                                     = 23
};

/// Enum /Script/AtomRuntime.EConnectionPointType
/// Size: 0x47
enum class EConnectionPointType : uint8_t
{
	EConnectionPointType__Knob                                                       = 0,
	EConnectionPointType__HollowKnob                                                 = 1,
	EConnectionPointType__KnobFitInPegHole                                           = 2,
	EConnectionPointType__HollowKnobFitInPegHole                                     = 3,
	EConnectionPointType__SquareKnob                                                 = 4,
	EConnectionPointType__Tube                                                       = 5,
	EConnectionPointType__TubeWithRib                                                = 6,
	EConnectionPointType__BottomTube                                                 = 7,
	EConnectionPointType__BottomTubeWithRib                                          = 8,
	EConnectionPointType__SecondaryPin                                               = 9,
	EConnectionPointType__SecondaryPinWithRib                                        = 10,
	EConnectionPointType__SecondaryPinWithTinyPinReceptor                            = 11,
	EConnectionPointType__SecondaryPinWithRibAndTinyPinReceptor                      = 12,
	EConnectionPointType__FixedTube                                                  = 13,
	EConnectionPointType__FixedTubeWithAntiKnob                                      = 14,
	EConnectionPointType__AntiKnob                                                   = 15,
	EConnectionPointType__PegHole                                                    = 16,
	EConnectionPointType__SquareAntiKnob                                             = 17,
	EConnectionPointType__TubeGap                                                    = 18,
	EConnectionPointType__TubeGrabber                                                = 19,
	EConnectionPointType__TinyPin                                                    = 20,
	EConnectionPointType__TinyPinReceptor                                            = 21,
	EConnectionPointType__Edge                                                       = 22,
	EConnectionPointType__EdgeGap                                                    = 23,
	EConnectionPointType__KnobReject                                                 = 24,
	EConnectionPointType__PowerFuncLeftTop                                           = 25,
	EConnectionPointType__PowerFuncRightTop                                          = 26,
	EConnectionPointType__PowerFuncLeftBottom                                        = 27,
	EConnectionPointType__PowerFuncRightBottom                                       = 28,
	EConnectionPointType__VoidFeature                                                = 29,
	EConnectionPointType__DuploKnob                                                  = 30,
	EConnectionPointType__DuploHollowKnob                                            = 31,
	EConnectionPointType__DuploAntiKnob                                              = 32,
	EConnectionPointType__DuploTube                                                  = 33,
	EConnectionPointType__DuploFixedTube                                             = 34,
	EConnectionPointType__DuploTubeGap                                               = 35,
	EConnectionPointType__DuploAnimalKnob                                            = 36,
	EConnectionPointType__DuploAnimalTube                                            = 37,
	EConnectionPointType__SecondaryPinReceptor                                       = 38,
	EConnectionPointType__DuploFixedAnimalTube                                       = 39,
	EConnectionPointType__DuploSecondaryPinWithRib                                   = 40,
	EConnectionPointType__DuploSecondaryPin                                          = 41,
	EConnectionPointType__DuploKnobReject                                            = 42,
	EConnectionPointType___size                                                      = 43,
	EConnectionPointType___duploBegin                                                = 30,
	EConnectionPointType___duploEnd                                                  = 42,
	EConnectionPointType__EConnectionPointType_MAX                                   = 44
};

/// Enum /Script/AtomRuntime.EConnectionPointFlags
/// Size: 0x21
enum class EConnectionPointFlags : uint32_t
{
	EConnectionPointFlags__SquareFeature                                             = 1,
	EConnectionPointFlags__RoundFeature                                              = 2,
	EConnectionPointFlags__KnobWithHole                                              = 4,
	EConnectionPointFlags__KnobWithMiniFigHandHole                                   = 8,
	EConnectionPointFlags__KnobWithSingleCollision                                   = 16,
	EConnectionPointFlags__SingleFeature                                             = 32,
	EConnectionPointFlags__ReceptorDontRemoveKnobCollision                           = 64,
	EConnectionPointFlags__KnobWithoutCollision                                      = 128,
	EConnectionPointFlags__CreationValidFlags                                        = 255,
	EConnectionPointFlags__ThisSideTransparent                                       = 256,
	EConnectionPointFlags__ThisSideHidden                                            = 512,
	EConnectionPointFlags__DynamicValidFlags                                         = 768,
	EConnectionPointFlags__InternalIsDuploSecondaryPin                               = 268435456,
	EConnectionPointFlags__InternalIsQuadConnector                                   = 536870912,
	EConnectionPointFlags__InternalIsSecondaryPin                                    = 1073741824,
	EConnectionPointFlags__InternalIsAnyKnob                                         = -2147483648,
	EConnectionPointFlags__SquareOcclusionShapeIndex                                 = 1,
	EConnectionPointFlags__RoundOcclusionShapeIndex                                  = 2,
	EConnectionPointFlags__OtherOcclusionShapeIndex                                  = 0,
	EConnectionPointFlags__OcclusionShapeMask                                        = 3,
	EConnectionPointFlags__EConnectionPointFlags_MAX                                 = -2147483647
};

