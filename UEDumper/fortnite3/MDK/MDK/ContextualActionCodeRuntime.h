
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CableComponent
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/ContextualActionCodeRuntime.FortMovementMode_ExtLogicBaseSwinging
/// Size: 0x0038 (0x000120 - 0x000158)
class UFortMovementMode_ExtLogicBaseSwinging : public UFortMovementMode_BaseExtLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(class UClass*)                             SwingingAnimationLayer                                      OFFSET(get<T>, {0x128, 8, 0, 0})
	DMember(float)                                     GravitationalAcceleration                                   OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     MinimumInitialSpeed                                         OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(float)                                     AccelerationMultiplier                                      OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     DefaultAcceleration                                         OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     NonBrakingFriction                                          OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     BrakingFriction                                             OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     BrakingDeceleration                                         OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x14C, 4, 0, 0})
	SMember(FGameplayTag)                              SwingingTag                                                 OFFSET(getStruct<T>, {0x150, 4, 0, 0})


	/// Functions
	// Function /Script/ContextualActionCodeRuntime.FortMovementMode_ExtLogicBaseSwinging.OnOwnerDBNO
	// void OnOwnerDBNO();                                                                                                      // [0xbc2ad14] Final|Native|Protected 
};

/// Class /Script/ContextualActionCodeRuntime.FortMovementMode_ExtLogicSwingingObject
/// Size: 0x0038 (0x000158 - 0x000190)
class UFortMovementMode_ExtLogicSwingingObject : public UFortMovementMode_ExtLogicBaseSwinging
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FVector)                                   AttachOffset                                                OFFSET(getStruct<T>, {0x158, 24, 0, 0})
	SMember(FVector)                                   HandIKOffset                                                OFFSET(getStruct<T>, {0x170, 24, 0, 0})
	DMember(bool)                                      bAlignCharacterToObject                                     OFFSET(get<bool>, {0x188, 1, 0, 0})
};

/// Class /Script/ContextualActionCodeRuntime.FortMovementMode_ExtLogicSwingingRope
/// Size: 0x0038 (0x000158 - 0x000190)
class UFortMovementMode_ExtLogicSwingingRope : public UFortMovementMode_ExtLogicBaseSwinging
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(class UFortInputMappingContext*)           InputMappingContext                                         OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class UInputAction*)                       SwingingAscendAction                                        OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(class UInputAction*)                       SwingingAscendActionRelease                                 OFFSET(get<T>, {0x168, 8, 0, 0})
	DMember(float)                                     MinimumAscendRange                                          OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     AscendMaxSpeed                                              OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     DescendMaxSpeed                                             OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     AscendingSettleInterpSpeed                                  OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(float)                                     AscendingSettleAngleThreshold                               OFFSET(get<float>, {0x180, 4, 0, 0})
};

/// Class /Script/ContextualActionCodeRuntime.FortPlayerAnimInstance_Hijacker
/// Size: 0x0000 (0x000470 - 0x000470)
class UFortPlayerAnimInstance_Hijacker : public UFortBaseLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
};

/// Class /Script/ContextualActionCodeRuntime.FortPlayerAnimInstance_SwingingObject
/// Size: 0x0040 (0x000470 - 0x0004B0)
class UFortPlayerAnimInstance_SwingingObject : public UFortBaseLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	SMember(FVector2D)                                 RelativeVelocity2D                                          OFFSET(getStruct<T>, {0x468, 16, 0, 0})
	SMember(FVector)                                   HandAttachLocation                                          OFFSET(getStruct<T>, {0x478, 24, 0, 0})
	DMember(float)                                     LeftHandIKAlpha                                             OFFSET(get<float>, {0x490, 4, 0, 0})
};

/// Class /Script/ContextualActionCodeRuntime.FortSwingingObject
/// Size: 0x0050 (0x000980 - 0x0009D0)
class AFortSwingingObject : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2512;

