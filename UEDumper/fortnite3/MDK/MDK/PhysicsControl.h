
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/PhysicsControl.PhysicsControlBPLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhysicsControlBPLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.SetOverridePhysicsAsset
	// FRigidBodyWithControlReference SetOverridePhysicsAsset(FRigidBodyWithControlReference& Node, class UPhysicsAsset* PhysicsAsset); // [0xb521424] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.GetControlNamesInSet
	// TArray<FName> GetControlNamesInSet(FRigidBodyWithControlReference& RigidBodyWithControl, FName SetName);                 // [0xb5127fc] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.GetBodyModifierNamesInSet
	// TArray<FName> GetBodyModifierNamesInSet(FRigidBodyWithControlReference& RigidBodyWithControl, FName SetName);            // [0xb5109c0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.ConvertToRigidBodyWithControlPure
	// void ConvertToRigidBodyWithControlPure(FAnimNodeReference& Node, FRigidBodyWithControlReference& RigidBodyWithControl, bool& Result); // [0xb50a4a8] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.ConvertToRigidBodyWithControl
	// FRigidBodyWithControlReference ConvertToRigidBodyWithControl(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0xb50a37c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.BlendParameters
	// void BlendParameters(FPhysicsControlControlAndModifierParameters& InParametersA, FPhysicsControlControlAndModifierParameters& InParametersB, float InInterpolationWeight, FPhysicsControlControlAndModifierParameters& OutParameters); // [0xb50a0bc] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.BlendModifierParametersThroughSet
	// void BlendModifierParametersThroughSet(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlNamedModifierParameters& InStartModifierParameters, FPhysicsControlNamedModifierParameters& InEndModifierParameters, TArray<FName>& ModifierNames, FPhysicsControlControlAndModifierParameters& OutParameters); // [0xb509dfc] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.BlendControlParametersThroughSet
	// void BlendControlParametersThroughSet(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlNamedControlParameters& InStartControlParameters, FPhysicsControlNamedControlParameters& InEndControlParameters, TArray<FName>& ControlNames, FPhysicsControlControlAndModifierParameters& OutParameters); // [0xb509b24] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.AddMultipleModifierParameters
	// void AddMultipleModifierParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, TArray<FName>& Names, FPhysicsControlModifierSparseData& ModifierData); // [0xb5098c4] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.AddMultipleControlParameters
	// void AddMultipleControlParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, TArray<FName>& Names, FPhysicsControlSparseData& ControlData); // [0xb509664] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.AddModifierParameters
	// void AddModifierParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, FName Name, FPhysicsControlModifierSparseData& ModifierData); // [0xb5093dc] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.AddControlParameters
	// void AddControlParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, FName Name, FPhysicsControlSparseData& ControlData); // [0xb508c3c] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PhysicsControl.PhysicsControlComponent
