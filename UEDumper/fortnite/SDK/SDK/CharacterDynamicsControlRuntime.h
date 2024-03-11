
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:


	/// Functions
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.UpdateRigidBodyWithControlNodeParametersFromAsset
	// FRigidBodyWithControlReference UpdateRigidBodyWithControlNodeParametersFromAsset(FAnimUpdateContext& UpdateContext, FRigidBodyWithControlReference& RigidBodyWithControl, class UFortCharacterDynamicsParameters* Parameters); // [0xa3ab2bc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.UpdateRigidBodyWithControlNodeParametersForLayer
	// FRigidBodyWithControlReference UpdateRigidBodyWithControlNodeParametersForLayer(FAnimUpdateContext& UpdateContext, FRigidBodyWithControlReference& RigidBodyWithControl, FName StateLogicLayerName, class UFortCharacterDynamicsParameters* Parameters); // [0xa3aaf98] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.UpdateRigidBodyWithControlNodeParameters
	// FRigidBodyWithControlReference UpdateRigidBodyWithControlNodeParameters(FAnimUpdateContext& UpdateContext, FRigidBodyWithControlReference& RigidBodyWithControl); // [0xa3aae20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.SetProperty
	// void SetProperty(class UFortAnimInstance* InAnimInstance, FName InPropertyName, bool InValue);                        // [0x316dc68] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.RequestFullBodyPBALayer
	// void RequestFullBodyPBALayer(class UFortAnimInstance* InAnimInstance, FName ReasonForRequest);                        // [0x33ef36c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.RemoveCharacterDynamicsControlLogicLayer
	// void RemoveCharacterDynamicsControlLogicLayer(class UFortAnimInstance* InAnimInstance, FName LayerName);              // [0xa3aac18] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.HasCharacterDynamicsControlLogicLayer
	// bool HasCharacterDynamicsControlLogicLayer(class UFortAnimInstance* InAnimInstance, FName LayerName);                 // [0xa3aa9bc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.GetPropertyForLayer
	// bool GetPropertyForLayer(class UFortAnimInstance* InAnimInstance, FName InStateLogicLayerName, FName InPropertyName); // [0xa3aa73c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.GetProperty
	// bool GetProperty(class UFortAnimInstance* InAnimInstance, FName InPropertyName);                                      // [0xa3aa5d8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.GetCharacterStateForLayer
	// FName GetCharacterStateForLayer(class UFortAnimInstance* InAnimInstance, FName StateLogicLayerName);                  // [0x3457b7c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.GetCharacterState
	// FName GetCharacterState(class UFortAnimInstance* InAnimInstance);                                                     // [0x36e58b8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlBPLibrary.AddCharacterDynamicsControlLogicLayer
	// void AddCharacterDynamicsControlLogicLayer(class UFortAnimInstance* InAnimInstance, FName LayerName, class UFortCharacterDynamicsStateLogic* LayerStateLogic); // [0x38d6bb4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CharacterDynamicsControlRuntime.CharacterDynamicsControlGameFeatureData
/// Size: 0x0010 (0x000530 - 0x000540)
class UCharacterDynamicsControlGameFeatureData : public UFortGameFeatureData
{ 
public:
	class UFortCharacterDynamicsStateLogic*            DefaultStateLogic;                                          // 0x0530   (0x0008)  
	class UFortCharacterDynamicsParameters*            DefaultParameters;                                          // 0x0538   (0x0008)  
};