public:
	DMember(float)                                     MaxSwingAngle                                               OFFSET(get<float>, {0x980, 4, 0, 0})
	DMember(bool)                                      bUseCharacterSwingMovementMode                              OFFSET(get<bool>, {0x984, 1, 0, 0})
	DMember(bool)                                      bCanAscend                                                  OFFSET(get<bool>, {0x985, 1, 0, 0})
	SMember(FVector)                                   FixedSwingDirection                                         OFFSET(getStruct<T>, {0x988, 24, 0, 0})
	DMember(bool)                                      bUseFixedSwingDirection                                     OFFSET(get<bool>, {0x9A0, 1, 0, 0})
	DMember(float)                                     ForwardInteractOffset                                       OFFSET(get<float>, {0x9A4, 4, 0, 0})
	DMember(float)                                     RightInteractOffset                                         OFFSET(get<float>, {0x9A8, 4, 0, 0})
	DMember(bool)                                      bUseClientTransformSmoothing                                OFFSET(get<bool>, {0x9AC, 1, 0, 0})
	DMember(float)                                     SmoothingWindow                                             OFFSET(get<float>, {0x9B0, 4, 0, 0})
	CMember(class USceneComponent*)                    AttachPoint                                                 OFFSET(get<T>, {0x9B8, 8, 0, 0})


	/// Functions
	// Function /Script/ContextualActionCodeRuntime.FortSwingingObject.OnStartSwing_BP
	// void OnStartSwing_BP(class AFortPlayerPawn* AttachedActor);                                                              // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.FortSwingingObject.OnEndSwing_BP
	// void OnEndSwing_BP(class AFortPlayerPawn* AttachedActor);                                                                // [0x1340978] Event|Protected|BlueprintEvent 
};

/// Class /Script/ContextualActionCodeRuntime.FortSwingingRope
/// Size: 0x0038 (0x0009D0 - 0x000A08)
class AFortSwingingRope : public AFortSwingingObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2568;

public:
	CMember(class UCableComponent*)                    CableComponent                                              OFFSET(get<T>, {0x9D0, 8, 0, 0})
	DMember(float)                                     UnattachedCableGravityScale                                 OFFSET(get<float>, {0x9D8, 4, 0, 0})
	DMember(float)                                     UnattachedSolverIterations                                  OFFSET(get<float>, {0x9DC, 4, 0, 0})
	DMember(float)                                     CableLengthMultiplier                                       OFFSET(get<float>, {0x9E0, 4, 0, 0})
};