/// Size: 0x0250 (0x000220 - 0x000470)
class UPhysicsControlComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	CMember(TWeakObjectPtr<UPhysicsControlProfileAsset*>) PhysicsControlProfileAsset                               OFFSET(get<T>, {0x220, 32, 0, 0})
	DMember(float)                                     TeleportDistanceThreshold                                   OFFSET(get<float>, {0x240, 4, 0, 0})
	DMember(float)                                     TeleportRotationThreshold                                   OFFSET(get<float>, {0x244, 4, 0, 0})
	DMember(bool)                                      bShowDebugVisualization                                     OFFSET(get<bool>, {0x248, 1, 0, 0})
	DMember(float)                                     VisualizationSizeScale                                      OFFSET(get<float>, {0x24C, 4, 0, 0})
	DMember(bool)                                      bShowDebugControlList                                       OFFSET(get<bool>, {0x250, 1, 0, 0})
	SMember(FString)                                   DebugControlDetailFilter                                    OFFSET(getStruct<T>, {0x258, 16, 0, 0})
	DMember(bool)                                      bShowDebugBodyModifierList                                  OFFSET(get<bool>, {0x268, 1, 0, 0})
	SMember(FString)                                   DebugBodyModifierDetailFilter                               OFFSET(getStruct<T>, {0x270, 16, 0, 0})
	DMember(float)                                     VelocityPredictionTime                                      OFFSET(get<float>, {0x280, 4, 0, 0})
	DMember(int32_t)                                   MaxNumControlsOrModifiersPerName                            OFFSET(get<int32_t>, {0x284, 4, 0, 0})
	DMember(bool)                                      bWarnAboutInvalidNames                                      OFFSET(get<bool>, {0x288, 1, 0, 0})


	/// Functions
	// Function /Script/PhysicsControl.PhysicsControlComponent.UpdateTargetCaches
	// void UpdateTargetCaches(float DeltaTime);                                                                                // [0xb521650] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.UpdateControls
	// void UpdateControls(float DeltaTime);                                                                                    // [0xb5215d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlUseSkeletalAnimation
	// bool SetControlUseSkeletalAnimation(FName Name, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier);  // [0xb52046c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetsInSet
	// void SetControlTargetsInSet(FName Set, FPhysicsControlTarget ControlTarget, bool bEnableControl);                        // [0xb5200f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargets
	// void SetControlTargets(TArray<FName>& Names, FPhysicsControlTarget ControlTarget, bool bEnableControl);                  // [0xb51feb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsInSet
	// void SetControlTargetPositionsInSet(FName SetName, FVector Position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb51f970] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsFromArray
	// bool SetControlTargetPositionsFromArray(TArray<FName>& Names, TArray<FVector>& Positions, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb51f528] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsAndOrientationsInSet
	// void SetControlTargetPositionsAndOrientationsInSet(FName SetName, FVector Position, FRotator orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb51eee0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsAndOrientationsFromArray
	// bool SetControlTargetPositionsAndOrientationsFromArray(TArray<FName>& Names, TArray<FVector>& Positions, TArray<FRotator>& Orientations, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb51e3f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsAndOrientations
	// void SetControlTargetPositionsAndOrientations(TArray<FName>& Names, FVector Position, FRotator orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb51e064] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositions
	// void SetControlTargetPositions(TArray<FName>& Names, FVector Position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb51dd68] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionAndOrientation
	// bool SetControlTargetPositionAndOrientation(FName Name, FVector Position, FRotator orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb51d714] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPosition
	// bool SetControlTargetPosition(FName Name, FVector Position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb51d1c8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPoses
	// bool SetControlTargetPoses(FName Name, FVector ParentPosition, FRotator ParentOrientation, FVector ChildPosition, FRotator ChildOrientation, float VelocityDeltaTime, bool bEnableControl); // [0xb51ca40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetOrientationsInSet
	// void SetControlTargetOrientationsInSet(FName SetName, FRotator orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb51c500] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetOrientationsFromArray
	// bool SetControlTargetOrientationsFromArray(TArray<FName>& Names, TArray<FRotator>& Orientations, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb51ba68] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetOrientations
	// void SetControlTargetOrientations(TArray<FName>& Names, FRotator orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb51b76c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetOrientation
	// bool SetControlTargetOrientation(FName Name, FRotator orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xb51b220] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTarget
	// bool SetControlTarget(FName Name, FPhysicsControlTarget ControlTarget, bool bEnableControl);                             // [0xb51aea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsUseSkeletalAnimation
	// void SetControlsUseSkeletalAnimation(TArray<FName>& Names, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier); // [0xb521238] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlSparseMultipliersInSet
	// void SetControlSparseMultipliersInSet(FName Set, FPhysicsControlSparseMultiplier ControlMultiplier, bool bEnableControl); // [0xb51ab04] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlSparseMultipliers
	// void SetControlSparseMultipliers(TArray<FName>& Names, FPhysicsControlSparseMultiplier ControlMultiplier, bool bEnableControl); // [0xb51a8bc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlSparseMultiplier
	// bool SetControlSparseMultiplier(FName Name, FPhysicsControlSparseMultiplier ControlMultiplier, bool bEnableControl);     // [0xb51a518] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlSparseDatasInSet
	// void SetControlSparseDatasInSet(FName Set, FPhysicsControlSparseData ControlData);                                       // [0xb51a2a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlSparseDatas
	// void SetControlSparseDatas(TArray<FName>& Names, FPhysicsControlSparseData ControlData);                                 // [0xb51a0fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlSparseData
	// bool SetControlSparseData(FName Name, FPhysicsControlSparseData ControlData);                                            // [0xb519e7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsInSetUseSkeletalAnimation
	// void SetControlsInSetUseSkeletalAnimation(FName Set, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier); // [0xb520f0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsInSetEnabled
	// void SetControlsInSetEnabled(FName Set, bool bEnable);                                                                   // [0xb520cc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsInSetDisableCollision
	// void SetControlsInSetDisableCollision(FName Set, bool bDisableCollision);                                                // [0xb520a84] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsEnabled
	// void SetControlsEnabled(TArray<FName>& Names, bool bEnable);                                                             // [0xb520914] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsDisableCollision
	// void SetControlsDisableCollision(TArray<FName>& Names, bool bDisableCollision);                                          // [0xb5207a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlPoint
	// bool SetControlPoint(FName Name, FVector Position);                                                                      // [0xb519c14] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlParentsInSet
	// void SetControlParentsInSet(FName Set, class UMeshComponent* ParentMeshComponent, FName ParentBoneName);                 // [0xb5198f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlParents
	// void SetControlParents(TArray<FName>& Names, class UMeshComponent* ParentMeshComponent, FName ParentBoneName);           // [0xb51968c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlParent
	// bool SetControlParent(FName Name, class UMeshComponent* ParentMeshComponent, FName ParentBoneName);                      // [0xb519364] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlMultipliersInSet
	// void SetControlMultipliersInSet(FName Set, FPhysicsControlMultiplier ControlMultiplier, bool bEnableControl);            // [0xb518fec] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlMultipliers
	// void SetControlMultipliers(TArray<FName>& Names, FPhysicsControlMultiplier ControlMultiplier, bool bEnableControl);      // [0xb518dac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlMultiplier
	// bool SetControlMultiplier(FName Name, FPhysicsControlMultiplier ControlMultiplier, bool bEnableControl);                 // [0xb518a2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlLinearData
	// bool SetControlLinearData(FName Name, float Strength, float DampingRatio, float ExtraDamping, float MaxForce, bool bEnableControl); // [0xb518428] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlEnabled
	// bool SetControlEnabled(FName Name, bool bEnable);                                                                        // [0xb5181f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlDisableCollision
	// bool SetControlDisableCollision(FName Name, bool bDisableCollision);                                                     // [0xb517fb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlDatasInSet
	// void SetControlDatasInSet(FName Set, FPhysicsControlData ControlData);                                                   // [0xb517d48] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlDatas
	// void SetControlDatas(TArray<FName>& Names, FPhysicsControlData ControlData);                                             // [0xb517b9c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlData
	// bool SetControlData(FName Name, FPhysicsControlData ControlData);                                                        // [0xb51791c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlAngularData
	// bool SetControlAngularData(FName Name, float Strength, float DampingRatio, float ExtraDamping, float MaxTorque, bool bEnableControl); // [0xb517318] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetCachedBoneData
	// bool SetCachedBoneData(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, FTransform& TM, FVector Velocity, FVector AngularVelocity); // [0xb516e90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierUseSkeletalAnimation
	// bool SetBodyModifierUseSkeletalAnimation(FName Name, bool bUseSkeletalAnimation);                                        // [0xb5155d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierUpdateKinematicFromSimulation
	// bool SetBodyModifierUpdateKinematicFromSimulation(FName Name, bool bUpdateKinematicFromSimulation);                      // [0xb5153a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersUseSkeletalAnimation
	// void SetBodyModifiersUseSkeletalAnimation(TArray<FName>& Names, bool bUseSkeletalAnimation);                             // [0xb516d20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersUpdateKinematicFromSimulation
	// void SetBodyModifiersUpdateKinematicFromSimulation(TArray<FName>& Names, bool bUpdateKinematicFromSimulation);           // [0xb516bb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersPhysicsBlendWeight
	// void SetBodyModifiersPhysicsBlendWeight(TArray<FName>& Names, float PhysicsBlendWeight);                                 // [0xb516a3c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierSparseDatasInSet
	// void SetBodyModifierSparseDatasInSet(FName Set, FPhysicsControlModifierSparseData ModifierData);                         // [0xb51514c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierSparseDatas
	// void SetBodyModifierSparseDatas(TArray<FName>& Names, FPhysicsControlModifierSparseData ModifierData);                   // [0xb514fc4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierSparseData
	// bool SetBodyModifierSparseData(FName Name, FPhysicsControlModifierSparseData ModifierData);                              // [0xb514d5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersMovementType
	// void SetBodyModifiersMovementType(TArray<FName>& Names, EPhysicsMovementType MovementType);                              // [0xb5168c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetUseSkeletalAnimation
	// void SetBodyModifiersInSetUseSkeletalAnimation(FName Set, bool bUseSkeletalAnimation);                                   // [0xb516684] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetUpdateKinematicFromSimulation
	// void SetBodyModifiersInSetUpdateKinematicFromSimulation(FName Set, bool bUpdateKinematicFromSimulation);                 // [0xb516440] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetPhysicsBlendWeight
	// void SetBodyModifiersInSetPhysicsBlendWeight(FName Set, float PhysicsBlendWeight);                                       // [0xb5161e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetMovementType
	// void SetBodyModifiersInSetMovementType(FName Set, EPhysicsMovementType MovementType);                                    // [0xb515f9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetGravityMultiplier
	// void SetBodyModifiersInSetGravityMultiplier(FName Set, float GravityMultiplier);                                         // [0xb515d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetCollisionType
	// void SetBodyModifiersInSetCollisionType(FName Set, TEnumAsByte<ECollisionEnabled> CollisionType);                        // [0xb515af8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersGravityMultiplier
	// void SetBodyModifiersGravityMultiplier(TArray<FName>& Names, float GravityMultiplier);                                   // [0xb515984] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersCollisionType
	// void SetBodyModifiersCollisionType(TArray<FName>& Names, TEnumAsByte<ECollisionEnabled> CollisionType);                  // [0xb515810] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierPhysicsBlendWeight
	// bool SetBodyModifierPhysicsBlendWeight(FName Name, float PhysicsBlendWeight);                                            // [0xb514b18] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierMovementType
	// bool SetBodyModifierMovementType(FName Name, EPhysicsMovementType MovementType);                                         // [0xb5148dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierKinematicTarget
	// bool SetBodyModifierKinematicTarget(FName Name, FVector KinematicTargetPosition, FRotator KinematicTargetOrienation, bool bMakeKinematic); // [0xb514480] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierGravityMultiplier
	// bool SetBodyModifierGravityMultiplier(FName Name, float GravityMultiplier);                                              // [0xb51423c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierDatasInSet
	// void SetBodyModifierDatasInSet(FName Set, FPhysicsControlModifierData ModifierData);                                     // [0xb513fd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierDatas
	// void SetBodyModifierDatas(TArray<FName>& Names, FPhysicsControlModifierData ModifierData);                               // [0xb513e48] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierData
	// bool SetBodyModifierData(FName Name, FPhysicsControlModifierData ModifierData);                                          // [0xb513bd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierCollisionType
	// bool SetBodyModifierCollisionType(FName Name, TEnumAsByte<ECollisionEnabled> CollisionType);                             // [0xb513998] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.ResetControlPoint
	// bool ResetControlPoint(FName Name);                                                                                      // [0xb513844] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.ResetBodyModifierToCachedBoneTransform
	// bool ResetBodyModifierToCachedBoneTransform(FName Name, EResetToCachedTargetBehavior Behavior);                          // [0xb51324c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.ResetBodyModifiersToCachedBoneTransforms
	// void ResetBodyModifiersToCachedBoneTransforms(TArray<FName>& Names, EResetToCachedTargetBehavior Behavior);              // [0xb5136d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.ResetBodyModifiersInSetToCachedBoneTransforms
	// void ResetBodyModifiersInSetToCachedBoneTransforms(FName SetName, EResetToCachedTargetBehavior Behavior);                // [0xb513488] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.InvokeControlProfile
	// void InvokeControlProfile(FName ProfileName);                                                                            // [0xb513104] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetSetsContainingControl
	// TArray<FName> GetSetsContainingControl(FName Control);                                                                   // [0xb512f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetSetsContainingBodyModifier
	// TArray<FName> GetSetsContainingBodyModifier(FName Control);                                                              // [0xb512e1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetLimbBonesFromSkeletalMesh
	// TMap<FName, FPhysicsControlLimbBones> GetLimbBonesFromSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FPhysicsControlLimbSetupData>& LimbSetupData); // [0xb512cc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlTarget
	// bool GetControlTarget(FName Name, FPhysicsControlTarget& ControlTarget);                                                 // [0xb512b14] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlNamesInSet
	// TArray<FName> GetControlNamesInSet(FName Set);                                                                           // [0xb5129b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlMultiplier
	// bool GetControlMultiplier(FName Name, FPhysicsControlMultiplier& ControlMultiplier);                                     // [0xb512650] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlExists
	// bool GetControlExists(FName Name);                                                                                       // [0xb5124fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlEnabled
	// bool GetControlEnabled(FName Name);                                                                                      // [0xb5123a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlData
	// bool GetControlData(FName Name, FPhysicsControlData& ControlData);                                                       // [0xb512200] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneVelocity
	// FVector GetCachedBoneVelocity(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);                      // [0xb512058] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneVelocities
	// TArray<FVector> GetCachedBoneVelocities(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames);  // [0xb511f08] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneTransforms
	// TArray<FTransform> GetCachedBoneTransforms(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // [0xb511db8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneTransform
	// FTransform GetCachedBoneTransform(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);                  // [0xb511be4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBonePositions
	// TArray<FVector> GetCachedBonePositions(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames);   // [0xb511a94] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBonePosition
	// FVector GetCachedBonePosition(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);                      // [0xb5118ec] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneOrientations
	// TArray<FRotator> GetCachedBoneOrientations(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // [0xb511178] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneOrientation
	// FRotator GetCachedBoneOrientation(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);                  // [0xb510fd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneAngularVelocity
	// FVector GetCachedBoneAngularVelocity(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);               // [0xb510e28] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneAngularVelocities
	// TArray<FVector> GetCachedBoneAngularVelocities(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // [0xb510cd8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetBodyModifierNamesInSet
	// TArray<FName> GetBodyModifierNamesInSet(FName Set);                                                                      // [0xb510b78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetBodyModifierExists
	// bool GetBodyModifierExists(FName Name);                                                                                  // [0xb51086c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetAllControlNames
	// TArray<FName> GetAllControlNames();                                                                                      // [0xb510818] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetAllBodyModifierNames
	// TArray<FName> GetAllBodyModifierNames();                                                                                 // [0xb5107c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyControlsInSet
	// void DestroyControlsInSet(FName Set);                                                                                    // [0xb51067c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyControls
	// void DestroyControls(TArray<FName>& Names);                                                                              // [0xb5105a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyControl
	// bool DestroyControl(FName Name);                                                                                         // [0xb51044c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyBodyModifiersInSet
	// void DestroyBodyModifiersInSet(FName Set);                                                                               // [0xb510304] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyBodyModifiers
	// void DestroyBodyModifiers(TArray<FName>& Names);                                                                         // [0xb510228] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyBodyModifier
	// bool DestroyBodyModifier(FName Name);                                                                                    // [0xb5100d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateNamedControl
	// bool CreateNamedControl(FName Name, class UMeshComponent* ParentMeshComponent, FName ParentBoneName, class UMeshComponent* ChildMeshComponent, FName ChildBoneName, FPhysicsControlData ControlData, FPhysicsControlTarget ControlTarget, FName Set); // [0xb50f7f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateNamedBodyModifier
	// bool CreateNamedBodyModifier(FName Name, class UMeshComponent* MeshComponent, FName BoneName, FName Set, FPhysicsControlModifierData BodyModifierData); // [0xb50f2b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromSkeletalMeshBelow
	// TArray<FName> CreateControlsFromSkeletalMeshBelow(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, EPhysicsControlType ControlType, FPhysicsControlData ControlData, FName Set); // [0xb50ebf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromSkeletalMeshAndConstraintProfileBelow
	// TArray<FName> CreateControlsFromSkeletalMeshAndConstraintProfileBelow(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, FName ConstraintProfile, FName Set, bool bEnabled); // [0xb50e5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromSkeletalMeshAndConstraintProfile
	// TArray<FName> CreateControlsFromSkeletalMeshAndConstraintProfile(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames, FName ConstraintProfile, FName Set, bool bEnabled); // [0xb50e190] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromSkeletalMesh
	// TArray<FName> CreateControlsFromSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames, EPhysicsControlType ControlType, FPhysicsControlData ControlData, FName Set); // [0xb50de04] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromLimbBonesAndConstraintProfile
	// TMap<FName, FPhysicsControlNames> CreateControlsFromLimbBonesAndConstraintProfile(FPhysicsControlNames& AllControls, TMap<FName, FPhysicsControlLimbBones>& LimbBones, FName ConstraintProfile, bool bEnabled); // [0xb50da78] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromLimbBones
	// TMap<FName, FPhysicsControlNames> CreateControlsFromLimbBones(FPhysicsControlNames& AllControls, TMap<FName, FPhysicsControlLimbBones>& LimbBones, EPhysicsControlType ControlType, FPhysicsControlData ControlData, class UMeshComponent* WorldComponent, FName WorldBoneName, FString NamePrefix); // [0xb50cd00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsAndBodyModifiersFromLimbBones
	// void CreateControlsAndBodyModifiersFromLimbBones(FPhysicsControlNames& AllWorldSpaceControls, TMap<FName, FPhysicsControlNames>& LimbWorldSpaceControls, FPhysicsControlNames& AllParentSpaceControls, TMap<FName, FPhysicsControlNames>& LimbParentSpaceControls, FPhysicsControlNames& AllBodyModifiers, TMap<FName, FPhysicsControlNames>& LimbBodyModifiers, class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FPhysicsControlLimbSetupData>& LimbSetupData, FPhysicsControlData WorldSpaceControlData, FPhysicsControlData ParentSpaceControlData, FPhysicsControlModifierData BodyModifierData, class UMeshComponent* WorldComponent, FName WorldBoneName); // [0xb50c27c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsAndBodyModifiersFromControlProfileAsset
	// void CreateControlsAndBodyModifiersFromControlProfileAsset(class USkeletalMeshComponent* SkeletalMeshComponent, class UMeshComponent* WorldComponent, FName WorldBoneName); // [0xb50c0c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControl
	// FName CreateControl(class UMeshComponent* ParentMeshComponent, FName ParentBoneName, class UMeshComponent* ChildMeshComponent, FName ChildBoneName, FPhysicsControlData ControlData, FPhysicsControlTarget ControlTarget, FName Set, FString NamePrefix); // [0xb50b1d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateBodyModifiersFromSkeletalMeshBelow
	// TArray<FName> CreateBodyModifiersFromSkeletalMeshBelow(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, FName Set, FPhysicsControlModifierData BodyModifierData); // [0xb50ac7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateBodyModifiersFromLimbBones
	// TMap<FName, FPhysicsControlNames> CreateBodyModifiersFromLimbBones(FPhysicsControlNames& AllBodyModifiers, TMap<FName, FPhysicsControlLimbBones>& LimbBones, FPhysicsControlModifierData BodyModifierData); // [0xb50a9cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateBodyModifier
	// FName CreateBodyModifier(class UMeshComponent* MeshComponent, FName BoneName, FName Set, FPhysicsControlModifierData BodyModifierData); // [0xb50a620] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.AddControlToSet
	// void AddControlToSet(FPhysicsControlNames& NewSet, FName Control, FName Set);                                            // [0xb508eec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.AddControlsToSet
	// void AddControlsToSet(FPhysicsControlNames& NewSet, TArray<FName>& Controls, FName Set);                                 // [0xb50918c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.AddBodyModifierToSet
	// void AddBodyModifierToSet(FPhysicsControlNames& NewSet, FName BodyModifier, FName Set);                                  // [0xb50874c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.AddBodyModifiersToSet
	// void AddBodyModifiersToSet(FPhysicsControlNames& NewSet, TArray<FName>& BodyModifiers, FName Set);                       // [0xb5089ec] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PhysicsControl.PhysicsControlProfileAsset
