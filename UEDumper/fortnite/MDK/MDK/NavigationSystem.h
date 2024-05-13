
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/NavigationSystem.CrowdManagerBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UCrowdManagerBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NavigationSystem.NavigationGraphNode
/// Size: 0x0000 (0x000290 - 0x000290)
class ANavigationGraphNode : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/NavigationSystem.NavigationGraphNodeComponent
/// Size: 0x0030 (0x000220 - 0x000250)
class UNavigationGraphNodeComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FNavGraphNode)                             Node                                                        OFFSET(getStruct<T>, {0x220, 24, 0, 0})
	CMember(class UNavigationGraphNodeComponent*)      NextNodeComponent                                           OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(class UNavigationGraphNodeComponent*)      PrevNodeComponent                                           OFFSET(get<T>, {0x240, 8, 0, 0})
};

/// Class /Script/NavigationSystem.NavigationObjectRepository
/// Size: 0x0060 (0x000030 - 0x000090)
class UNavigationObjectRepository : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/NavigationSystem.NavigationPathGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavigationPathGenerator : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NavigationSystem.NavLinkCustomInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavLinkCustomInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NavigationSystem.NavLinkHostInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavLinkHostInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NavigationSystem.NavLinkTrivial
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavLinkTrivial : public UNavLinkDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/NavigationSystem.NavNodeInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavNodeInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NavigationSystem.NavigationData
/// Size: 0x0200 (0x000290 - 0x000490)
class ANavigationData : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	CMember(class UPrimitiveComponent*)                RenderingComp                                               OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(FNavDataConfig)                            NavDataConfig                                               OFFSET(getStruct<T>, {0x2A0, 112, 0, 0})
	DMember(bool)                                      bEnableDrawing                                              OFFSET(get<bool>, {0x310, 1, 1, 0})
	DMember(bool)                                      bForceRebuildOnLoad                                         OFFSET(get<bool>, {0x310, 1, 1, 1})
	DMember(bool)                                      bAutoDestroyWhenNoNavigation                                OFFSET(get<bool>, {0x310, 1, 1, 2})
	DMember(bool)                                      bCanBeMainNavData                                           OFFSET(get<bool>, {0x310, 1, 1, 3})
	DMember(bool)                                      bCanSpawnOnRebuild                                          OFFSET(get<bool>, {0x310, 1, 1, 4})
	DMember(bool)                                      bRebuildAtRuntime                                           OFFSET(get<bool>, {0x310, 1, 1, 5})
	CMember(ERuntimeGenerationType)                    RuntimeGeneration                                           OFFSET(get<T>, {0x314, 1, 0, 0})
	DMember(float)                                     ObservedPathsTickInterval                                   OFFSET(get<float>, {0x318, 4, 0, 0})
	DMember(uint32_t)                                  DataVersion                                                 OFFSET(get<uint32_t>, {0x31C, 4, 0, 0})
	CMember(TArray<FSupportedAreaData>)                SupportedAreas                                              OFFSET(get<T>, {0x428, 16, 0, 0})
};

/// Class /Script/NavigationSystem.AbstractNavData
/// Size: 0x0000 (0x000490 - 0x000490)
class AAbstractNavData : public ANavigationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
};

/// Class /Script/NavigationSystem.NavArea
/// Size: 0x0018 (0x000030 - 0x000048)
class UNavArea : public UNavAreaBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     DefaultCost                                                 OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     FixedAreaEnteringCost                                       OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FColor)                                    DrawColor                                                   OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	SMember(FNavAgentSelector)                         SupportedAgents                                             OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bSupportsAgent0                                             OFFSET(get<bool>, {0x40, 1, 1, 0})
	DMember(bool)                                      bSupportsAgent1                                             OFFSET(get<bool>, {0x40, 1, 1, 1})
	DMember(bool)                                      bSupportsAgent2                                             OFFSET(get<bool>, {0x40, 1, 1, 2})
	DMember(bool)                                      bSupportsAgent3                                             OFFSET(get<bool>, {0x40, 1, 1, 3})
	DMember(bool)                                      bSupportsAgent4                                             OFFSET(get<bool>, {0x40, 1, 1, 4})
	DMember(bool)                                      bSupportsAgent5                                             OFFSET(get<bool>, {0x40, 1, 1, 5})
	DMember(bool)                                      bSupportsAgent6                                             OFFSET(get<bool>, {0x40, 1, 1, 6})
	DMember(bool)                                      bSupportsAgent7                                             OFFSET(get<bool>, {0x40, 1, 1, 7})
	DMember(bool)                                      bSupportsAgent8                                             OFFSET(get<bool>, {0x41, 1, 1, 0})
	DMember(bool)                                      bSupportsAgent9                                             OFFSET(get<bool>, {0x41, 1, 1, 1})
	DMember(bool)                                      bSupportsAgent10                                            OFFSET(get<bool>, {0x41, 1, 1, 2})
	DMember(bool)                                      bSupportsAgent11                                            OFFSET(get<bool>, {0x41, 1, 1, 3})
	DMember(bool)                                      bSupportsAgent12                                            OFFSET(get<bool>, {0x41, 1, 1, 4})
	DMember(bool)                                      bSupportsAgent13                                            OFFSET(get<bool>, {0x41, 1, 1, 5})
	DMember(bool)                                      bSupportsAgent14                                            OFFSET(get<bool>, {0x41, 1, 1, 6})
	DMember(bool)                                      bSupportsAgent15                                            OFFSET(get<bool>, {0x41, 1, 1, 7})
};

