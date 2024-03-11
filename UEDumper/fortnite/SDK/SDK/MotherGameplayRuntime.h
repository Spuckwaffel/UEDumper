
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
/// dependency: GameplayTags

/// Class /Script/MotherGameplayRuntime.GravityGunTargetTrackingComponent
/// Size: 0x01C8 (0x0000A0 - 0x000268)
class UGravityGunTargetTrackingComponent : public UActorComponent
{ 
public:
	FScalableFloat                                     AllowLargeObjects;                                          // 0x00A0   (0x0028)  
	FScalableFloat                                     AllowMultipleGrabbers;                                      // 0x00C8   (0x0028)  
	FScalableFloat                                     AllowVehicles;                                              // 0x00F0   (0x0028)  
	FScalableFloat                                     AllowPickups;                                               // 0x0118   (0x0028)  
	FScalableFloat                                     AllowProjectiles;                                           // 0x0140   (0x0028)  
	FScalableFloat                                     AllowForay;                                                 // 0x0168   (0x0028)  
	FScalableFloat                                     AllowWhileInVehicle;                                        // 0x0190   (0x0028)  
	FName                                              GrabbedByGravityGunTagName;                                 // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01BC   (0x0004)  MISSED
	FGameplayTagContainer                              InvalidTargetTags;                                          // 0x01C0   (0x0020)  
	FGameplayTagContainer                              TargetIsPlayerTag;                                          // 0x01E0   (0x0020)  
	FGameplayTagContainer                              TargetIsAlreadyGrabbedTag;                                  // 0x0200   (0x0020)  
	FGameplayTagContainer                              TargetIsOwnVehicleTag;                                      // 0x0220   (0x0020)  
	SDK_UNDEFINED(16,15074) /* FMulticastInlineDelegate */ __um(FoundTargetDelegate);                              // 0x0240   (0x0010)  
	SDK_UNDEFINED(16,15075) /* FMulticastInlineDelegate */ __um(DeactivateReticleDelegate);                        // 0x0250   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0260   (0x0008)  MISSED