/// Size: 0x01E8 (0x000028 - 0x000210)
class UPhysicsControlProfileAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FPhysicsControlCharacterSetupData)         CharacterSetupData                                          OFFSET(getStruct<T>, {0x30, 192, 0, 0})
	SMember(FPhysicsControlAndBodyModifierCreationDatas) AdditionalControlsAndModifiers                            OFFSET(getStruct<T>, {0xF0, 160, 0, 0})
	SMember(FPhysicsControlSetUpdates)                 AdditionalSets                                              OFFSET(getStruct<T>, {0x190, 32, 0, 0})
	CMember(TArray<FPhysicsControlControlAndModifierUpdates>) InitialControlAndModifierUpdates                     OFFSET(get<T>, {0x1B0, 16, 0, 0})
	CMember(TMap<FName, FPhysicsControlControlAndModifierUpdates>) Profiles                                        OFFSET(get<T>, {0x1C0, 80, 0, 0})
};

/// Class /Script/PhysicsControl.PhysicsControlInitializerComponent
/// Size: 0x0180 (0x000220 - 0x0003A0)
class UPhysicsControlInitializerComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	SMember(FInitialCharacterControls)                 InitialCharacterControls                                    OFFSET(getStruct<T>, {0x220, 208, 0, 0})
	CMember(TMap<FName, FInitialPhysicsControl>)       InitialControls                                             OFFSET(get<T>, {0x2F0, 80, 0, 0})
	CMember(TMap<FName, FInitialBodyModifier>)         InitialBodyModifiers                                        OFFSET(get<T>, {0x340, 80, 0, 0})
	DMember(bool)                                      bCreateControlsAtBeginPlay                                  OFFSET(get<bool>, {0x390, 1, 0, 0})


	/// Functions
	// Function /Script/PhysicsControl.PhysicsControlInitializerComponent.CreateControls
	// void CreateControls(class UPhysicsControlComponent* PhysicsControlComponent);                                            // [0xb549188] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PhysicsControl.PhysicsControlActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class APhysicsControlActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class UPhysicsControlComponent*)           ControlComponent                                            OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UPhysicsControlInitializerComponent*) ControlInitializerComponent                                OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Struct /Script/PhysicsControl.RigidBodyWithControlReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigidBodyWithControlReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/PhysicsControl.PhysicsControlSetUpdate