/// Class /Script/NavigationSystem.NavAreaMeta
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavAreaMeta : public UNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/NavigationSystem.NavAreaMeta_SwitchByAgent
/// Size: 0x0080 (0x000048 - 0x0000C8)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(class UClass*)                             Agent0Area                                                  OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UClass*)                             Agent1Area                                                  OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UClass*)                             Agent2Area                                                  OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UClass*)                             Agent3Area                                                  OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UClass*)                             Agent4Area                                                  OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class UClass*)                             Agent5Area                                                  OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class UClass*)                             Agent6Area                                                  OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class UClass*)                             Agent7Area                                                  OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UClass*)                             Agent8Area                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class UClass*)                             Agent9Area                                                  OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class UClass*)                             Agent10Area                                                 OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(class UClass*)                             Agent11Area                                                 OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UClass*)                             Agent12Area                                                 OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UClass*)                             Agent13Area                                                 OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UClass*)                             Agent14Area                                                 OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UClass*)                             Agent15Area                                                 OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/NavigationSystem.NavArea_Default
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Default : public UNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/NavigationSystem.NavArea_LowHeight
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_LowHeight : public UNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/NavigationSystem.NavArea_Null
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Null : public UNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/NavigationSystem.NavArea_Obstacle
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Obstacle : public UNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/NavigationSystem.NavCollision
/// Size: 0x0098 (0x000070 - 0x000108)
class UNavCollision : public UNavCollisionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TArray<FNavCollisionCylinder>)             CylinderCollision                                           OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FNavCollisionBox>)                  BoxCollision                                                OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(class UClass*)                             AreaClass                                                   OFFSET(get<T>, {0xD8, 8, 0, 0})
	DMember(bool)                                      bGatherConvexGeometry                                       OFFSET(get<bool>, {0xE0, 1, 1, 0})
	DMember(bool)                                      bCreateOnClient                                             OFFSET(get<bool>, {0xE0, 1, 1, 1})
};

/// Class /Script/NavigationSystem.NavigationQueryFilter
/// Size: 0x0020 (0x000028 - 0x000048)
class UNavigationQueryFilter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FNavigationFilterArea>)             Areas                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FNavigationFilterFlags)                    IncludeFlags                                                OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	SMember(FNavigationFilterFlags)                    ExcludeFlags                                                OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
};

/// Class /Script/NavigationSystem.RecastFilter_UseDefaultArea
/// Size: 0x0000 (0x000048 - 0x000048)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/NavigationSystem.NavigationGraph
/// Size: 0x0000 (0x000490 - 0x000490)
class ANavigationGraph : public ANavigationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
};

/// Class /Script/NavigationSystem.NavigationInvokerComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UNavigationInvokerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     TileGenerationRadius                                        OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     TileRemovalRadius                                           OFFSET(get<float>, {0xA4, 4, 0, 0})
	SMember(FNavAgentSelector)                         SupportedAgents                                             OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	CMember(ENavigationInvokerPriority)                Priority                                                    OFFSET(get<T>, {0xAC, 1, 0, 0})
};

/// Class /Script/NavigationSystem.NavigationPath
/// Size: 0x0060 (0x000028 - 0x000088)
class UNavigationPath : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMulticastInlineDelegate)                  PathUpdatedNotifier                                         OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TArray<FVector>)                           PathPoints                                                  OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<ENavigationOptionFlag>)        RecalculateOnInvalidation                                   OFFSET(get<T>, {0x48, 1, 0, 0})


	/// Functions
	// Function /Script/NavigationSystem.NavigationPath.IsValid
	// bool IsValid();                                                                                                          // [0x7489340] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.IsStringPulled
	// bool IsStringPulled();                                                                                                   // [0x2f99024] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.IsPartial
	// bool IsPartial();                                                                                                        // [0x7489314] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetPathLength
	// double GetPathLength();                                                                                                  // [0x7488e88] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetPathCost
	// double GetPathCost();                                                                                                    // [0x7488b34] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetDebugString
	// FString GetDebugString();                                                                                                // [0x7488a0c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
	// void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);                              // [0x748824c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationPath.EnableDebugDrawing
	// void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);                                              // [0x7488174] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationSystemV1
/// Size: 0x1588 (0x000028 - 0x0015B0)
class UNavigationSystemV1 : public UNavigationSystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5552;

