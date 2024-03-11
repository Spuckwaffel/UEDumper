
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

/// Class /Script/PhysicsControl.PhysicsControlBPLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhysicsControlBPLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.SetOverridePhysicsAsset
	// FRigidBodyWithControlReference SetOverridePhysicsAsset(FRigidBodyWithControlReference& Node, class UPhysicsAsset* PhysicsAsset); // [0xa382520] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.GetControlNamesInSet
	// TArray<FName> GetControlNamesInSet(FRigidBodyWithControlReference& RigidBodyWithControl, FName SetName);              // [0xa378b3c] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.GetBodyModifierNamesInSet
	// TArray<FName> GetBodyModifierNamesInSet(FRigidBodyWithControlReference& RigidBodyWithControl, FName SetName);         // [0xa377bfc] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.ConvertToRigidBodyWithControlPure
	// void ConvertToRigidBodyWithControlPure(FAnimNodeReference& Node, FRigidBodyWithControlReference& RigidBodyWithControl, bool& Result); // [0xa373e60] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.ConvertToRigidBodyWithControl
	// FRigidBodyWithControlReference ConvertToRigidBodyWithControl(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0xa373d34] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.BlendParameters
	// void BlendParameters(FPhysicsControlControlAndModifierParameters& InParametersA, FPhysicsControlControlAndModifierParameters& InParametersB, float InInterpolationWeight, FPhysicsControlControlAndModifierParameters& OutParameters); // [0xa373a88] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.BlendModifierParametersThroughSet
	// void BlendModifierParametersThroughSet(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlNamedModifierParameters& InStartModifierParameters, FPhysicsControlNamedModifierParameters& InEndModifierParameters, TArray<FName>& ModifierNames, FPhysicsControlControlAndModifierParameters& OutParameters); // [0xa373804] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.BlendControlParametersThroughSet
	// void BlendControlParametersThroughSet(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlNamedControlParameters& InStartControlParameters, FPhysicsControlNamedControlParameters& InEndControlParameters, TArray<FName>& ControlNames, FPhysicsControlControlAndModifierParameters& OutParameters); // [0xa373568] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.AddMultipleModifierParameters
	// void AddMultipleModifierParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, TArray<FName>& Names, FPhysicsControlModifierSparseData& ModifierData); // [0xa373344] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.AddMultipleControlParameters
	// void AddMultipleControlParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, TArray<FName>& Names, FPhysicsControlSparseData& ControlData); // [0xa373120] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.AddModifierParameters
	// void AddModifierParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, FName Name, FPhysicsControlModifierSparseData& ModifierData); // [0xa372eb0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PhysicsControl.PhysicsControlBPLibrary.AddControlParameters
	// void AddControlParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, FName Name, FPhysicsControlSparseData& ControlData); // [0xa3727b4] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PhysicsControl.PhysicsControlComponent
