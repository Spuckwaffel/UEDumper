
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: PhysicsControl

/// Class /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCharacterDynamicsControlBPLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.UpdateRigidBodyWithControlNodeParametersFromAsset
	// FRigidBodyWithControlReference UpdateRigidBodyWithControlNodeParametersFromAsset(FAnimUpdateContext& UpdateContext, FRigidBodyWithControlReference& RigidBodyWithControl, class UFortCharacterDynamicsParameters* Parameters); // [0xa3ab2bc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.UpdateRigidBodyWithControlNodeParametersForLayer
	// FRigidBodyWithControlReference UpdateRigidBodyWithControlNodeParametersForLayer(FAnimUpdateContext& UpdateContext, FRigidBodyWithControlReference& RigidBodyWithControl, FName StateLogicLayerName, class UFortCharacterDynamicsParameters* Parameters); // [0xa3aaf98] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.UpdateRigidBodyWithControlNodeParameters
	// FRigidBodyWithControlReference UpdateRigidBodyWithControlNodeParameters(FAnimUpdateContext& UpdateContext, FRigidBodyWithControlReference& RigidBodyWithControl); // [0xa3aae20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.SetProperty
	// void SetProperty(class UFortAnimInstance* InAnimInstance, FName InPropertyName, bool InValue);                           // [0x316dc68] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.RequestFullBodyPBALayer
	// void RequestFullBodyPBALayer(class UFortAnimInstance* InAnimInstance, FName ReasonForRequest);                           // [0x33ef36c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.RemoveCharacterDynamicsControlLogicLayer
	// void RemoveCharacterDynamicsControlLogicLayer(class UFortAnimInstance* InAnimInstance, FName LayerName);                 // [0xa3aac18] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.HasCharacterDynamicsControlLogicLayer
	// bool HasCharacterDynamicsControlLogicLayer(class UFortAnimInstance* InAnimInstance, FName LayerName);                    // [0xa3aa9bc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.GetPropertyForLayer
	// bool GetPropertyForLayer(class UFortAnimInstance* InAnimInstance, FName InStateLogicLayerName, FName InPropertyName);    // [0xa3aa73c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.GetProperty
	// bool GetProperty(class UFortAnimInstance* InAnimInstance, FName InPropertyName);                                         // [0xa3aa5d8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.GetCharacterStateForLayer
	// FName GetCharacterStateForLayer(class UFortAnimInstance* InAnimInstance, FName StateLogicLayerName);                     // [0x3457b7c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.GetCharacterState
	// FName GetCharacterState(class UFortAnimInstance* InAnimInstance);                                                        // [0x36e58b8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.AddCharacterDynamicsControlLogicLayer
	// void AddCharacterDynamicsControlLogicLayer(class UFortAnimInstance* InAnimInstance, FName LayerName, class UFortCharacterDynamicsStateLogic* LayerStateLogic); // [0x38d6bb4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlGameFeatureData
/// Size: 0x0010 (0x000530 - 0x000540)
class UCharacterDynamicsControlGameFeatureData : public UFortGameFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	CMember(class UFortCharacterDynamicsStateLogic*)   DefaultStateLogic                                           OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(class UFortCharacterDynamicsParameters*)   DefaultParameters                                           OFFSET(get<T>, {0x538, 8, 0, 0})
};

