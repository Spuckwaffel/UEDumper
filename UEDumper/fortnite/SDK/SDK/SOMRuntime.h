
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/SOMRuntime.FortScriptedObjectMovement_GridProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortScriptedObjectMovement_GridProviderInterface : public UInterface
{ 
public:
};

/// Struct /Script/SOMRuntime.FortScriptedObjectMovementPhaseData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFortScriptedObjectMovementPhaseData
{ 
	TArray<class AFortScriptedObjectMovement_Structure*> Structures;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_Grid
/// Size: 0x00C8 (0x000000 - 0x0000C8)
struct FScriptedObjectMovement_Grid
{ 
	FVector                                            CellSize;                                                   // 0x0050   (0x0018)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0068   (0x0060)  MISSED
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_DynamicPathContext
/// Size: 0x0038 (0x000000 - 0x000038)
struct FScriptedObjectMovement_DynamicPathContext
{ 
	class UFortScriptedObjectMovement_Slot*            SourceSlot;                                                 // 0x0000   (0x0008)  
	class UFortScriptedObjectMovement_Slot*            DestinationSlot;                                            // 0x0008   (0x0008)  
	SDK_UNDEFINED(16,12565) /* TScriptInterface<Class> */ __um(GridProvider);                                      // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0020   (0x0018)  MISSED
};

/// Class /Script/SOMRuntime.FortScriptedObjectMovement_WorldPhaseSite
/// Size: 0x01C8 (0x000290 - 0x000458)
class AFortScriptedObjectMovement_WorldPhaseSite : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0290   (0x0008)  MISSED
	TArray<FFortScriptedObjectMovementPhaseData>       Phases;                                                     // 0x0298   (0x0010)  
	FScalableFloat                                     NumSimulatenousMovingObjects;                               // 0x02A8   (0x0028)  
	FScalableFloat                                     PhaseIntervalSeconds;                                       // 0x02D0   (0x0028)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x02F8   (0x0020)  MISSED
	FScriptedObjectMovement_Grid                       BaseGrid;                                                   // 0x0318   (0x00C8)  
	FScriptedObjectMovement_DynamicPathContext         InProgressPath;                                             // 0x03E0   (0x0038)  
	TArray<class UFortScriptedObjectMovement_Slot*>    LeavingSlotStack;                                           // 0x0418   (0x0010)  
	TArray<class UFortScriptedObjectMovement_Slot*>    DestinationSlotStack;                                       // 0x0428   (0x0010)  
	TArray<class UFortScriptedObjectMovement_Slot*>    OverflowSlotStack;                                          // 0x0438   (0x0010)  
	TArray<class AFortScriptedObjectMovement_MovableObjectBase*> CurrentlyMovingObjects;                           // 0x0448   (0x0010)  
};

/// Class /Script/SOMRuntime.FortScriptedObjectMovement_SlotDefinition
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortScriptedObjectMovement_SlotDefinition : public UPrimaryDataAsset
{ 
public:
	class UClass*                                      ScriptedObjectClass;                                        // 0x0030   (0x0008)  
	float                                              ObjectScale;                                                // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/SOMRuntime.FortScriptedObjectMovement_Slot
/// Size: 0x0020 (0x0005C0 - 0x0005E0)
class UFortScriptedObjectMovement_Slot : public UStaticMeshComponent
{ 
public:
	class UFortScriptedObjectMovement_SlotDefinition*  SlotDefinition;                                             // 0x05C0   (0x0008)  
	int32_t                                            ObjectRemoveOrder;                                          // 0x05C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x05CC   (0x0004)  MISSED
	class AFortScriptedObjectMovement_MovableObjectBase* SlottedObject;                                            // 0x05D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x05D8   (0x0008)  MISSED
};

/// Class /Script/SOMRuntime.FortScriptedObjectMovement_Structure
/// Size: 0x0020 (0x000290 - 0x0002B0)
class AFortScriptedObjectMovement_Structure : public AActor
{ 
public:
	TArray<class UFortScriptedObjectMovement_Slot*>    CachedObjectSlots;                                          // 0x0290   (0x0010)  
	TArray<class UFortScriptedObjectMovement_SlotDefinition*> CachedSlotDefinitions;                               // 0x02A0   (0x0010)  
};

/// Class /Script/SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager
/// Size: 0x0120 (0x0000A0 - 0x0001C0)
class UFortGameStateComponent_ScriptedObjectMovementManager : public UFortGameStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	TArray<class AFortScriptedObjectMovement_WorldPhaseSite*> WorldPhaseSites;                                     // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x98];                                      // 0x00B8   (0x0098)  MISSED
	TArray<class AScriptedObjectMovement_StaticPath*>  RegisteredStaticPaths;                                      // 0x0150   (0x0010)  
	class AScriptedObjectMovement_StaticPath*          CurrentlyMovingStaticPath;                                  // 0x0160   (0x0008)  
	unsigned char                                      UnknownData02_5[0x28];                                      // 0x0168   (0x0028)  MISSED
	FScalableFloat                                     StaticPathCooldownBetweenMoves;                             // 0x0190   (0x0028)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x01B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager.HandleCurrentPlaylistReady
	// void HandleCurrentPlaylistReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xa8994fc] Final|Native|Private|HasOutParms 
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_StaticPathStepData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FScriptedObjectMovement_StaticPathStepData
{ 
	FTransform                                         StartWorldTransform;                                        // 0x0000   (0x0060)  
	FTransform                                         EndWorldTransform;                                          // 0x0060   (0x0060)  
	int32_t                                            MasterPathStartSplinePoint;                                 // 0x00C0   (0x0004)  
	int32_t                                            SubSplineStartPoint;                                        // 0x00C4   (0x0004)  
	float                                              MoveAtServerTimeSecs;                                       // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	class AFortScriptedObjectMovement_MovableObjectBase* PathTraveler;                                             // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FGameplayTag                                       MoveStyleTag;                                               // 0x00E0   (0x0004)  
	bool                                               bTeleport;                                                  // 0x00E4   (0x0001)  
	bool                                               bIsSkipStep;                                                // 0x00E5   (0x0001)  
	unsigned char                                      UnknownData02_6[0xA];                                       // 0x00E6   (0x000A)  MISSED
};

/// Class /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase
/// Size: 0x0210 (0x000980 - 0x000B90)
class AFortScriptedObjectMovement_MovableObjectBase : public ABuildingGameplayActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x70];                                      // 0x0980   (0x0070)  MISSED
	int32_t                                            Editor_SkipMasterPathIndex;                                 // 0x09F0   (0x0004)  
	int32_t                                            Editor_SkipSubPathIndex;                                    // 0x09F4   (0x0004)  
	int32_t                                            Editor_NumStepsPerClick;                                    // 0x09F8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x24];                                      // 0x09FC   (0x0024)  MISSED
	class UFortScriptedObjectMovement_SlotDefinition*  AssignedSlotDefinition;                                     // 0x0A20   (0x0008)  
	FScriptedObjectMovement_DynamicPathContext         MovementPath;                                               // 0x0A28   (0x0038)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0A60   (0x0008)  MISSED
	class UStaticMesh*                                 ScriptedObjectMesh;                                         // 0x0A68   (0x0008)  
	unsigned char                                      UnknownData03_5[0x18];                                      // 0x0A70   (0x0018)  MISSED
	bool                                               bDebugStaticMovement;                                       // 0x0A88   (0x0001)  
	bool                                               bWaitingForBeginPlaySkip;                                   // 0x0A89   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x0A8A   (0x0006)  MISSED
	class AScriptedObjectMovement_StaticPath*          StaticFollowPath;                                           // 0x0A90   (0x0008)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x0A98   (0x0008)  MISSED
	FScriptedObjectMovement_StaticPathStepData         CurrentStepData;                                            // 0x0AA0   (0x00F0)  


	/// Functions
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.SetCanEverAffectNavigation
	// void SetCanEverAffectNavigation(bool bCanEverAffectNavigation, class UActorComponent* TargetActorComponent);          // [0xa899778] Final|Native|Public|BlueprintCallable 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.OnRep_CurrentStepData
	// void OnRep_CurrentStepData();                                                                                         // [0xa899764] Final|Native|Private 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.NotifyStaticPathStepComplete
	// void NotifyStaticPathStepComplete(bool bReachedBeginPlaySkipStep);                                                    // [0xa8996e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.HandleSlotDefinitionSlotted
	// void HandleSlotDefinitionSlotted(class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition);                   // [0xa89962c] Native|Event|Public|BlueprintEvent 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetStaticPathZOffsetHeight
	// float GetStaticPathZOffsetHeight();                                                                                   // [0xa89884c] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetStaticPathTravelingBounds
	// void GetStaticPathTravelingBounds(FVector& OutBoxExtent);                                                             // [0xa898784] Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetScriptedObjectStaticMeshComponent
	// class UStaticMeshComponent* GetScriptedObjectStaticMeshComponent();                                                   // [0xa89875c] Native|Event|Public|BlueprintEvent 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_TryJumpToStartStep
	// void Editor_TryJumpToStartStep();                                                                                     // [0xa898734] Final|Native|Public  
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_ResetObject
	// void Editor_ResetObject();                                                                                            // [0xa8986b0] Final|Native|Public  
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_PreviousStep
	// void Editor_PreviousStep();                                                                                           // [0x36203b0] Final|Native|Public  
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_NextStep
	// void Editor_NextStep();                                                                                               // [0x36203b0] Final|Native|Public  
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_DebugLogStaticPathTravelIndex
	// void Editor_DebugLogStaticPathTravelIndex();                                                                          // [0xa89869c] Final|Native|Public  
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_ClearResetObjectLocation
	// void Editor_ClearResetObjectLocation();                                                                               // [0xa898678] Final|Native|Public  
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.ConfigureStaticMeshToSlotDefinition
	// void ConfigureStaticMeshToSlotDefinition(class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition, class UStaticMeshComponent* StaticMeshComponent); // [0xa8985a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.CheatDrawKeyframes
	// void CheatDrawKeyframes();                                                                                            // [0x36203b0] Final|Native|Public  
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Cheat_NetMulticast_SendDebugTimerInfo
	// void Cheat_NetMulticast_SendDebugTimerInfo(float ServerTimeWhenQueryInvoked, float RemainingTime);                    // [0xa8984dc] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.BlockOverlappingStaticPathSteps
	// bool BlockOverlappingStaticPathSteps();                                                                               // [0xa8984b4] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.BeginMovingToStaticPathNode
	// void BeginMovingToStaticPathNode(FScriptedObjectMovement_StaticPathStepData& StepData);                               // [0xa8983f4] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_StaticPathCalendarCheatDefinitionData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData
{ 
	SDK_UNDEFINED(16,12566) /* FString */              __um(EventName);                                            // 0x0000   (0x0010)  
	float                                              DurationTimeSeconds;                                        // 0x0010   (0x0004)  
	float                                              DelayStartTimeSeconds;                                      // 0x0014   (0x0004)  
};

/// Class /Script/SOMRuntime.ScriptedObjectMovement_CalendarCheatDefinition
/// Size: 0x0010 (0x000030 - 0x000040)
class UScriptedObjectMovement_CalendarCheatDefinition : public UPrimaryDataAsset
{ 
public:
	TArray<FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData> CheatCalendarEvents;                     // 0x0030   (0x0010)  
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_StepMetaData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FScriptedObjectMovement_StepMetaData
{ 
	bool                                               bSkipStep;                                                  // 0x0000   (0x0001)  
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_StaticPathTravelerData
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FScriptedObjectMovement_StaticPathTravelerData
{ 
	TArray<class USplineComponent*>                    GeneratedSplinesArray;                                      // 0x0000   (0x0010)  
	TArray<FScriptedObjectMovement_StepMetaData>       StepMetaData;                                               // 0x0010   (0x0010)  
	class USplineComponent*                            EnterSpline;                                                // 0x0020   (0x0008)  
	class USplineComponent*                            ExitSpline;                                                 // 0x0028   (0x0008)  
	class AFortScriptedObjectMovement_MovableObjectBase* PathTraveler;                                             // 0x0030   (0x0008)  
	int32_t                                            TravelOrder;                                                // 0x0038   (0x0004)  
	float                                              LateralOffset;                                              // 0x003C   (0x0004)  
	bool                                               bLocked;                                                    // 0x0040   (0x0001)  
	bool                                               bLockEnterSpline;                                           // 0x0041   (0x0001)  
	bool                                               bLockExitSpline;                                            // 0x0042   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0043   (0x0005)  MISSED
	FVector                                            TravelerBounds;                                             // 0x0048   (0x0018)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0060   (0x0060)  MISSED
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_StaticPathSplineInputKeyData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FScriptedObjectMovement_StaticPathSplineInputKeyData
{ 
	bool                                               bLockGeneratedData;                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,12567) /* FString */              __um(CalendarEvent);                                        // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,12568) /* FString */              __um(PauseCalendarEvent);                                   // 0x0018   (0x0010)  
};

/// Struct /Script/SOMRuntime.StaticPathCalendarSplinePointGroup
/// Size: 0x0030 (0x000000 - 0x000030)
struct FStaticPathCalendarSplinePointGroup
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/SOMRuntime.ScriptedObjectMovement_StaticPath
/// Size: 0x0250 (0x000290 - 0x0004E0)
#pragma pack(push, 0x1)
class alignas(0x10) AScriptedObjectMovement_StaticPath : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0290   (0x0018)  MISSED
	class USplineComponent*                            MasterSplinePath;                                           // 0x02A8   (0x0008)  
	TArray<FScriptedObjectMovement_StaticPathTravelerData> PathTravelers;                                          // 0x02B0   (0x0010)  
	TArray<FScriptedObjectMovement_StaticPathSplineInputKeyData> SplineData;                                       // 0x02C0   (0x0010)  
	float                                              StepSpacingDistance;                                        // 0x02D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02D4   (0x0004)  MISSED
	SDK_UNDEFINED(32,12569) /* TWeakObjectPtr<UScriptedObjectMovement_CalendarCheatDefinition*> */ __um(CheatCalendarEventDefinition); // 0x02D8   (0x0020)  
	FGameplayTag                                       MovementStyleTag;                                           // 0x02F8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x7C];                                      // 0x02FC   (0x007C)  MISSED
	SDK_UNDEFINED(16,12570) /* FString */              __um(EnterSplineCalendarEvent);                             // 0x0378   (0x0010)  
	SDK_UNDEFINED(16,12571) /* FString */              __um(ExitSplineCalendarEvent);                              // 0x0388   (0x0010)  
	TArray<FStaticPathCalendarSplinePointGroup>        OrderedCalendarEventPointGroups;                            // 0x0398   (0x0010)  
	unsigned char                                      UnknownData03_5[0x128];                                     // 0x03A8   (0x0128)  MISSED
	class UFortAsyncAction_CalendarMultiEventWatcher*  CalendarWatcherAction;                                      // 0x04D0   (0x0008)  


	/// Functions
	// Function /Script/SOMRuntime.ScriptedObjectMovement_StaticPath.UnlockAllPathsFromBeingRegenerated
	// void UnlockAllPathsFromBeingRegenerated();                                                                            // [0xa89983c] Final|Native|Public  
	// Function /Script/SOMRuntime.ScriptedObjectMovement_StaticPath.LockAllPathNodesFromBeingRegenerated
	// void LockAllPathNodesFromBeingRegenerated();                                                                          // [0xa8996b0] Final|Native|Public  
	// Function /Script/SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventUpdated
	// void HandleCalendarEventUpdated(FString EventName, FTimespan TimeUntilEnd, FTimespan TimeSinceBegin, float TimespanRatio); // [0xa8990d0] Native|Protected|HasDefaults 
	// Function /Script/SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventEnded
	// void HandleCalendarEventEnded(FString EventName, FTimespan TimeUntilEnd, FTimespan TimeSinceBegin, float TimespanRatio); // [0xa898ca4] Native|Protected|HasDefaults 
	// Function /Script/SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventActive
	// void HandleCalendarEventActive(FString EventName, FTimespan TimeUntilEnd, FTimespan TimeSinceBegin, float TimespanRatio); // [0xa898878] Native|Protected|HasDefaults 
	// Function /Script/SOMRuntime.ScriptedObjectMovement_StaticPath.GeneratePathData
	// void GeneratePathData();                                                                                              // [0xa898748] Final|Native|Public  
};
#pragma pack(pop)

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_AStarGraphWrapper
/// Size: 0x0001 (0x000000 - 0x000001)
struct FScriptedObjectMovement_AStarGraphWrapper
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovementCalendarEventData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FScriptedObjectMovementCalendarEventData
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

