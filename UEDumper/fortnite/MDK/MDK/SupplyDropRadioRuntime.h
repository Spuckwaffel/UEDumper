
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags

/// Class /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio
/// Size: 0x01E8 (0x000980 - 0x000B68)
class ABuildingGameplayActorSupplyDropRadio : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2920;

public:
	DMember(float)                                     MinimumMovingSpeedThresholdSq                               OFFSET(get<float>, {0x980, 4, 0, 0})
	DMember(float)                                     BalloonClosedGroundedFallSpeed                              OFFSET(get<float>, {0x984, 4, 0, 0})
	DMember(bool)                                      bAutoOpen                                                   OFFSET(get<bool>, {0x988, 1, 0, 0})
	SMember(FGameplayTagContainer)                     ForceOpenActorTags                                          OFFSET(getStruct<T>, {0x990, 32, 0, 0})
	SMember(FGameplayTagQuery)                         IgnoreMovingCollisionWithActorTagQuery                      OFFSET(getStruct<T>, {0x9B0, 72, 0, 0})
	DMember(float)                                     InterpRateToBalloonOpenedFallSpeed                          OFFSET(get<float>, {0x9F8, 4, 0, 0})
	DMember(float)                                     DistanceFromOriginalSpawnLocForBalloonOpen                  OFFSET(get<float>, {0x9FC, 4, 0, 0})
	CMember(ESupplyDropRadioBalloonState)              BalloonState                                                OFFSET(get<T>, {0xA00, 1, 0, 0})
	SMember(FHitResult)                                WaterHitResult                                              OFFSET(getStruct<T>, {0xA08, 232, 0, 0})
	DMember(bool)                                      bMoving                                                     OFFSET(get<bool>, {0xAF0, 1, 0, 0})
	DMember(float)                                     FallSpeed                                                   OFFSET(get<float>, {0xAF4, 4, 0, 0})
	DMember(float)                                     BalloonOpenedFallSpeed                                      OFFSET(get<float>, {0xAF8, 4, 0, 0})
	DMember(float)                                     GravityMultiplier                                           OFFSET(get<float>, {0xAFC, 4, 0, 0})
	SMember(FVector)                                   ServerLocation                                              OFFSET(getStruct<T>, {0xB00, 24, 0, 0})
	DMember(float)                                     ClientLocationCorrectionMaxDistSqWhenBalloonDisabled        OFFSET(get<float>, {0xB18, 4, 0, 0})
	DMember(float)                                     ClientLocationCorrectionMaxDistSqWhenBalloonEnabled         OFFSET(get<float>, {0xB1C, 4, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0xB20, 24, 0, 0})
	SMember(FVector)                                   PreviousFrameVelocity                                       OFFSET(getStruct<T>, {0xB38, 24, 0, 0})
	SMember(FVector)                                   OriginalServerSpawnLocation                                 OFFSET(getStruct<T>, {0xB50, 24, 0, 0})


	/// Functions
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.UpdateGroundInfo
	// void UpdateGroundInfo(bool bValidBlock, FHitResult& MovementHitResult);                                                  // [0x186becc] BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.SetGravityMultiplier
	// void SetGravityMultiplier(float InGravityMultiplier);                                                                    // [0x67dbeb4] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.SetBalloonState
	// void SetBalloonState(ESupplyDropRadioBalloonState InBalloonState);                                                       // [0x8684bd4] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OpenSupplyDrop
	// void OpenSupplyDrop();                                                                                                   // [0x186becc] BlueprintAuthorityOnly|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OnRep_DistanceFromOriginalSpawnLocForBalloonOpen
	// void OnRep_DistanceFromOriginalSpawnLocForBalloonOpen();                                                                 // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OnRep_BalloonState
	// void OnRep_BalloonState();                                                                                               // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.IsMoving
	// bool IsMoving();                                                                                                         // [0xb7e4aac] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.IsGrounded
	// bool IsGrounded();                                                                                                       // [0x186becc] Event|Protected|BlueprintEvent|Const 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.HandleMoveIgnoredActorEndPlay
	// void HandleMoveIgnoredActorEndPlay(class AActor* EndPlayActor, TEnumAsByte<EEndPlayReason> Reason);                      // [0xb7e496c] Final|Native|Protected 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetRootCollisionComponent
	// class UBoxComponent* GetRootCollisionComponent();                                                                        // [0x186becc] Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetHighestAttachParent
	// class AActor* GetHighestAttachParent(class AActor* InActor);                                                             // [0xb7e4898] Final|Native|Protected|BlueprintCallable|Const 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetGravityZ
	// float GetGravityZ();                                                                                                     // [0xb7e4870] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetBalloonState
	// ESupplyDropRadioBalloonState GetBalloonState();                                                                          // [0xb7e4858] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SupplyDropRadioRuntime.FortSupplyDropRadioAttachActorComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFortSupplyDropRadioAttachActorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/SupplyDropRadioRuntime.FortSupplyDropRadioAttachActorComponent.SetOwningActorNetCullDistance
	// void SetOwningActorNetCullDistance(float DistanceSquared);                                                               // [0xb7e4c04] Final|Native|Protected|BlueprintCallable|Const 
};

/// Class /Script/SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortSupplyDropRadioBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary.StopCurrentConversation
	// void StopCurrentConversation(class AFortPlayerControllerGameplay* PlayerController);                                     // [0xb7e4cc8] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary.SetMoveShouldAbortConversation
	// void SetMoveShouldAbortConversation(class AFortPlayerControllerGameplay* PlayerController, bool bNewMoveAbortConversation); // [0xb7e4ac4] Final|BlueprintCosmetic|Native|Static|Private|BlueprintCallable 
};

/// Enum /Script/SupplyDropRadioRuntime.ESupplyDropRadioBalloonState
/// Size: 0x05
enum class ESupplyDropRadioBalloonState : uint8_t
{
	ESupplyDropRadioBalloonState__Invalid                                            = 0,
	ESupplyDropRadioBalloonState__Closed                                             = 1,
	ESupplyDropRadioBalloonState__Opened                                             = 2,
	ESupplyDropRadioBalloonState__Destroyed                                          = 3,
	ESupplyDropRadioBalloonState__ESupplyDropRadioBalloonState_MAX                   = 4
};