/// Size: 0x0250 (0x000220 - 0x000470)
class UPhysicsControlComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(32,12391) /* TWeakObjectPtr<UPhysicsControlProfileAsset*> */ __um(PhysicsControlProfileAsset);   // 0x0220   (0x0020)  
	float                                              TeleportDistanceThreshold;                                  // 0x0240   (0x0004)  
	float                                              TeleportRotationThreshold;                                  // 0x0244   (0x0004)  
	bool                                               bShowDebugVisualization;                                    // 0x0248   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0249   (0x0003)  MISSED
	float                                              VisualizationSizeScale;                                     // 0x024C   (0x0004)  
	bool                                               bShowDebugControlList;                                      // 0x0250   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0251   (0x0007)  MISSED
	SDK_UNDEFINED(16,12392) /* FString */              __um(DebugControlDetailFilter);                             // 0x0258   (0x0010)  
	bool                                               bShowDebugBodyModifierList;                                 // 0x0268   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0269   (0x0007)  MISSED
	SDK_UNDEFINED(16,12393) /* FString */              __um(DebugBodyModifierDetailFilter);                        // 0x0270   (0x0010)  
	float                                              VelocityPredictionTime;                                     // 0x0280   (0x0004)  
	int32_t                                            MaxNumControlsOrModifiersPerName;                           // 0x0284   (0x0004)  
	bool                                               bWarnAboutInvalidNames;                                     // 0x0288   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1E7];                                     // 0x0289   (0x01E7)  MISSED


	/// Functions
	// Function /Script/PhysicsControl.PhysicsControlComponent.UpdateTargetCaches
	// void UpdateTargetCaches(float DeltaTime);                                                                             // [0xa38272c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.UpdateControls
	// void UpdateControls(float DeltaTime);                                                                                 // [0xa3826b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlUseSkeletalAnimation
	// bool SetControlUseSkeletalAnimation(FName Name, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier); // [0xa381d5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetsInSet
	// void SetControlTargetsInSet(FName Set, FPhysicsControlTarget ControlTarget, bool bEnableControl);                     // [0xa381ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargets
	// void SetControlTargets(TArray<FName>& Names, FPhysicsControlTarget ControlTarget, bool bEnableControl);               // [0xa3817f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsInSet
	// void SetControlTargetPositionsInSet(FName SetName, FVector Position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xa3813e8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsFromArray
	// bool SetControlTargetPositionsFromArray(TArray<FName>& Names, TArray<FVector>& Positions, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xa381024] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsAndOrientationsInSet
	// void SetControlTargetPositionsAndOrientationsInSet(FName SetName, FVector Position, FRotator orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xa380b2c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsAndOrientationsFromArray
	// bool SetControlTargetPositionsAndOrientationsFromArray(TArray<FName>& Names, TArray<FVector>& Positions, TArray<FRotator>& Orientations, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xa380700] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionsAndOrientations
	// void SetControlTargetPositionsAndOrientations(TArray<FName>& Names, FVector Position, FRotator orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xa3801bc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositions
	// void SetControlTargetPositions(TArray<FName>& Names, FVector Position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xa37fd6c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionAndOrientation
	// bool SetControlTargetPositionAndOrientation(FName Name, FVector Position, FRotator orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xa37f850] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPosition
	// bool SetControlTargetPosition(FName Name, FVector Position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xa37f428] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPoses
	// bool SetControlTargetPoses(FName Name, FVector ParentPosition, FRotator ParentOrientation, FVector ChildPosition, FRotator ChildOrientation, float VelocityDeltaTime, bool bEnableControl); // [0xa37ee08] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetOrientationsInSet
	// void SetControlTargetOrientationsInSet(FName SetName, FRotator orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xa37e9fc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetOrientationsFromArray
	// bool SetControlTargetOrientationsFromArray(TArray<FName>& Names, TArray<FRotator>& Orientations, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xa37e638] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetOrientations
	// void SetControlTargetOrientations(TArray<FName>& Names, FRotator orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xa37e1e8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetOrientation
	// bool SetControlTargetOrientation(FName Name, FRotator orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0xa37ddc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTarget
	// bool SetControlTarget(FName Name, FPhysicsControlTarget ControlTarget, bool bEnableControl);                          // [0xa37db14] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsUseSkeletalAnimation
	// void SetControlsUseSkeletalAnimation(TArray<FName>& Names, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier); // [0xa382370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlSparseMultipliersInSet
	// void SetControlSparseMultipliersInSet(FName Set, FPhysicsControlSparseMultiplier ControlMultiplier, bool bEnableControl); // [0xa37d86c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlSparseMultipliers
	// void SetControlSparseMultipliers(TArray<FName>& Names, FPhysicsControlSparseMultiplier ControlMultiplier, bool bEnableControl); // [0xa37d598] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlSparseMultiplier
	// bool SetControlSparseMultiplier(FName Name, FPhysicsControlSparseMultiplier ControlMultiplier, bool bEnableControl);  // [0xa37d2e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlSparseDatasInSet
	// void SetControlSparseDatasInSet(FName Set, FPhysicsControlSparseData ControlData);                                    // [0xa37d138] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlSparseDatas
	// void SetControlSparseDatas(TArray<FName>& Names, FPhysicsControlSparseData ControlData);                              // [0xa37cf64] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlSparseData
	// bool SetControlSparseData(FName Name, FPhysicsControlSparseData ControlData);                                         // [0xa37cdb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsInSetUseSkeletalAnimation
	// void SetControlsInSetUseSkeletalAnimation(FName Set, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier); // [0xa382268] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsInSetEnabled
	// void SetControlsInSetEnabled(FName Set, bool bEnable);                                                                // [0xa38219c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsInSetDisableCollision
	// void SetControlsInSetDisableCollision(FName Set, bool bDisableCollision);                                             // [0xa3820d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsEnabled
	// void SetControlsEnabled(TArray<FName>& Names, bool bEnable);                                                          // [0xa381f9c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlsDisableCollision
	// void SetControlsDisableCollision(TArray<FName>& Names, bool bDisableCollision);                                       // [0xa381e68] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlPoint
	// bool SetControlPoint(FName Name, FVector Position);                                                                   // [0xa37cc34] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlParentsInSet
	// void SetControlParentsInSet(FName Set, class UMeshComponent* ParentMeshComponent, FName ParentBoneName);              // [0xa37cb2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlParents
	// void SetControlParents(TArray<FName>& Names, class UMeshComponent* ParentMeshComponent, FName ParentBoneName);        // [0xa37c980] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlParent
	// bool SetControlParent(FName Name, class UMeshComponent* ParentMeshComponent, FName ParentBoneName);                   // [0xa37c888] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlMultipliersInSet
	// void SetControlMultipliersInSet(FName Set, FPhysicsControlMultiplier ControlMultiplier, bool bEnableControl);         // [0xa37c5ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlMultipliers
	// void SetControlMultipliers(TArray<FName>& Names, FPhysicsControlMultiplier ControlMultiplier, bool bEnableControl);   // [0xa37c324] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlMultiplier
	// bool SetControlMultiplier(FName Name, FPhysicsControlMultiplier ControlMultiplier, bool bEnableControl);              // [0xa37c078] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlLinearData
	// bool SetControlLinearData(FName Name, float Strength, float DampingRatio, float ExtraDamping, float MaxForce, bool bEnableControl); // [0xa37beac] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlEnabled
	// bool SetControlEnabled(FName Name, bool bEnable);                                                                     // [0xa37bde8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlDisableCollision
	// bool SetControlDisableCollision(FName Name, bool bDisableCollision);                                                  // [0xa37bd24] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlDatasInSet
	// void SetControlDatasInSet(FName Set, FPhysicsControlData ControlData);                                                // [0xa37bb7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlDatas
	// void SetControlDatas(TArray<FName>& Names, FPhysicsControlData ControlData);                                          // [0xa37b9a8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlData
	// bool SetControlData(FName Name, FPhysicsControlData ControlData);                                                     // [0xa37b7fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlAngularData
	// bool SetControlAngularData(FName Name, float Strength, float DampingRatio, float ExtraDamping, float MaxTorque, bool bEnableControl); // [0xa37b630] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetCachedBoneData
	// bool SetCachedBoneData(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, FTransform& TM, FVector Velocity, FVector AngularVelocity); // [0xa37b2b4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierUseSkeletalAnimation
	// bool SetBodyModifierUseSkeletalAnimation(FName Name, bool bUseSkeletalAnimation);                                     // [0xa37a5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierUpdateKinematicFromSimulation
	// bool SetBodyModifierUpdateKinematicFromSimulation(FName Name, bool bUpdateKinematicFromSimulation);                   // [0xa37a51c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersUseSkeletalAnimation
	// void SetBodyModifiersUseSkeletalAnimation(TArray<FName>& Names, bool bUseSkeletalAnimation);                          // [0xa37b180] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersUpdateKinematicFromSimulation
	// void SetBodyModifiersUpdateKinematicFromSimulation(TArray<FName>& Names, bool bUpdateKinematicFromSimulation);        // [0xa37b04c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersPhysicsBlendWeight
	// void SetBodyModifiersPhysicsBlendWeight(TArray<FName>& Names, float PhysicsBlendWeight);                              // [0xa37af1c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierSparseDatasInSet
	// void SetBodyModifierSparseDatasInSet(FName Set, FPhysicsControlModifierSparseData ModifierData);                      // [0xa37a398] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierSparseDatas
	// void SetBodyModifierSparseDatas(TArray<FName>& Names, FPhysicsControlModifierSparseData ModifierData);                // [0xa37a1e8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierSparseData
	// bool SetBodyModifierSparseData(FName Name, FPhysicsControlModifierSparseData ModifierData);                           // [0xa37a064] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersMovementType
	// void SetBodyModifiersMovementType(TArray<FName>& Names, EPhysicsMovementType MovementType);                           // [0xa37adec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetUseSkeletalAnimation
	// void SetBodyModifiersInSetUseSkeletalAnimation(FName Set, bool bUseSkeletalAnimation);                                // [0xa37ad20] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetUpdateKinematicFromSimulation
	// void SetBodyModifiersInSetUpdateKinematicFromSimulation(FName Set, bool bUpdateKinematicFromSimulation);              // [0xa37ac54] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetPhysicsBlendWeight
	// void SetBodyModifiersInSetPhysicsBlendWeight(FName Set, float PhysicsBlendWeight);                                    // [0xa37ab7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetMovementType
	// void SetBodyModifiersInSetMovementType(FName Set, EPhysicsMovementType MovementType);                                 // [0xa37aaac] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetGravityMultiplier
	// void SetBodyModifiersInSetGravityMultiplier(FName Set, float GravityMultiplier);                                      // [0xa37a9d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersInSetCollisionType
	// void SetBodyModifiersInSetCollisionType(FName Set, TEnumAsByte<ECollisionEnabled> CollisionType);                     // [0xa37a904] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersGravityMultiplier
	// void SetBodyModifiersGravityMultiplier(TArray<FName>& Names, float GravityMultiplier);                                // [0xa37a7d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifiersCollisionType
	// void SetBodyModifiersCollisionType(TArray<FName>& Names, TEnumAsByte<ECollisionEnabled> CollisionType);               // [0xa37a6a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierPhysicsBlendWeight
	// bool SetBodyModifierPhysicsBlendWeight(FName Name, float PhysicsBlendWeight);                                         // [0xa379fa4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierMovementType
	// bool SetBodyModifierMovementType(FName Name, EPhysicsMovementType MovementType);                                      // [0xa379ee4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierKinematicTarget
	// bool SetBodyModifierKinematicTarget(FName Name, FVector KinematicTargetPosition, FRotator KinematicTargetOrienation, bool bMakeKinematic); // [0xa379b94] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierGravityMultiplier
	// bool SetBodyModifierGravityMultiplier(FName Name, float GravityMultiplier);                                           // [0xa379ad4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierDatasInSet
	// void SetBodyModifierDatasInSet(FName Set, FPhysicsControlModifierData ModifierData);                                  // [0xa379944] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierDatas
	// void SetBodyModifierDatas(TArray<FName>& Names, FPhysicsControlModifierData ModifierData);                            // [0xa379788] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierData
	// bool SetBodyModifierData(FName Name, FPhysicsControlModifierData ModifierData);                                       // [0xa3795f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierCollisionType
	// bool SetBodyModifierCollisionType(FName Name, TEnumAsByte<ECollisionEnabled> CollisionType);                          // [0xa379530] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.ResetControlPoint
	// bool ResetControlPoint(FName Name);                                                                                   // [0xa379440] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.ResetBodyModifierToCachedBoneTransform
	// bool ResetBodyModifierToCachedBoneTransform(FName Name, EResetToCachedTargetBehavior Behavior);                       // [0xa379180] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.ResetBodyModifiersToCachedBoneTransforms
	// void ResetBodyModifiersToCachedBoneTransforms(TArray<FName>& Names, EResetToCachedTargetBehavior Behavior);           // [0xa379310] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.ResetBodyModifiersInSetToCachedBoneTransforms
	// void ResetBodyModifiersInSetToCachedBoneTransforms(FName SetName, EResetToCachedTargetBehavior Behavior);             // [0xa379240] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.InvokeControlProfile
	// void InvokeControlProfile(FName ProfileName);                                                                         // [0xa379100] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetSetsContainingControl
	// TArray<FName> GetSetsContainingControl(FName Control);                                                                // [0xa37905c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetSetsContainingBodyModifier
	// TArray<FName> GetSetsContainingBodyModifier(FName Control);                                                           // [0xa378fb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetLimbBonesFromSkeletalMesh
	// TMap<FName, FPhysicsControlLimbBones> GetLimbBonesFromSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FPhysicsControlLimbSetupData>& LimbSetupData); // [0xa378e5c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlTarget
	// bool GetControlTarget(FName Name, FPhysicsControlTarget& ControlTarget);                                              // [0xa378d6c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlNamesInSet
	// TArray<FName> GetControlNamesInSet(FName Set);                                                                        // [0xa378cd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlMultiplier
	// bool GetControlMultiplier(FName Name, FPhysicsControlMultiplier& ControlMultiplier);                                  // [0xa378a4c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlExists
	// bool GetControlExists(FName Name);                                                                                    // [0xa3789c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlEnabled
	// bool GetControlEnabled(FName Name);                                                                                   // [0xa3788d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlData
	// bool GetControlData(FName Name, FPhysicsControlData& ControlData);                                                    // [0xa3787ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneVelocity
	// FVector GetCachedBoneVelocity(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);                   // [0xa378718] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneVelocities
	// TArray<FVector> GetCachedBoneVelocities(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // [0xa378608] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneTransforms
	// TArray<FTransform> GetCachedBoneTransforms(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // [0xa3784f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneTransform
	// FTransform GetCachedBoneTransform(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);               // [0xa3783d8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBonePositions
	// TArray<FVector> GetCachedBonePositions(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // [0xa3782c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBonePosition
	// FVector GetCachedBonePosition(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);                   // [0xa3781f4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneOrientations
	// TArray<FRotator> GetCachedBoneOrientations(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // [0xa3780e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneOrientation
	// FRotator GetCachedBoneOrientation(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);               // [0xa378010] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneAngularVelocity
	// FVector GetCachedBoneAngularVelocity(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);            // [0xa377f3c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetCachedBoneAngularVelocities
	// TArray<FVector> GetCachedBoneAngularVelocities(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // [0xa377e2c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetBodyModifierNamesInSet
	// TArray<FName> GetBodyModifierNamesInSet(FName Set);                                                                   // [0xa377d98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetBodyModifierExists
	// bool GetBodyModifierExists(FName Name);                                                                               // [0xa377b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetAllControlNames
	// TArray<FName> GetAllControlNames();                                                                                   // [0xa377b1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetAllBodyModifierNames
	// TArray<FName> GetAllBodyModifierNames();                                                                              // [0xa377ac8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyControlsInSet
	// void DestroyControlsInSet(FName Set);                                                                                 // [0xa3779f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyControls
	// void DestroyControls(TArray<FName>& Names);                                                                           // [0xa377954] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyControl
	// bool DestroyControl(FName Name);                                                                                      // [0xa3778c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyBodyModifiersInSet
	// void DestroyBodyModifiersInSet(FName Set);                                                                            // [0xa3777f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyBodyModifiers
	// void DestroyBodyModifiers(TArray<FName>& Names);                                                                      // [0xa377754] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyBodyModifier
	// bool DestroyBodyModifier(FName Name);                                                                                 // [0xa3776c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateNamedControl
	// bool CreateNamedControl(FName Name, class UMeshComponent* ParentMeshComponent, FName ParentBoneName, class UMeshComponent* ChildMeshComponent, FName ChildBoneName, FPhysicsControlData ControlData, FPhysicsControlTarget ControlTarget, FName Set); // [0xa3771e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateNamedBodyModifier
	// bool CreateNamedBodyModifier(FName Name, class UMeshComponent* MeshComponent, FName BoneName, FName Set, FPhysicsControlModifierData BodyModifierData); // [0xa376fb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromSkeletalMeshBelow
	// TArray<FName> CreateControlsFromSkeletalMeshBelow(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, EPhysicsControlType ControlType, FPhysicsControlData ControlData, FName Set); // [0xa376b94] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromSkeletalMeshAndConstraintProfileBelow
	// TArray<FName> CreateControlsFromSkeletalMeshAndConstraintProfileBelow(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, FName ConstraintProfile, FName Set, bool bEnabled); // [0xa376944] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromSkeletalMeshAndConstraintProfile
	// TArray<FName> CreateControlsFromSkeletalMeshAndConstraintProfile(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames, FName ConstraintProfile, FName Set, bool bEnabled); // [0xa3766a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromSkeletalMesh
	// TArray<FName> CreateControlsFromSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames, EPhysicsControlType ControlType, FPhysicsControlData ControlData, FName Set); // [0xa376308] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromLimbBonesAndConstraintProfile
	// TMap<FName, FPhysicsControlNames> CreateControlsFromLimbBonesAndConstraintProfile(FPhysicsControlNames& AllControls, TMap<FName, FPhysicsControlLimbBones>& LimbBones, FName ConstraintProfile, bool bEnabled); // [0xa375fa8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsFromLimbBones
	// TMap<FName, FPhysicsControlNames> CreateControlsFromLimbBones(FPhysicsControlNames& AllControls, TMap<FName, FPhysicsControlLimbBones>& LimbBones, EPhysicsControlType ControlType, FPhysicsControlData ControlData, class UMeshComponent* WorldComponent, FName WorldBoneName, FString NamePrefix); // [0xa375830] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsAndBodyModifiersFromLimbBones
	// void CreateControlsAndBodyModifiersFromLimbBones(FPhysicsControlNames& AllWorldSpaceControls, TMap<FName, FPhysicsControlNames>& LimbWorldSpaceControls, FPhysicsControlNames& AllParentSpaceControls, TMap<FName, FPhysicsControlNames>& LimbParentSpaceControls, FPhysicsControlNames& AllBodyModifiers, TMap<FName, FPhysicsControlNames>& LimbBodyModifiers, class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FPhysicsControlLimbSetupData>& LimbSetupData, FPhysicsControlData WorldSpaceControlData, FPhysicsControlData ParentSpaceControlData, FPhysicsControlModifierData BodyModifierData, class UMeshComponent* WorldComponent, FName WorldBoneName); // [0xa374e60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControlsAndBodyModifiersFromControlProfileAsset
	// void CreateControlsAndBodyModifiersFromControlProfileAsset(class USkeletalMeshComponent* SkeletalMeshComponent, class UMeshComponent* WorldComponent, FName WorldBoneName); // [0xa374d68] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateControl
	// FName CreateControl(class UMeshComponent* ParentMeshComponent, FName ParentBoneName, class UMeshComponent* ChildMeshComponent, FName ChildBoneName, FPhysicsControlData ControlData, FPhysicsControlTarget ControlTarget, FName Set, FString NamePrefix); // [0xa3747b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateBodyModifiersFromSkeletalMeshBelow
	// TArray<FName> CreateBodyModifiersFromSkeletalMeshBelow(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, FName Set, FPhysicsControlModifierData BodyModifierData); // [0xa3744cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateBodyModifiersFromLimbBones
	// TMap<FName, FPhysicsControlNames> CreateBodyModifiersFromLimbBones(FPhysicsControlNames& AllBodyModifiers, TMap<FName, FPhysicsControlLimbBones>& LimbBones, FPhysicsControlModifierData BodyModifierData); // [0xa37423c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.CreateBodyModifier
	// FName CreateBodyModifier(class UMeshComponent* MeshComponent, FName BoneName, FName Set, FPhysicsControlModifierData BodyModifierData); // [0xa37403c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.AddControlToSet
	// void AddControlToSet(FPhysicsControlNames& NewSet, FName Control, FName Set);                                         // [0xa372a48] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.AddControlsToSet
	// void AddControlsToSet(FPhysicsControlNames& NewSet, TArray<FName>& Controls, FName Set);                              // [0xa372cb4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.AddBodyModifierToSet
	// void AddBodyModifierToSet(FPhysicsControlNames& NewSet, FName BodyModifier, FName Set);                               // [0xa37234c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.AddBodyModifiersToSet
	// void AddBodyModifiersToSet(FPhysicsControlNames& NewSet, TArray<FName>& BodyModifiers, FName Set);                    // [0xa3725b8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/PhysicsControl.PhysicsControlLimbSetupData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPhysicsControlLimbSetupData
{ 
	FName                                              LimbName;                                                   // 0x0000   (0x0004)  
	FName                                              StartBone;                                                  // 0x0004   (0x0004)  
	bool                                               bIncludeParentBone : 1;                                     // 0x0008:0 (0x0001)  
	bool                                               bCreateWorldSpaceControls : 1;                              // 0x0008:1 (0x0001)  
	bool                                               bCreateParentSpaceControls : 1;                             // 0x0008:2 (0x0001)  
	bool                                               bCreateBodyModifiers : 1;                                   // 0x0008:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/PhysicsControl.PhysicsControlData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FPhysicsControlData
{ 
	float                                              LinearStrength;                                             // 0x0000   (0x0004)  
	float                                              LinearDampingRatio;                                         // 0x0004   (0x0004)  
	float                                              LinearExtraDamping;                                         // 0x0008   (0x0004)  
	float                                              MaxForce;                                                   // 0x000C   (0x0004)  
	float                                              AngularStrength;                                            // 0x0010   (0x0004)  
	float                                              AngularDampingRatio;                                        // 0x0014   (0x0004)  
	float                                              AngularExtraDamping;                                        // 0x0018   (0x0004)  
	float                                              MaxTorque;                                                  // 0x001C   (0x0004)  
	float                                              LinearTargetVelocityMultiplier;                             // 0x0020   (0x0004)  
	float                                              AngularTargetVelocityMultiplier;                            // 0x0024   (0x0004)  
	float                                              SkeletalAnimationVelocityMultiplier;                        // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FVector                                            CustomControlPoint;                                         // 0x0030   (0x0018)  
	bool                                               bEnabled : 1;                                               // 0x0048:0 (0x0001)  
	bool                                               bUseCustomControlPoint : 1;                                 // 0x0048:1 (0x0001)  
	bool                                               bUseSkeletalAnimation : 1;                                  // 0x0048:2 (0x0001)  
	bool                                               bDisableCollision : 1;                                      // 0x0048:3 (0x0001)  
	bool                                               bOnlyControlChildObject : 1;                                // 0x0048:4 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/PhysicsControl.PhysicsControlModifierData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPhysicsControlModifierData
{ 
	EPhysicsMovementType                               MovementType;                                               // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,12394) /* TEnumAsByte<ECollisionEnabled> */ __um(CollisionType);                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              GravityMultiplier;                                          // 0x0004   (0x0004)  
	float                                              PhysicsBlendWeight;                                         // 0x0008   (0x0004)  
	bool                                               bUseSkeletalAnimation : 1;                                  // 0x000C:0 (0x0001)  
	bool                                               bUpdateKinematicFromSimulation : 1;                         // 0x000C:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/PhysicsControl.PhysicsControlCharacterSetupData
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FPhysicsControlCharacterSetupData
{ 
	TArray<FPhysicsControlLimbSetupData>               LimbSetupData;                                              // 0x0000   (0x0010)  
	FPhysicsControlData                                DefaultWorldSpaceControlData;                               // 0x0010   (0x0050)  
	FPhysicsControlData                                DefaultParentSpaceControlData;                              // 0x0060   (0x0050)  
	FPhysicsControlModifierData                        DefaultBodyModifierData;                                    // 0x00B0   (0x0010)  
};

/// Struct /Script/PhysicsControl.PhysicsControlAndBodyModifierCreationDatas
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FPhysicsControlAndBodyModifierCreationDatas
{ 
	SDK_UNDEFINED(80,12395) /* TMap<FName, FPhysicsControlCreationData> */ __um(Controls);                         // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,12396) /* TMap<FName, FPhysicsBodyModifierCreationData> */ __um(Modifiers);                   // 0x0050   (0x0050)  
};

/// Struct /Script/PhysicsControl.PhysicsControlSetUpdate
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPhysicsControlSetUpdate
{ 
	FName                                              SetName;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      Names;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/PhysicsControl.PhysicsControlSetUpdates
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPhysicsControlSetUpdates
{ 
	TArray<FPhysicsControlSetUpdate>                   ControlSetUpdates;                                          // 0x0000   (0x0010)  
	TArray<FPhysicsControlSetUpdate>                   ModifierSetUpdates;                                         // 0x0010   (0x0010)  
};

/// Struct /Script/PhysicsControl.PhysicsControlSparseData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FPhysicsControlSparseData
{ 
	float                                              LinearStrength;                                             // 0x0000   (0x0004)  
	float                                              LinearDampingRatio;                                         // 0x0004   (0x0004)  
	float                                              LinearExtraDamping;                                         // 0x0008   (0x0004)  
	float                                              MaxForce;                                                   // 0x000C   (0x0004)  
	float                                              AngularStrength;                                            // 0x0010   (0x0004)  
	float                                              AngularDampingRatio;                                        // 0x0014   (0x0004)  
	float                                              AngularExtraDamping;                                        // 0x0018   (0x0004)  
	float                                              MaxTorque;                                                  // 0x001C   (0x0004)  
	float                                              LinearTargetVelocityMultiplier;                             // 0x0020   (0x0004)  
	float                                              AngularTargetVelocityMultiplier;                            // 0x0024   (0x0004)  
	float                                              SkeletalAnimationVelocityMultiplier;                        // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FVector                                            CustomControlPoint;                                         // 0x0030   (0x0018)  
	bool                                               bEnabled : 1;                                               // 0x0048:0 (0x0001)  
	bool                                               bUseCustomControlPoint : 1;                                 // 0x0048:1 (0x0001)  
	bool                                               bUseSkeletalAnimation : 1;                                  // 0x0048:2 (0x0001)  
	bool                                               bDisableCollision : 1;                                      // 0x0048:3 (0x0001)  
	bool                                               bOnlyControlChildObject : 1;                                // 0x0048:4 (0x0001)  
	bool                                               bEnableLinearStrength : 1;                                  // 0x0048:5 (0x0001)  
	bool                                               bEnableLinearDampingRatio : 1;                              // 0x0048:6 (0x0001)  
	bool                                               bEnableLinearExtraDamping : 1;                              // 0x0048:7 (0x0001)  
	bool                                               bEnableMaxForce : 1;                                        // 0x0049:0 (0x0001)  
	bool                                               bEnableAngularStrength : 1;                                 // 0x0049:1 (0x0001)  
	bool                                               bEnableAngularDampingRatio : 1;                             // 0x0049:2 (0x0001)  
	bool                                               bEnableAngularExtraDamping : 1;                             // 0x0049:3 (0x0001)  
	bool                                               bEnableMaxTorque : 1;                                       // 0x0049:4 (0x0001)  
	bool                                               bEnableLinearTargetVelocityMultiplier : 1;                  // 0x0049:5 (0x0001)  
	bool                                               bEnableAngularTargetVelocityMultiplier : 1;                 // 0x0049:6 (0x0001)  
	bool                                               bEnableSkeletalAnimationVelocityMultiplier : 1;             // 0x0049:7 (0x0001)  
	bool                                               bEnableCustomControlPoint : 1;                              // 0x004A:0 (0x0001)  
	bool                                               bEnablebEnabled : 1;                                        // 0x004A:1 (0x0001)  
	bool                                               bEnablebUseCustomControlPoint : 1;                          // 0x004A:2 (0x0001)  
	bool                                               bEnablebUseSkeletalAnimation : 1;                           // 0x004A:3 (0x0001)  
	bool                                               bEnablebDisableCollision : 1;                               // 0x004A:4 (0x0001)  
	bool                                               bEnablebOnlyControlChildObject : 1;                         // 0x004A:5 (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x004B   (0x0005)  MISSED
};

/// Struct /Script/PhysicsControl.PhysicsControlNamedControlParameters
/// Size: 0x0058 (0x000000 - 0x000058)
struct FPhysicsControlNamedControlParameters
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPhysicsControlSparseData                          Data;                                                       // 0x0008   (0x0050)  
};

/// Struct /Script/PhysicsControl.PhysicsControlSparseMultiplier
/// Size: 0x0078 (0x000000 - 0x000078)
struct FPhysicsControlSparseMultiplier
{ 
	FVector                                            LinearStrengthMultiplier;                                   // 0x0000   (0x0018)  
	FVector                                            LinearDampingRatioMultiplier;                               // 0x0018   (0x0018)  
	FVector                                            LinearExtraDampingMultiplier;                               // 0x0030   (0x0018)  
	FVector                                            MaxForceMultiplier;                                         // 0x0048   (0x0018)  
	float                                              AngularStrengthMultiplier;                                  // 0x0060   (0x0004)  
	float                                              AngularDampingRatioMultiplier;                              // 0x0064   (0x0004)  
	float                                              AngularExtraDampingMultiplier;                              // 0x0068   (0x0004)  
	float                                              MaxTorqueMultiplier;                                        // 0x006C   (0x0004)  
	bool                                               bEnableLinearStrengthMultiplier : 1;                        // 0x0070:0 (0x0001)  
	bool                                               bEnableLinearDampingRatioMultiplier : 1;                    // 0x0070:1 (0x0001)  
	bool                                               bEnableLinearExtraDampingMultiplier : 1;                    // 0x0070:2 (0x0001)  
	bool                                               bEnableMaxForceMultiplier : 1;                              // 0x0070:3 (0x0001)  
	bool                                               bEnableAngularStrengthMultiplier : 1;                       // 0x0070:4 (0x0001)  
	bool                                               bEnableAngularDampingRatioMultiplier : 1;                   // 0x0070:5 (0x0001)  
	bool                                               bEnableAngularExtraDampingMultiplier : 1;                   // 0x0070:6 (0x0001)  
	bool                                               bEnableMaxTorqueMultiplier : 1;                             // 0x0070:7 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/PhysicsControl.PhysicsControlNamedControlMultiplierParameters
/// Size: 0x0080 (0x000000 - 0x000080)
struct FPhysicsControlNamedControlMultiplierParameters
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPhysicsControlSparseMultiplier                    Data;                                                       // 0x0008   (0x0078)  
};

/// Struct /Script/PhysicsControl.PhysicsControlModifierSparseData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPhysicsControlModifierSparseData
{ 
	EPhysicsMovementType                               MovementType;                                               // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,12397) /* TEnumAsByte<ECollisionEnabled> */ __um(CollisionType);                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              GravityMultiplier;                                          // 0x0004   (0x0004)  
	float                                              PhysicsBlendWeight;                                         // 0x0008   (0x0004)  
	bool                                               bUseSkeletalAnimation : 1;                                  // 0x000C:0 (0x0001)  
	bool                                               bUpdateKinematicFromSimulation : 1;                         // 0x000C:1 (0x0001)  
	bool                                               bEnableMovementType : 1;                                    // 0x000C:2 (0x0001)  
	bool                                               bEnableCollisionType : 1;                                   // 0x000C:3 (0x0001)  
	bool                                               bEnableGravityMultiplier : 1;                               // 0x000C:4 (0x0001)  
	bool                                               bEnablePhysicsBlendWeight : 1;                              // 0x000C:5 (0x0001)  
	bool                                               bEnablebUseSkeletalAnimation : 1;                           // 0x000C:6 (0x0001)  
	bool                                               bEnablebUpdateKinematicFromSimulation : 1;                  // 0x000C:7 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/PhysicsControl.PhysicsControlNamedModifierParameters
/// Size: 0x0014 (0x000000 - 0x000014)
struct FPhysicsControlNamedModifierParameters
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FPhysicsControlModifierSparseData                  Data;                                                       // 0x0004   (0x0010)  
};

/// Struct /Script/PhysicsControl.PhysicsControlControlAndModifierUpdates
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPhysicsControlControlAndModifierUpdates
{ 
	TArray<FPhysicsControlNamedControlParameters>      ControlUpdates;                                             // 0x0000   (0x0010)  
	TArray<FPhysicsControlNamedControlMultiplierParameters> ControlMultiplierUpdates;                              // 0x0010   (0x0010)  
	TArray<FPhysicsControlNamedModifierParameters>     ModifierUpdates;                                            // 0x0020   (0x0010)  
};

/// Class /Script/PhysicsControl.PhysicsControlProfileAsset
/// Size: 0x01E8 (0x000028 - 0x000210)
class UPhysicsControlProfileAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	FPhysicsControlCharacterSetupData                  CharacterSetupData;                                         // 0x0030   (0x00C0)  
	FPhysicsControlAndBodyModifierCreationDatas        AdditionalControlsAndModifiers;                             // 0x00F0   (0x00A0)  
	FPhysicsControlSetUpdates                          AdditionalSets;                                             // 0x0190   (0x0020)  
	TArray<FPhysicsControlControlAndModifierUpdates>   InitialControlAndModifierUpdates;                           // 0x01B0   (0x0010)  
	SDK_UNDEFINED(80,12398) /* TMap<FName, FPhysicsControlControlAndModifierUpdates> */ __um(Profiles);            // 0x01C0   (0x0050)  
};

/// Struct /Script/PhysicsControl.InitialCharacterControls
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FInitialCharacterControls
{ 
	SDK_UNDEFINED(8,12399) /* TWeakObjectPtr<AActor*> */ __um(CharacterActor);                                     // 0x0000   (0x0008)  
	FName                                              SkeletalMeshComponentName;                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FPhysicsControlLimbSetupData>               LimbSetupData;                                              // 0x0010   (0x0010)  
	FPhysicsControlData                                WorldSpaceControlData;                                      // 0x0020   (0x0050)  
	FPhysicsControlData                                ParentSpaceControlData;                                     // 0x0070   (0x0050)  
	FPhysicsControlModifierData                        BodyModifierData;                                           // 0x00C0   (0x0010)  
};

/// Class /Script/PhysicsControl.PhysicsControlInitializerComponent
/// Size: 0x0180 (0x000220 - 0x0003A0)
class UPhysicsControlInitializerComponent : public USceneComponent
{ 
public:
	FInitialCharacterControls                          InitialCharacterControls;                                   // 0x0220   (0x00D0)  
	SDK_UNDEFINED(80,12400) /* TMap<FName, FInitialPhysicsControl> */ __um(InitialControls);                       // 0x02F0   (0x0050)  
	SDK_UNDEFINED(80,12401) /* TMap<FName, FInitialBodyModifier> */ __um(InitialBodyModifiers);                    // 0x0340   (0x0050)  
	bool                                               bCreateControlsAtBeginPlay;                                 // 0x0390   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0391   (0x000F)  MISSED


	/// Functions
	// Function /Script/PhysicsControl.PhysicsControlInitializerComponent.CreateControls
	// void CreateControls(class UPhysicsControlComponent* PhysicsControlComponent);                                         // [0xa3a9484] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PhysicsControl.PhysicsControlActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class APhysicsControlActor : public AActor
{ 
public:
	class UPhysicsControlComponent*                    ControlComponent;                                           // 0x0290   (0x0008)  
	class UPhysicsControlInitializerComponent*         ControlInitializerComponent;                                // 0x0298   (0x0008)  
};

/// Struct /Script/PhysicsControl.RigidBodyWithControlReference
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigidBodyWithControlReference : FAnimNodeReference
{ 
};

/// Struct /Script/PhysicsControl.PhysicsBodyModifier
/// Size: 0x0014 (0x000000 - 0x000014)
struct FPhysicsBodyModifier
{ 
	FName                                              BoneName;                                                   // 0x0000   (0x0004)  
	FPhysicsControlModifierData                        ModifierData;                                               // 0x0004   (0x0010)  
};

/// Struct /Script/PhysicsControl.PhysicsBodyModifierCreationData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPhysicsBodyModifierCreationData
{ 
	FPhysicsBodyModifier                               Modifier;                                                   // 0x0000   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FName>                                      Sets;                                                       // 0x0018   (0x0010)  
};

/// Struct /Script/PhysicsControl.PhysicsControlMultiplier
/// Size: 0x0070 (0x000000 - 0x000070)
struct FPhysicsControlMultiplier
{ 
	FVector                                            LinearStrengthMultiplier;                                   // 0x0000   (0x0018)  
	FVector                                            LinearDampingRatioMultiplier;                               // 0x0018   (0x0018)  
	FVector                                            LinearExtraDampingMultiplier;                               // 0x0030   (0x0018)  
	FVector                                            MaxForceMultiplier;                                         // 0x0048   (0x0018)  
	float                                              AngularStrengthMultiplier;                                  // 0x0060   (0x0004)  
	float                                              AngularDampingRatioMultiplier;                              // 0x0064   (0x0004)  
	float                                              AngularExtraDampingMultiplier;                              // 0x0068   (0x0004)  
	float                                              MaxTorqueMultiplier;                                        // 0x006C   (0x0004)  
};

/// Struct /Script/PhysicsControl.PhysicsControlTarget
/// Size: 0x0068 (0x000000 - 0x000068)
struct FPhysicsControlTarget
{ 
	FVector                                            TargetPosition;                                             // 0x0000   (0x0018)  
	FVector                                            TargetVelocity;                                             // 0x0018   (0x0018)  
	FRotator                                           TargetOrientation;                                          // 0x0030   (0x0018)  
	FVector                                            TargetAngularVelocity;                                      // 0x0048   (0x0018)  
	bool                                               bApplyControlPointToTarget;                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/PhysicsControl.PhysicsControl
/// Size: 0x00C8 (0x000000 - 0x0000C8)
struct FPhysicsControl
{ 
	FName                                              ParentBoneName;                                             // 0x0000   (0x0004)  
	FName                                              ChildBoneName;                                              // 0x0004   (0x0004)  
	FPhysicsControlData                                ControlData;                                                // 0x0008   (0x0050)  
	FPhysicsControlMultiplier                          ControlMultiplier;                                          // 0x0058   (0x0070)  
};

/// Struct /Script/PhysicsControl.PhysicsControlCreationData
/// Size: 0x00D8 (0x000000 - 0x0000D8)
struct FPhysicsControlCreationData
{ 
	FPhysicsControl                                    Control;                                                    // 0x0000   (0x00C8)  
	TArray<FName>                                      Sets;                                                       // 0x00C8   (0x0010)  
};

/// Struct /Script/PhysicsControl.PhysicsControlControlAndModifierParameters
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPhysicsControlControlAndModifierParameters
{ 
	TArray<FPhysicsControlNamedControlParameters>      ControlParameters;                                          // 0x0000   (0x0010)  
	TArray<FPhysicsControlNamedControlMultiplierParameters> ControlMultiplierParameters;                           // 0x0010   (0x0010)  
	TArray<FPhysicsControlNamedModifierParameters>     ModifierParameters;                                         // 0x0020   (0x0010)  
};

/// Struct /Script/PhysicsControl.PhysicsControlLimbBones
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPhysicsControlLimbBones
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/PhysicsControl.PhysicsControlNames
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPhysicsControlNames
{ 
	TArray<FName>                                      Names;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/PhysicsControl.RigidBodyControlTarget
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRigidBodyControlTarget
{ 
	FVector                                            TargetPosition;                                             // 0x0000   (0x0018)  
	FRotator                                           TargetOrientation;                                          // 0x0018   (0x0018)  
};

/// Struct /Script/PhysicsControl.RigidBodyControlTargets
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRigidBodyControlTargets
{ 
	SDK_UNDEFINED(80,12402) /* TMap<FName, FRigidBodyControlTarget> */ __um(Targets);                              // 0x0000   (0x0050)  
};

/// Struct /Script/PhysicsControl.RigidBodyKinematicTarget
/// Size: 0x0038 (0x000000 - 0x000038)
struct FRigidBodyKinematicTarget
{ 
	FVector                                            TargetPosition;                                             // 0x0000   (0x0018)  
	FRotator                                           TargetOrientation;                                          // 0x0018   (0x0018)  
	bool                                               bUseSkeletalAnimation : 1;                                  // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/PhysicsControl.RigidBodyKinematicTargets
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRigidBodyKinematicTargets
{ 
	SDK_UNDEFINED(80,12403) /* TMap<FName, FRigidBodyKinematicTarget> */ __um(Targets);                            // 0x0000   (0x0050)  
};

/// Struct /Script/PhysicsControl.AnimNode_RigidBodyWithControl
/// Size: 0x0D78 (0x0000C8 - 0x000E40)
struct FAnimNode_RigidBodyWithControl : FAnimNode_SkeletalControlBase
{ 
	class UPhysicsAsset*                               OverridePhysicsAsset;                                       // 0x00C8   (0x0008)  
	bool                                               bDefaultToSkeletalMeshPhysicsAsset;                         // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x137];                                     // 0x00D1   (0x0137)  MISSED
	FVector                                            OverrideWorldGravity;                                       // 0x0208   (0x0018)  
	FVector                                            ExternalForce;                                              // 0x0220   (0x0018)  
	FVector                                            ComponentLinearAccScale;                                    // 0x0238   (0x0018)  
	FVector                                            ComponentLinearVelScale;                                    // 0x0250   (0x0018)  
	FVector                                            ComponentAppliedLinearAccClamp;                             // 0x0268   (0x0018)  
	FSimSpaceSettings                                  SimSpaceSettings;                                           // 0x0280   (0x0060)  
	float                                              CachedBoundsScale;                                          // 0x02E0   (0x0004)  
	bool                                               bUpdateCacheEveryFrame;                                     // 0x02E4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02E5   (0x0003)  MISSED
	FBoneReference                                     BaseBoneRef;                                                // 0x02E8   (0x000C)  
	SDK_UNDEFINED(1,12404) /* TEnumAsByte<ECollisionChannel> */ __um(OverlapChannel);                              // 0x02F4   (0x0001)  
	ESimulationSpace                                   SimulationSpace;                                            // 0x02F5   (0x0001)  
	bool                                               bCalculateVelocitiesForWorldGeometry : 1;                   // 0x02F6:0 (0x0001)  
	bool                                               bForceDisableCollisionBetweenConstraintBodies : 1;          // 0x02F6:1 (0x0001)  
	bool                                               bUseExternalClothCollision : 1;                             // 0x02F6:2 (0x0001)  
	bool                                               bMakeKinematicConstraints : 1;                              // 0x02F6:3 (0x0001)  
	unsigned char                                      UnknownData02_3[0x1];                                       // 0x02F7   (0x0001)  MISSED
	bool                                               bEnableWorldGeometry : 1;                                   // 0x02F8:0 (0x0001)  
	bool                                               bOverrideWorldGravity : 1;                                  // 0x02F8:1 (0x0001)  
	bool                                               bTransferBoneVelocities : 1;                                // 0x02F8:2 (0x0001)  
	bool                                               bFreezeIncomingPoseOnStart : 1;                             // 0x02F8:3 (0x0001)  
	bool                                               bModifyConstraintTransformsToMatchSkeleton : 1;             // 0x02F8:4 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x02F9   (0x0003)  MISSED
	float                                              WorldSpaceMinimumScale;                                     // 0x02FC   (0x0004)  
	float                                              EvaluationResetTime;                                        // 0x0300   (0x0004)  
	bool                                               bEnableControls;                                            // 0x0304   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0305   (0x0003)  MISSED
	class UPhysicsControlProfileAsset*                 PhysicsControlProfileAsset;                                 // 0x0308   (0x0008)  
	SDK_UNDEFINED(80,12405) /* TMap<FName, FName> */   __um(BoneToBodyNameMap);                                    // 0x0310   (0x0050)  
	FPhysicsControlCharacterSetupData                  CharacterSetupData;                                         // 0x0360   (0x00C0)  
	bool                                               bEnableCharacterSetupData;                                  // 0x0420   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0421   (0x0007)  MISSED
	FPhysicsControlAndBodyModifierCreationDatas        AdditionalControlsAndBodyModifiers;                         // 0x0428   (0x00A0)  
	FPhysicsControlSetUpdates                          AdditionalSets;                                             // 0x04C8   (0x0020)  
	FPhysicsControlControlAndModifierParameters        InitialControlAndBodyModifierUpdates;                       // 0x04E8   (0x0030)  
	FPhysicsControlControlAndModifierParameters        ControlAndModifierParameters;                               // 0x0518   (0x0030)  
	FPhysicsControlControlAndModifierUpdates           ControlAndModifierUpdates;                                  // 0x0548   (0x0030)  
	FRigidBodyControlTargets                           ControlTargets;                                             // 0x0578   (0x0050)  
	FRigidBodyKinematicTargets                         KinematicTargets;                                           // 0x05C8   (0x0050)  
	class USkeletalMesh*                               PhysicsAssetAuthoredSkeletalMesh;                           // 0x0618   (0x0008)  
	FName                                              ConstraintProfile;                                          // 0x0620   (0x0004)  
	FName                                              ControlProfile;                                             // 0x0624   (0x0004)  
	unsigned char                                      UnknownData06_5[0x1];                                       // 0x0628   (0x0001)  MISSED
	ESimulationTiming                                  SimulationTiming;                                           // 0x0629   (0x0001)  
	unsigned char                                      UnknownData07_6[0x816];                                     // 0x062A   (0x0816)  MISSED
};

/// Struct /Script/PhysicsControl.InitialPhysicsControl
/// Size: 0x0148 (0x000000 - 0x000148)
struct FInitialPhysicsControl
{ 
	SDK_UNDEFINED(8,12406) /* TWeakObjectPtr<AActor*> */ __um(ParentActor);                                        // 0x0000   (0x0008)  
	FName                                              ParentMeshComponentName;                                    // 0x0008   (0x0004)  
	FName                                              ParentBoneName;                                             // 0x000C   (0x0004)  
	SDK_UNDEFINED(8,12407) /* TWeakObjectPtr<AActor*> */ __um(ChildActor);                                         // 0x0010   (0x0008)  
	FName                                              ChildMeshComponentName;                                     // 0x0018   (0x0004)  
	FName                                              ChildBoneName;                                              // 0x001C   (0x0004)  
	FPhysicsControlData                                ControlData;                                                // 0x0020   (0x0050)  
	FPhysicsControlMultiplier                          ControlMultiplier;                                          // 0x0070   (0x0070)  
	FPhysicsControlTarget                              ControlTarget;                                              // 0x00E0   (0x0068)  
};

/// Struct /Script/PhysicsControl.InitialBodyModifier
/// Size: 0x0050 (0x000000 - 0x000050)
struct FInitialBodyModifier
{ 
	SDK_UNDEFINED(8,12408) /* TWeakObjectPtr<AActor*> */ __um(Actor);                                              // 0x0000   (0x0008)  
	FName                                              MeshComponentName;                                          // 0x0008   (0x0004)  
	FName                                              BoneName;                                                   // 0x000C   (0x0004)  
	FPhysicsControlModifierData                        BodyModifierData;                                           // 0x0010   (0x0010)  
	FVector                                            KinematicTargetPosition;                                    // 0x0020   (0x0018)  
	FRotator                                           KinematicTargetOrientation;                                 // 0x0038   (0x0018)  
};