/// Class /Script/ContextualActionCodeRuntime.HijackerComponent
/// Size: 0x00E8 (0x0000A8 - 0x000190)
class UHijackerComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FVector)                                   HijackOffset                                                OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FText)                                     StartHijackInteractText                                     OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FText)                                     StartHijackInteractSubText                                  OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FText)                                     CompleteHijackInteractText                                  OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FText)                                     CompleteHijackInteractSubText                               OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	CMember(class UClass*)                             HijackerAnimInstanceClass                                   OFFSET(get<T>, {0x100, 8, 0, 0})
	DMember(float)                                     RequiredInteractionDuration                                 OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     HijackCooldown                                              OFFSET(get<float>, {0x10C, 4, 0, 0})
	SMember(FVector)                                   BaseThrownVelocity                                          OFFSET(getStruct<T>, {0x110, 24, 0, 0})
	DMember(float)                                     AccelerationThresholdForEjectingHijacker                    OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     MinimumSpeedForEjectingHijacker                             OFFSET(get<float>, {0x12C, 4, 0, 0})
	CMember(EHijackingStatus)                          HijackingStatus                                             OFFSET(get<T>, {0x130, 1, 0, 0})


	/// Functions
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.TryHijack
	// bool TryHijack(class AActor* VehicleTarget, FInteractionType& InteractionType);                                          // [0xbc2afb4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.OnStartHijack
	// void OnStartHijack(class AActor* VehicleTarget);                                                                         // [0x99d4930] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.OnCompleteHijack
	// void OnCompleteHijack();                                                                                                 // [0x14b0af0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.HandleOwnerJumpInput
	// void HandleOwnerJumpInput(bool bPressed);                                                                                // [0xbc2aa04] Final|Native|Private 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.EjectHijacker
	// void EjectHijacker(class AActor* DamageCauser, float Damage, FVector EventLocation);                                     // [0xbc2a7a4] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.CancelHijack_Server
	// void CancelHijack_Server();                                                                                              // [0x3145fc4] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.CancelHijack_NetMulticast
	// void CancelHijack_NetMulticast();                                                                                        // [0x3b0eddc] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.BP_OnStartHijack
	// void BP_OnStartHijack();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.BP_OnHijackInterrupted
	// void BP_OnHijackInterrupted();                                                                                           // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.BP_OnHijackCancelled
	// void BP_OnHijackCancelled();                                                                                             // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.BP_OnCompleteHijack
	// void BP_OnCompleteHijack();                                                                                              // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.BP_OnCleanup
	// void BP_OnCleanup();                                                                                                     // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.BP_GetThrownVelocity
	// void BP_GetThrownVelocity(class AActor* DamageCauser, float Damage, FVector& EventLocation, FVector& OutVelocity);       // [0x1340978] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.BP_CanStartHijack
	// void BP_CanStartHijack(bool& OutCanStartHijack);                                                                         // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.BP_CanCompleteHijack
	// void BP_CanCompleteHijack(bool& OutCanCompleteHijack);                                                                   // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/ContextualActionCodeRuntime.Hijack_InteractionOverrideComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UHijack_InteractionOverrideComponent : public UFortVehicleInteractionOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/ContextualActionCodeRuntime.RappellingComponent
/// Size: 0x07F0 (0x0000A8 - 0x000898)
class URappellingComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2200;

public:
	CMember(class UInputAction*)                       RappelInputAction                                           OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UInputAction*)                       RappelEndInputAction                                        OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UInputMappingContext*)               RappelInputMappingContext                                   OFFSET(get<T>, {0xB8, 8, 0, 0})
	DMember(float)                                     ForwardTraceOffset                                          OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     DownwardTraceLength                                         OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     ConnectionTraceOffset                                       OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     MaxDistanceToRappellingEdge                                 OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     InitiateSwingAngleThreshold                                 OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     InitiateSwingSpeedThreshold                                 OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     MinDistanceFromRappelPointToSwing                           OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     RappellingSwingTraceLength                                  OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     RappellingSwingRecoveryForce                                OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     RappellingSwingLaunchSpeed                                  OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(float)                                     RappellingSwingVerticalAttachOffset                         OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     RappellingSwingVerticalDistanceThresholdToSlow              OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     RappellingSwingVerticalMaxSpeedWhileSlowing                 OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     RappellingSwingVerticalMinDistanceToAttach                  OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     RappellingSwingVerticalMaxDistanceToAttach                  OFFSET(get<float>, {0xF8, 4, 0, 0})
	SMember(FGameplayTag)                              RappellingSwingParametersTag                                OFFSET(getStruct<T>, {0xFC, 4, 0, 0})
	SMember(FSwingingControlParams)                    RappellingSwingParameters                                   OFFSET(getStruct<T>, {0x100, 1848, 0, 0})
	CMember(ERappellingState)                          ReplicatedRappellingState                                   OFFSET(get<T>, {0x838, 1, 0, 0})
	SMember(FVector)                                   RappellingEdge                                              OFFSET(getStruct<T>, {0x840, 24, 0, 0})
	SMember(FVector)                                   RappellingNormal                                            OFFSET(getStruct<T>, {0x858, 24, 0, 0})
	CMember(class URappellingSwingMovementControls*)   MovementControls                                            OFFSET(get<T>, {0x870, 8, 0, 0})


	/// Functions
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.TestToggleGravity_Server
	// void TestToggleGravity_Server();                                                                                         // [0xa4001a0] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.TestToggleGravity
	// void TestToggleGravity();                                                                                                // [0xbc2af64] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.StartRappellingSwing_Server
	// void StartRappellingSwing_Server();                                                                                      // [0x133f4e8] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.StartRappelling_Server
	// void StartRappelling_Server(FVector NewGravityDirection, FVector ClientRappellingEdge, FVector ClientRappellingNormal);  // [0xbc2ae64] Net|NetReliableNative|Event|Protected|NetServer|HasDefaults 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.StartRappelling
	// void StartRappelling();                                                                                                  // [0xbc2ae50] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.RappellingCorrectFallingRotation_Client
	// void RappellingCorrectFallingRotation_Client();                                                                          // [0x3b0eddc] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.OnValidTargeting
	// void OnValidTargeting();                                                                                                 // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.OnStartRappelling
	// void OnStartRappelling();                                                                                                // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.OnRep_RappellingState
	// void OnRep_RappellingState();                                                                                            // [0xbc2ae24] Final|Native|Protected 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.OnOwnerMovementModeChanged
	// void OnOwnerMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // [0xbc2ad28] Final|Native|Protected 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.OnInvalidTargeting
	// void OnInvalidTargeting();                                                                                               // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.OnEndRappelling
	// void OnEndRappelling();                                                                                                  // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.OnCapsuleHit
	// void OnCapsuleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0xbc2ab04] Final|Native|Protected|HasOutParms|HasDefaults 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.EndRappellingSwing_Server
	// void EndRappellingSwing_Server();                                                                                        // [0x3145fc4] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.EndRappelling_Server
	// void EndRappelling_Server();                                                                                             // [0x14b0af0] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.EndRappelling
	// void EndRappelling();                                                                                                    // [0xbc2a8ac] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ContextualActionCodeRuntime.RappellingSwingMovementControls
