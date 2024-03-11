
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

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

/// Struct /Script/Constraints.ConstraintsInWorld
/// Size: 0x0028 (0x000000 - 0x000028)
struct FConstraintsInWorld
{ 
	class UWorld*                                      World;                                                      // 0x0000   (0x0008)  
	SDK_UNDEFINED(16,1343) /* TArray<TWeakObjectPtr<UTickableConstraint*>> */ __um(Constraints);                   // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0018   (0x0010)  MISSED
};

/// Class /Script/Constraints.ConstraintSubsystem
/// Size: 0x0020 (0x000030 - 0x000050)
class UConstraintSubsystem : public UEngineSubsystem
{ 
public:
	SDK_UNDEFINED(1,1344) /* FMulticastSparseDelegate */ __um(OnConstraintAddedToSystem_BP);                       // 0x0030   (0x0001)  
	SDK_UNDEFINED(1,1345) /* FMulticastSparseDelegate */ __um(OnConstraintRemovedFromSystem_BP);                   // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0032   (0x0006)  MISSED
	TArray<FConstraintsInWorld>                        ConstraintsInWorld;                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED


	/// Functions
	// Function /Script/Constraints.ConstraintSubsystem.OnConstraintRemovedFromSystem__DelegateSignature
	// void OnConstraintRemovedFromSystem__DelegateSignature(class UConstraintSubsystem* Mananger, class UTickableConstraint* Constraint, bool bDoNotCompensate); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/Constraints.ConstraintSubsystem.OnConstraintAddedToSystem__DelegateSignature
	// void OnConstraintAddedToSystem__DelegateSignature(class UConstraintSubsystem* Mananger, class UTickableConstraint* Constraint); // [0x18a39e4] MulticastDelegate|Public|Delegate 
};

/// Class /Script/Constraints.ConstraintsActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AConstraintsActor : public AActor
{ 
public:
	class UConstraintsManager*                         ConstraintsManager;                                         // 0x0290   (0x0008)  
};

/// Class /Script/Constraints.TickableConstraint
/// Size: 0x0068 (0x000028 - 0x000090)
class UTickableConstraint : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               Active;                                                     // 0x0028   (0x0001)  
	bool                                               bValid;                                                     // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_6[0x66];                                      // 0x002A   (0x0066)  MISSED
};

/// Class /Script/Constraints.ConstraintsManager
/// Size: 0x0020 (0x000028 - 0x000048)
class UConstraintsManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(1,1346) /* FMulticastSparseDelegate */ __um(OnConstraintAdded_BP);                               // 0x0028   (0x0001)  
	SDK_UNDEFINED(1,1347) /* FMulticastSparseDelegate */ __um(OnConstraintRemoved_BP);                             // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_5[0xE];                                       // 0x002A   (0x000E)  MISSED
	TArray<class UTickableConstraint*>                 Constraints;                                                // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/Constraints.ConstraintsManager.OnConstraintRemoved__DelegateSignature
	// void OnConstraintRemoved__DelegateSignature(class UConstraintsManager* Mananger, class UTickableConstraint* Constraint, bool bDoNotCompensate); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/Constraints.ConstraintsManager.OnConstraintAdded__DelegateSignature
	// void OnConstraintAdded__DelegateSignature(class UConstraintsManager* Mananger, class UTickableConstraint* Constraint); // [0x18a39e4] MulticastDelegate|Public|Delegate 
};

/// Class /Script/Constraints.ConstraintsScriptingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UConstraintsScriptingLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Constraints.ConstraintsScriptingLibrary.RemoveThisConstraint
	// bool RemoveThisConstraint(class UWorld* InWorld, class UTickableConstraint* InTickableConstraint);                    // [0x6511548] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Constraints.ConstraintsScriptingLibrary.RemoveConstraint
	// bool RemoveConstraint(class UWorld* InWorld, int32_t InIndex);                                                        // [0x6511478] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Constraints.ConstraintsScriptingLibrary.GetConstraintsArray
	// TArray<UTickableConstraint*> GetConstraintsArray(class UWorld* InWorld);                                              // [0x65113c0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Constraints.ConstraintsScriptingLibrary.CreateTransformableHandle
	// class UTransformableHandle* CreateTransformableHandle(class UWorld* InWorld, class UObject* InObject, FName& InAttachmentName); // [0x65112c0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle
	// class UTransformableComponentHandle* CreateTransformableComponentHandle(class UWorld* InWorld, class USceneComponent* InSceneComponent, FName& InSocketName); // [0x6511108] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Constraints.ConstraintsScriptingLibrary.CreateFromType
	// class UTickableTransformConstraint* CreateFromType(class UWorld* InWorld, ETransformConstraintType InType);           // [0x6510f14] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Constraints.ConstraintsScriptingLibrary.AddConstraint
	// bool AddConstraint(class UWorld* InWorld, class UTransformableHandle* InParentHandle, class UTransformableHandle* InChildHandle, class UTickableTransformConstraint* InConstraint, bool bMaintainOffset); // [0x6510bf8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Constraints.TransformableHandle