public:
	CMember(class ANavigationData*)                    MainNavData                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class ANavigationData*)                    AbstractNavData                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     DefaultAgentName                                            OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CrowdManagerClass                                           OFFSET(get<T>, {0x40, 32, 0, 0})
	DMember(bool)                                      bAutoCreateNavigationData                                   OFFSET(get<bool>, {0x60, 1, 1, 0})
	DMember(bool)                                      bSpawnNavDataInNavBoundsLevel                               OFFSET(get<bool>, {0x60, 1, 1, 1})
	DMember(bool)                                      bAllowClientSideNavigation                                  OFFSET(get<bool>, {0x60, 1, 1, 2})
	DMember(bool)                                      bShouldDiscardSubLevelNavData                               OFFSET(get<bool>, {0x60, 1, 1, 3})
	DMember(bool)                                      bTickWhilePaused                                            OFFSET(get<bool>, {0x60, 1, 1, 4})
	DMember(bool)                                      bSupportRebuilding                                          OFFSET(get<bool>, {0x60, 1, 1, 5})
	DMember(bool)                                      bInitialBuildingLocked                                      OFFSET(get<bool>, {0x60, 1, 1, 6})
	DMember(bool)                                      bSkipAgentHeightCheckWhenPickingNavData                     OFFSET(get<bool>, {0x61, 1, 1, 0})
	DMember(int32_t)                                   GeometryExportTriangleCountWarningThreshold                 OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(bool)                                      bGenerateNavigationOnlyAroundNavigationInvokers             OFFSET(get<bool>, {0x68, 1, 1, 0})
	DMember(float)                                     ActiveTilesUpdateInterval                                   OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(double)                                    InvokersMaximumDistanceFromSeed                             OFFSET(get<double>, {0x70, 8, 0, 0})
	CMember(ENavDataGatheringModeConfig)               DataGatheringMode                                           OFFSET(get<T>, {0x78, 1, 0, 0})
	DMember(float)                                     DirtyAreaWarningSizeThreshold                               OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     GatheringNavModifiersWarningLimitTime                       OFFSET(get<float>, {0x80, 4, 0, 0})
	CMember(TArray<FNavDataConfig>)                    SupportedAgents                                             OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FNavAgentSelector)                         SupportedAgentsMask                                         OFFSET(getStruct<T>, {0x98, 4, 0, 0})
	SMember(FBox)                                      BuildBounds                                                 OFFSET(getStruct<T>, {0xA0, 56, 0, 0})
	CMember(TArray<class ANavigationData*>)            NavDataSet                                                  OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<class ANavigationData*>)            NavDataRegistrationQueue                                    OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNavDataRegisteredEvent                                    OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNavigationGenerationFinishedDelegate                      OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FNavigationSystemRunMode)                  OperationMode                                               OFFSET(getStruct<T>, {0x218, 1, 0, 0})


	/// Functions
	// Function /Script/NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
	// void UnregisterNavigationInvoker(class AActor* Invoker);                                                                 // [0x748a8bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
	// void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs);                                                 // [0x748a7f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
	// void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);                                                      // [0x748a770] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
	// void ResetMaxSimultaneousTileGenerationJobsCount();                                                                      // [0x748a75c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
	// void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);              // [0x748a638] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
	// void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);                                                   // [0x748a51c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.NavigationRaycast
	// bool NavigationRaycast(class UObject* WorldContextObject, FVector& RayStart, FVector& RayEnd, FVector& HitLocation, class UClass* FilterClass, class AController* Querier); // [0x748a1c8] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
	// bool K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea);                    // [0x748a06c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
	// bool K2_ProjectPointToNavigation(class UObject* WorldContextObject, FVector& Point, FVector& ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, FVector QueryExtent); // [0x7489d0c] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
	// bool K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x74899d0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
	// bool K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x7489694] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
	// bool K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x7489358] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
	// bool IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);                                                  // [0x7489294] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
	// bool IsNavigationBeingBuilt(class UObject* WorldContextObject);                                                          // [0x74891c8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathLength
	// TEnumAsByte<ENavigationQueryResult> GetPathLength(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, double& PathLength, class ANavigationData* NavData, class UClass* FilterClass); // [0x7488eb0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathCost
	// TEnumAsByte<ENavigationQueryResult> GetPathCost(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, double& PathCost, class ANavigationData* NavData, class UClass* FilterClass); // [0x7488b70] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetNavigationSystem
	// class UNavigationSystemV1* GetNavigationSystem(class UObject* WorldContextObject);                                       // [0x7488ab4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
	// class UNavigationPath* FindPathToLocationSynchronously(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass); // [0x7488758] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
	// class UNavigationPath* FindPathToActorSynchronously(class UObject* WorldContextObject, FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass); // [0x74882f4] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationSystemModuleConfig
/// Size: 0x0008 (0x000050 - 0x000058)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bStrictlyStatic                                             OFFSET(get<bool>, {0x50, 1, 1, 0})
	DMember(bool)                                      bCreateOnClient                                             OFFSET(get<bool>, {0x50, 1, 1, 1})
	DMember(bool)                                      bAutoSpawnMissingNavData                                    OFFSET(get<bool>, {0x50, 1, 1, 2})
	DMember(bool)                                      bSpawnNavDataInNavBoundsLevel                               OFFSET(get<bool>, {0x50, 1, 1, 3})
};

/// Class /Script/NavigationSystem.NavigationTestingActor
/// Size: 0x0138 (0x000290 - 0x0003C8)
class ANavigationTestingActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	CMember(class UCapsuleComponent*)                  CapsuleComponent                                            OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UNavigationInvokerComponent*)        InvokerComponent                                            OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(bool)                                      bActAsNavigationInvoker                                     OFFSET(get<bool>, {0x2B0, 1, 1, 0})
	SMember(FNavAgentProperties)                       NavAgentProps                                               OFFSET(getStruct<T>, {0x2B8, 48, 0, 0})
	SMember(FVector)                                   QueryingExtent                                              OFFSET(getStruct<T>, {0x2E8, 24, 0, 0})
	CMember(class ANavigationData*)                    MyNavData                                                   OFFSET(get<T>, {0x300, 8, 0, 0})
	SMember(FVector)                                   ProjectedLocation                                           OFFSET(getStruct<T>, {0x308, 24, 0, 0})
	DMember(bool)                                      bProjectedLocationValid                                     OFFSET(get<bool>, {0x320, 1, 1, 0})
	DMember(bool)                                      bSearchStart                                                OFFSET(get<bool>, {0x320, 1, 1, 1})
	DMember(float)                                     CostLimitFactor                                             OFFSET(get<float>, {0x324, 4, 0, 0})
	DMember(float)                                     MinimumCostLimit                                            OFFSET(get<float>, {0x328, 4, 0, 0})
	DMember(bool)                                      bBacktracking                                               OFFSET(get<bool>, {0x32C, 1, 1, 0})
	DMember(bool)                                      bUseHierarchicalPathfinding                                 OFFSET(get<bool>, {0x32C, 1, 1, 1})
	DMember(bool)                                      bGatherDetailedInfo                                         OFFSET(get<bool>, {0x32C, 1, 1, 2})
	DMember(bool)                                      bRequireNavigableEndLocation                                OFFSET(get<bool>, {0x32C, 1, 1, 3})
	DMember(bool)                                      bDrawDistanceToWall                                         OFFSET(get<bool>, {0x32C, 1, 1, 4})
	DMember(bool)                                      bDrawIfNavDataIsReadyInRadius                               OFFSET(get<bool>, {0x32C, 1, 1, 5})
	DMember(bool)                                      bDrawIfNavDataIsReadyToQueryTargetActor                     OFFSET(get<bool>, {0x32C, 1, 1, 6})
	CMember(class AActor*)                             QueryTargetActor                                            OFFSET(get<T>, {0x330, 8, 0, 0})
	DMember(bool)                                      bShowNodePool                                               OFFSET(get<bool>, {0x338, 1, 1, 0})
	DMember(bool)                                      bShowBestPath                                               OFFSET(get<bool>, {0x338, 1, 1, 1})
	DMember(bool)                                      bShowDiffWithPreviousStep                                   OFFSET(get<bool>, {0x338, 1, 1, 2})
	DMember(bool)                                      bShouldBeVisibleInGame                                      OFFSET(get<bool>, {0x338, 1, 1, 3})
	DMember(float)                                     RadiusUsedToValidateNavData                                 OFFSET(get<float>, {0x33C, 4, 0, 0})
	CMember(TEnumAsByte<ENavCostDisplay>)              CostDisplayMode                                             OFFSET(get<T>, {0x340, 1, 0, 0})
	SMember(FVector2D)                                 TextCanvasOffset                                            OFFSET(getStruct<T>, {0x348, 16, 0, 0})
	DMember(bool)                                      bPathExist                                                  OFFSET(get<bool>, {0x358, 1, 1, 0})
	DMember(bool)                                      bPathIsPartial                                              OFFSET(get<bool>, {0x358, 1, 1, 1})
	DMember(bool)                                      bPathSearchOutOfNodes                                       OFFSET(get<bool>, {0x358, 1, 1, 2})
	DMember(float)                                     PathfindingTime                                             OFFSET(get<float>, {0x35C, 4, 0, 0})
	DMember(double)                                    PathCost                                                    OFFSET(get<double>, {0x360, 8, 0, 0})
	DMember(int32_t)                                   PathfindingSteps                                            OFFSET(get<int32_t>, {0x368, 4, 0, 0})
	CMember(class ANavigationTestingActor*)            OtherActor                                                  OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UClass*)                             FilterClass                                                 OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(int32_t)                                   ShowStepIndex                                               OFFSET(get<int32_t>, {0x380, 4, 0, 0})
	DMember(float)                                     OffsetFromCornersDistance                                   OFFSET(get<float>, {0x384, 4, 0, 0})
};