/// Size: 0x0018 (0x000000 - 0x000018)
class FPhysicsControlSetUpdate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     SetName                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FName>)                             Names                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlSetUpdates
/// Size: 0x0020 (0x000000 - 0x000020)
class FPhysicsControlSetUpdates : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FPhysicsControlSetUpdate>)          ControlSetUpdates                                           OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FPhysicsControlSetUpdate>)          ModifierSetUpdates                                          OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlModifierSparseData
/// Size: 0x0010 (0x000000 - 0x000010)
class FPhysicsControlModifierSparseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EPhysicsMovementType)                      MovementType                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionEnabled>)            CollisionType                                               OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     GravityMultiplier                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PhysicsBlendWeight                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bUseSkeletalAnimation                                       OFFSET(get<bool>, {0xC, 1, 1, 0})
	DMember(bool)                                      bUpdateKinematicFromSimulation                              OFFSET(get<bool>, {0xC, 1, 1, 1})
	DMember(bool)                                      bEnableMovementType                                         OFFSET(get<bool>, {0xC, 1, 1, 2})
	DMember(bool)                                      bEnableCollisionType                                        OFFSET(get<bool>, {0xC, 1, 1, 3})
	DMember(bool)                                      bEnableGravityMultiplier                                    OFFSET(get<bool>, {0xC, 1, 1, 4})
	DMember(bool)                                      bEnablePhysicsBlendWeight                                   OFFSET(get<bool>, {0xC, 1, 1, 5})
	DMember(bool)                                      bEnablebUseSkeletalAnimation                                OFFSET(get<bool>, {0xC, 1, 1, 6})
	DMember(bool)                                      bEnablebUpdateKinematicFromSimulation                       OFFSET(get<bool>, {0xC, 1, 1, 7})
};

