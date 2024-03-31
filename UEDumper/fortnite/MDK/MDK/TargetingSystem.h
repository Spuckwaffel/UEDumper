
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayAbilities
/// dependency: GameplayTasks

/// Class /Script/TargetingSystem.AbilityTask_PerformTargeting
/// Size: 0x0030 (0x000078 - 0x0000A8)
class UAbilityTask_PerformTargeting : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  OnTargetReady                                               OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/TargetingSystem.AbilityTask_PerformTargeting.PerformTargetingRequest
	// class UAbilityTask_PerformTargeting* PerformTargetingRequest(class UGameplayAbility* OwningAbility, class UTargetingPreset* InTargetingPreset, bool bAllowAsync); // [0x7aef00c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TargetingSystem.AbilityTask_PerformTargeting.PerformFilteringRequest
	// class UAbilityTask_PerformTargeting* PerformFilteringRequest(class UGameplayAbility* OwningAbility, class UTargetingPreset* TargetingPreset, TArray<AActor*> InTargets, bool bAllowAsync); // [0x7aee9e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/TargetingSystem.AsyncAction_PerformTargeting
/// Size: 0x0038 (0x000030 - 0x000068)
class UAsyncAction_PerformTargeting : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FMulticastInlineDelegate)                  Targeted                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(class UTargetingPreset*)                   TargetingPreset                                             OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   WeakSourceActor                                             OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<class AActor*>)                     InitialTargets                                              OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FTargetingRequestHandle)                   TargetingHandle                                             OFFSET(getStruct<T>, {0x60, 4, 0, 0})
	DMember(bool)                                      bUseAsyncTargeting                                          OFFSET(get<bool>, {0x64, 1, 1, 0})


	/// Functions
	// Function /Script/TargetingSystem.AsyncAction_PerformTargeting.PerformTargetingRequest
	// class UAsyncAction_PerformTargeting* PerformTargetingRequest(class AActor* SourceActor, class UTargetingPreset* TargetingPreset, bool bUseAsyncTargeting); // [0x33640d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TargetingSystem.AsyncAction_PerformTargeting.PerformFilteringRequest
	// class UAsyncAction_PerformTargeting* PerformFilteringRequest(class AActor* SourceActor, class UTargetingPreset* TargetingPreset, bool bUseAsyncTargeting, TArray<AActor*> InTargets); // [0x7aeec9c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TargetingSystem.AsyncAction_PerformTargeting.GetTargetingHandle
	// FTargetingRequestHandle GetTargetingHandle();                                                                            // [0x7aee5b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TargetingSystem.TargetingTask
/// Size: 0x0000 (0x000028 - 0x000028)
class UTargetingTask : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TargetingSystem.TargetingTask.GetTargetingSubsystem
	// class UTargetingSubsystem* GetTargetingSubsystem(FTargetingRequestHandle& TargetingHandle);                              // [0x3501b28] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TargetingSystem.TargetingFilterTask_BasicFilterTemplate
/// Size: 0x0000 (0x000028 - 0x000028)
class UTargetingFilterTask_BasicFilterTemplate : public UTargetingTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TargetingSystem.SimpleTargetingFilterTask
/// Size: 0x0000 (0x000028 - 0x000028)
class USimpleTargetingFilterTask : public UTargetingFilterTask_BasicFilterTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TargetingSystem.SimpleTargetingFilterTask.BP_ShouldFilterTarget
	// bool BP_ShouldFilterTarget(FTargetingRequestHandle& TargetingHandle, FTargetingDefaultResultData& TargetData);           // [0x186becc] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/TargetingSystem.SimpleTargetingSelectionTask
/// Size: 0x0000 (0x000028 - 0x000028)
class USimpleTargetingSelectionTask : public UTargetingTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TargetingSystem.SimpleTargetingSelectionTask.SelectTargets
	// void SelectTargets(FTargetingRequestHandle& TargetingHandle, FTargetingSourceContext& SourceContext);                    // [0x186becc] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.SimpleTargetingSelectionTask.AddTargetActor
	// bool AddTargetActor(FTargetingRequestHandle& TargetingHandle, class AActor* Actor);                                      // [0x7aedd20] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/TargetingSystem.SimpleTargetingSelectionTask.AddHitResult
	// bool AddHitResult(FTargetingRequestHandle& TargetingHandle, FHitResult& HitResult);                                      // [0x7aedb7c] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
};