/// Class /Script/NavigationSystem.NavLinkComponent
/// Size: 0x0020 (0x000500 - 0x000520)
class UNavLinkComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
	CMember(TArray<FNavigationLink>)                   Links                                                       OFFSET(get<T>, {0x508, 16, 0, 0})
};

/// Class /Script/NavigationSystem.NavRelevantComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UNavRelevantComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(bool)                                      bAttachToOwnersRoot                                         OFFSET(get<bool>, {0xE0, 1, 1, 0})
	CMember(class UObject*)                            CachedNavParent                                             OFFSET(get<T>, {0xE8, 8, 0, 0})


	/// Functions
	// Function /Script/NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
	// void SetNavigationRelevancy(bool bRelevant);                                                                             // [0x74d5848] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavLinkCustomComponent
/// Size: 0x00F0 (0x0000F0 - 0x0001E0)
class UNavLinkCustomComponent : public UNavRelevantComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	DMember(uint32_t)                                  NavLinkUserId                                               OFFSET(get<uint32_t>, {0xF8, 4, 0, 0})
	SMember(FNavLinkId)                                CustomLinkId                                                OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FNavLinkAuxiliaryId)                       AuxiliaryCustomLinkId                                       OFFSET(getStruct<T>, {0x108, 8, 0, 0})
	CMember(class UClass*)                             EnabledAreaClass                                            OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UClass*)                             DisabledAreaClass                                           OFFSET(get<T>, {0x118, 8, 0, 0})
	SMember(FNavAgentSelector)                         SupportedAgents                                             OFFSET(getStruct<T>, {0x120, 4, 0, 0})
	SMember(FVector)                                   LinkRelativeStart                                           OFFSET(getStruct<T>, {0x128, 24, 0, 0})
	SMember(FVector)                                   LinkRelativeEnd                                             OFFSET(getStruct<T>, {0x140, 24, 0, 0})
	CMember(TEnumAsByte<ENavLinkDirection>)            LinkDirection                                               OFFSET(get<T>, {0x158, 1, 0, 0})
	DMember(bool)                                      bLinkEnabled                                                OFFSET(get<bool>, {0x15C, 1, 1, 0})
	DMember(bool)                                      bNotifyWhenEnabled                                          OFFSET(get<bool>, {0x15C, 1, 1, 1})
	DMember(bool)                                      bNotifyWhenDisabled                                         OFFSET(get<bool>, {0x15C, 1, 1, 2})
	DMember(bool)                                      bCreateBoxObstacle                                          OFFSET(get<bool>, {0x15C, 1, 1, 3})
	SMember(FVector)                                   ObstacleOffset                                              OFFSET(getStruct<T>, {0x160, 24, 0, 0})
	SMember(FVector)                                   ObstacleExtent                                              OFFSET(getStruct<T>, {0x178, 24, 0, 0})
	CMember(class UClass*)                             ObstacleAreaClass                                           OFFSET(get<T>, {0x190, 8, 0, 0})
	DMember(float)                                     BroadcastRadius                                             OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(float)                                     BroadcastInterval                                           OFFSET(get<float>, {0x19C, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            BroadcastChannel                                            OFFSET(get<T>, {0x1A0, 1, 0, 0})
};

/// Class /Script/NavigationSystem.NavLinkRenderingComponent
/// Size: 0x0000 (0x000500 - 0x000500)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1280;

public:
};

/// Class /Script/NavigationSystem.NavMeshBoundsVolume
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class ANavMeshBoundsVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FNavAgentSelector)                         SupportedAgents                                             OFFSET(getStruct<T>, {0x2C8, 4, 0, 0})
};

