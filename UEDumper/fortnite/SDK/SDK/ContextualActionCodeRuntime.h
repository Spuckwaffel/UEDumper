
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CableComponent
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ModularGameplay

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

/// Class /Script/ContextualActionCodeRuntime.FortMovementMode_ExtLogicBaseSwinging
/// Size: 0x0038 (0x000120 - 0x000158)
class UFortMovementMode_ExtLogicBaseSwinging : public UFortMovementMode_BaseExtLogic
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0120   (0x0008)  MISSED
	class UClass*                                      SwingingAnimationLayer;                                     // 0x0128   (0x0008)  
	float                                              GravitationalAcceleration;                                  // 0x0130   (0x0004)  
	float                                              MinimumInitialSpeed;                                        // 0x0134   (0x0004)  
	float                                              AccelerationMultiplier;                                     // 0x0138   (0x0004)  
	float                                              DefaultAcceleration;                                        // 0x013C   (0x0004)  
	float                                              NonBrakingFriction;                                         // 0x0140   (0x0004)  
	float                                              BrakingFriction;                                            // 0x0144   (0x0004)  
	float                                              BrakingDeceleration;                                        // 0x0148   (0x0004)  
	float                                              MaxSpeed;                                                   // 0x014C   (0x0004)  
	FGameplayTag                                       SwingingTag;                                                // 0x0150   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0154   (0x0004)  MISSED


	/// Functions
	// Function /Script/ContextualActionCodeRuntime.FortMovementMode_ExtLogicBaseSwinging.OnOwnerDBNO
	// void OnOwnerDBNO();                                                                                                   // [0xa8d3d20] Final|Native|Protected 
};

/// Class /Script/ContextualActionCodeRuntime.FortMovementMode_ExtLogicSwingingObject
/// Size: 0x0038 (0x000158 - 0x000190)
class UFortMovementMode_ExtLogicSwingingObject : public UFortMovementMode_ExtLogicBaseSwinging
{ 
public:
	FVector                                            AttachOffset;                                               // 0x0158   (0x0018)  
	FVector                                            HandIKOffset;                                               // 0x0170   (0x0018)  
	bool                                               bAlignCharacterToObject;                                    // 0x0188   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0189   (0x0007)  MISSED
};

/// Class /Script/ContextualActionCodeRuntime.FortMovementMode_ExtLogicSwingingRope
/// Size: 0x0038 (0x000158 - 0x000190)
class UFortMovementMode_ExtLogicSwingingRope : public UFortMovementMode_ExtLogicBaseSwinging
{ 
public:
	class UFortInputMappingContext*                    InputMappingContext;                                        // 0x0158   (0x0008)  
	class UInputAction*                                SwingingAscendAction;                                       // 0x0160   (0x0008)  
	class UInputAction*                                SwingingAscendActionRelease;                                // 0x0168   (0x0008)  
	float                                              MinimumAscendRange;                                         // 0x0170   (0x0004)  
	float                                              AscendMaxSpeed;                                             // 0x0174   (0x0004)  
	float                                              DescendMaxSpeed;                                            // 0x0178   (0x0004)  
	float                                              AscendingSettleInterpSpeed;                                 // 0x017C   (0x0004)  
	float                                              AscendingSettleAngleThreshold;                              // 0x0180   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0184   (0x000C)  MISSED
};

/// Class /Script/ContextualActionCodeRuntime.FortPlayerAnimInstance_Hijacker
/// Size: 0x0000 (0x000470 - 0x000470)
class UFortPlayerAnimInstance_Hijacker : public UFortBaseLayerAnimInstance
{ 
public:
};

/// Class /Script/ContextualActionCodeRuntime.FortPlayerAnimInstance_SwingingObject
/// Size: 0x0040 (0x000470 - 0x0004B0)
class UFortPlayerAnimInstance_SwingingObject : public UFortBaseLayerAnimInstance
{ 
public:
	FVector2D                                          RelativeVelocity2D;                                         // 0x0468   (0x0010)  
	FVector                                            HandAttachLocation;                                         // 0x0478   (0x0018)  
	float                                              LeftHandIKAlpha;                                            // 0x0490   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x0494   (0x001C)  MISSED
};

