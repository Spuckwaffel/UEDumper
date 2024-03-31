
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/VerseCamera.PrototypeCameraDirector
/// Size: 0x0020 (0x000028 - 0x000048)
class UPrototypeCameraDirector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTagContainer)                     Categories                                                  OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Class /Script/VerseCamera.VerseCameraDirectorAdapter
/// Size: 0x0018 (0x000048 - 0x000060)
class UVerseCameraDirectorAdapter : public UPrototypeCameraDirector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/VerseCamera.PrototypeCameraEvaluatorContext
/// Size: 0x00E8 (0x000028 - 0x000110)
class UPrototypeCameraEvaluatorContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/VerseCamera.VerseCameraEvaluatorContext
/// Size: 0x0000 (0x000110 - 0x000110)
class UVerseCameraEvaluatorContext : public UPrototypeCameraEvaluatorContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/VerseCamera.PrototypeCameraMode
/// Size: 0x0050 (0x000028 - 0x000078)
class UPrototypeCameraMode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UCameraOperation*)                   RootCameraOperation                                         OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UPrototypeCameraEvaluatorContext*)   EvaluatorContext                                            OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FGameplayTagContainer)                     CameraModeTags                                              OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	SMember(FPrototypeCameraModeTransition)            TransitionInData                                            OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FPrototypeCameraModeTransition)            TransitionOutData                                           OFFSET(getStruct<T>, {0x68, 16, 0, 0})
};

/// Class /Script/VerseCamera.VerseCameraMode
/// Size: 0x0000 (0x000078 - 0x000078)
class UVerseCameraMode : public UPrototypeCameraMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/VerseCamera.PriorityListPrototypeCameraDirector
/// Size: 0x0050 (0x000048 - 0x000098)
class UPriorityListPrototypeCameraDirector : public UPrototypeCameraDirector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TMap<UPrototypeCameraMode*, float>)        CameraModes                                                 OFFSET(get<T>, {0x48, 80, 0, 0})
};

/// Class /Script/VerseCamera.PrototypeCameraEvaluator
/// Size: 0x0848 (0x000028 - 0x000870)
class UPrototypeCameraEvaluator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2160;

public:
	CMember(class URootCameraOperation*)               RootCameraOperation                                         OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UPrototypeCameraDirector*)           RootCameraDirector                                          OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UPrototypeCameraEvaluatorContext*)   DefaultEvaluatorContext                                     OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/VerseCamera.CameraOperation
/// Size: 0x0000 (0x000028 - 0x000028)
class UCameraOperation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseCamera.BlendableCameraModeWrapperOperation
/// Size: 0x0020 (0x000028 - 0x000048)
class UBlendableCameraModeWrapperOperation : public UCameraOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UPrototypeCameraMode*)               CameraMode                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/VerseCamera.BlendStackCameraOperation
/// Size: 0x0010 (0x000028 - 0x000038)
class UBlendStackCameraOperation : public UCameraOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UBlendableCameraModeWrapperOperation*>) CameraModes                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/VerseCamera.RootCameraOperation
/// Size: 0x0000 (0x000028 - 0x000028)
class URootCameraOperation : public UCameraOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseCamera.DefaultRootCameraOperation
/// Size: 0x0050 (0x000028 - 0x000078)
class UDefaultRootCameraOperation : public URootCameraOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FName, UBlendStackCameraOperation*>)  StackLayers                                                 OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/VerseCamera.ArrayCameraOperation
/// Size: 0x0010 (0x000028 - 0x000038)
class UArrayCameraOperation : public UCameraOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UCameraOperation*>)           Children                                                    OFFSET(get<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/VerseCamera.ArrayCameraOperation.AddChild
	// void AddChild(class UCameraOperation* CameraOperation);                                                                  // [0xcbd6e6c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VerseCamera.CameraSetFieldOfViewOperation
/// Size: 0x0008 (0x000028 - 0x000030)
class UCameraSetFieldOfViewOperation : public UCameraOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     FieldOfViewDegrees                                          OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Class /Script/VerseCamera.OffsetCameraOperation
/// Size: 0x0010 (0x000028 - 0x000038)
class UOffsetCameraOperation : public UCameraOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     OffsetForward                                               OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     OffsetRight                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     OffsetUp                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(ECameraOperationSpace)                     OffsetSpace                                                 OFFSET(get<T>, {0x34, 1, 0, 0})
};