/// Size: 0x0000 (0x000030 - 0x000030)
class URappellingSwingMovementControls : public UFortMovementControls
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/ContextualActionCodeRuntime.SwingingObjectCameraMode
/// Size: 0x0030 (0x001CD0 - 0x001D00)
class USwingingObjectCameraMode : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7424;

public:
	SMember(FVector)                                   MaxSwingAdditionalViewTargetOffset                          OFFSET(getStruct<T>, {0x1CD0, 24, 0, 0})
	DMember(float)                                     MaxSwingFOV                                                 OFFSET(get<float>, {0x1CE8, 4, 0, 0})
};

/// Class /Script/ContextualActionCodeRuntime.SwingingObjectComponent
/// Size: 0x0080 (0x0000A8 - 0x000128)
class USwingingObjectComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(float)                                     JumpHorizontalSpeedBoost                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     JumpVerticalSpeedBoost                                      OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     MinimumAscendRange                                          OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     AscendMaxSpeed                                              OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     DescendMaxSpeed                                             OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     AscendingSettleInterpSpeed                                  OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     AscendingSettleAngleThreshold                               OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     MinimumTimeBetweenRepeatSwings                              OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     MaximumAngleForAutoAttach                                   OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     MinimumSpeedForAutoAttach                                   OFFSET(get<float>, {0xCC, 4, 0, 0})
	CMember(class UClass*)                             SwingingRopeMovementModeExtension                           OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UClass*)                             SwingingObjectMovementModeExtension                         OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(ESwingingState)                            SwingingState                                               OFFSET(get<T>, {0xE0, 1, 0, 0})
	CMember(TWeakObjectPtr<AFortSwingingObject*>)      ReplicatedSwingingObject                                    OFFSET(get<T>, {0xE4, 8, 0, 0})


	/// Functions
	// Function /Script/ContextualActionCodeRuntime.SwingingObjectComponent.OnRep_SwingingObject
	// void OnRep_SwingingObject();                                                                                             // [0xbc2ae3c] Final|Native|Private 
	// Function /Script/ContextualActionCodeRuntime.SwingingObjectComponent.HandleOwnerJumpInput
	// void HandleOwnerJumpInput(bool bPressed);                                                                                // [0xbc2aa84] Final|Native|Private 
	// Function /Script/ContextualActionCodeRuntime.SwingingObjectComponent.GetSwingDeltaAngle
	// void GetSwingDeltaAngle(FRotator& OutSwingRotation, FRotator& OutDeltaRotation);                                         // [0xbc2a924] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualActionCodeRuntime.SwingingObjectComponent.GetAimRotation
	// FRotator GetAimRotation();                                                                                               // [0xbc2a8c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualActionCodeRuntime.SwingingObjectComponent.DetachFromObject_Server
	// void DetachFromObject_Server(bool bJumpExit);                                                                            // [0xb4832cc] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/ContextualActionCodeRuntime.SwingingObjectComponent.BP_OnStartSwing
	// void BP_OnStartSwing();                                                                                                  // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.SwingingObjectComponent.BP_OnEndSwing
	// void BP_OnEndSwing();                                                                                                    // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.SwingingObjectComponent.BP_CanStartSwing
	// void BP_CanStartSwing(class AFortSwingingObject* SwingTarget, bool& bCanStartSwing);                                     // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/ContextualActionCodeRuntime.SwingingObjectComponent.AttachToObject_Server
	// void AttachToObject_Server(class AFortSwingingObject* Object);                                                           // [0x6e87c98] Final|Net|NetReliableNative|Event|Private|NetServer 
};