/// Class /Script/ContextualActionCodeRuntime.FortSwingingObject
/// Size: 0x0050 (0x000980 - 0x0009D0)
class AFortSwingingObject : public ABuildingGameplayActor
{ 
public:
	float                                              MaxSwingAngle;                                              // 0x0980   (0x0004)  
	bool                                               bUseCharacterSwingMovementMode;                             // 0x0984   (0x0001)  
	bool                                               bCanAscend;                                                 // 0x0985   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0986   (0x0002)  MISSED
	FVector                                            FixedSwingDirection;                                        // 0x0988   (0x0018)  
	bool                                               bUseFixedSwingDirection;                                    // 0x09A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x09A1   (0x0003)  MISSED
	float                                              ForwardInteractOffset;                                      // 0x09A4   (0x0004)  
	float                                              RightInteractOffset;                                        // 0x09A8   (0x0004)  
	bool                                               bUseClientTransformSmoothing;                               // 0x09AC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x09AD   (0x0003)  MISSED
	float                                              SmoothingWindow;                                            // 0x09B0   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x09B4   (0x0004)  MISSED
	class USceneComponent*                             AttachPoint;                                                // 0x09B8   (0x0008)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x09C0   (0x0010)  MISSED


	/// Functions
	// Function /Script/ContextualActionCodeRuntime.FortSwingingObject.OnStartSwing_BP
	// void OnStartSwing_BP(class AFortPlayerPawn* AttachedActor);                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.FortSwingingObject.OnEndSwing_BP
	// void OnEndSwing_BP(class AFortPlayerPawn* AttachedActor);                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/ContextualActionCodeRuntime.FortSwingingRope
/// Size: 0x0038 (0x0009D0 - 0x000A08)
class AFortSwingingRope : public AFortSwingingObject
{ 
public:
	class UCableComponent*                             CableComponent;                                             // 0x09D0   (0x0008)  
	float                                              UnattachedCableGravityScale;                                // 0x09D8   (0x0004)  
	float                                              UnattachedSolverIterations;                                 // 0x09DC   (0x0004)  
	float                                              CableLengthMultiplier;                                      // 0x09E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x09E4   (0x0024)  MISSED
};

/// Class /Script/ContextualActionCodeRuntime.HijackerComponent
/// Size: 0x0108 (0x0000A8 - 0x0001B0)
class UHijackerComponent : public UFortPawnComponent
{ 
public:
	FVector                                            HijackOffset;                                               // 0x00A8   (0x0018)  
	SDK_UNDEFINED(24,12481) /* FText */                __um(StartHijackInteractText);                              // 0x00C0   (0x0018)  
	SDK_UNDEFINED(24,12482) /* FText */                __um(StartHijackInteractSubText);                           // 0x00D8   (0x0018)  
	SDK_UNDEFINED(24,12483) /* FText */                __um(CompleteHijackInteractText);                           // 0x00F0   (0x0018)  
	SDK_UNDEFINED(24,12484) /* FText */                __um(CompleteHijackInteractSubText);                        // 0x0108   (0x0018)  
	class UClass*                                      HijackerAnimInstanceClass;                                  // 0x0120   (0x0008)  
	float                                              RequiredInteractionDuration;                                // 0x0128   (0x0004)  
	float                                              HijackCooldown;                                             // 0x012C   (0x0004)  
	FVector                                            BaseThrownVelocity;                                         // 0x0130   (0x0018)  
	float                                              AccelerationThresholdForEjectingHijacker;                   // 0x0148   (0x0004)  
	float                                              MinimumSpeedForEjectingHijacker;                            // 0x014C   (0x0004)  
	EHijackingStatus                                   HijackingStatus;                                            // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5F];                                      // 0x0151   (0x005F)  MISSED