/// Class /Script/NavigationSystem.NavMeshRenderingComponent
/// Size: 0x0010 (0x000550 - 0x000560)
class UNavMeshRenderingComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/NavigationSystem.RecastNavMesh
/// Size: 0x01E0 (0x000490 - 0x000670)
class ARecastNavMesh : public ANavigationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	DMember(bool)                                      bDrawTriangleEdges                                          OFFSET(get<bool>, {0x490, 1, 1, 0})
	DMember(bool)                                      bDrawPolyEdges                                              OFFSET(get<bool>, {0x490, 1, 1, 1})
	DMember(bool)                                      bDrawFilledPolys                                            OFFSET(get<bool>, {0x490, 1, 1, 2})
	DMember(bool)                                      bDrawNavMeshEdges                                           OFFSET(get<bool>, {0x490, 1, 1, 3})
	DMember(bool)                                      bDrawTileBounds                                             OFFSET(get<bool>, {0x490, 1, 1, 4})
	DMember(bool)                                      bDrawTileResolutions                                        OFFSET(get<bool>, {0x490, 1, 1, 5})
	DMember(bool)                                      bDrawPathCollidingGeometry                                  OFFSET(get<bool>, {0x490, 1, 1, 6})
	DMember(bool)                                      bDrawTileLabels                                             OFFSET(get<bool>, {0x490, 1, 1, 7})
	DMember(bool)                                      bDrawTileBuildTimes                                         OFFSET(get<bool>, {0x491, 1, 1, 0})
	DMember(bool)                                      bDrawTileBuildTimesHeatMap                                  OFFSET(get<bool>, {0x491, 1, 1, 1})
	DMember(bool)                                      bDrawPolygonLabels                                          OFFSET(get<bool>, {0x491, 1, 1, 2})
	DMember(bool)                                      bDrawDefaultPolygonCost                                     OFFSET(get<bool>, {0x491, 1, 1, 3})
	DMember(bool)                                      bDrawPolygonFlags                                           OFFSET(get<bool>, {0x491, 1, 1, 4})
	DMember(bool)                                      bDrawLabelsOnPathNodes                                      OFFSET(get<bool>, {0x491, 1, 1, 5})
	DMember(bool)                                      bDrawNavLinks                                               OFFSET(get<bool>, {0x491, 1, 1, 6})
	DMember(bool)                                      bDrawFailedNavLinks                                         OFFSET(get<bool>, {0x491, 1, 1, 7})
	DMember(bool)                                      bDrawClusters                                               OFFSET(get<bool>, {0x492, 1, 1, 0})
	DMember(bool)                                      bDrawOctree                                                 OFFSET(get<bool>, {0x492, 1, 1, 1})
	DMember(bool)                                      bDrawOctreeDetails                                          OFFSET(get<bool>, {0x492, 1, 1, 2})
	DMember(bool)                                      bDrawMarkedForbiddenPolys                                   OFFSET(get<bool>, {0x492, 1, 1, 3})
	DMember(bool)                                      bDistinctlyDrawTilesBeingBuilt                              OFFSET(get<bool>, {0x492, 1, 1, 4})
	DMember(float)                                     DrawOffset                                                  OFFSET(get<float>, {0x494, 4, 0, 0})
	SMember(FRecastNavMeshTileGenerationDebug)         TileGenerationDebug                                         OFFSET(getStruct<T>, {0x498, 28, 0, 0})
	DMember(bool)                                      bFixedTilePoolSize                                          OFFSET(get<bool>, {0x4B4, 1, 1, 0})
	DMember(int32_t)                                   TilePoolSize                                                OFFSET(get<int32_t>, {0x4B8, 4, 0, 0})
	DMember(float)                                     TileSizeUU                                                  OFFSET(get<float>, {0x4BC, 4, 0, 0})
	DMember(float)                                     CellSize                                                    OFFSET(get<float>, {0x4C0, 4, 0, 0})
	DMember(float)                                     CellHeight                                                  OFFSET(get<float>, {0x4C4, 4, 0, 0})
	SMember(FNavMeshResolutionParam)                   NavMeshResolutionParams                                     OFFSET(getStruct<T>, {0x4C8, 36, 0, 0})
	DMember(float)                                     AgentRadius                                                 OFFSET(get<float>, {0x4EC, 4, 0, 0})
	DMember(float)                                     AgentHeight                                                 OFFSET(get<float>, {0x4F0, 4, 0, 0})
	DMember(float)                                     AgentMaxSlope                                               OFFSET(get<float>, {0x4F4, 4, 0, 0})
	DMember(float)                                     AgentMaxStepHeight                                          OFFSET(get<float>, {0x4F8, 4, 0, 0})
	DMember(float)                                     MinRegionArea                                               OFFSET(get<float>, {0x4FC, 4, 0, 0})
	DMember(float)                                     MergeRegionSize                                             OFFSET(get<float>, {0x500, 4, 0, 0})
	DMember(int32_t)                                   MaxVerticalMergeError                                       OFFSET(get<int32_t>, {0x504, 4, 0, 0})
	DMember(float)                                     MaxSimplificationError                                      OFFSET(get<float>, {0x508, 4, 0, 0})
	DMember(float)                                     SimplificationElevationRatio                                OFFSET(get<float>, {0x50C, 4, 0, 0})
	DMember(int32_t)                                   MaxSimultaneousTileGenerationJobsCount                      OFFSET(get<int32_t>, {0x510, 4, 0, 0})
	DMember(int32_t)                                   TileNumberHardLimit                                         OFFSET(get<int32_t>, {0x514, 4, 0, 0})
	DMember(int32_t)                                   PolyRefTileBits                                             OFFSET(get<int32_t>, {0x518, 4, 0, 0})
	DMember(int32_t)                                   PolyRefNavPolyBits                                          OFFSET(get<int32_t>, {0x51C, 4, 0, 0})
	DMember(int32_t)                                   PolyRefSaltBits                                             OFFSET(get<int32_t>, {0x520, 4, 0, 0})
	SMember(FVector)                                   NavMeshOriginOffset                                         OFFSET(getStruct<T>, {0x528, 24, 0, 0})
	DMember(float)                                     DefaultDrawDistance                                         OFFSET(get<float>, {0x540, 4, 0, 0})
	DMember(float)                                     DefaultMaxSearchNodes                                       OFFSET(get<float>, {0x544, 4, 0, 0})
	DMember(float)                                     DefaultMaxHierarchicalSearchNodes                           OFFSET(get<float>, {0x548, 4, 0, 0})
	CMember(ENavigationLedgeSlopeFilterMode)           LedgeSlopeFilterMode                                        OFFSET(get<T>, {0x54C, 1, 0, 0})
	CMember(TEnumAsByte<ERecastPartitioning>)          RegionPartitioning                                          OFFSET(get<T>, {0x54D, 1, 0, 0})
	CMember(TEnumAsByte<ERecastPartitioning>)          LayerPartitioning                                           OFFSET(get<T>, {0x54E, 1, 0, 0})
	DMember(int32_t)                                   RegionChunkSplits                                           OFFSET(get<int32_t>, {0x550, 4, 0, 0})
	DMember(int32_t)                                   LayerChunkSplits                                            OFFSET(get<int32_t>, {0x554, 4, 0, 0})
	DMember(bool)                                      bSortNavigationAreasByCost                                  OFFSET(get<bool>, {0x558, 1, 1, 0})
	DMember(bool)                                      bIsWorldPartitioned                                         OFFSET(get<bool>, {0x558, 1, 1, 1})
	DMember(bool)                                      bPerformVoxelFiltering                                      OFFSET(get<bool>, {0x558, 1, 1, 2})
	DMember(bool)                                      bMarkLowHeightAreas                                         OFFSET(get<bool>, {0x558, 1, 1, 3})
	DMember(bool)                                      bUseExtraTopCellWhenMarkingAreas                            OFFSET(get<bool>, {0x558, 1, 1, 4})
	DMember(bool)                                      bFilterLowSpanSequences                                     OFFSET(get<bool>, {0x558, 1, 1, 5})
	DMember(bool)                                      bFilterLowSpanFromTileCache                                 OFFSET(get<bool>, {0x558, 1, 1, 6})
	DMember(bool)                                      bDoFullyAsyncNavDataGathering                               OFFSET(get<bool>, {0x558, 1, 1, 7})
	DMember(bool)                                      bUseBetterOffsetsFromCorners                                OFFSET(get<bool>, {0x559, 1, 1, 0})
	DMember(bool)                                      bStoreEmptyTileLayers                                       OFFSET(get<bool>, {0x559, 1, 1, 1})
	DMember(bool)                                      bUseVirtualFilters                                          OFFSET(get<bool>, {0x559, 1, 1, 2})
	DMember(bool)                                      bUseVirtualGeometryFilteringAndDirtying                     OFFSET(get<bool>, {0x559, 1, 1, 3})
	DMember(bool)                                      bAllowNavLinkAsPathEnd                                      OFFSET(get<bool>, {0x559, 1, 1, 4})
	DMember(int32_t)                                   TimeSliceFilterLedgeSpansMaxYProcess                        OFFSET(get<int32_t>, {0x55C, 4, 0, 0})
	DMember(double)                                    TimeSliceLongDurationDebug                                  OFFSET(get<double>, {0x560, 8, 0, 0})
	DMember(uint32_t)                                  InvokerTilePriorityBumpDistanceThresholdInTileUnits         OFFSET(get<uint32_t>, {0x568, 4, 0, 0})
	DMember(char)                                      InvokerTilePriorityBumpIncrease                             OFFSET(get<char>, {0x56C, 1, 0, 0})
	DMember(bool)                                      bUseVoxelCache                                              OFFSET(get<bool>, {0x570, 1, 1, 0})
	DMember(float)                                     TileSetUpdateInterval                                       OFFSET(get<float>, {0x574, 4, 0, 0})
	DMember(float)                                     HeuristicScale                                              OFFSET(get<float>, {0x578, 4, 0, 0})
	DMember(float)                                     VerticalDeviationFromGroundCompensation                     OFFSET(get<float>, {0x57C, 4, 0, 0})


	/// Functions
	// Function /Script/NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
	// bool K2_ReplaceAreaInTileBounds(FBox Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks);           // [0x74b4478] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.RecastNavMeshDataChunk