/// Struct /Script/PhysicsControl.PhysicsControlModifierData
/// Size: 0x0010 (0x000000 - 0x000010)
class FPhysicsControlModifierData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EPhysicsMovementType)                      MovementType                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionEnabled>)            CollisionType                                               OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     GravityMultiplier                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PhysicsBlendWeight                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bUseSkeletalAnimation                                       OFFSET(get<bool>, {0xC, 1, 1, 0})
	DMember(bool)                                      bUpdateKinematicFromSimulation                              OFFSET(get<bool>, {0xC, 1, 1, 1})
};

/// Struct /Script/PhysicsControl.PhysicsBodyModifier
/// Size: 0x0014 (0x000000 - 0x000014)
class FPhysicsBodyModifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FPhysicsControlModifierData)               ModifierData                                                OFFSET(getStruct<T>, {0x4, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsBodyModifierCreationData
/// Size: 0x0028 (0x000000 - 0x000028)
class FPhysicsBodyModifierCreationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FPhysicsBodyModifier)                      Modifier                                                    OFFSET(getStruct<T>, {0x0, 20, 0, 0})
	CMember(TArray<FName>)                             Sets                                                        OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlSparseData
/// Size: 0x0050 (0x000000 - 0x000050)
class FPhysicsControlSparseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     LinearStrength                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LinearDampingRatio                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LinearExtraDamping                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxForce                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     AngularStrength                                             OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AngularDampingRatio                                         OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AngularExtraDamping                                         OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MaxTorque                                                   OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     LinearTargetVelocityMultiplier                              OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     AngularTargetVelocityMultiplier                             OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     SkeletalAnimationVelocityMultiplier                         OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FVector)                                   CustomControlPoint                                          OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(bool)                                      bUseCustomControlPoint                                      OFFSET(get<bool>, {0x48, 1, 1, 1})
	DMember(bool)                                      bUseSkeletalAnimation                                       OFFSET(get<bool>, {0x48, 1, 1, 2})
	DMember(bool)                                      bDisableCollision                                           OFFSET(get<bool>, {0x48, 1, 1, 3})
	DMember(bool)                                      bOnlyControlChildObject                                     OFFSET(get<bool>, {0x48, 1, 1, 4})
	DMember(bool)                                      bEnableLinearStrength                                       OFFSET(get<bool>, {0x48, 1, 1, 5})
	DMember(bool)                                      bEnableLinearDampingRatio                                   OFFSET(get<bool>, {0x48, 1, 1, 6})
	DMember(bool)                                      bEnableLinearExtraDamping                                   OFFSET(get<bool>, {0x48, 1, 1, 7})
	DMember(bool)                                      bEnableMaxForce                                             OFFSET(get<bool>, {0x49, 1, 1, 0})
	DMember(bool)                                      bEnableAngularStrength                                      OFFSET(get<bool>, {0x49, 1, 1, 1})
	DMember(bool)                                      bEnableAngularDampingRatio                                  OFFSET(get<bool>, {0x49, 1, 1, 2})
	DMember(bool)                                      bEnableAngularExtraDamping                                  OFFSET(get<bool>, {0x49, 1, 1, 3})
	DMember(bool)                                      bEnableMaxTorque                                            OFFSET(get<bool>, {0x49, 1, 1, 4})
	DMember(bool)                                      bEnableLinearTargetVelocityMultiplier                       OFFSET(get<bool>, {0x49, 1, 1, 5})
	DMember(bool)                                      bEnableAngularTargetVelocityMultiplier                      OFFSET(get<bool>, {0x49, 1, 1, 6})
	DMember(bool)                                      bEnableSkeletalAnimationVelocityMultiplier                  OFFSET(get<bool>, {0x49, 1, 1, 7})
	DMember(bool)                                      bEnableCustomControlPoint                                   OFFSET(get<bool>, {0x4A, 1, 1, 0})
	DMember(bool)                                      bEnablebEnabled                                             OFFSET(get<bool>, {0x4A, 1, 1, 1})
	DMember(bool)                                      bEnablebUseCustomControlPoint                               OFFSET(get<bool>, {0x4A, 1, 1, 2})
	DMember(bool)                                      bEnablebUseSkeletalAnimation                                OFFSET(get<bool>, {0x4A, 1, 1, 3})
	DMember(bool)                                      bEnablebDisableCollision                                    OFFSET(get<bool>, {0x4A, 1, 1, 4})
	DMember(bool)                                      bEnablebOnlyControlChildObject                              OFFSET(get<bool>, {0x4A, 1, 1, 5})
};