	/// Functions
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.TryHijack
	// bool TryHijack(class AActor* VehicleTarget, FInteractionType& InteractionType);                                       // [0xa8d41a8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.OnStartHijack
	// void OnStartHijack(class AActor* VehicleTarget);                                                                      // [0x8efa9b8] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.OnCompleteHijack
	// void OnCompleteHijack();                                                                                              // [0x18fda34] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.HandleOwnerJumpInput
	// void HandleOwnerJumpInput(bool bPressed);                                                                             // [0xa8d390c] Final|Native|Private 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.EjectHijacker
	// void EjectHijacker(class AActor* DamageCauser, float Damage, FVector EventLocation);                                  // [0xa8d3614] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.CancelHijack_Server
	// void CancelHijack_Server();                                                                                           // [0x30fd094] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.CancelHijack_NetMulticast
	// void CancelHijack_NetMulticast();                                                                                     // [0x6cb2178] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.BP_OnStartHijack
	// void BP_OnStartHijack();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.BP_OnHijackInterrupted
	// void BP_OnHijackInterrupted();                                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.BP_OnHijackCancelled
	// void BP_OnHijackCancelled();                                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.BP_OnCompleteHijack
	// void BP_OnCompleteHijack();                                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.BP_OnCleanup
	// void BP_OnCleanup();                                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.BP_GetThrownVelocity
	// void BP_GetThrownVelocity(class AActor* DamageCauser, float Damage, FVector& EventLocation, FVector& OutVelocity);    // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.BP_CanStartHijack
	// void BP_CanStartHijack(bool& OutCanStartHijack);                                                                      // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/ContextualActionCodeRuntime.HijackerComponent.BP_CanCompleteHijack
	// void BP_CanCompleteHijack(bool& OutCanCompleteHijack);                                                                // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/ContextualActionCodeRuntime.Hijack_InteractionOverrideComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UHijack_InteractionOverrideComponent : public UFortVehicleInteractionOverrideComponent
{ 
public:
};

/// Class /Script/ContextualActionCodeRuntime.RappellingComponent
/// Size: 0x07F0 (0x0000A8 - 0x000898)
class URappellingComponent : public UFortPawnComponent
{ 
public:
	class UInputAction*                                RappelInputAction;                                          // 0x00A8   (0x0008)  
	class UInputAction*                                RappelEndInputAction;                                       // 0x00B0   (0x0008)  
	class UInputMappingContext*                        RappelInputMappingContext;                                  // 0x00B8   (0x0008)  
	float                                              ForwardTraceOffset;                                         // 0x00C0   (0x0004)  
	float                                              DownwardTraceLength;                                        // 0x00C4   (0x0004)  
	float                                              ConnectionTraceOffset;                                      // 0x00C8   (0x0004)  
	float                                              MaxDistanceToRappellingEdge;                                // 0x00CC   (0x0004)  
	float                                              InitiateSwingAngleThreshold;                                // 0x00D0   (0x0004)  
	float                                              InitiateSwingSpeedThreshold;                                // 0x00D4   (0x0004)  
	float                                              MinDistanceFromRappelPointToSwing;                          // 0x00D8   (0x0004)  
	float                                              RappellingSwingTraceLength;                                 // 0x00DC   (0x0004)  
	float                                              RappellingSwingRecoveryForce;                               // 0x00E0   (0x0004)  
	float                                              RappellingSwingLaunchSpeed;                                 // 0x00E4   (0x0004)  
	float                                              RappellingSwingVerticalAttachOffset;                        // 0x00E8   (0x0004)  
	float                                              RappellingSwingVerticalDistanceThresholdToSlow;             // 0x00EC   (0x0004)  
	float                                              RappellingSwingVerticalMaxSpeedWhileSlowing;                // 0x00F0   (0x0004)  
	float                                              RappellingSwingVerticalMinDistanceToAttach;                 // 0x00F4   (0x0004)  
	float                                              RappellingSwingVerticalMaxDistanceToAttach;                 // 0x00F8   (0x0004)  
	FGameplayTag                                       RappellingSwingParametersTag;                               // 0x00FC   (0x0004)  
	FSwingingControlParams                             RappellingSwingParameters;                                  // 0x0100   (0x0738)  
	ERappellingState                                   ReplicatedRappellingState;                                  // 0x0838   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0839   (0x0007)  MISSED
	FVector                                            RappellingEdge;                                             // 0x0840   (0x0018)  
	FVector                                            RappellingNormal;                                           // 0x0858   (0x0018)  
	class URappellingSwingMovementControls*            MovementControls;                                           // 0x0870   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0878   (0x0020)  MISSED


