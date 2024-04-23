
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

/// Class /Script/Constraints.ConstraintSubsystem
/// Size: 0x0020 (0x000030 - 0x000050)
class UConstraintSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FMulticastSparseDelegate)                  OnConstraintAddedToSystem_BP                                OFFSET(getStruct<T>, {0x30, 1, 0, 0})
	SMember(FMulticastSparseDelegate)                  OnConstraintRemovedFromSystem_BP                            OFFSET(getStruct<T>, {0x31, 1, 0, 0})
	CMember(TArray<FConstraintsInWorld>)               ConstraintsInWorld                                          OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/Constraints.ConstraintSubsystem.OnConstraintRemovedFromSystem__DelegateSignature
	// void OnConstraintRemovedFromSystem__DelegateSignature(class UConstraintSubsystem* Mananger, class UTickableConstraint* Constraint, bool bDoNotCompensate); // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/Constraints.ConstraintSubsystem.OnConstraintAddedToSystem__DelegateSignature
	// void OnConstraintAddedToSystem__DelegateSignature(class UConstraintSubsystem* Mananger, class UTickableConstraint* Constraint); // [0x1340978] MulticastDelegate|Public|Delegate 
};

/// Class /Script/Constraints.ConstraintsActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AConstraintsActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UConstraintsManager*)                ConstraintsManager                                          OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Constraints.TickableConstraint
/// Size: 0x0068 (0x000028 - 0x000090)
class UTickableConstraint : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      Active                                                      OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x29, 1, 0, 0})
};

/// Class /Script/Constraints.ConstraintsManager
/// Size: 0x0020 (0x000028 - 0x000048)
class UConstraintsManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FMulticastSparseDelegate)                  OnConstraintAdded_BP                                        OFFSET(getStruct<T>, {0x28, 1, 0, 0})
	SMember(FMulticastSparseDelegate)                  OnConstraintRemoved_BP                                      OFFSET(getStruct<T>, {0x29, 1, 0, 0})
	CMember(TArray<class UTickableConstraint*>)        Constraints                                                 OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/Constraints.ConstraintsManager.OnConstraintRemoved__DelegateSignature
	// void OnConstraintRemoved__DelegateSignature(class UConstraintsManager* Mananger, class UTickableConstraint* Constraint, bool bDoNotCompensate); // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/Constraints.ConstraintsManager.OnConstraintAdded__DelegateSignature
	// void OnConstraintAdded__DelegateSignature(class UConstraintsManager* Mananger, class UTickableConstraint* Constraint);   // [0x1340978] MulticastDelegate|Public|Delegate 
};

/// Class /Script/Constraints.ConstraintsScriptingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UConstraintsScriptingLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Constraints.ConstraintsScriptingLibrary.RemoveThisConstraint
	// bool RemoveThisConstraint(class UWorld* InWorld, class UTickableConstraint* InTickableConstraint);                       // [0x65e1b08] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Constraints.ConstraintsScriptingLibrary.RemoveConstraint
	// bool RemoveConstraint(class UWorld* InWorld, int32_t InIndex);                                                           // [0x65e1a38] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Constraints.ConstraintsScriptingLibrary.GetConstraintsArray
	// TArray<UTickableConstraint*> GetConstraintsArray(class UWorld* InWorld);                                                 // [0x65e1980] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Constraints.ConstraintsScriptingLibrary.CreateTransformableHandle
	// class UTransformableHandle* CreateTransformableHandle(class UWorld* InWorld, class UObject* InObject, FName& InAttachmentName); // [0x65e1880] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle
	// class UTransformableComponentHandle* CreateTransformableComponentHandle(class UWorld* InWorld, class USceneComponent* InSceneComponent, FName& InSocketName); // [0x65e16c8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Constraints.ConstraintsScriptingLibrary.CreateFromType
	// class UTickableTransformConstraint* CreateFromType(class UWorld* InWorld, ETransformConstraintType InType);              // [0x65e14d4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Constraints.ConstraintsScriptingLibrary.AddConstraint
	// bool AddConstraint(class UWorld* InWorld, class UTransformableHandle* InParentHandle, class UTransformableHandle* InChildHandle, class UTickableTransformConstraint* InConstraint, bool bMaintainOffset); // [0x65e116c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Constraints.TransformableHandle