/// Struct /Script/PhysicsControl.PhysicsControlData
/// Size: 0x0050 (0x000000 - 0x000050)
class FPhysicsControlData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     LinearStrength                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LinearDampingRatio                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LinearExtraDamping                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxForce                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     AngularStrength                                             OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AngularDampingRatio                                         OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AngularExtraDamping                                         OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MaxTorque                                                   OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     LinearTargetVelocityMultiplier                              OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     AngularTargetVelocityMultiplier                             OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     SkeletalAnimationVelocityMultiplier                         OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FVector)                                   CustomControlPoint                                          OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(bool)                                      bUseCustomControlPoint                                      OFFSET(get<bool>, {0x48, 1, 1, 1})
	DMember(bool)                                      bUseSkeletalAnimation                                       OFFSET(get<bool>, {0x48, 1, 1, 2})
	DMember(bool)                                      bDisableCollision                                           OFFSET(get<bool>, {0x48, 1, 1, 3})
	DMember(bool)                                      bOnlyControlChildObject                                     OFFSET(get<bool>, {0x48, 1, 1, 4})
};

/// Struct /Script/PhysicsControl.PhysicsControlSparseMultiplier
/// Size: 0x0078 (0x000000 - 0x000078)
class FPhysicsControlSparseMultiplier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FVector)                                   LinearStrengthMultiplier                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   LinearDampingRatioMultiplier                                OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   LinearExtraDampingMultiplier                                OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   MaxForceMultiplier                                          OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(float)                                     AngularStrengthMultiplier                                   OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     AngularDampingRatioMultiplier                               OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     AngularExtraDampingMultiplier                               OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     MaxTorqueMultiplier                                         OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bEnableLinearStrengthMultiplier                             OFFSET(get<bool>, {0x70, 1, 1, 0})
	DMember(bool)                                      bEnableLinearDampingRatioMultiplier                         OFFSET(get<bool>, {0x70, 1, 1, 1})
	DMember(bool)                                      bEnableLinearExtraDampingMultiplier                         OFFSET(get<bool>, {0x70, 1, 1, 2})
	DMember(bool)                                      bEnableMaxForceMultiplier                                   OFFSET(get<bool>, {0x70, 1, 1, 3})
	DMember(bool)                                      bEnableAngularStrengthMultiplier                            OFFSET(get<bool>, {0x70, 1, 1, 4})
	DMember(bool)                                      bEnableAngularDampingRatioMultiplier                        OFFSET(get<bool>, {0x70, 1, 1, 5})
	DMember(bool)                                      bEnableAngularExtraDampingMultiplier                        OFFSET(get<bool>, {0x70, 1, 1, 6})
	DMember(bool)                                      bEnableMaxTorqueMultiplier                                  OFFSET(get<bool>, {0x70, 1, 1, 7})
};