	/// Functions
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.TestToggleGravity_Server
	// void TestToggleGravity_Server();                                                                                      // [0x2dda5c8] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.TestToggleGravity
	// void TestToggleGravity();                                                                                             // [0xa8d4158] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.StartRappellingSwing_Server
	// void StartRappellingSwing_Server();                                                                                   // [0x248ecf4] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.StartRappelling_Server
	// void StartRappelling_Server(FVector NewGravityDirection, FVector ClientRappellingEdge, FVector ClientRappellingNormal); // [0xa8d3e70] Net|NetReliableNative|Event|Protected|NetServer|HasDefaults 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.StartRappelling
	// void StartRappelling();                                                                                               // [0xa8d3e5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.RappellingCorrectFallingRotation_Client
	// void RappellingCorrectFallingRotation_Client();                                                                       // [0x6cb2178] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.OnValidTargeting
	// void OnValidTargeting();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.OnStartRappelling
	// void OnStartRappelling();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.OnRep_RappellingState
	// void OnRep_RappellingState();                                                                                         // [0xa8d3e30] Final|Native|Protected 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.OnOwnerMovementModeChanged
	// void OnOwnerMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // [0xa8d3d34] Final|Native|Protected 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.OnInvalidTargeting
	// void OnInvalidTargeting();                                                                                            // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.OnEndRappelling
	// void OnEndRappelling();                                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.OnCapsuleHit
	// void OnCapsuleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0xa8d3a0c] Final|Native|Protected|HasOutParms|HasDefaults 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.EndRappellingSwing_Server
	// void EndRappellingSwing_Server();                                                                                     // [0x30fd094] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.EndRappelling_Server
	// void EndRappelling_Server();                                                                                          // [0x18fda34] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/ContextualActionCodeRuntime.RappellingComponent.EndRappelling
	// void EndRappelling();                                                                                                 // [0xa8d37b4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ContextualActionCodeRuntime.RappellingSwingMovementControls
/// Size: 0x0000 (0x000030 - 0x000030)
class URappellingSwingMovementControls : public UFortMovementControls
{ 
public:
};

/// Class /Script/ContextualActionCodeRuntime.SwingingObjectCameraMode
/// Size: 0x0030 (0x001CA0 - 0x001CD0)
class USwingingObjectCameraMode : public UFortCameraMode_ThirdPerson
{ 
public:
	FVector                                            MaxSwingAdditionalViewTargetOffset;                         // 0x1CA0   (0x0018)  
	float                                              MaxSwingFOV;                                                // 0x1CB8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x1CBC   (0x0014)  MISSED
};

/// Class /Script/ContextualActionCodeRuntime.SwingingObjectComponent
/// Size: 0x0080 (0x0000A8 - 0x000128)
class USwingingObjectComponent : public UFortPawnComponent
{ 
public:
	float                                              JumpHorizontalSpeedBoost;                                   // 0x00A8   (0x0004)  
	float                                              JumpVerticalSpeedBoost;                                     // 0x00AC   (0x0004)  
	float                                              MinimumAscendRange;                                         // 0x00B0   (0x0004)  
	float                                              AscendMaxSpeed;                                             // 0x00B4   (0x0004)  
	float                                              DescendMaxSpeed;                                            // 0x00B8   (0x0004)  
	float                                              AscendingSettleInterpSpeed;                                 // 0x00BC   (0x0004)  
	float                                              AscendingSettleAngleThreshold;                              // 0x00C0   (0x0004)  
	float                                              MinimumTimeBetweenRepeatSwings;                             // 0x00C4   (0x0004)  
	float                                              MaximumAngleForAutoAttach;                                  // 0x00C8   (0x0004)  
	float                                              MinimumSpeedForAutoAttach;                                  // 0x00CC   (0x0004)  
	class UClass*                                      SwingingRopeMovementModeExtension;                          // 0x00D0   (0x0008)  
	class UClass*                                      SwingingObjectMovementModeExtension;                        // 0x00D8   (0x0008)  
	ESwingingState                                     SwingingState;                                              // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E1   (0x0003)  MISSED
	SDK_UNDEFINED(8,12485) /* TWeakObjectPtr<AFortSwingingObject*> */ __um(ReplicatedSwingingObject);              // 0x00E4   (0x0008)  
	unsigned char                                      UnknownData01_6[0x3C];                                      // 0x00EC   (0x003C)  MISSED