/// Struct /Script/CharacterDynamicsControlRuntime.FortRigidBodyWithControlStateTransitionParameters
/// Size: 0x0038 (0x000000 - 0x000038)
struct FFortRigidBodyWithControlStateTransitionParameters
{ 
	FPhysicsControlControlAndModifierParameters        ControlAndModifierParameters;                               // 0x0000   (0x0030)  
	float                                              TransitionTimeSeconds;                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/CharacterDynamicsControlRuntime.FortGravityOverrideParameters
/// Size: 0x0068 (0x000000 - 0x000068)
struct FFortGravityOverrideParameters
{ 
	FVector                                            WindFrequency;                                              // 0x0000   (0x0018)  
	FVector                                            WindAmplitude;                                              // 0x0018   (0x0018)  
	FVector                                            WindOffset;                                                 // 0x0030   (0x0018)  
	FVector                                            GravityOverride;                                            // 0x0048   (0x0018)  
	FName                                              JointName;                                                  // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/CharacterDynamicsControlRuntime.FortRigidBodyAnimNodeParameters
/// Size: 0x0090 (0x000000 - 0x000090)
struct FFortRigidBodyAnimNodeParameters
{ 
	FVector                                            ComponentLinearAccScale;                                    // 0x0000   (0x0018)  
	FVector                                            ComponentLinearVelScale;                                    // 0x0018   (0x0018)  
	FSimSpaceSettings                                  SimSpaceSettings;                                           // 0x0030   (0x0060)  
};

/// Class /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsParameters
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UFortCharacterDynamicsParameters : public UPrimaryDataAsset
{ 
public:
	TArray<FName>                                      StateNames;                                                 // 0x0030   (0x0010)  
	TArray<FClothParameters>                           ClothParameters;                                            // 0x0040   (0x0010)  
	TArray<FWindGustParameters>                        WindGustParameters;                                         // 0x0050   (0x0010)  
	TArray<FPhysicsControlControlAndModifierParameters> RBWCControlAndModifierParameters;                          // 0x0060   (0x0010)  
	TArray<FFortRigidBodyWithControlStateTransitionParameters> RBWCTransitionParameters;                           // 0x0070   (0x0010)  
	TArray<FFortGravityOverrideParameters>             GravityOverrideParameters;                                  // 0x0080   (0x0010)  
	TArray<FFortRigidBodyAnimNodeParameters>           RigidBodyAnimNodeParameters;                                // 0x0090   (0x0010)  
};

/// Struct /Script/CharacterDynamicsControlRuntime.BinaryDecisionTreeElement
/// Size: 0x0018 (0x000000 - 0x000018)
struct FBinaryDecisionTreeElement
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	int64_t                                            BitMask;                                                    // 0x0008   (0x0008)  
	int64_t                                            BitSet;                                                     // 0x0010   (0x0008)  
};

/// Struct /Script/CharacterDynamicsControlRuntime.BinaryDecisionTree
/// Size: 0x0010 (0x000000 - 0x000010)
struct FBinaryDecisionTree
{ 
	TArray<FBinaryDecisionTreeElement>                 TreeStructure;                                              // 0x0000   (0x0010)  
};

/// Class /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsStateLogic
/// Size: 0x0048 (0x000030 - 0x000078)
class UFortCharacterDynamicsStateLogic : public UPrimaryDataAsset
{ 
public:
	TArray<FName>                                      BlueprintCharacterPropertyNames;                            // 0x0030   (0x0010)  
	TArray<FName>                                      ActivityStateNames;                                         // 0x0040   (0x0010)  
	FBinaryDecisionTree                                ActivityStateBinaryDecisionTree;                            // 0x0050   (0x0010)  
	float                                              MinMovementSpeed;                                           // 0x0060   (0x0004)  
	float                                              MinRidingMovementSpeed;                                     // 0x0064   (0x0004)  
	float                                              MinUpwardVelocityThreshold;                                 // 0x0068   (0x0004)  
	float                                              MaxFallingThreshold;                                        // 0x006C   (0x0004)  
	float                                              HighRevolutionsPerSecondThreshold;                          // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UFortCharacterDynamicsComponent : public UActorComponent
{ 
public:
	class UFortCharacterDynamicsStateLogic*            DefaultStateLogic;                                          // 0x00A0   (0x0008)  
	class UFortCharacterDynamicsParameters*            DefaultParameters;                                          // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x00B0   (0x00A0)  MISSED


	/// Functions
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.SetProperty
	// void SetProperty(FName PropertyName, bool PropertyValue);                                                             // [0xa3aad5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.RemoveLayer
	// void RemoveLayer(FName LayerName);                                                                                    // [0xa3aacd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.PreviousStateNameForLayer
	// FName PreviousStateNameForLayer(FName LayerName);                                                                     // [0xa3aab94] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.PreviousStateName
	// FName PreviousStateName();                                                                                            // [0xa3aab64] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.HasLayer
	// bool HasLayer(FName LayerName);                                                                                       // [0xa3aaab4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.GetTimeInCurrentStateSecondsForLayer
	// float GetTimeInCurrentStateSecondsForLayer(FName LayerName);                                                          // [0xa3aa92c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.GetTimeInCurrentStateSeconds
	// float GetTimeInCurrentStateSeconds();                                                                                 // [0xa3aa904] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.GetPropertyForLayer
	// bool GetPropertyForLayer(FName LayerName, FName PropertyName);                                                        // [0xa3aa844] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.GetProperty
	// bool GetProperty(FName PropertyName);                                                                                 // [0xa3aa6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.CurrentStateNameForLayer
	// FName CurrentStateNameForLayer(FName LayerName);                                                                      // [0xa3aa554] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.CurrentStateName
	// FName CurrentStateName();                                                                                             // [0xa3aa528] Final|Native|Public|BlueprintCallable 
	// Function /Script/CharacterDynamicsControlRuntime.FortCharacterDynamicsComponent.AddLayer
	// void AddLayer(FName LayerName, class UFortCharacterDynamicsStateLogic* LayerStateLogic);                              // [0xa3aa464] Final|Native|Public|BlueprintCallable 
};