/// Struct /Script/PhysicsControl.PhysicsControlMultiplier
/// Size: 0x0070 (0x000000 - 0x000070)
class FPhysicsControlMultiplier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   LinearStrengthMultiplier                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   LinearDampingRatioMultiplier                                OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   LinearExtraDampingMultiplier                                OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   MaxForceMultiplier                                          OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(float)                                     AngularStrengthMultiplier                                   OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     AngularDampingRatioMultiplier                               OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     AngularExtraDampingMultiplier                               OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     MaxTorqueMultiplier                                         OFFSET(get<float>, {0x6C, 4, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlTarget
/// Size: 0x0068 (0x000000 - 0x000068)
class FPhysicsControlTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVector)                                   TargetPosition                                              OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   TargetVelocity                                              OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FRotator)                                  TargetOrientation                                           OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   TargetAngularVelocity                                       OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(bool)                                      bApplyControlPointToTarget                                  OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControl
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FPhysicsControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FName)                                     ParentBoneName                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     ChildBoneName                                               OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FPhysicsControlData)                       ControlData                                                 OFFSET(getStruct<T>, {0x8, 80, 0, 0})
	SMember(FPhysicsControlMultiplier)                 ControlMultiplier                                           OFFSET(getStruct<T>, {0x58, 112, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlCreationData
/// Size: 0x00D8 (0x000000 - 0x0000D8)
class FPhysicsControlCreationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FPhysicsControl)                           Control                                                     OFFSET(getStruct<T>, {0x0, 200, 0, 0})
	CMember(TArray<FName>)                             Sets                                                        OFFSET(get<T>, {0xC8, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlNamedControlParameters
/// Size: 0x0058 (0x000000 - 0x000058)
class FPhysicsControlNamedControlParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FPhysicsControlSparseData)                 Data                                                        OFFSET(getStruct<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlNamedControlMultiplierParameters
/// Size: 0x0080 (0x000000 - 0x000080)
class FPhysicsControlNamedControlMultiplierParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FPhysicsControlSparseMultiplier)           Data                                                        OFFSET(getStruct<T>, {0x8, 120, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlNamedModifierParameters
/// Size: 0x0014 (0x000000 - 0x000014)
class FPhysicsControlNamedModifierParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FPhysicsControlModifierSparseData)         Data                                                        OFFSET(getStruct<T>, {0x4, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlControlAndModifierParameters
/// Size: 0x0030 (0x000000 - 0x000030)
class FPhysicsControlControlAndModifierParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FPhysicsControlNamedControlParameters>) ControlParameters                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FPhysicsControlNamedControlMultiplierParameters>) ControlMultiplierParameters                   OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FPhysicsControlNamedModifierParameters>) ModifierParameters                                     OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlControlAndModifierUpdates
/// Size: 0x0030 (0x000000 - 0x000030)
class FPhysicsControlControlAndModifierUpdates : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FPhysicsControlNamedControlParameters>) ControlUpdates                                          OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FPhysicsControlNamedControlMultiplierParameters>) ControlMultiplierUpdates                      OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FPhysicsControlNamedModifierParameters>) ModifierUpdates                                        OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlAndBodyModifierCreationDatas
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FPhysicsControlAndBodyModifierCreationDatas : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TMap<FName, FPhysicsControlCreationData>)  Controls                                                    OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<FName, FPhysicsBodyModifierCreationData>) Modifiers                                               OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlLimbSetupData
/// Size: 0x000C (0x000000 - 0x00000C)
class FPhysicsControlLimbSetupData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     LimbName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     StartBone                                                   OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bIncludeParentBone                                          OFFSET(get<bool>, {0x8, 1, 1, 0})
	DMember(bool)                                      bCreateWorldSpaceControls                                   OFFSET(get<bool>, {0x8, 1, 1, 1})
	DMember(bool)                                      bCreateParentSpaceControls                                  OFFSET(get<bool>, {0x8, 1, 1, 2})
	DMember(bool)                                      bCreateBodyModifiers                                        OFFSET(get<bool>, {0x8, 1, 1, 3})
};

/// Struct /Script/PhysicsControl.PhysicsControlLimbBones
/// Size: 0x0020 (0x000000 - 0x000020)
class FPhysicsControlLimbBones : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/PhysicsControl.PhysicsControlNames
/// Size: 0x0010 (0x000000 - 0x000010)
class FPhysicsControlNames : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FName>)                             Names                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.PhysicsControlCharacterSetupData
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FPhysicsControlCharacterSetupData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FPhysicsControlLimbSetupData>)      LimbSetupData                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FPhysicsControlData)                       DefaultWorldSpaceControlData                                OFFSET(getStruct<T>, {0x10, 80, 0, 0})
	SMember(FPhysicsControlData)                       DefaultParentSpaceControlData                               OFFSET(getStruct<T>, {0x60, 80, 0, 0})
	SMember(FPhysicsControlModifierData)               DefaultBodyModifierData                                     OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/PhysicsControl.RigidBodyControlTarget
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigidBodyControlTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   TargetPosition                                              OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  TargetOrientation                                           OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/PhysicsControl.RigidBodyControlTargets
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigidBodyControlTargets : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, FRigidBodyControlTarget>)      Targets                                                     OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/PhysicsControl.RigidBodyKinematicTarget
/// Size: 0x0038 (0x000000 - 0x000038)
class FRigidBodyKinematicTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   TargetPosition                                              OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  TargetOrientation                                           OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(bool)                                      bUseSkeletalAnimation                                       OFFSET(get<bool>, {0x30, 1, 1, 0})
};

/// Struct /Script/PhysicsControl.RigidBodyKinematicTargets
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigidBodyKinematicTargets : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, FRigidBodyKinematicTarget>)    Targets                                                     OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/PhysicsControl.AnimNode_RigidBodyWithControl
/// Size: 0x0D78 (0x0000C8 - 0x000E40)
class FAnimNode_RigidBodyWithControl : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3648;