	/// Functions
	// Function /Script/ContextualActionCodeRuntime.SwingingObjectComponent.OnRep_SwingingObject
	// void OnRep_SwingingObject();                                                                                          // [0xa8d3e48] Final|Native|Private 
	// Function /Script/ContextualActionCodeRuntime.SwingingObjectComponent.HandleOwnerJumpInput
	// void HandleOwnerJumpInput(bool bPressed);                                                                             // [0xa8d398c] Final|Native|Private 
	// Function /Script/ContextualActionCodeRuntime.SwingingObjectComponent.GetSwingDeltaAngle
	// void GetSwingDeltaAngle(FRotator& OutSwingRotation, FRotator& OutDeltaRotation);                                      // [0xa8d382c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualActionCodeRuntime.SwingingObjectComponent.GetAimRotation
	// FRotator GetAimRotation();                                                                                            // [0xa8d37c8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualActionCodeRuntime.SwingingObjectComponent.DetachFromObject_Server
	// void DetachFromObject_Server(bool bJumpExit);                                                                         // [0x81fc848] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/ContextualActionCodeRuntime.SwingingObjectComponent.BP_OnStartSwing
	// void BP_OnStartSwing();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.SwingingObjectComponent.BP_OnEndSwing
	// void BP_OnEndSwing();                                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ContextualActionCodeRuntime.SwingingObjectComponent.BP_CanStartSwing
	// void BP_CanStartSwing(class AFortSwingingObject* SwingTarget, bool& bCanStartSwing);                                  // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/ContextualActionCodeRuntime.SwingingObjectComponent.AttachToObject_Server
	// void AttachToObject_Server(class AFortSwingingObject* Object);                                                        // [0x6cb20f4] Final|Net|NetReliableNative|Event|Private|NetServer 
};

/// Struct /Script/ContextualActionCodeRuntime.FortMovementMode_SwingingObjectRuntimeData
/// Size: 0x00C0 (0x000010 - 0x0000D0)
struct FFortMovementMode_SwingingObjectRuntimeData : FFortMovementMode_BaseExtRuntimeData
{ 
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x0010   (0x00C0)  MISSED
};

/// Struct /Script/ContextualActionCodeRuntime.FortMovementMode_SwingingObjectCreationData
/// Size: 0x0020 (0x000008 - 0x000028)
struct FFortMovementMode_SwingingObjectCreationData : FFortMovementMode_BaseExtCreationData
{ 
	FVector                                            AttachLocation;                                             // 0x0008   (0x0018)  
	SDK_UNDEFINED(8,12486) /* TWeakObjectPtr<AFortSwingingObject*> */ __um(TargetSwingingObject);                  // 0x0020   (0x0008)  
};

/// Struct /Script/ContextualActionCodeRuntime.FortMovementMode_SwingingRopeRuntimeData
/// Size: 0x0028 (0x000010 - 0x000038)
struct FFortMovementMode_SwingingRopeRuntimeData : FFortMovementMode_BaseExtRuntimeData
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0010   (0x0028)  MISSED
};

/// Struct /Script/ContextualActionCodeRuntime.FortMovementMode_SwingingRopeCreationData
/// Size: 0x0020 (0x000008 - 0x000028)
struct FFortMovementMode_SwingingRopeCreationData : FFortMovementMode_BaseExtCreationData
{ 
	FVector                                            AttachLocation;                                             // 0x0008   (0x0018)  
	SDK_UNDEFINED(8,12487) /* TWeakObjectPtr<AFortSwingingObject*> */ __um(TargetSwingingRope);                    // 0x0020   (0x0008)  
};

/// Struct /Script/ContextualActionCodeRuntime.FortSwingingObjectClassData
/// Size: 0x0000 (0x000128 - 0x000128)
struct FFortSwingingObjectClassData : FBuildingGameplayActorClassData
{ 
};