/// Class /Script/VerseCamera.OffsetCameraFromTargetOperation
/// Size: 0x0010 (0x000028 - 0x000038)
class UOffsetCameraFromTargetOperation : public UCameraOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     OffsetForward                                               OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     OffsetRight                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     OffsetUp                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(ECameraOperationSpace)                     OffsetSpace                                                 OFFSET(get<T>, {0x34, 1, 0, 0})
};

/// Class /Script/VerseCamera.SetPivotPointFromTargetOperation
/// Size: 0x0010 (0x000028 - 0x000038)
class USetPivotPointFromTargetOperation : public UCameraOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     OffsetForward                                               OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     OffsetRight                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     OffsetUp                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(ECameraOperationSpace)                     OffsetSpace                                                 OFFSET(get<T>, {0x34, 1, 0, 0})
};

/// Class /Script/VerseCamera.RotateCameraAroundPivotPointOperation
/// Size: 0x0008 (0x000028 - 0x000030)
class URotateCameraAroundPivotPointOperation : public UCameraOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     RotateYaw                                                   OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     RotatePitch                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Class /Script/VerseCamera.LookAtTargetOperation
/// Size: 0x0010 (0x000028 - 0x000038)
class ULookAtTargetOperation : public UCameraOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     OffsetForward                                               OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     OffsetRight                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     OffsetUp                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(ECameraOperationSpace)                     OffsetSpace                                                 OFFSET(get<T>, {0x34, 1, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x35, 1, 0, 0})
};

/// Class /Script/VerseCamera.LookAtTargetWithClampAndDeadZoneOperation
/// Size: 0x0048 (0x000038 - 0x000080)
class ULookAtTargetWithClampAndDeadZoneOperation : public ULookAtTargetOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bIsClampEnabled                                             OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(float)                                     ClampPitchDegreesMin                                        OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     ClampPitchDegreesMax                                        OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     ClampYawDegreesMin                                          OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     ClampYawDegreesMax                                          OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(bool)                                      bIsDeadZoneEnabled                                          OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(float)                                     DeadZonePitchDegreesMin                                     OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     DeadZonePitchDegreesMax                                     OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     DeadZoneYawDegreesMin                                       OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     DeadZoneYawDegreesMax                                       OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     DeadZonePitchOffset                                         OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     DeadZoneYawOffset                                           OFFSET(get<float>, {0x64, 4, 0, 0})
};

/// Class /Script/VerseCamera.FixedAngleCameraFollowOperation
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UFixedAngleCameraFollowOperation : public UCameraOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     CameraSpeedHorizontal                                       OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     CameraSpeedVertical                                         OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bIsDeadZoneEnabled                                          OFFSET(get<bool>, {0x30, 1, 0, 0})
	CMember(ECameraDeadZoneShape)                      DeadZoneShape                                               OFFSET(get<T>, {0x31, 1, 0, 0})
	DMember(float)                                     DeadZoneDiameter                                            OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     DeadZoneWidth                                               OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     DeadZoneHeight                                              OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/VerseCamera.FollowDeadZoneOperation
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UFollowDeadZoneOperation : public UCameraOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(ECameraDeadZoneShape)                      DeadZoneShape                                               OFFSET(get<T>, {0x29, 1, 0, 0})
	DMember(float)                                     DeadZoneDiameter                                            OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     DeadZoneWidth                                               OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     DeadZoneHeight                                              OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Class /Script/VerseCamera.SpringFollowTargetOperation