	/// Functions
	// Function /Script/MotherGameplayRuntime.GravityGunTargetTrackingComponent.IsValidTarget
	// bool IsValidTarget(class AActor* OwningPlayer, class AActor* PotentialTarget, FGameplayTagContainer& ReasonForFailure); // [0xab6eed8] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/MotherGameplayRuntime.GravityGunTargetTrackingComponent.FindTargetProjectile
	// bool FindTargetProjectile(class AActor* OwningPlayer, FVector& TraceStart, FVector& TraceEnd, float TargetingRadius); // [0xab6e8dc] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MotherGameplayRuntime.GravityGunTargetTrackingComponent.FindTargetActor
	// void FindTargetActor(class AActor* OwningPlayer, FVector& TraceStart, FVector& TraceEnd);                             // [0xab6e740] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/MotherGameplayRuntime.FortCabbageIglooVehicle
/// Size: 0x0000 (0x002B00 - 0x002B00)
class AFortCabbageIglooVehicle : public AFortOctopusVehicle
{ 
public:
};

/// Class /Script/MotherGameplayRuntime.FortBaseAnimInstance_CageSaddle
/// Size: 0x0170 (0x000460 - 0x0005D0)
class UFortBaseAnimInstance_CageSaddle : public UFortBaseAnimInstance
{ 
public:
	class AFortSphericalVehicle*                       AsFortSphericalVehicle;                                     // 0x0458   (0x0008)  
	bool                                               bIsOnGround;                                                // 0x0460   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0461   (0x0003)  MISSED
	float                                              RemappedPitch;                                              // 0x0464   (0x0004)  
	float                                              CurrentRoll;                                                // 0x0468   (0x0004)  
	float                                              LockedRoll;                                                 // 0x046C   (0x0004)  
	bool                                               bHeadShouldBend;                                            // 0x0470   (0x0001)  
	bool                                               bFootShouldBend;                                            // 0x0471   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0472   (0x0006)  MISSED
	FVector                                            BodyGroundOffset;                                           // 0x0478   (0x0018)  
	FVector2D                                          MinClampPitchInRange;                                       // 0x0490   (0x0010)  
	FVector2D                                          MinClampPitchOutRange;                                      // 0x04A0   (0x0010)  
	FVector2D                                          MaxClampPitchInRange;                                       // 0x04B0   (0x0010)  
	FVector2D                                          MaxClampPitchOutRange;                                      // 0x04C0   (0x0010)  
	float                                              HeadAlphaInterpSpeed;                                       // 0x04D0   (0x0004)  
	unsigned char                                      UnknownData02_6[0xFC];                                      // 0x04D4   (0x00FC)  MISSED
};

/// Struct /Script/MotherGameplayRuntime.GoopAudioMapRangeClamped
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGoopAudioMapRangeClamped
{ 
	FVector2D                                          InRange;                                                    // 0x0000   (0x0010)  
	FVector2D                                          OutRange;                                                   // 0x0010   (0x0010)  
};

/// Class /Script/MotherGameplayRuntime.FortGameplayCueNotifyLoop_Goop
/// Size: 0x0040 (0x0009B0 - 0x0009F0)
class AFortGameplayCueNotifyLoop_Goop : public AFortGameplayCueNotify_Loop
{ 
public:
	FName                                              SpeedParamName;                                             // 0x09B0   (0x0004)  
	FName                                              IsFallingParamName;                                         // 0x09B4   (0x0004)  
	FGoopAudioMapRangeClamped                          SpeedMapRangeClamped;                                       // 0x09B8   (0x0020)  
	float                                              InterpSpeed;                                                // 0x09D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x09DC   (0x0004)  MISSED
	class UAudioComponent*                             LoopingAudioComponent;                                      // 0x09E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x09E8   (0x0008)  MISSED
};

/// Class /Script/MotherGameplayRuntime.PropGunFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPropGunFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropPreviewPosition
	// void UpdatePropPreviewPosition(class USceneComponent* PropPreviewComponent, float DeltaTime, class AFortPawn* AttachPawn, FName AttachSocket, class USkeletalMeshComponent* WeaponMesh, FVector& DesiredRelativeTransform, float MinimumZOffset, FRotator& RelativeRotation, FVector& CachedScale, float InterpSpeed); // [0xab6f234] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropIndexEventState
	// void UpdatePropIndexEventState(class AActor* ContextActor, FPaddleGingerPropData& Payload);                           // [0xab6f12c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropActivatedEventState
	// void UpdatePropActivatedEventState(class AActor* ContextActor, FPaddleGingerPropActivatedData& Payload);              // [0xab6f02c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MotherGameplayRuntime.PropGunFunctionLibrary.ClearPropIndexEventState
	// void ClearPropIndexEventState(class AActor* ContextActor);                                                            // [0xab6e6b4] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MotherGameplayRuntime.PropGunFunctionLibrary.ClearPropActivatedEventState
	// void ClearPropActivatedEventState(class AActor* ContextActor);                                                        // [0xab6e628] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp
/// Size: 0x0088 (0x0009B0 - 0x000A38)
class AReactorGradeGameplayCue_ChargeUp : public AFortGameplayCueNotify_Loop
{ 
public:
	class AFortPawn*                                   Pawn;                                                       // 0x09B0   (0x0008)  
	class UFortWeaponFxComponent_ChargeAimLocation*    CachedAimLocationComponent;                                 // 0x09B8   (0x0008)  
	FVector                                            FoundEndPoint;                                              // 0x09C0   (0x0018)  
	FScalableFloat                                     MinHitDistance;                                             // 0x09D8   (0x0028)  
	FScalableFloat                                     HitObjectsLimit;                                            // 0x0A00   (0x0028)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0A28   (0x0004)  MISSED
	SDK_UNDEFINED(1,15076) /* TEnumAsByte<ECollisionChannel> */ __um(TraceChannel);                                // 0x0A2C   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x0A2D   (0x000B)  MISSED


	/// Functions
	// Function /Script/MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.UpdateAimEndPoint
	// void UpdateAimEndPoint();                                                                                             // [0xab6f018] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.OnEndPointUpdated
	// void OnEndPointUpdated(FVector& FoundPoint);                                                                          // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.GetFoundEndPoint
	// FVector GetFoundEndPoint();                                                                                           // [0xab6eeb0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/MotherGameplayRuntime.GravyGoblinActivatable_Event
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGravyGoblinActivatable_Event
{ 
	bool                                               bIsActivatable;                                             // 0x0000   (0x0001)  
};

/// Struct /Script/MotherGameplayRuntime.GravyGoblinRotatable_Event
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGravyGoblinRotatable_Event
{ 
	bool                                               bIsRotatable;                                               // 0x0000   (0x0001)  
};

/// Struct /Script/MotherGameplayRuntime.PaddleGingerPropData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPaddleGingerPropData
{ 
	SDK_UNDEFINED(24,15077) /* FText */                __um(CategoryLabelText);                                    // 0x0000   (0x0018)  
	int32_t                                            PropIndex;                                                  // 0x0018   (0x0004)  
	int32_t                                            MaxPropCount;                                               // 0x001C   (0x0004)  
	int32_t                                            CategoryIndex;                                              // 0x0020   (0x0004)  
	int32_t                                            MaxCategoryCount;                                           // 0x0024   (0x0004)  
	SDK_UNDEFINED(8,15078) /* TWeakObjectPtr<APlayerState*> */ __um(Sender);                                       // 0x0028   (0x0008)  
};

/// Struct /Script/MotherGameplayRuntime.PaddleGingerPropActivatedData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPaddleGingerPropActivatedData
{ 
	bool                                               bActivated;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class APlayerState*                                Sender;                                                     // 0x0008   (0x0008)  
};

