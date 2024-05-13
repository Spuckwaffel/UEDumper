
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: SlateCore

/// Class /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UMissionBlueprintFunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.Any Player Pawn Near Location
	// void Any Player Pawn Near Location(double DistanceToCheck, FVector Location, TArray<AFortPlayerPawn*>& Ignore Player Pawns, class UObject* __WorldContext, bool& IsPawnNearLocation, TArray<AFortPawn*>& PawnsNearLocation); // [0x20c3f9c] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetSeasonalEventManager
	// void GetSeasonalEventManager(class UObject* WorldContextObject, class UObject* __WorldContext, class UFortSeasonalEventManager*& SeasonalEventManager); // [0x20c3f9c] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_CanBeElemental
	// void NPC_CanBeElemental(FGameplayTag PawnTag, class UObject* __WorldContext, bool& Value);                               // [0x20c3f9c] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.LaunchHoverboard
	// void LaunchHoverboard(class AActor* HoverboardActor, FVector LaunchVelocity, FName ForceFeedbackTag, class UObject* __WorldContext, bool& Success); // [0x20c3f9c] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_ConvertTagToNameText
	// void NPC_ConvertTagToNameText(FGameplayTag PawnTag, class UObject* __WorldContext, FText& Name);                         // [0x20c3f9c] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.CheckBasicVectorToActorLineOfSight
	// void CheckBasicVectorToActorLineOfSight(FVector Vector A, class AActor* Actor B, FVector Actor B Location Offset, TEnumAsByte<ETraceTypeQuery> TraceChannel, TEnumAsByte<EDrawDebugTrace> DrawDebugType, double DrawTime, TArray<AActor*>& ActorsToIgnore, bool bTraceComplex, bool bRequireThatTraceHitActorB, class UObject* __WorldContext, bool& In Line Of Sight, double& Distance); // [0x20c3f9c] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.CheckBasicActorLineOfSight
	// void CheckBasicActorLineOfSight(class AActor* Actor A, FVector ActorA Location Offset, class AActor* Actor B, FVector Actor B Location Offset, bool UseActorHalfHeightForSight, TEnumAsByte<ETraceTypeQuery> TraceChannel, TEnumAsByte<EDrawDebugTrace> DrawDebugType, double DrawTime, bool bTraceComplex, class UObject* __WorldContext, bool& In Line Of Sight, double& Distance); // [0x20c3f9c] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_LockThenRotateInPlace
	// void NPC_LockThenRotateInPlace(bool LockedInPlace, class AFortPlayerPawn* PlayerPawn, class AFortAIPawn* SurvivorPawn, class UObject* __WorldContext); // [0x20c3f9c] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetControllersNearActorThatRequireQuestObjective
	// void GetControllersNearActorThatRequireQuestObjective(double Distance, class AActor* Actor, class UFortQuestItemDefinition* Quest Item, FName Quest Item Backend Objective Name, class UObject* __WorldContext, TArray<AFortPlayerController*>& PlayerControllersNearbyThatRequireQuest, bool& SuccessfullyFoundPlayer); // [0x20c3f9c] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HaveAllPlayersCompletedQuest
	// void HaveAllPlayersCompletedQuest(class UFortQuestItemDefinition* QuestItem, class UObject* __WorldContext, bool& AllPlayersCompletedQuest); // [0x20c3f9c] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuestObjectiveHandle
	// void HasPlayerCompletedQuestObjectiveHandle(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, FDataTableRowHandle QuestBackendObjectiveHandle, class UObject* __WorldContext, class AFortPlayerController*& PlayerControllerOut, bool& CompletedQuestObjective); // [0x20c3f9c] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesAnyPlayerRequireQuestObjective
	// void DoesAnyPlayerRequireQuestObjective(class UFortQuestItemDefinition* QuestReference, FDataTableRowHandle QuestObjectiveHandle, class UObject* __WorldContext, TArray<AFortPlayerController*>& PlayerControllersWhoRequireObjective, bool& SomebodyRequiresObjective); // [0x20c3f9c] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HideParticleComponentsAttachedToMesh
	// void HideParticleComponentsAttachedToMesh(class UStaticMeshComponent* MeshComponent, class UObject* __WorldContext, bool& SuccessfullyDeactivatedParticle); // [0x20c3f9c] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuestObjective
	// void HasPlayerCompletedQuestObjective(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, FName QuestBackendObjectiveName, class UObject* __WorldContext, class AFortPlayerController*& PlayerControllerOut, bool& CompletedQuestObjective); // [0x20c3f9c] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetContributingControllersNearActor
	// void GetContributingControllersNearActor(double Distance, class AActor* Actor, class UObject* __WorldContext, TArray<AFortPlayerController*>& PlayerControllersNearby, bool& SuccessfullyFoundPlayer); // [0x20c3f9c] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.PointLocationsBetweenTwoVectors
	// void PointLocationsBetweenTwoVectors(FVector Vector 1, FVector Vector 2, int32_t HowManyPoints, class UObject* __WorldContext, TArray<FVector>& VectorPoints, bool& SuccessfullyFoundPoints); // [0x20c3f9c] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetCurrentDifficulty
	// void GetCurrentDifficulty(class UObject* __WorldContext, double& Difficulty, bool& Success);                             // [0x20c3f9c] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ApplyDifficultyOffset
	// void ApplyDifficultyOffset(FName RowName, double BaseDifficulty, class UObject* __WorldContext, bool& Success);          // [0x20c3f9c] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DistanceBetweenTwoVectors
	// void DistanceBetweenTwoVectors(FVector Vector1, FVector vector2, class UObject* __WorldContext, double& Distance);       // [0x20c3f9c] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuest
	// void HasPlayerCompletedQuest(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, FName QuestBackendName, class UObject* __WorldContext, class AFortPlayerController*& PlayerControllerOut, bool& CompletedQuest); // [0x20c3f9c] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.SeperatePlayersWhoNeedQuest
	// void SeperatePlayersWhoNeedQuest(class UFortQuestItemDefinition* QuestItemReference, FName QuestObjectiveBackendName, class UObject* __WorldContext, TArray<AFortPlayerController*>& PlayersWhoNeedQuest, TArray<AFortPlayerController*>& PlayersWhoDoNotNeedQuest); // [0x20c3f9c] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.BasicBuildingItemDrop
	// void BasicBuildingItemDrop(TEnumAsByte<EnumEventWorldItemDrop> Item Drop Level, FVector LootDropLocation, class UObject* __WorldContext); // [0x20c3f9c] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetBuildingRecommendation
	// void GetBuildingRecommendation(FName RowName, class UObject* __WorldContext, int32_t& BuildingCount, bool& RowFound);    // [0x20c3f9c] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.Random_360_VectorInRange
	// void Random_360_VectorInRange(double MinDistance, double MaxDistance, class UObject* __WorldContext, FVector& Random Vector Result ); // [0x20c3f9c] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPawnNearActor
	// void AnyPawnNearActor(double DistanceToCheck, class AActor* Actor, class UObject* __WorldContext, bool& IsPawnNearActor, TArray<AFortPawn*>& PawnsNearActor); // [0x20c3f9c] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GiveQuestUpdateToPlayers
	// void GiveQuestUpdateToPlayers(class UFortQuestItemDefinition* Quest Reference, FName Quest Objective Backend Name, FDataTableRowHandle ObjectiveStatEvent, TArray<AFortPlayerController*>& PlayerControllersForUpdate, class UObject* __WorldContext); // [0x20c3f9c] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DropChance
	// void DropChance(double DropPercentChance, class UObject* __WorldContext, bool& DropResult);                              // [0x20c3f9c] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPlayerNearActor
	// void AnyPlayerNearActor(double DistanceToCheck, class AActor* Actor, class UObject* __WorldContext, bool& IsPlayerNearActor, TArray<AFortPlayerPawn*>& PlayersNearActor); // [0x20c3f9c] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.FlashObjectiveUI
	// void FlashObjectiveUI(class AFortObjectiveBase* Objective Reference, class UObject* __WorldContext);                     // [0x20c3f9c] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStopRescue
	// void NPC_DroneStopRescue(class AActor* Actor, class AActor* Instigator, class UObject* __WorldContext);                  // [0x20c3f9c] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStartRescue
	// void NPC_DroneStartRescue(class AActor* Actor, class AActor* Instigator, class UObject* __WorldContext);                 // [0x20c3f9c] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ListPlayersWhoNeedQuest
	// void ListPlayersWhoNeedQuest(class UFortQuestItemDefinition* Quest Reference, FName Quest Backend Name, class UObject* __WorldContext, TArray<AFortPlayerController*>& Player Controllers Who Require The Quest, bool& DoesAnyoneRequireTheQuest); // [0x20c3f9c] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesAnyoneRequireQuest
	// void DoesAnyoneRequireQuest(class UFortQuestItemDefinition* QuestReference, FName Quest Backend Name, class UObject* __WorldContext, bool& SomePlayerNeedsTheQuest); // [0x20c3f9c] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.QuestObjectiveCountAchieved
	// void QuestObjectiveCountAchieved(class AFortPlayerController* PlayerControllerReference, class UFortQuestItemDefinition* Quest Item Reference, FDataTableRowHandle ObjectiveStatHandle, class UObject* __WorldContext, int32_t& Quest Count Achieved, int32_t& Quest Count Required, bool& SuccessfullyFoundCount); // [0x20c3f9c] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HighlightQuestActor
	// void HighlightQuestActor(class AActor* ActorToHighlight, bool HighlightEnabled, class UObject* __WorldContext);          // [0x20c3f9c] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesPlayerHaveQuest
	// void DoesPlayerHaveQuest(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* Quest Item Reference, FName Quest Item Objective Backend Name, class UObject* __WorldContext, bool& QuestValid, class AFortPlayerController*& PlayerControllerRef); // [0x20c3f9c] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetObjectiveBadgeIconBrush
	// void GetObjectiveBadgeIconBrush(class AFortObjectiveBase* Objective, FGameplayTag RewardTag, class UObject* __WorldContext, FSlateBrush& IconBrush); // [0x20c3f9c] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.UnRegisterUI UpdatesWithDamageEvents
	// void UnRegisterUI UpdatesWithDamageEvents(class AActor* ActorToUnRegisterWith, class AFortMissionState* MissionState, class UObject* __WorldContext); // [0x20c3f9c] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.RegisterUI UpdatesWithDamageEvents
	// void RegisterUI UpdatesWithDamageEvents(class AActor* ActorToRegisterWith, class AFortMissionState* MissionState, class UObject* __WorldContext); // [0x20c3f9c] Static|Public|BlueprintCallable|BlueprintEvent 
};

/// Enum /Game/Missions/Secondary/Events/SatelliteSalvage/EnumEventWorldItemDrop.EnumEventWorldItemDrop
/// Size: 0x04
enum class EnumEventWorldItemDrop : uint8_t
{
	EnumEventWorldItemDrop__NewEnumerator0                                           = 0,
	EnumEventWorldItemDrop__NewEnumerator1                                           = 1,
	EnumEventWorldItemDrop__NewEnumerator2                                           = 2,
	EnumEventWorldItemDrop__NewEnumerator3                                           = 3
};