public:
	CMember(class UPhysicsAsset*)                      OverridePhysicsAsset                                        OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(bool)                                      bDefaultToSkeletalMeshPhysicsAsset                          OFFSET(get<bool>, {0xD0, 1, 0, 0})
	SMember(FVector)                                   OverrideWorldGravity                                        OFFSET(getStruct<T>, {0x208, 24, 0, 0})
	SMember(FVector)                                   ExternalForce                                               OFFSET(getStruct<T>, {0x220, 24, 0, 0})
	SMember(FVector)                                   ComponentLinearAccScale                                     OFFSET(getStruct<T>, {0x238, 24, 0, 0})
	SMember(FVector)                                   ComponentLinearVelScale                                     OFFSET(getStruct<T>, {0x250, 24, 0, 0})
	SMember(FVector)                                   ComponentAppliedLinearAccClamp                              OFFSET(getStruct<T>, {0x268, 24, 0, 0})
	SMember(FSimSpaceSettings)                         SimSpaceSettings                                            OFFSET(getStruct<T>, {0x280, 96, 0, 0})
	DMember(float)                                     CachedBoundsScale                                           OFFSET(get<float>, {0x2E0, 4, 0, 0})
	DMember(bool)                                      bUpdateCacheEveryFrame                                      OFFSET(get<bool>, {0x2E4, 1, 0, 0})
	SMember(FBoneReference)                            BaseBoneRef                                                 OFFSET(getStruct<T>, {0x2E8, 12, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            OverlapChannel                                              OFFSET(get<T>, {0x2F4, 1, 0, 0})
	CMember(ESimulationSpace)                          SimulationSpace                                             OFFSET(get<T>, {0x2F5, 1, 0, 0})
	DMember(bool)                                      bCalculateVelocitiesForWorldGeometry                        OFFSET(get<bool>, {0x2F6, 1, 1, 0})
	DMember(bool)                                      bForceDisableCollisionBetweenConstraintBodies               OFFSET(get<bool>, {0x2F6, 1, 1, 1})
	DMember(bool)                                      bUseExternalClothCollision                                  OFFSET(get<bool>, {0x2F6, 1, 1, 2})
	DMember(bool)                                      bMakeKinematicConstraints                                   OFFSET(get<bool>, {0x2F6, 1, 1, 3})
	DMember(bool)                                      bEnableWorldGeometry                                        OFFSET(get<bool>, {0x2F8, 1, 1, 0})
	DMember(bool)                                      bOverrideWorldGravity                                       OFFSET(get<bool>, {0x2F8, 1, 1, 1})
	DMember(bool)                                      bTransferBoneVelocities                                     OFFSET(get<bool>, {0x2F8, 1, 1, 2})
	DMember(bool)                                      bFreezeIncomingPoseOnStart                                  OFFSET(get<bool>, {0x2F8, 1, 1, 3})
	DMember(bool)                                      bModifyConstraintTransformsToMatchSkeleton                  OFFSET(get<bool>, {0x2F8, 1, 1, 4})
	DMember(float)                                     WorldSpaceMinimumScale                                      OFFSET(get<float>, {0x2FC, 4, 0, 0})
	DMember(float)                                     EvaluationResetTime                                         OFFSET(get<float>, {0x300, 4, 0, 0})
	DMember(bool)                                      bEnableControls                                             OFFSET(get<bool>, {0x304, 1, 0, 0})
	CMember(class UPhysicsControlProfileAsset*)        PhysicsControlProfileAsset                                  OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(TMap<FName, FName>)                        BoneToBodyNameMap                                           OFFSET(get<T>, {0x310, 80, 0, 0})
	SMember(FPhysicsControlCharacterSetupData)         CharacterSetupData                                          OFFSET(getStruct<T>, {0x360, 192, 0, 0})
	DMember(bool)                                      bEnableCharacterSetupData                                   OFFSET(get<bool>, {0x420, 1, 0, 0})
	SMember(FPhysicsControlAndBodyModifierCreationDatas) AdditionalControlsAndBodyModifiers                        OFFSET(getStruct<T>, {0x428, 160, 0, 0})
	SMember(FPhysicsControlSetUpdates)                 AdditionalSets                                              OFFSET(getStruct<T>, {0x4C8, 32, 0, 0})
	SMember(FPhysicsControlControlAndModifierParameters) InitialControlAndBodyModifierUpdates                      OFFSET(getStruct<T>, {0x4E8, 48, 0, 0})
	SMember(FPhysicsControlControlAndModifierParameters) ControlAndModifierParameters                              OFFSET(getStruct<T>, {0x518, 48, 0, 0})
	SMember(FPhysicsControlControlAndModifierUpdates)  ControlAndModifierUpdates                                   OFFSET(getStruct<T>, {0x548, 48, 0, 0})
	SMember(FRigidBodyControlTargets)                  ControlTargets                                              OFFSET(getStruct<T>, {0x578, 80, 0, 0})
	SMember(FRigidBodyKinematicTargets)                KinematicTargets                                            OFFSET(getStruct<T>, {0x5C8, 80, 0, 0})
	CMember(class USkeletalMesh*)                      PhysicsAssetAuthoredSkeletalMesh                            OFFSET(get<T>, {0x618, 8, 0, 0})
	SMember(FName)                                     ConstraintProfile                                           OFFSET(getStruct<T>, {0x620, 4, 0, 0})
	SMember(FName)                                     ControlProfile                                              OFFSET(getStruct<T>, {0x624, 4, 0, 0})
	CMember(ESimulationTiming)                         SimulationTiming                                            OFFSET(get<T>, {0x629, 1, 0, 0})
};

/// Struct /Script/PhysicsControl.InitialPhysicsControl
/// Size: 0x0148 (0x000000 - 0x000148)
class FInitialPhysicsControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(TWeakObjectPtr<AActor*>)                   ParentActor                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ParentMeshComponentName                                     OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     ParentBoneName                                              OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   ChildActor                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     ChildMeshComponentName                                      OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     ChildBoneName                                               OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	SMember(FPhysicsControlData)                       ControlData                                                 OFFSET(getStruct<T>, {0x20, 80, 0, 0})
	SMember(FPhysicsControlMultiplier)                 ControlMultiplier                                           OFFSET(getStruct<T>, {0x70, 112, 0, 0})
	SMember(FPhysicsControlTarget)                     ControlTarget                                               OFFSET(getStruct<T>, {0xE0, 104, 0, 0})
};

/// Struct /Script/PhysicsControl.InitialBodyModifier
/// Size: 0x0050 (0x000000 - 0x000050)
class FInitialBodyModifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     MeshComponentName                                           OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FPhysicsControlModifierData)               BodyModifierData                                            OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector)                                   KinematicTargetPosition                                     OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FRotator)                                  KinematicTargetOrientation                                  OFFSET(getStruct<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/PhysicsControl.InitialCharacterControls
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FInitialCharacterControls : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TWeakObjectPtr<AActor*>)                   CharacterActor                                              OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     SkeletalMeshComponentName                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FPhysicsControlLimbSetupData>)      LimbSetupData                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FPhysicsControlData)                       WorldSpaceControlData                                       OFFSET(getStruct<T>, {0x20, 80, 0, 0})
	SMember(FPhysicsControlData)                       ParentSpaceControlData                                      OFFSET(getStruct<T>, {0x70, 80, 0, 0})
	SMember(FPhysicsControlModifierData)               BodyModifierData                                            OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
};

/// Enum /Script/PhysicsControl.EResetToCachedTargetBehavior
/// Size: 0x03
enum class EResetToCachedTargetBehavior : uint8_t
{
	EResetToCachedTargetBehavior__ResetImmediately                                   = 0,
	EResetToCachedTargetBehavior__ResetDuringUpdateControls                          = 1,
	EResetToCachedTargetBehavior__EResetToCachedTargetBehavior_MAX                   = 2
};

/// Enum /Script/PhysicsControl.EPhysicsMovementType
/// Size: 0x05
enum class EPhysicsMovementType : uint8_t
{
	EPhysicsMovementType__Static                                                     = 0,
	EPhysicsMovementType__Kinematic                                                  = 1,
	EPhysicsMovementType__Simulated                                                  = 2,
	EPhysicsMovementType__Default                                                    = 3,
	EPhysicsMovementType__EPhysicsMovementType_MAX                                   = 4
};

/// Enum /Script/PhysicsControl.EPhysicsControlType
/// Size: 0x03
enum class EPhysicsControlType : uint8_t
{
	EPhysicsControlType__WorldSpace                                                  = 0,
	EPhysicsControlType__ParentSpace                                                 = 1,
	EPhysicsControlType__EPhysicsControlType_MAX                                     = 2
};

