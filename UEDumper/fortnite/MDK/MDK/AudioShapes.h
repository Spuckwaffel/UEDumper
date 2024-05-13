
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioGameplay
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioShapes.AudioShapeComponent
/// Size: 0x0098 (0x0000A8 - 0x000140)
class UAudioShapeComponent : public UAudioGameplayComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     MaxDistanceOffset                                           OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     SmoothingDistance                                           OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     FadeInTime                                                  OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     FadeOutTime                                                 OFFSET(get<float>, {0xBC, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAudibleStateChanged                                       OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(TMap<FName, UAudioComponent*>)             AudioComponents                                             OFFSET(get<T>, {0xD0, 80, 0, 0})
	CMember(TArray<class APlayerController*>)          LocalControllers                                            OFFSET(get<T>, {0x120, 16, 0, 0})


	/// Functions
	// Function /Script/AudioShapes.AudioShapeComponent.UpdateAudioShape
	// void UpdateAudioShape(TArray<APlayerController*>& InLocalControllers);                                                   // [0x84b0280] Final|Native|Public|HasOutParms 
	// Function /Script/AudioShapes.AudioShapeComponent.Enable
	// void Enable();                                                                                                           // [0x304b16c] Native|Protected|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeComponent.Disable
	// void Disable();                                                                                                          // [0x142d4d4] Native|Protected|BlueprintCallable 
};

/// Class /Script/AudioShapes.AudioShapePrimitiveComponent
/// Size: 0x00C0 (0x000140 - 0x000200)
class UAudioShapePrimitiveComponent : public UAudioShapeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(class USoundBase*)                         SoundOnEdge                                                 OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class USoundBase*)                         SoundOnInside                                               OFFSET(get<T>, {0x148, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInsideStateChanged                                        OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	DMember(bool)                                      bUseOwningActorTransform                                    OFFSET(get<bool>, {0x160, 1, 0, 0})
	DMember(bool)                                      bAutoRefreshShape                                           OFFSET(get<bool>, {0x161, 1, 0, 0})
	SMember(FVector)                                   ActorTransformScale                                         OFFSET(getStruct<T>, {0x168, 24, 0, 0})


	/// Functions
	// Function /Script/AudioShapes.AudioShapePrimitiveComponent.GetIsPlayerInside
	// bool GetIsPlayerInside();                                                                                                // [0x84afd1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioShapes.AudioShapePrimitiveComponent.GetInsideAudioComponent
	// class UAudioComponent* GetInsideAudioComponent();                                                                        // [0x84afcc8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioShapes.AudioShapePrimitiveComponent.GetEdgeAudioComponent
	// class UAudioComponent* GetEdgeAudioComponent();                                                                          // [0x84afc74] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AudioShapes.AudioShapeBoxComponent
/// Size: 0x0068 (0x0001F8 - 0x000260)
class UAudioShapeBoxComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FTransform)                                BoxTransform                                                OFFSET(getStruct<T>, {0x200, 96, 0, 0})


	/// Functions
	// Function /Script/AudioShapes.AudioShapeBoxComponent.SetBoxTransform
	// void SetBoxTransform(FTransform& InTransform);                                                                           // [0x84afe88] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AudioShapes.AudioShapeCylinderComponent
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UAudioShapeCylinderComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(float)                                     HalfHeight                                                  OFFSET(get<float>, {0x1F8, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x1FC, 4, 0, 0})


	/// Functions
	// Function /Script/AudioShapes.AudioShapeCylinderComponent.SetRadius
	// void SetRadius(float InRadius);                                                                                          // [0x84b0120] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeCylinderComponent.SetHalfHeight
	// void SetHalfHeight(float InHalfHeight);                                                                                  // [0x84b0094] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioShapes.AudioShapeLineComponent
/// Size: 0x0038 (0x0001F8 - 0x000230)
class UAudioShapeLineComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FVector)                                   StartPoint                                                  OFFSET(getStruct<T>, {0x1F8, 24, 0, 0})
	SMember(FVector)                                   EndPoint                                                    OFFSET(getStruct<T>, {0x210, 24, 0, 0})


	/// Functions
	// Function /Script/AudioShapes.AudioShapeLineComponent.SetStartPoint
	// void SetStartPoint(FVector& InStartPoint);                                                                               // [0x84b01ac] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeLineComponent.SetEndPoint
	// void SetEndPoint(FVector& InEndPoint);                                                                                   // [0x84affc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AudioShapes.AudioShapeLineListComponent
/// Size: 0x0018 (0x0001F8 - 0x000210)
class UAudioShapeLineListComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	CMember(TArray<FVector>)                           PointList                                                   OFFSET(get<T>, {0x1F8, 16, 0, 0})
	DMember(bool)                                      bClosedLoop                                                 OFFSET(get<bool>, {0x208, 1, 0, 0})


	/// Functions
	// Function /Script/AudioShapes.AudioShapeLineListComponent.UpdatePoint
	// bool UpdatePoint(int32_t InIndex, FVector& InPoint);                                                                     // [0x84b031c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeLineListComponent.RemovePoint
	// bool RemovePoint(int32_t InIndex);                                                                                       // [0x84afdd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeLineListComponent.GetPoints
	// void GetPoints(TArray<FVector>& OutPoints);                                                                              // [0x84afd38] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioShapes.AudioShapeLineListComponent.AddPoint
	// int32_t AddPoint(FVector& InPoint);                                                                                      // [0x84afb64] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AudioShapes.AudioShapeSphereComponent
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UAudioShapeSphereComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x1F8, 4, 0, 0})


	/// Functions
	// Function /Script/AudioShapes.AudioShapeSphereComponent.SetRadius
	// void SetRadius(float InRadius);                                                                                          // [0x26fbce4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioShapes.AudioShapeSubsystem
/// Size: 0x0058 (0x000030 - 0x000088)
class UAudioShapeSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<class UAudioShapeComponent*>)       AudioShapes                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<class APlayerController*>)          LocalControllers                                            OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Enum /Script/AudioShapes.EAudioShapeComponentState
/// Size: 0x03
enum class EAudioShapeComponentState : uint8_t
{
	EAudioShapeComponentState__Inactive                                              = 0,
	EAudioShapeComponentState__Active                                                = 1,
	EAudioShapeComponentState__Count                                                 = 2
};