/// Class /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsParameters
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UFortCharacterDynamicsParameters : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TArray<FName>)                             StateNames                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FClothParameters>)                  ClothParameters                                             OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FWindGustParameters>)               WindGustParameters                                          OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FPhysicsControlControlAndModifierParameters>) RBWCControlAndModifierParameters                  OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FFortRigidBodyWithControlStateTransitionParameters>) RBWCTransitionParameters                   OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FFortGravityOverrideParameters>)    GravityOverrideParameters                                   OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FFortRigidBodyAnimNodeParameters>)  RigidBodyAnimNodeParameters                                 OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Class /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsStateLogic
/// Size: 0x0048 (0x000030 - 0x000078)
class UFortCharacterDynamicsStateLogic : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FName>)                             BlueprintCharacterPropertyNames                             OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FName>)                             ActivityStateNames                                          OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FBinaryDecisionTree)                       ActivityStateBinaryDecisionTree                             OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(float)                                     MinMovementSpeed                                            OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     MinRidingMovementSpeed                                      OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     MinUpwardVelocityThreshold                                  OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     MaxFallingThreshold                                         OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     HighRevolutionsPerSecondThreshold                           OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Class /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UFortCharacterDynamicsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(class UFortCharacterDynamicsStateLogic*)   DefaultStateLogic                                           OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UFortCharacterDynamicsParameters*)   DefaultParameters                                           OFFSET(get<T>, {0xA8, 8, 0, 0})


	/// Functions
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.SetProperty
	// void SetProperty(FName PropertyName, bool PropertyValue);                                                                // [0xa3aad5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.RemoveLayer
	// void RemoveLayer(FName LayerName);                                                                                       // [0xa3aacd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.PreviousStateNameForLayer
	// FName PreviousStateNameForLayer(FName LayerName);                                                                        // [0xa3aab94] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.PreviousStateName
	// FName PreviousStateName();                                                                                               // [0xa3aab64] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.HasLayer
	// bool HasLayer(FName LayerName);                                                                                          // [0xa3aaab4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.GetTimeInCurrentStateSecondsForLayer
	// float GetTimeInCurrentStateSecondsForLayer(FName LayerName);                                                             // [0xa3aa92c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.GetTimeInCurrentStateSeconds
	// float GetTimeInCurrentStateSeconds();                                                                                    // [0xa3aa904] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.GetPropertyForLayer
	// bool GetPropertyForLayer(FName LayerName, FName PropertyName);                                                           // [0xa3aa844] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.GetProperty
	// bool GetProperty(FName PropertyName);                                                                                    // [0xa3aa6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.CurrentStateNameForLayer
	// FName CurrentStateNameForLayer(FName LayerName);                                                                         // [0xa3aa554] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.CurrentStateName
	// FName CurrentStateName();                                                                                                // [0xa3aa528] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.AddLayer
	// void AddLayer(FName LayerName, class UFortCharacterDynamicsStateLogic* LayerStateLogic);                                 // [0xa3aa464] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/CharacterDynamicsControlRuntime.BinaryDecisionTreeElement
/// Size: 0x0018 (0x000000 - 0x000018)
class FBinaryDecisionTreeElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int64_t)                                   BitMask                                                     OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   BitSet                                                      OFFSET(get<int64_t>, {0x10, 8, 0, 0})
};

/// Struct /Script/CharacterDynamicsControlRuntime.BinaryDecisionTree
/// Size: 0x0010 (0x000000 - 0x000010)
class FBinaryDecisionTree : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FBinaryDecisionTreeElement>)        TreeStructure                                               OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CharacterDynamicsControlRuntime.FortGravityOverrideParameters
/// Size: 0x0068 (0x000000 - 0x000068)
class FFortGravityOverrideParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVector)                                   WindFrequency                                               OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   WindAmplitude                                               OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   WindOffset                                                  OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   GravityOverride                                             OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FName)                                     JointName                                                   OFFSET(getStruct<T>, {0x60, 4, 0, 0})
};

/// Struct /Script/CharacterDynamicsControlRuntime.FortRigidBodyAnimNodeParameters
/// Size: 0x0090 (0x000000 - 0x000090)
class FFortRigidBodyAnimNodeParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FVector)                                   ComponentLinearAccScale                                     OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   ComponentLinearVelScale                                     OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FSimSpaceSettings)                         SimSpaceSettings                                            OFFSET(getStruct<T>, {0x30, 96, 0, 0})
};

/// Struct /Script/CharacterDynamicsControlRuntime.FortRigidBodyWithControlStateTransitionParameters
/// Size: 0x0038 (0x000000 - 0x000038)
class FFortRigidBodyWithControlStateTransitionParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FPhysicsControlControlAndModifierParameters) ControlAndModifierParameters                              OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(float)                                     TransitionTimeSeconds                                       OFFSET(get<float>, {0x30, 4, 0, 0})
};
