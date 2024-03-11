
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
/// dependency: GameplayTags
/// dependency: MeshNetwork
/// dependency: SOMRuntime

/// Enum /Script/CorruptionGameplayCodeRuntime.EWarEffortFundingStationType
/// Size: 0x04
enum class EWarEffortFundingStationType : uint8_t
{
	Final                                                                            = 0,
	Tower                                                                            = 1,
	Choice                                                                           = 2,
	EWarEffortFundingStationType_MAX                                                 = 3
};

/// Class /Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWarEffortFundingLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.WriteTextToBuffer
	// FString WriteTextToBuffer(FText& Text);                                                                               // [0xa8b1da0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.IsOption2ChoiceWinner
	// bool IsOption2ChoiceWinner(FWarEffortFundingMetadata& MetaData, int32_t ChoiceIndex);                                 // [0xa8b0f14] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.IsOption1ChoiceWinner
	// bool IsOption1ChoiceWinner(FWarEffortFundingMetadata& MetaData, int32_t ChoiceIndex);                                 // [0xa8b0d48] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.IsIndexFunded
	// bool IsIndexFunded(FWarEffortFundingMetadata& MetaData, int32_t Index, TEnumAsByte<EWarEffortFundingStationType> StationType); // [0xa8b091c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.GetIndexFundedPercent
	// float GetIndexFundedPercent(FWarEffortFundingMetadata& MetaData, int32_t Index, TEnumAsByte<EWarEffortFundingStationType> StationType); // [0xa8b06a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.DoesChoiceHaveWinner
	// bool DoesChoiceHaveWinner(FWarEffortFundingMetadata& MetaData, int32_t ChoiceIndex);                                  // [0xa8b040c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.AdjustDonation
	// int32_t AdjustDonation(int32_t DonationAmount, TEnumAsByte<EWarEffortFundingStationType> StationType);                // [0xa8b02ec] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/CorruptionGameplayCodeRuntime.CorruptionCoverageMap