/// Size: 0x0038 (0x000028 - 0x000060)
class UTransformableHandle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMovieSceneObjectBindingID)                ConstraintBindingID                                         OFFSET(getStruct<T>, {0x2C, 24, 0, 0})
};

/// Class /Script/Constraints.TransformableComponentHandle
/// Size: 0x0010 (0x000060 - 0x000070)
class UTransformableComponentHandle : public UTransformableHandle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TWeakObjectPtr<USceneComponent*>)          Component                                                   OFFSET(get<T>, {0x60, 8, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x68, 4, 0, 0})
};

/// Class /Script/Constraints.TickableTransformConstraint
/// Size: 0x0020 (0x000090 - 0x0000B0)
class UTickableTransformConstraint : public UTickableConstraint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UTransformableHandle*)               ParentTRSHandle                                             OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class UTransformableHandle*)               ChildTRSHandle                                              OFFSET(get<T>, {0x98, 8, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(bool)                                      bDynamicOffset                                              OFFSET(get<bool>, {0xA8, 1, 0, 0})
	CMember(ETransformConstraintType)                  Type                                                        OFFSET(get<T>, {0xA9, 1, 0, 0})
};

/// Class /Script/Constraints.TickableTranslationConstraint
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UTickableTranslationConstraint : public UTickableTransformConstraint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FVector)                                   OffsetTranslation                                           OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	SMember(FFilterOptionPerAxis)                      AxisFilter                                                  OFFSET(getStruct<T>, {0xD0, 3, 0, 0})
};

/// Class /Script/Constraints.TickableRotationConstraint
/// Size: 0x0040 (0x0000B0 - 0x0000F0)
class UTickableRotationConstraint : public UTickableTransformConstraint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FQuat)                                     OffsetRotation                                              OFFSET(getStruct<T>, {0xC0, 32, 0, 0})
	SMember(FFilterOptionPerAxis)                      AxisFilter                                                  OFFSET(getStruct<T>, {0xE0, 3, 0, 0})
};

/// Class /Script/Constraints.TickableScaleConstraint
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UTickableScaleConstraint : public UTickableTransformConstraint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FVector)                                   OffsetScale                                                 OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	SMember(FFilterOptionPerAxis)                      AxisFilter                                                  OFFSET(getStruct<T>, {0xD0, 3, 0, 0})
};

/// Class /Script/Constraints.TickableParentConstraint
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UTickableParentConstraint : public UTickableTransformConstraint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FTransform)                                OffsetTransform                                             OFFSET(getStruct<T>, {0xC0, 96, 0, 0})
	DMember(bool)                                      bScaling                                                    OFFSET(get<bool>, {0x120, 1, 0, 0})
	SMember(FTransformFilter)                          TransformFilter                                             OFFSET(getStruct<T>, {0x121, 9, 0, 0})
};

/// Class /Script/Constraints.TickableLookAtConstraint
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UTickableLookAtConstraint : public UTickableTransformConstraint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FVector)                                   Axis                                                        OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
};

/// Struct /Script/Constraints.ConstraintsInWorld
/// Size: 0x0028 (0x000000 - 0x000028)
class FConstraintsInWorld : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UWorld*>)                   World                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<UTickableConstraint*>>) Constraints                                              OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Constraints.MovieSceneConstraintChannel
/// Size: 0x0000 (0x000108 - 0x000108)
class FMovieSceneConstraintChannel : public FMovieSceneBoolChannel
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Struct /Script/Constraints.ConstraintAndActiveChannel
/// Size: 0x0110 (0x000000 - 0x000110)
class FConstraintAndActiveChannel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FMovieSceneConstraintChannel)              ActiveChannel                                               OFFSET(getStruct<T>, {0x0, 264, 0, 0})
	CMember(class UTickableConstraint*)                ConstraintCopyToSpawn                                       OFFSET(get<T>, {0x108, 8, 0, 0})
};

/// Struct /Script/Constraints.ConstraintTickFunction
/// Size: 0x0018 (0x000028 - 0x000040)
class FConstraintTickFunction : public FTickFunction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Enum /Script/Constraints.EHandleEvent
/// Size: 0x05
enum class EHandleEvent : uint8_t
{
	EHandleEvent__LocalTransformUpdated                                              = 0,
	EHandleEvent__GlobalTransformUpdated                                             = 1,
	EHandleEvent__ComponentUpdated                                                   = 2,
	EHandleEvent__UpperDependencyUpdated                                             = 3,
	EHandleEvent__Max                                                                = 4
};

