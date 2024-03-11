
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModularGameplay

/// Class /Script/SparksCommonRuntime.SparksCommonUtilities
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class USparksCommonUtilities : public UGameStateComponent
{ 
public:
	bool                                               bSparksToolIsVisible;                                       // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/SparksCommonRuntime.SparksCommonUtilities.ShowSparksCaptureTool
	// void ShowSparksCaptureTool(bool bShow);                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SparksCommonRuntime.SparksCommonUtilities.GetSparksCommonUtilities
	// class USparksCommonUtilities* GetSparksCommonUtilities(class UObject* WorldContextObject);                            // [0xa763d38] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/SparksCommonRuntime.CrowdMemberToSpawn
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCrowdMemberToSpawn
{ 
	FVector2D                                          Location;                                                   // 0x0000   (0x0010)  
	FRotator                                           Rotator;                                                    // 0x0010   (0x0018)  
	float                                              Scale;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UInstancedStaticMeshComponent*               Mesh;                                                       // 0x0030   (0x0008)  
	int32_t                                            ID;                                                         // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/SparksCommonRuntime.SparksCrowdSpawner
/// Size: 0x0110 (0x000220 - 0x000330)
class USparksCrowdSpawner : public USceneComponent
{ 
public:
	SDK_UNDEFINED(80,15588) /* TMap<UInstancedStaticMeshComponent*, int32_t> */ __um(MeshWeights);                 // 0x0220   (0x0050)  
	int32_t                                            TotalMeshWeight;                                            // 0x0270   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0274   (0x0004)  MISSED
	FVector                                            Area;                                                       // 0x0278   (0x0018)  
	FIntPoint                                          CrowdSize;                                                  // 0x0290   (0x0008)  
	FVector2D                                          PositionRandomness;                                         // 0x0298   (0x0010)  
	FVector                                            LookAt;                                                     // 0x02A8   (0x0018)  
	float                                              LookAtRandomness;                                           // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02C4   (0x0004)  MISSED
	FRotator                                           AdditionalRotation;                                         // 0x02C8   (0x0018)  
	FVector2D                                          ScaleVariance;                                              // 0x02E0   (0x0010)  
	int32_t                                            BatchSize;                                                  // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02F4   (0x0004)  MISSED
	TArray<FCrowdMemberToSpawn>                        CrowdMembersToSpawn;                                        // 0x02F8   (0x0010)  
	class UCurveFloat*                                 ParamTransitionCurve;                                       // 0x0308   (0x0008)  
	FTimerHandle                                       TransitionTickTimerHandle;                                  // 0x0310   (0x0008)  
	int32_t                                            CurrentTransitionParamIndex;                                // 0x0318   (0x0004)  
	float                                              ParamValueAtStartOfTransition;                              // 0x031C   (0x0004)  
	float                                              CurrentParamValue;                                          // 0x0320   (0x0004)  
	float                                              CurrentTransitionTarget;                                    // 0x0324   (0x0004)  
	float                                              CurrentTransitionDuration;                                  // 0x0328   (0x0004)  
	float                                              TimeElapsedInCurrentTransition;                             // 0x032C   (0x0004)  


	/// Functions
	// Function /Script/SparksCommonRuntime.SparksCrowdSpawner.TransitionCrowdToTargetParamValue
	// void TransitionCrowdToTargetParamValue(int32_t DataIndex, float TargetValue, float TimeToTransition);                 // [0xa764ec8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCommonRuntime.SparksCrowdSpawner.SpawnCrowdNow
	// bool SpawnCrowdNow(FVector InArea, FIntPoint InCrowdSize, FVector2D InPositionRandomness, FVector2D InScaleVariance, FVector InLookAt, float InLookAtRandomeness, FRotator InAdditionalRotation, TMap<UInstancedStaticMeshComponent*, int32_t> InMeshWeights); // [0xa7646c8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SparksCommonRuntime.SparksCrowdSpawner.SpawnCrowd
	// bool SpawnCrowd(FVector InArea, FIntPoint InCrowdSize, FVector2D InPositionRandomness, FVector2D InScaleVariance, FVector InLookAt, float InLookAtRandomeness, FRotator InAdditionalRotation, int32_t InBatchSize, TMap<UInstancedStaticMeshComponent*, int32_t> InMeshWeights); // [0xa763df4] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/SparksCommonRuntime.SparksCommonAllPlayersReadyEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSparksCommonAllPlayersReadyEvent
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SparksCommonRuntime.SparksCommonStartCameraEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSparksCommonStartCameraEvent
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SparksCommonRuntime.SparksCommonCameraFinishedEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSparksCommonCameraFinishedEvent
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SparksCommonRuntime.SparksCommonEnableCameraDirectorEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSparksCommonEnableCameraDirectorEvent
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SparksCommonRuntime.SparksCommonCameraDirectorFinishedEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSparksCommonCameraDirectorFinishedEvent
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