/// Size: 0x0068 (0x000028 - 0x000090)
class UCorruptionCoverageMap : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0000   (0x0090)  MISSED


	/// Functions
	// Function /Script/CorruptionGameplayCodeRuntime.CorruptionCoverageMap.UpdateCorruptionCoverageMap
	// bool UpdateCorruptionCoverageMap(class UObject* WorldContextObject, class UTextureRenderTarget2D* CorruptionRenderTarget, FVector& InTopLeftWorldCoordinate, FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration); // [0xa8b1ab4] Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CorruptionGameplayCodeRuntime.CorruptionCoverageMap.IsLocationCorrupted
	// bool IsLocationCorrupted(FVector& Location, float Padding);                                                           // [0xa8b0bbc] Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CorruptionGameplayCodeRuntime.CorruptionCalendarEventData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCorruptionCalendarEventData
{ 
	SDK_UNDEFINED(16,12572) /* FString */              __um(EventName);                                            // 0x0000   (0x0010)  
	float                                              StartPercent;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/CorruptionGameplayCodeRuntime.CorruptionPauseEvent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCorruptionPauseEvent
{ 
	SDK_UNDEFINED(16,12573) /* FString */              __um(EventName);                                            // 0x0000   (0x0010)  
	float                                              PercentDurationToPause;                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/CorruptionGameplayCodeRuntime.FortCorruptionSequenceData
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortCorruptionSequenceData : public UPrimaryDataAsset
{ 
public:
	TArray<FCorruptionCalendarEventData>               CorruptionStartEvents;                                      // 0x0030   (0x0010)  
	TArray<FCorruptionPauseEvent>                      CorruptionPauseEvents;                                      // 0x0040   (0x0010)  
};

/// Struct /Script/CorruptionGameplayCodeRuntime.TravelerStepCorruptionOverrideData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FTravelerStepCorruptionOverrideData
{ 
	SDK_UNDEFINED(80,12574) /* TMap<FString, float> */ __um(PointGroupStepPercentOverrides);                       // 0x0000   (0x0050)  
};

/// Class /Script/CorruptionGameplayCodeRuntime.CubeMovementStaticPath
/// Size: 0x0030 (0x0004E0 - 0x000510)
class ACubeMovementStaticPath : public AScriptedObjectMovement_StaticPath
{ 
public:
	float                                              GenerationZTraceHeight;                                     // 0x04D8   (0x0004)  
	float                                              CubeSpacingFactor;                                          // 0x04DC   (0x0004)  
	float                                              CubeAngleLimitDegrees;                                      // 0x04E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x04E4   (0x0004)  MISSED
	class UFortCorruptionSequenceData*                 CorruptionSequence;                                         // 0x04E8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x04F0   (0x0008)  MISSED
	TArray<FTravelerStepCorruptionOverrideData>        TravelerCorruptionStepPercentOverrides;                     // 0x04F8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0508   (0x0008)  MISSED


	/// Functions
	// Function /Script/CorruptionGameplayCodeRuntime.CubeMovementStaticPath.EditorGetCorruptionGenerationData
	// void EditorGetCorruptionGenerationData(FCubeMovement_CorruptionGenerationData& OutData);                              // [0xa8b05b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CorruptionGameplayCodeRuntime.CubeMovementStaticPath.ClearAllGeneratedSplinesAndLockedData
	// void ClearAllGeneratedSplinesAndLockedData();                                                                         // [0xa8b03f8] Final|Native|Protected 
};

/// Struct /Script/CorruptionGameplayCodeRuntime.WarEffortMutatorMetadata
/// Size: 0x001F (0x000001 - 0x000020)
struct FWarEffortMutatorMetadata : FMeshMetaDataStruct
{ 
	TArray<FGameplayTag>                               ActiveFundedItems;                                          // 0x0000   (0x0010)  
	TArray<FGameplayTag>                               ActiveTryBeforeYouBuyItems;                                 // 0x0010   (0x0010)  
};

/// Struct /Script/CorruptionGameplayCodeRuntime.WarEffortMutatorChoiceData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FWarEffortMutatorChoiceData
{ 
	FGameplayTag                                       FundingTag;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,12575) /* TArray<TWeakObjectPtr<UFortItemDefinition*>> */ __um(SoftRefsToLoad);               // 0x0008   (0x0010)  
	SDK_UNDEFINED(80,12576) /* TMap<FName, FScalableFloat> */ __um(LootTableMods);                                 // 0x0018   (0x0050)  
};

/// Class /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort
/// Size: 0x0068 (0x000490 - 0x0004F8)
class AFortAthenaMutator_WarEffort : public AFortAthenaMutator_GameModeBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0490   (0x0008)  MISSED
	FWarEffortMutatorMetadata                          MeshNetworkMetadata;                                        // 0x0498   (0x0020)  
	TArray<FWarEffortMutatorChoiceData>                WeaponChoices;                                              // 0x04B8   (0x0010)  
	TArray<FPrimaryAssetId>                            PreloadedItemList;                                          // 0x04C8   (0x0010)  
	bool                                               bCanPreloadItems;                                           // 0x04D8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1F];                                      // 0x04D9   (0x001F)  MISSED


	/// Functions
	// Function /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetTryBeforeYouBuyItemState
	// void SetTryBeforeYouBuyItemState(FGameplayTag ItemFundingTag, bool bIsActive);                                        // [0xa8b18a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedState
	// void SetItemFundedState(FGameplayTag ItemFundingTag, bool bIsActive);                                                 // [0xa8b1694] Final|Native|Public|BlueprintCallable 
	// Function /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedPercent
	// void SetItemFundedPercent(FGameplayTag ItemFundingTag, float FundingPercent);                                         // [0xa8b148c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetItemFundedAmount
	// void SetItemFundedAmount(FGameplayTag ItemFundingTag, int64_t CurrentFundingAmount, int64_t TargetFundingAmount);     // [0xa8b11b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.SetFundingManagerReady
	// void SetFundingManagerReady(bool bIsReady);                                                                           // [0xa8b1130] Final|Native|Public|BlueprintCallable 
	// Function /Script/CorruptionGameplayCodeRuntime.FortAthenaMutator_WarEffort.OnRep_PreloadedItemList
	// void OnRep_PreloadedItemList();                                                                                       // [0xa8b111c] Final|Native|Protected 
};