/// Struct /Script/ContextualActionCodeRuntime.FortMovementMode_SwingingObjectRuntimeData
/// Size: 0x00C8 (0x000018 - 0x0000E0)
class FFortMovementMode_SwingingObjectRuntimeData : public FFortMovementMode_BaseExtRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Struct /Script/ContextualActionCodeRuntime.FortMovementMode_SwingingObjectCreationData
/// Size: 0x0020 (0x000008 - 0x000028)
class FFortMovementMode_SwingingObjectCreationData : public FFortMovementMode_BaseExtCreationData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   AttachLocation                                              OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(TWeakObjectPtr<AFortSwingingObject*>)      TargetSwingingObject                                        OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/ContextualActionCodeRuntime.FortMovementMode_SwingingRopeRuntimeData
/// Size: 0x0028 (0x000018 - 0x000040)
class FFortMovementMode_SwingingRopeRuntimeData : public FFortMovementMode_BaseExtRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/ContextualActionCodeRuntime.FortMovementMode_SwingingRopeCreationData
/// Size: 0x0020 (0x000008 - 0x000028)
class FFortMovementMode_SwingingRopeCreationData : public FFortMovementMode_BaseExtCreationData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   AttachLocation                                              OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(TWeakObjectPtr<AFortSwingingObject*>)      TargetSwingingRope                                          OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/ContextualActionCodeRuntime.FortSwingingObjectClassData
/// Size: 0x0000 (0x000108 - 0x000108)
class FFortSwingingObjectClassData : public FBuildingGameplayActorClassData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Enum /Script/ContextualActionCodeRuntime.EHijackingStatus
/// Size: 0x03
enum class EHijackingStatus : uint8_t
{
	EHijackingStatus__WaitingForTarget                                               = 0,
	EHijackingStatus__AttachedToVehicle                                              = 1,
	EHijackingStatus__EHijackingStatus_MAX                                           = 2
};

/// Enum /Script/ContextualActionCodeRuntime.ERappellingState
/// Size: 0x05
enum class ERappellingState : uint8_t
{
	ERappellingState__Targeting                                                      = 0,
	ERappellingState__ConnectedAndWaiting                                            = 1,
	ERappellingState__Rappelling                                                     = 2,
	ERappellingState__RappellingSwing                                                = 3,
	ERappellingState__ERappellingState_MAX                                           = 4
};

/// Enum /Script/ContextualActionCodeRuntime.ESwingingState
/// Size: 0x03
enum class ESwingingState : uint8_t
{
	ESwingingState__Unattached                                                       = 0,
	ESwingingState__Attached                                                         = 1,
	ESwingingState__ESwingingState_MAX                                               = 2
};