/// Class /Script/TargetingSystem.TargetingSortTask_Base
/// Size: 0x0008 (0x000028 - 0x000030)
class UTargetingSortTask_Base : public UTargetingTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bAscending                                                  OFFSET(get<bool>, {0x28, 1, 1, 0})
};

/// Class /Script/TargetingSystem.SimpleTargetingSortTask
/// Size: 0x0000 (0x000030 - 0x000030)
class USimpleTargetingSortTask : public UTargetingSortTask_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/TargetingSystem.SimpleTargetingSortTask.BP_GetScoreForTarget
	// float BP_GetScoreForTarget(FTargetingRequestHandle& TargetingHandle, FTargetingDefaultResultData& TargetData);           // [0x186becc] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/TargetingSystem.TargetingFilterTask_ActorClass
/// Size: 0x0020 (0x000028 - 0x000048)
class UTargetingFilterTask_ActorClass : public UTargetingFilterTask_BasicFilterTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<class UClass*>)                     RequiredActorClassFilters                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<class UClass*>)                     IgnoredActorClassFilters                                    OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/TargetingSystem.TargetingPreset
/// Size: 0x0010 (0x000030 - 0x000040)
class UTargetingPreset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FTargetingTaskSet)                         TargetingTaskSet                                            OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/TargetingSystem.TargetingSelectionTask_AOE
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UTargetingSelectionTask_AOE : public UTargetingTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(ETargetingAOEShape)                        ShapeType                                                   OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            CollisionChannel                                            OFFSET(get<T>, {0x29, 1, 0, 0})
	SMember(FCollisionProfileName)                     CollisionProfileName                                        OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	CMember(TArray<TEnumAsByte<EObjectTypeQuery>>)     CollisionObjectTypes                                        OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FVector)                                   DefaultSourceOffset                                         OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	DMember(bool)                                      bUseRelativeOffset                                          OFFSET(get<bool>, {0x58, 1, 1, 0})
	DMember(bool)                                      bIgnoreSourceActor                                          OFFSET(get<bool>, {0x58, 1, 1, 1})
	DMember(bool)                                      bIgnoreInstigatorActor                                      OFFSET(get<bool>, {0x58, 1, 1, 2})
	SMember(FVector)                                   HalfExtent                                                  OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FScalableFloat)                            Radius                                                      OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            HalfHeight                                                  OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FName)                                     ComponentTag                                                OFFSET(getStruct<T>, {0xC8, 4, 0, 0})


	/// Functions
	// Function /Script/TargetingSystem.TargetingSelectionTask_AOE.GetSourceRotation
	// FQuat GetSourceRotation(FTargetingRequestHandle& TargetingHandle);                                                       // [0x7aee3c8] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_AOE.GetSourceOffset
	// FVector GetSourceOffset(FTargetingRequestHandle& TargetingHandle);                                                       // [0x7aee318] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_AOE.GetSourceLocation
	// FVector GetSourceLocation(FTargetingRequestHandle& TargetingHandle);                                                     // [0x7aee1b8] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
};