/// Struct /Script/CorruptionGameplayCodeRuntime.WarEffortFundingData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FWarEffortFundingData
{ 
	FGameplayTag                                       FundingTag;                                                 // 0x0000   (0x0004)  
	float                                              FundedPercent;                                              // 0x0004   (0x0004)  
};

/// Class /Script/CorruptionGameplayCodeRuntime.WarEffortMeshActor
/// Size: 0x0088 (0x000290 - 0x000318)
class AWarEffortMeshActor : public AInfo
{ 
public:
	class UMeshNetworkComponent*                       MeshNetworkComponent;                                       // 0x0290   (0x0008)  
	TArray<FGameplayTag>                               ActiveFundedItems;                                          // 0x0298   (0x0010)  
	TArray<FGameplayTag>                               ActiveTryBeforeYouBuyItems;                                 // 0x02A8   (0x0010)  
	TArray<FWarEffortFundingData>                      CurrentFundingData;                                         // 0x02B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x02C8   (0x0050)  MISSED


	/// Functions
	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_CurrentFundingData
	// void OnRep_CurrentFundingData();                                                                                      // [0xa8b1108] Final|Native|Protected 
	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_ActiveTryBeforeYouBuyItems
	// void OnRep_ActiveTryBeforeYouBuyItems();                                                                              // [0xa8b10f4] Final|Native|Protected 
	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortMeshActor.OnRep_ActiveFundedItems
	// void OnRep_ActiveFundedItems();                                                                                       // [0xa8b10e0] Final|Native|Protected 
};

/// Struct /Script/CorruptionGameplayCodeRuntime.WarEffortFundingOptionData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FWarEffortFundingOptionData
{ 
	FGameplayTag                                       OptionTag;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	int64_t                                            CurrentFundingAmount;                                       // 0x0008   (0x0008)  
};

/// Struct /Script/CorruptionGameplayCodeRuntime.WarEffortFundingChoiceData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FWarEffortFundingChoiceData
{ 
	FWarEffortFundingOptionData                        Option1;                                                    // 0x0000   (0x0010)  
	FWarEffortFundingOptionData                        Option2;                                                    // 0x0010   (0x0010)  
	int64_t                                            TargetFundingAmount;                                        // 0x0020   (0x0008)  
};

/// Struct /Script/CorruptionGameplayCodeRuntime.WarEffortIndexedFundingData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FWarEffortIndexedFundingData
{ 
	TArray<int64_t>                                    CurrentFundingArray;                                        // 0x0000   (0x0010)  
	int64_t                                            FinalFundingAmount;                                         // 0x0010   (0x0008)  
	int64_t                                            TowerFundingAmount;                                         // 0x0018   (0x0008)  
};

/// Struct /Script/CorruptionGameplayCodeRuntime.WarEffortFundingMetadata
/// Size: 0x002F (0x000001 - 0x000030)
struct FWarEffortFundingMetadata : FMeshMetaDataStruct
{ 
	FWarEffortIndexedFundingData                       IndexedFundingData;                                         // 0x0000   (0x0020)  
	TArray<FWarEffortFundingChoiceData>                FundingChoices;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/CorruptionGameplayCodeRuntime.CubeMovement_CorruptionGenerationSplinePointData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FCubeMovement_CorruptionGenerationSplinePointData
{ 
	FTransform                                         SplinePointTransform;                                       // 0x0000   (0x0060)  
	float                                              SplinePercentComplete;                                      // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/CorruptionGameplayCodeRuntime.CubeMovement_CorruptionGenerationTravelerData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCubeMovement_CorruptionGenerationTravelerData
{ 
	TArray<FCubeMovement_CorruptionGenerationSplinePointData> SplinePointData;                                     // 0x0000   (0x0010)  
	class AFortScriptedObjectMovement_MovableObjectBase* PathTraveler;                                             // 0x0010   (0x0008)  
};

/// Struct /Script/CorruptionGameplayCodeRuntime.CubeMovement_CorruptionGenerationData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCubeMovement_CorruptionGenerationData
{ 
	TArray<FCubeMovement_CorruptionGenerationTravelerData> TravelerData;                                           // 0x0000   (0x0010)  
};