/// Size: 0x0060 (0x000028 - 0x000088)
class USpringFollowTargetOperation : public UCameraOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(float)                                     SpringStiffness                                             OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MaxDistanceToTarget                                         OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Class /Script/VerseCamera.InterpFollowOperation
/// Size: 0x0030 (0x000028 - 0x000058)
class UInterpFollowOperation : public UCameraOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     InterpolationSpeed                                          OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MaxDistanceToTarget                                         OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Class /Script/VerseCamera.ThirdPersonCameraOperation
/// Size: 0x0028 (0x000028 - 0x000050)
class UThirdPersonCameraOperation : public UCameraOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UCameraSetFieldOfViewOperation*)     FOVOperation                                                OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UOffsetCameraFromTargetOperation*)   OffsetFromTargetOperation                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class ULookAtTargetOperation*)             LookAtTargetOperation                                       OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class USpringFollowTargetOperation*)       SpringFollowTargetOperation                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class USetPivotPointFromTargetOperation*)  SetPivotOperation                                           OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/VerseCamera.FixedPointCameraOperation
/// Size: 0x0010 (0x000028 - 0x000038)
class UFixedPointCameraOperation : public UCameraOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UCameraSetFieldOfViewOperation*)     FOVOperation                                                OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class ULookAtTargetWithClampAndDeadZoneOperation*) LookAtTargetOperation                               OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/VerseCamera.FixedAngleCameraOperation
/// Size: 0x0040 (0x000028 - 0x000068)
class UFixedAngleCameraOperation : public UCameraOperation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(class UCameraSetFieldOfViewOperation*)     FOVOperation                                                OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UOffsetCameraFromTargetOperation*)   OffsetFromTargetOperation                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class USetPivotPointFromTargetOperation*)  SetPivotOperation                                           OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class URotateCameraAroundPivotPointOperation*) RotateAroundPivotOperation                              OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class ULookAtTargetOperation*)             LookAtTargetOperation                                       OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UFollowDeadZoneOperation*)           DeadZoneOperation                                           OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UInterpFollowOperation*)             InterpFollowOperation                                       OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class USpringFollowTargetOperation*)       SpringFollowOperation                                       OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Class /Script/VerseCamera.VersePlayerCameraViewComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UVersePlayerCameraViewComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/VerseCamera.CameraOperationUpdateParams
/// Size: 0x0160 (0x000000 - 0x000160)
class FCameraOperationUpdateParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(class UPrototypeCameraEvaluatorContext*)   EvaluatorContext                                            OFFSET(get<T>, {0x148, 8, 0, 0})
};

/// Struct /Script/VerseCamera.PrototypeCameraModeTransition
/// Size: 0x0010 (0x000000 - 0x000010)
class FPrototypeCameraModeTransition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     BlendExponent                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TransitionPriority                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(ECameraModeBlendFunction)                  BlendFunction                                               OFFSET(get<T>, {0xC, 1, 0, 0})
};

/// Struct /Script/VerseCamera.PrototypeCameraPose
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FPrototypeCameraPose : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FTransform)                                CameraTransform                                             OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FTransform)                                TargetTransform                                             OFFSET(getStruct<T>, {0x60, 96, 0, 0})
	DMember(float)                                     FieldOfViewDegrees                                          OFFSET(get<float>, {0xC0, 4, 0, 0})
};

/// Struct /Script/VerseCamera.PrototypeCameraRig
/// Size: 0x0038 (0x000000 - 0x000038)
class FPrototypeCameraRig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   CameraPivot                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   CameraOffset                                                OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/VerseCamera.PrototypeCameraVariableTable
/// Size: 0x0038 (0x000000 - 0x000038)
class FPrototypeCameraVariableTable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Enum /Script/VerseCamera.ECameraOperationSpace
/// Size: 0x04
enum class ECameraOperationSpace : uint8_t
{
	ECameraOperationSpace__CameraSpace                                               = 0,
	ECameraOperationSpace__TargetSpace                                               = 1,
	ECameraOperationSpace__WorldSpace                                                = 2,
	ECameraOperationSpace__ECameraOperationSpace_MAX                                 = 3
};

/// Enum /Script/VerseCamera.ECameraDeadZoneShape
/// Size: 0x04
enum class ECameraDeadZoneShape : uint8_t
{
	ECameraDeadZoneShape__Sphere                                                     = 0,
	ECameraDeadZoneShape__Cylinder                                                   = 1,
	ECameraDeadZoneShape__Rectangle                                                  = 2,
	ECameraDeadZoneShape__ECameraDeadZoneShape_MAX                                   = 3
};

/// Enum /Script/VerseCamera.ECameraModeBlendFunction
/// Size: 0x06
enum class ECameraModeBlendFunction : uint8_t
{
	ECameraModeBlendFunction__Linear                                                 = 0,
	ECameraModeBlendFunction__Cubic                                                  = 1,
	ECameraModeBlendFunction__EaseInOut                                              = 2,
	ECameraModeBlendFunction__EaseIn                                                 = 3,
	ECameraModeBlendFunction__EaseOut                                                = 4,
	ECameraModeBlendFunction__ECameraModeBlendFunction_MAX                           = 5
};