/// Size: 0x0010 (0x000030 - 0x000040)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/NavigationSystem.NavModifierComponent
/// Size: 0x00A0 (0x0000F0 - 0x000190)
class UNavModifierComponent : public UNavRelevantComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(class UClass*)                             AreaClass                                                   OFFSET(get<T>, {0xF0, 8, 0, 0})
	SMember(FVector)                                   FailsafeExtent                                              OFFSET(getStruct<T>, {0xF8, 24, 0, 0})
	CMember(ENavigationDataResolution)                 NavMeshResolution                                           OFFSET(get<T>, {0x110, 1, 0, 0})
	DMember(bool)                                      bIncludeAgentHeight                                         OFFSET(get<bool>, {0x111, 1, 1, 0})


	/// Functions
	// Function /Script/NavigationSystem.NavModifierComponent.SetAreaClass
	// void SetAreaClass(class UClass* NewAreaClass);                                                                           // [0x74d57b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavModifierVolume
/// Size: 0x0018 (0x0002C8 - 0x0002E0)
class ANavModifierVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(class UClass*)                             AreaClass                                                   OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(bool)                                      bMaskFillCollisionUnderneathForNavmesh                      OFFSET(get<bool>, {0x2D8, 1, 0, 0})
	CMember(ENavigationDataResolution)                 NavMeshResolution                                           OFFSET(get<T>, {0x2D9, 1, 0, 0})


	/// Functions
	// Function /Script/NavigationSystem.NavModifierVolume.SetAreaClass
	// void SetAreaClass(class UClass* NewAreaClass);                                                                           // [0x74d56bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavSystemConfigOverride
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ANavSystemConfigOverride : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class UNavigationSystemConfig*)            NavigationSystemConfig                                      OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(ENavSystemOverridePolicy)                  OverridePolicy                                              OFFSET(get<T>, {0x298, 1, 0, 0})
	DMember(bool)                                      bLoadOnClient                                               OFFSET(get<bool>, {0x299, 1, 1, 0})
};

