
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: GameplayTags
/// dependency: NavigationSystem

/// Class /Script/AIPatrolPath.AIPatrolPathEditorComponent
/// Size: 0x00A0 (0x000550 - 0x0005F0)
class UAIPatrolPathEditorComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
};

/// Class /Script/AIPatrolPath.AIPatrolPathComponent
/// Size: 0x0308 (0x0000A0 - 0x0003A8)
class UAIPatrolPathComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	CMember(TArray<FString>)                           SharedOptionNames                                           OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DefaultAIPawn                                               OFFSET(get<T>, {0xD8, 32, 0, 0})
	CMember(class UClass*)                             PathRendererClass                                           OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(bool)                                      bAllowPartialPaths                                          OFFSET(get<bool>, {0x100, 1, 0, 0})
	SMember(FGameplayTagContainer)                     UnableToPlaceNewDeviceTags                                  OFFSET(getStruct<T>, {0x108, 32, 0, 0})
	SMember(FNavAgentProperties)                       CachedAIAgentProperties                                     OFFSET(getStruct<T>, {0x128, 48, 0, 0})
	CMember(class UNavigationSystemV1*)                CachedNavSystem                                             OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class ANavigationData*)                    CachedNavData                                               OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(class UClass*)                             CachedFilterClass                                           OFFSET(get<T>, {0x168, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrolPointFailedToReach                                  OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrolPointReached                                        OFFSET(getStruct<T>, {0x190, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrolPathStarted                                         OFFSET(getStruct<T>, {0x1A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrolPathStopped                                         OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	CMember(TArray<class AActor*>)                     PatrolPath                                                  OFFSET(get<T>, {0x1C8, 16, 0, 0})
	SMember(FPatrolPathSegmentDetails)                 PathSegmentDetails                                          OFFSET(getStruct<T>, {0x1D8, 264, 0, 0})
	CMember(class UAIPatrolPathComponent*)             CopiedFrom                                                  OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class AActor*)                             CurrentCloningNode                                          OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UAIPatrolPathComponent*)             CopiedFromCut                                               OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class AFortCreativePatrolPath*)            PatrolPathActor                                             OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class AFortAthenaPatrolPoint*)             PatrolPointActor                                            OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(TArray<class UAIPatrolPathComponent*>)     MultiSelectActorToEnterList                                 OFFSET(get<T>, {0x320, 16, 0, 0})
	CMember(class UAIPatrolPathEditorComponent*)       PatrolPathEditorComponent                                   OFFSET(get<T>, {0x3A0, 8, 0, 0})


	/// Functions
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.UpdateEditorComponent
	// void UpdateEditorComponent();                                                                                            // [0x36203b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.ShouldRenderPath
	// bool ShouldRenderPath();                                                                                                 // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.SetRenderPath
	// void SetRenderPath(bool bRenderPath);                                                                                    // [0xa87b1fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.SetPatrolPathGroup
	// void SetPatrolPathGroup(EFortCreativePatrolPathGroup PatrolPathGroup);                                                   // [0xa87b0ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.SetPatrolPathEnabled
	// void SetPatrolPathEnabled(bool bIsEnabled);                                                                              // [0xa87b068] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.SetPatrollingMode
	// void SetPatrollingMode(EPatrollingMode NewMode);                                                                         // [0xa87b16c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.RequestRenderPath
	// void RequestRenderPath();                                                                                                // [0xa87b054] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.RenderToNextPoint
	// void RenderToNextPoint();                                                                                                // [0xa87b040] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.RenderToNextAndPreviousPoint
	// void RenderToNextAndPreviousPoint();                                                                                     // [0xa87afd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.RemovePoint
	// bool RemovePoint();                                                                                                      // [0xa87afb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PropagatePatrolPathPointIndexToDevice
	// void PropagatePatrolPathPointIndexToDevice(int32_t NewPatrolPathPointIndex);                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PropagatePatrolPathIndexToDevice
	// void PropagatePatrolPathIndexToDevice(int32_t NewPatrolPathIndex);                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PostFinishSpawningActor
	// void PostFinishSpawningActor();                                                                                          // [0xa87af9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PatrolPointReached
	// void PatrolPointReached(class AFortAthenaPatrolPoint* PathPoint, class AAIController* Instigator);                       // [0xa87aed8] Final|Native|Private 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PatrolPointFailedToReach
	// void PatrolPointFailedToReach(class AFortAthenaPatrolPoint* PathPoint, class AAIController* Instigator);                 // [0xa87ae14] Final|Native|Private 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PatrolPathStopped
	// void PatrolPathStopped(class AAIController* Instigator);                                                                 // [0xa87ad94] Final|Native|Private 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PatrolPathStarted
	// void PatrolPathStarted(class AAIController* Instigator);                                                                 // [0xa87ad14] Final|Native|Private 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.OnPatrolPathActorAssigned
	// void OnPatrolPathActorAssigned();                                                                                        // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.OnPathExtremitiesChanged
	// void OnPathExtremitiesChanged(bool bIsStart, bool bIsEnd);                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.OnAnyPropertyChanged
	// void OnAnyPropertyChanged();                                                                                             // [0x36203b0] Final|Native|Protected 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.NotifyEditorUserOptionChanged
	// void NotifyEditorUserOptionChanged(TArray<FString>& UserOptions);                                                        // [0x8489844] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.HasValidPatrolPath
	// bool HasValidPatrolPath();                                                                                               // [0xa87acc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPointIndexFromDevice
	// int32_t GetPatrolPathPointIndexFromDevice();                                                                             // [0x18a39e4] Event|Public|BlueprintEvent|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPointIndex
	// int32_t GetPatrolPathPointIndex();                                                                                       // [0xa87aca4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPoint
	// class UAIPatrolPathComponent* GetPatrolPathPoint(int32_t InPatrolPathIndex, int32_t InPatrolPathPointIndex);             // [0xa87abe4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathIndexFromDevice
	// int32_t GetPatrolPathIndexFromDevice();                                                                                  // [0x18a39e4] Event|Public|BlueprintEvent|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathIndex
	// int32_t GetPatrolPathIndex();                                                                                            // [0xa87abc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathGroup
	// EFortCreativePatrolPathGroup GetPatrolPathGroup();                                                                       // [0x18a39e4] Event|Public|BlueprintEvent|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrollingMode
	// EPatrollingMode GetPatrollingMode();                                                                                     // [0x18a39e4] Event|Public|BlueprintEvent|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolFilterOptions
	// class UClass* GetPatrolFilterOptions();                                                                                  // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetNextAvailablePatrolPathIndex
	// bool GetNextAvailablePatrolPathIndex(int32_t& NextAvailableIndex);                                                       // [0xa87ab28] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetLinkedPatrolPoints
	// TArray<UAIPatrolPathComponent*> GetLinkedPatrolPoints();                                                                 // [0xa87aabc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GeneratePathPoints
	// void GeneratePathPoints(EFortCreativePatrolPathGroup PatrolPathGroup, bool bGenerationCausedByDuplication);              // [0xa87a9f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.CanNextPointBeReached
	// bool CanNextPointBeReached();                                                                                            // [0xa87a9d8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AIPatrolPath.PatrolPathSegmentDetails
/// Size: 0x0108 (0x000000 - 0x000108)
class FPatrolPathSegmentDetails : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(class UNavigationPath*)                    Path                                                        OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UAIPatrolPathComponent*)             Start                                                       OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UAIPatrolPathComponent*)             End                                                         OFFSET(get<T>, {0xB8, 8, 0, 0})
};

/// Enum /Script/AIPatrolPath.EAIPatrolPathVersion
/// Size: 0x06
enum class EAIPatrolPathVersion : uint8_t
{
	EAIPatrolPathVersion__InitialVersion                                             = 0,
	EAIPatrolPathVersion__TemplateFromQuickBarVersion                                = 1,
	EAIPatrolPathVersion__PatrolPointMovedToUserSettingsVersion                      = 2,
	EAIPatrolPathVersion__VersionPlusOne                                             = 3,
	EAIPatrolPathVersion__LatestVersion                                              = 2,
	EAIPatrolPathVersion__EAIPatrolPathVersion_MAX                                   = 4
};

/// Enum /Script/AIPatrolPath.SegmentPathStatus
/// Size: 0x06
enum class SegmentPathStatus : uint8_t
{
	SegmentPathStatus__INVALID                                                       = 0,
	SegmentPathStatus__CALCULATING                                                   = 1,
	SegmentPathStatus__RECALCULATING_PENDING                                         = 2,
	SegmentPathStatus__PATH_FAILED                                                   = 3,
	SegmentPathStatus__PATH_SUCCESS                                                  = 4,
	SegmentPathStatus__SegmentPathStatus_MAX                                         = 5
};