/// Class /Script/TargetingSystem.TargetingSelectionTask_SourceActor
/// Size: 0x0000 (0x000028 - 0x000028)
class UTargetingSelectionTask_SourceActor : public UTargetingTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TargetingSystem.TargetingSelectionTask_Trace
/// Size: 0x0148 (0x000028 - 0x000170)
class UTargetingSelectionTask_Trace : public UTargetingTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(ETargetingTraceType)                       TraceType                                                   OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TEnumAsByte<ETraceTypeQuery>)              TraceChannel                                                OFFSET(get<T>, {0x29, 1, 0, 0})
	SMember(FCollisionProfileName)                     CollisionProfileName                                        OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	SMember(FScalableFloat)                            DefaultSweptTraceRadius                                     OFFSET(getStruct<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            DefaultSweptTraceCapsuleHalfHeight                          OFFSET(getStruct<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            DefaultSweptTraceBoxHalfExtentX                             OFFSET(getStruct<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            DefaultSweptTraceBoxHalfExtentY                             OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            DefaultSweptTraceBoxHalfExtentZ                             OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FRotator)                                  DefaultSweptTraceRotation                                   OFFSET(getStruct<T>, {0xF8, 24, 0, 0})
	SMember(FScalableFloat)                            DefaultTraceLength                                          OFFSET(getStruct<T>, {0x110, 40, 0, 0})
	SMember(FVector)                                   DefaultSourceOffset                                         OFFSET(getStruct<T>, {0x138, 24, 0, 0})
	SMember(FVector)                                   ExplicitTraceDirection                                      OFFSET(getStruct<T>, {0x150, 24, 0, 0})
	DMember(bool)                                      bComplexTrace                                               OFFSET(get<bool>, {0x168, 1, 1, 0})
	DMember(bool)                                      bIgnoreSourceActor                                          OFFSET(get<bool>, {0x168, 1, 1, 1})
	DMember(bool)                                      bIgnoreInstigatorActor                                      OFFSET(get<bool>, {0x168, 1, 1, 2})


	/// Functions
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetTraceLength
	// float GetTraceLength(FTargetingRequestHandle& TargetingHandle);                                                          // [0x3501a88] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetTraceDirection
	// FVector GetTraceDirection(FTargetingRequestHandle& TargetingHandle);                                                     // [0x7aee794] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetSweptTraceRotation
	// FRotator GetSweptTraceRotation(FTargetingRequestHandle& TargetingHandle);                                                // [0x7aee318] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetSweptTraceRadius
	// float GetSweptTraceRadius(FTargetingRequestHandle& TargetingHandle);                                                     // [0x7aee518] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetSweptTraceCapsuleHalfHeight
	// float GetSweptTraceCapsuleHalfHeight(FTargetingRequestHandle& TargetingHandle);                                          // [0x7aee478] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetSweptTraceBoxHalfExtents
	// FVector GetSweptTraceBoxHalfExtents(FTargetingRequestHandle& TargetingHandle);                                           // [0x7aee1b8] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetSourceOffset
	// FVector GetSourceOffset(FTargetingRequestHandle& TargetingHandle);                                                       // [0x35019d8] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetSourceLocation
	// FVector GetSourceLocation(FTargetingRequestHandle& TargetingHandle);                                                     // [0x7aee268] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetAdditionalActorsToIgnore
	// void GetAdditionalActorsToIgnore(FTargetingRequestHandle& TargetingHandle, TArray<AActor*>& OutAdditionalActorsToIgnore); // [0x3501884] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/TargetingSystem.TargetingSubsystem
/// Size: 0x0048 (0x000030 - 0x000078)
class UTargetingSubsystem : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FTargetingRequestHandle>)           AsyncTargetingRequests                                      OFFSET(get<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/TargetingSystem.TargetingSubsystem.StartAsyncTargetingRequest
	// FTargetingRequestHandle StartAsyncTargetingRequest(class UTargetingPreset* TargetingPreset, FTargetingSourceContext& InSourceContext, FDelegateProperty CompletionDynamicDelegate); // [0x7aef284] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TargetingSystem.TargetingSubsystem.RemoveAsyncTargetingRequestWithHandle
	// void RemoveAsyncTargetingRequestWithHandle(FTargetingRequestHandle& TargetingHandle);                                    // [0x7aef1f8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TargetingSystem.TargetingSubsystem.OverrideCollisionQueryTaskData
	// void OverrideCollisionQueryTaskData(FTargetingRequestHandle TargetingHandle, FCollisionQueryTaskData& CollisionQueryDataOverride); // [0x7aee844] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TargetingSystem.TargetingSubsystem.GetTargetingSourceContext
	// FTargetingSourceContext GetTargetingSourceContext(FTargetingRequestHandle TargetingHandle);                              // [0x247cde4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TargetingSystem.TargetingSubsystem.GetTargetingResultsActors
	// void GetTargetingResultsActors(FTargetingRequestHandle TargetingHandle, TArray<AActor*>& Targets);                       // [0x7aee5cc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TargetingSystem.TargetingSubsystem.GetTargetingResults
	// void GetTargetingResults(FTargetingRequestHandle TargetingHandle, TArray<FHitResult>& OutTargets);                       // [0x247c774] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TargetingSystem.TargetingSubsystem.ExecuteTargetingRequest
	// void ExecuteTargetingRequest(class UTargetingPreset* TargetingPreset, FTargetingSourceContext& InSourceContext, FDelegateProperty CompletionDynamicDelegate); // [0x7aede9c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TargetingSystem.TargetingFilterTask_SortByDistance
/// Size: 0x0008 (0x000030 - 0x000038)
class UTargetingFilterTask_SortByDistance : public UTargetingSortTask_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bUseDistanceToNearestBlockingCollider                       OFFSET(get<bool>, {0x30, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            DistanceToCollisionChannel                                  OFFSET(get<T>, {0x31, 1, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingRequestHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FTargetingRequestHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/TargetingSystem.CollisionQueryTaskData
/// Size: 0x0010 (0x000000 - 0x000010)
class FCollisionQueryTaskData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class AActor*>)                     IgnoredActors                                               OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingTaskSet
/// Size: 0x0010 (0x000000 - 0x000010)
class FTargetingTaskSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UTargetingTask*>)             Tasks                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingDefaultResultData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FTargetingDefaultResultData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FHitResult)                                HitResult                                                   OFFSET(getStruct<T>, {0x0, 232, 0, 0})
	DMember(float)                                     Score                                                       OFFSET(get<float>, {0xE8, 4, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingDefaultResultsSet
/// Size: 0x0010 (0x000000 - 0x000010)
class FTargetingDefaultResultsSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FTargetingDefaultResultData>)       TargetResults                                               OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingSourceContext
/// Size: 0x0038 (0x000000 - 0x000038)
class FTargetingSourceContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class AActor*)                             SourceActor                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AActor*)                             InstigatorActor                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   SourceLocation                                              OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FName)                                     SourceSocketName                                            OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(class UObject*)                            SourceObject                                                OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingRequestData
/// Size: 0x0030 (0x000000 - 0x000030)
class FTargetingRequestData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FDelegateProperty)                         TargetingRequestDynamicDelegate                             OFFSET(getStruct<T>, {0x20, 12, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingAsyncTaskData
/// Size: 0x0008 (0x000000 - 0x000008)
class FTargetingAsyncTaskData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TargetingSystem.TargetingImmediateTaskData
/// Size: 0x0001 (0x000000 - 0x000001)
class FTargetingImmediateTaskData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TargetingSystem.TargetingDebugData
/// Size: 0x0001 (0x000000 - 0x000001)
class FTargetingDebugData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Enum /Script/TargetingSystem.ETargetingAOEShape
/// Size: 0x06
enum class ETargetingAOEShape : uint8_t
{
	ETargetingAOEShape__Box                                                          = 0,
	ETargetingAOEShape__Cylinder                                                     = 1,
	ETargetingAOEShape__Sphere                                                       = 2,
	ETargetingAOEShape__Capsule                                                      = 3,
	ETargetingAOEShape__SourceComponent                                              = 4,
	ETargetingAOEShape__ETargetingAOEShape_MAX                                       = 5
};

/// Enum /Script/TargetingSystem.ETargetingTraceType
/// Size: 0x05
enum class ETargetingTraceType : uint8_t
{
	ETargetingTraceType__Line                                                        = 0,
	ETargetingTraceType__Sphere                                                      = 1,
	ETargetingTraceType__Capsule                                                     = 2,
	ETargetingTraceType__Box                                                         = 3,
	ETargetingTraceType__ETargetingTraceType_MAX                                     = 4
};