/// Class /Script/NavigationSystem.SplineNavModifierComponent
/// Size: 0x0010 (0x000190 - 0x0001A0)
class USplineNavModifierComponent : public UNavModifierComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	DMember(double)                                    SplineExtent                                                OFFSET(get<double>, {0x190, 8, 0, 0})
	DMember(int32_t)                                   NumSplineSamples                                            OFFSET(get<int32_t>, {0x198, 4, 0, 0})
};

/// Struct /Script/NavigationSystem.NavCollisionCylinder
/// Size: 0x0020 (0x000000 - 0x000020)
class FNavCollisionCylinder : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Offset                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/NavigationSystem.NavCollisionBox
/// Size: 0x0030 (0x000000 - 0x000030)
class FNavCollisionBox : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Offset                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Extent                                                      OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/NavigationSystem.NavigationFilterArea
/// Size: 0x0018 (0x000000 - 0x000018)
class FNavigationFilterArea : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UClass*)                             AreaClass                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     TravelCostOverride                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     EnteringCostOverride                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bIsExcluded                                                 OFFSET(get<bool>, {0x10, 1, 1, 0})
	DMember(bool)                                      bOverrideTravelCost                                         OFFSET(get<bool>, {0x10, 1, 1, 1})
	DMember(bool)                                      bOverrideEnteringCost                                       OFFSET(get<bool>, {0x10, 1, 1, 2})
};

/// Struct /Script/NavigationSystem.NavigationFilterFlags
/// Size: 0x0004 (0x000000 - 0x000004)
class FNavigationFilterFlags : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bNavFlag0                                                   OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bNavFlag1                                                   OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bNavFlag2                                                   OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(bool)                                      bNavFlag3                                                   OFFSET(get<bool>, {0x0, 1, 1, 3})
	DMember(bool)                                      bNavFlag4                                                   OFFSET(get<bool>, {0x0, 1, 1, 4})
	DMember(bool)                                      bNavFlag5                                                   OFFSET(get<bool>, {0x0, 1, 1, 5})
	DMember(bool)                                      bNavFlag6                                                   OFFSET(get<bool>, {0x0, 1, 1, 6})
	DMember(bool)                                      bNavFlag7                                                   OFFSET(get<bool>, {0x0, 1, 1, 7})
	DMember(bool)                                      bNavFlag8                                                   OFFSET(get<bool>, {0x1, 1, 1, 0})
	DMember(bool)                                      bNavFlag9                                                   OFFSET(get<bool>, {0x1, 1, 1, 1})
	DMember(bool)                                      bNavFlag10                                                  OFFSET(get<bool>, {0x1, 1, 1, 2})
	DMember(bool)                                      bNavFlag11                                                  OFFSET(get<bool>, {0x1, 1, 1, 3})
	DMember(bool)                                      bNavFlag12                                                  OFFSET(get<bool>, {0x1, 1, 1, 4})
	DMember(bool)                                      bNavFlag13                                                  OFFSET(get<bool>, {0x1, 1, 1, 5})
	DMember(bool)                                      bNavFlag14                                                  OFFSET(get<bool>, {0x1, 1, 1, 6})
	DMember(bool)                                      bNavFlag15                                                  OFFSET(get<bool>, {0x1, 1, 1, 7})
};

/// Struct /Script/NavigationSystem.NavGraphEdge
/// Size: 0x0018 (0x000000 - 0x000018)
class FNavGraphEdge : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/NavigationSystem.NavGraphNode
/// Size: 0x0018 (0x000000 - 0x000018)
class FNavGraphNode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UObject*)                            Owner                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/NavigationSystem.SupportedAreaData
/// Size: 0x0020 (0x000000 - 0x000020)
class FSupportedAreaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   AreaClassName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   AreaID                                                      OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(class UClass*)                             AreaClass                                                   OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/NavigationSystem.NavLinkCustomInstanceData
/// Size: 0x0010 (0x000068 - 0x000078)
class FNavLinkCustomInstanceData : public FActorComponentInstanceData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FNavLinkId)                                CustomLinkId                                                OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FNavLinkAuxiliaryId)                       AuxiliaryCustomLinkId                                       OFFSET(getStruct<T>, {0x70, 8, 0, 0})
};