/// Size: 0x0038 (0x000028 - 0x000060)
class UTransformableHandle : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x2C];                                      // 0x0000   (0x002C)  MISSED
	FMovieSceneObjectBindingID                         ConstraintBindingID;                                        // 0x002C   (0x0018)  
	unsigned char                                      UnknownData01_6[0x1C];                                      // 0x0044   (0x001C)  MISSED
};

/// Class /Script/Constraints.TransformableComponentHandle
/// Size: 0x0010 (0x000060 - 0x000070)
class UTransformableComponentHandle : public UTransformableHandle
{ 
public:
	SDK_UNDEFINED(8,1348) /* TWeakObjectPtr<USceneComponent*> */ __um(Component);                                  // 0x0060   (0x0008)  
	FName                                              SocketName;                                                 // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/Constraints.TickableTransformConstraint
/// Size: 0x0020 (0x000090 - 0x0000B0)
class UTickableTransformConstraint : public UTickableConstraint
{ 
public:
	class UTransformableHandle*                        ParentTRSHandle;                                            // 0x0090   (0x0008)  
	class UTransformableHandle*                        ChildTRSHandle;                                             // 0x0098   (0x0008)  
	bool                                               bMaintainOffset;                                            // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x00A4   (0x0004)  
	bool                                               bDynamicOffset;                                             // 0x00A8   (0x0001)  
	ETransformConstraintType                           Type;                                                       // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
};

/// Class /Script/Constraints.TickableTranslationConstraint
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UTickableTranslationConstraint : public UTickableTransformConstraint
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00B0   (0x0008)  MISSED
	FVector                                            OffsetTranslation;                                          // 0x00B8   (0x0018)  
	FFilterOptionPerAxis                               AxisFilter;                                                 // 0x00D0   (0x0003)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x00D3   (0x0005)  MISSED
};

/// Class /Script/Constraints.TickableRotationConstraint
/// Size: 0x0040 (0x0000B0 - 0x0000F0)
class UTickableRotationConstraint : public UTickableTransformConstraint
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00B0   (0x0010)  MISSED
	FQuat                                              OffsetRotation;                                             // 0x00C0   (0x0020)  
	FFilterOptionPerAxis                               AxisFilter;                                                 // 0x00E0   (0x0003)  
	unsigned char                                      UnknownData01_6[0xD];                                       // 0x00E3   (0x000D)  MISSED
};

/// Class /Script/Constraints.TickableScaleConstraint
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UTickableScaleConstraint : public UTickableTransformConstraint
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00B0   (0x0008)  MISSED
	FVector                                            OffsetScale;                                                // 0x00B8   (0x0018)  
	FFilterOptionPerAxis                               AxisFilter;                                                 // 0x00D0   (0x0003)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x00D3   (0x0005)  MISSED
};

/// Class /Script/Constraints.TickableParentConstraint
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UTickableParentConstraint : public UTickableTransformConstraint
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00B0   (0x0010)  MISSED
	FTransform                                         OffsetTransform;                                            // 0x00C0   (0x0060)  
	bool                                               bScaling;                                                   // 0x0120   (0x0001)  
	FTransformFilter                                   TransformFilter;                                            // 0x0121   (0x0009)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x012A   (0x0006)  MISSED
};

/// Class /Script/Constraints.TickableLookAtConstraint
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UTickableLookAtConstraint : public UTickableTransformConstraint
{ 
public:
	FVector                                            Axis;                                                       // 0x00B0   (0x0018)  
};

/// Struct /Script/Constraints.MovieSceneConstraintChannel
/// Size: 0x0000 (0x000108 - 0x000108)
struct FMovieSceneConstraintChannel : FMovieSceneBoolChannel
{ 
};

/// Struct /Script/Constraints.ConstraintAndActiveChannel
/// Size: 0x0110 (0x000000 - 0x000110)
struct FConstraintAndActiveChannel
{ 
	FMovieSceneConstraintChannel                       ActiveChannel;                                              // 0x0000   (0x0108)  
	class UTickableConstraint*                         ConstraintCopyToSpawn;                                      // 0x0108   (0x0008)  
};

/// Struct /Script/Constraints.ConstraintTickFunction
/// Size: 0x0018 (0x000028 - 0x000040)
struct FConstraintTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

