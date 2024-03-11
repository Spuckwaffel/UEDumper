
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Script/FallTeleportationRuntime.FortFallTeleportSpawnerComponent
/// Size: 0x00C8 (0x0000A0 - 0x000168)
class UFortFallTeleportSpawnerComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(32,13739) /* TWeakObjectPtr<UClass*> */ __um(PlayerPawnReceiverClass);                           // 0x00A0   (0x0020)  
	class UClass*                                      ComponentToAddClass;                                        // 0x00C0   (0x0008)  
	FScalableFloat                                     TeleportEnabled;                                            // 0x00C8   (0x0028)  
	FScalableFloat                                     RemoveComponentRequestTimeOffset;                           // 0x00F0   (0x0028)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0118   (0x0050)  MISSED


	/// Functions
	// Function /Script/FallTeleportationRuntime.FortFallTeleportSpawnerComponent.HandleWarmupCountdownEndTimeUpdated
	// void HandleWarmupCountdownEndTimeUpdated(float NewEndTime);                                                           // [0xa925378] Final|Native|Protected 
	// Function /Script/FallTeleportationRuntime.FortFallTeleportSpawnerComponent.HandleGamePhaseChanged
	// void HandleGamePhaseChanged(FFortGamePhaseUpdatedEvent& Event);                                                       // [0xa9252ec] Final|Native|Protected|HasOutParms 
};

/// Class /Script/FallTeleportationRuntime.FortFallTeleportCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortFallTeleportCheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/FallTeleportationRuntime.FortFallTeleportCheatManager.EnableFallTeleportationIndefinitely
	// void EnableFallTeleportationIndefinitely();                                                                           // [0x36203b0] Final|Exec|Native|Private 
};

/// Class /Script/FallTeleportationRuntime.FortFallTeleportComponentBase
/// Size: 0x0150 (0x0000A0 - 0x0001F0)
class UFortFallTeleportComponentBase : public UActorComponent
{ 
public:
	FScalableFloat                                     TeleportEnabled;                                            // 0x00A0   (0x0028)  
	FScalableFloat                                     ContinuousTeleportUpdateEnabled;                            // 0x00C8   (0x0028)  
	FScalableFloat                                     ForceTeleportZHeight;                                       // 0x00F0   (0x0028)  
	FScalableFloat                                     SphereTraceRadius;                                          // 0x0118   (0x0028)  
	float                                              WalkingLocationUpdateRate;                                  // 0x0140   (0x0004)  
	float                                              ZHeightThresholdCheckRate;                                  // 0x0144   (0x0004)  
	float                                              TeleportZModifier;                                          // 0x0148   (0x0004)  
	float                                              DistanceFromPawnToTraceLocation;                            // 0x014C   (0x0004)  
	TArray<class UClass*>                              TeleportOnBlocklist;                                        // 0x0150   (0x0010)  
	FName                                              NoTeleportActorTag;                                         // 0x0160   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0164   (0x0004)  MISSED
	FVector                                            SafeManualLocation;                                         // 0x0168   (0x0018)  
	class UClass*                                      TeleportGEClass;                                            // 0x0180   (0x0008)  
	FVector                                            TeleportLocation;                                           // 0x0188   (0x0018)  
	FVector                                            FallbackLocation;                                           // 0x01A0   (0x0018)  
	bool                                               bValidFallbackLocation;                                     // 0x01B8   (0x0001)  
	bool                                               bTeleporting;                                               // 0x01B9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x01BA   (0x0002)  MISSED
	int32_t                                            TeleportLimitBeforeFail;                                    // 0x01BC   (0x0004)  
	int32_t                                            TeleportCount;                                              // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x01C4   (0x0004)  MISSED
	class AFortPlayerPawnAthena*                       OwningPawn;                                                 // 0x01C8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x01D0   (0x0020)  MISSED


	/// Functions
	// Function /Script/FallTeleportationRuntime.FortFallTeleportComponentBase.UpdateLastGroundLocation
	// void UpdateLastGroundLocation(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0xa92557c] Final|Native|Protected 
	// Function /Script/FallTeleportationRuntime.FortFallTeleportComponentBase.IsValidActorToTeleportOn
	// bool IsValidActorToTeleportOn(class AActor* ActorToTeleportOn);                                                       // [0xa9254c8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FallTeleportationRuntime.FortFallTeleportComponentBase.IsTeleportLocationValid
	// bool IsTeleportLocationValid(FVector& LocationToTest);                                                                // [0xa9253f4] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