/// Struct /Script/NavigationSystem.RecastNavMeshGenerationProperties
/// Size: 0x0040 (0x000000 - 0x000040)
class FRecastNavMeshGenerationProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   TilePoolSize                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     TileSizeUU                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     CellSize                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CellHeight                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     AgentRadius                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AgentHeight                                                 OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AgentMaxSlope                                               OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     AgentMaxStepHeight                                          OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MinRegionArea                                               OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MergeRegionSize                                             OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     MaxSimplificationError                                      OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   TileNumberHardLimit                                         OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(TEnumAsByte<ERecastPartitioning>)          RegionPartitioning                                          OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TEnumAsByte<ERecastPartitioning>)          LayerPartitioning                                           OFFSET(get<T>, {0x31, 1, 0, 0})
	DMember(int32_t)                                   RegionChunkSplits                                           OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   LayerChunkSplits                                            OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      bSortNavigationAreasByCost                                  OFFSET(get<bool>, {0x3C, 1, 1, 0})
	DMember(bool)                                      bPerformVoxelFiltering                                      OFFSET(get<bool>, {0x3C, 1, 1, 1})
	DMember(bool)                                      bMarkLowHeightAreas                                         OFFSET(get<bool>, {0x3C, 1, 1, 2})
	DMember(bool)                                      bUseExtraTopCellWhenMarkingAreas                            OFFSET(get<bool>, {0x3C, 1, 1, 3})
	DMember(bool)                                      bFilterLowSpanSequences                                     OFFSET(get<bool>, {0x3C, 1, 1, 4})
	DMember(bool)                                      bFilterLowSpanFromTileCache                                 OFFSET(get<bool>, {0x3C, 1, 1, 5})
	DMember(bool)                                      bFixedTilePoolSize                                          OFFSET(get<bool>, {0x3C, 1, 1, 6})
	DMember(bool)                                      bIsWorldPartitioned                                         OFFSET(get<bool>, {0x3C, 1, 1, 7})
};

/// Struct /Script/NavigationSystem.RecastNavMeshTileGenerationDebug
/// Size: 0x001C (0x000000 - 0x00001C)
class FRecastNavMeshTileGenerationDebug : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 1, 0})
	SMember(FIntVector)                                TileCoordinate                                              OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	DMember(bool)                                      bGenerateDebugTileOnly                                      OFFSET(get<bool>, {0x10, 1, 1, 0})
	DMember(bool)                                      bCollisionGeometry                                          OFFSET(get<bool>, {0x10, 1, 1, 1})
	CMember(EHeightFieldRenderMode)                    HeightFieldRenderMode                                       OFFSET(get<T>, {0x14, 1, 0, 0})
	DMember(bool)                                      bHeightfieldFromRasterization                               OFFSET(get<bool>, {0x18, 1, 1, 0})
	DMember(bool)                                      bHeightfieldPostInclusionBoundsFiltering                    OFFSET(get<bool>, {0x18, 1, 1, 1})
	DMember(bool)                                      bHeightfieldPostHeightFiltering                             OFFSET(get<bool>, {0x18, 1, 1, 2})
	DMember(bool)                                      bHeightfieldBounds                                          OFFSET(get<bool>, {0x18, 1, 1, 3})
	DMember(bool)                                      bCompactHeightfield                                         OFFSET(get<bool>, {0x18, 1, 1, 4})
	DMember(bool)                                      bCompactHeightfieldEroded                                   OFFSET(get<bool>, {0x18, 1, 1, 5})
	DMember(bool)                                      bCompactHeightfieldRegions                                  OFFSET(get<bool>, {0x18, 1, 1, 6})
	DMember(bool)                                      bCompactHeightfieldDistances                                OFFSET(get<bool>, {0x18, 1, 1, 7})
	DMember(bool)                                      bTileCacheLayerAreas                                        OFFSET(get<bool>, {0x19, 1, 1, 0})
	DMember(bool)                                      bTileCacheLayerRegions                                      OFFSET(get<bool>, {0x19, 1, 1, 1})
	DMember(bool)                                      bSkipContourSimplification                                  OFFSET(get<bool>, {0x19, 1, 1, 2})
	DMember(bool)                                      bTileCacheContours                                          OFFSET(get<bool>, {0x19, 1, 1, 3})
	DMember(bool)                                      bTileCachePolyMesh                                          OFFSET(get<bool>, {0x19, 1, 1, 4})
	DMember(bool)                                      bTileCacheDetailMesh                                        OFFSET(get<bool>, {0x19, 1, 1, 5})
};

/// Struct /Script/NavigationSystem.NavMeshResolutionParam
/// Size: 0x000C (0x000000 - 0x00000C)
class FNavMeshResolutionParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     CellSize                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     CellHeight                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AgentMaxStepHeight                                          OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Enum /Script/NavigationSystem.ERuntimeGenerationType
/// Size: 0x04
enum class ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static                                                   = 0,
	ERuntimeGenerationType__DynamicModifiersOnly                                     = 1,
	ERuntimeGenerationType__Dynamic                                                  = 2,
	ERuntimeGenerationType__LegacyGeneration                                         = 3
};

/// Enum /Script/NavigationSystem.ENavCostDisplay
/// Size: 0x03
enum class ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost                                                       = 0,
	ENavCostDisplay__HeuristicOnly                                                   = 1,
	ENavCostDisplay__RealCostOnly                                                    = 2
};

/// Enum /Script/NavigationSystem.ERecastPartitioning
/// Size: 0x03
enum class ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone                                                    = 0,
	ERecastPartitioning__Watershed                                                   = 1,
	ERecastPartitioning__ChunkyMonotone                                              = 2
};

/// Enum /Script/NavigationSystem.ENavigationLedgeSlopeFilterMode
/// Size: 0x03
enum class ENavigationLedgeSlopeFilterMode : uint8_t
{
	ENavigationLedgeSlopeFilterMode__Recast                                          = 0,
	ENavigationLedgeSlopeFilterMode__None                                            = 1,
	ENavigationLedgeSlopeFilterMode__UseStepHeightFromAgentMaxSlope                  = 2
};

/// Enum /Script/NavigationSystem.EHeightFieldRenderMode
/// Size: 0x02
enum class EHeightFieldRenderMode : uint8_t
{
	EHeightFieldRenderMode__Solid                                                    = 0,
	EHeightFieldRenderMode__Walkable                                                 = 1
};

/// Enum /Script/NavigationSystem.ENavSystemOverridePolicy
/// Size: 0x03
enum class ENavSystemOverridePolicy : uint8_t
{
	ENavSystemOverridePolicy__Override                                               = 0,
	ENavSystemOverridePolicy__Append                                                 = 1,
	ENavSystemOverridePolicy__Skip                                                   = 2
};

