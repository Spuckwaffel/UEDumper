
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

/// Class /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance
/// Size: 0x00D0 (0x001620 - 0x0016F0)
class UFortArmoredBattleBusPassengerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
public:
	FRotator                                           PreviousVehicleRotator;                                     // 0x1620   (0x0018)  
	float                                              SmoothedVehicleYawRate;                                     // 0x1638   (0x0004)  
	int32_t                                            PawnSeat;                                                   // 0x163C   (0x0004)  
	bool                                               bIsFrontTurretPassenger;                                    // 0x1640   (0x0001)  
	bool                                               bIsRearTurretPassenger;                                     // 0x1641   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x1642   (0x0002)  MISSED
	float                                              Speed;                                                      // 0x1644   (0x0004)  
	float                                              YawDelta;                                                   // 0x1648   (0x0004)  
	float                                              TurretYaw;                                                  // 0x164C   (0x0004)  
	float                                              TurretPitch;                                                // 0x1650   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x1654   (0x0004)  MISSED
	FRotator                                           TurretYawRotator;                                           // 0x1658   (0x0018)  
	float                                              SlopeRollDegreeAngle;                                       // 0x1670   (0x0004)  
	float                                              SlopePitchDegreeAngle;                                      // 0x1674   (0x0004)  
	FVector                                            HandAttachL;                                                // 0x1678   (0x0018)  
	FVector                                            HandAttachR;                                                // 0x1690   (0x0018)  
	SDK_UNDEFINED(1,11765) /* TEnumAsByte<ERelativeTransformSpace> */ __um(TransformSpace);                        // 0x16A8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x16A9   (0x0003)  MISSED
	float                                              UpdateYawDeltaSmoothedLerpRate;                             // 0x16AC   (0x0004)  
	int32_t                                            TurretPassengerFront;                                       // 0x16B0   (0x0004)  
	int32_t                                            TurretPassengerRear;                                        // 0x16B4   (0x0004)  
	FName                                              FrontFootBoneName;                                          // 0x16B8   (0x0004)  
	FName                                              RearFootBoneName;                                           // 0x16BC   (0x0004)  
	FName                                              GunHandAttachBoneName_FrontLeft;                            // 0x16C0   (0x0004)  
	FName                                              GunHandAttachBoneName_RearLeft;                             // 0x16C4   (0x0004)  
	FName                                              GunHandAttachBoneName_FrontRight;                           // 0x16C8   (0x0004)  
	FName                                              GunHandAttachBoneName_RearRight;                            // 0x16CC   (0x0004)  
	FName                                              PassengerBoneName_Front;                                    // 0x16D0   (0x0004)  
	FName                                              PassengerBoneName_Rear;                                     // 0x16D4   (0x0004)  
	float                                              TurretPitchDegMin;                                          // 0x16D8   (0x0004)  
	float                                              TurretPitchDegMax;                                          // 0x16DC   (0x0004)  
	float                                              LocalPlayerTurretPitchEaseRate;                             // 0x16E0   (0x0004)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x16E4   (0x000C)  MISSED


	/// Functions
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateYawDeltaSmoothed
	// void UpdateYawDeltaSmoothed(class AFortAthenaVehicle* VehicleActor, FName SocketName, FRotator& NewRotation, float& SmoothedYawValue); // [0xa2fac40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateSmoothedVehicleYawRate
	// void UpdateSmoothedVehicleYawRate(class AFortAthenaVehicle* VehicleActor);                                            // [0xa2fa6e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateHandPositionsSlopeValues
	// void UpdateHandPositionsSlopeValues(class USkeletalMeshComponent* BusMeshComponent);                                  // [0xa2fa664] Final|Native|Public|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UnrotateHandAttachLocation
	// FVector UnrotateHandAttachLocation(FVector& HandLocation, FVector& FootLocation, FRotator& FootRotation);             // [0xa2fa4a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetPassengerTransform
	// FTransform GetPassengerTransform(class USkeletalMeshComponent* BusMeshComponent);                                     // [0xa2fa1c8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetHandAttachLocation
	// FVector GetHandAttachLocation(class USkeletalMeshComponent* BusMeshComponent, FName FrontHandAttachBoneName, FName RearHandAttachBoneName); // [0xa2fa0b8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetFootAttachTransform
	// FTransform GetFootAttachTransform(class USkeletalMeshComponent* BusMeshComponent);                                    // [0xa2f9fdc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GenerateCharacterPitchAndYawForSlopedTerrain
	// void GenerateCharacterPitchAndYawForSlopedTerrain(class AFortAthenaVehicle* VehicleActor, float& TurretYaw, float& TurretPitch, FRotator& PawnYawRotator); // [0xa2f9e70] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance
/// Size: 0x0090 (0x000620 - 0x0006B0)
class UFortArmoredBattleBusVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
public:
	float                                              FrontTurretAimPitch;                                        // 0x0618   (0x0004)  
	float                                              RearTurretAimPitch;                                         // 0x061C   (0x0004)  
	float                                              FrontYawDeltaSmoothed;                                      // 0x0620   (0x0004)  
	float                                              RearYawDeltaSmoothed;                                       // 0x0624   (0x0004)  
	float                                              SmoothedVehicleYawRate;                                     // 0x0628   (0x0004)  
	float                                              FrontYawDeltaSmoothedAlpha;                                 // 0x062C   (0x0004)  
	float                                              RearYawDeltaSmoothedAlpha;                                  // 0x0630   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0634   (0x0004)  MISSED
	FRotator                                           FrontWeaponYaw;                                             // 0x0638   (0x0018)  
	FRotator                                           RearWeaponYaw;                                              // 0x0650   (0x0018)  
	FRotator                                           PreviousVehicleRotator;                                     // 0x0668   (0x0018)  
	bool                                               bHasFrontTurretPassenger;                                   // 0x0680   (0x0001)  
	bool                                               bHasRearTurretPassenger;                                    // 0x0681   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0682   (0x0002)  MISSED
	float                                              NetworkEaseRate;                                            // 0x0684   (0x0004)  
	float                                              UpdateYawDeltaSmoothedLerpRate;                             // 0x0688   (0x0004)  
	int32_t                                            FrontPassengerSeatIndex;                                    // 0x068C   (0x0004)  
	int32_t                                            RearPassengerSeatIndex;                                     // 0x0690   (0x0004)  
	float                                              FrontPassengerYawOffset;                                    // 0x0694   (0x0004)  
	float                                              RearPassengerYawOffset;                                     // 0x0698   (0x0004)  
	FName                                              FrontPassengerBoneName;                                     // 0x069C   (0x0004)  
	FName                                              RearPassengerBoneName;                                      // 0x06A0   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x06A4   (0x000C)  MISSED


	/// Functions
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateYawDeltaSmoothed
	// float UpdateYawDeltaSmoothed(class AFortAthenaVehicle* VehicleActor, FName SocketName, FRotator NewRotation, float SmoothedYawValue); // [0xa2fada0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateTurretAimPitchWeaponYaw
	// void UpdateTurretAimPitchWeaponYaw(class AFortAthenaVehicle* OwnerVehicle, class AFortPlayerPawn* GunnerActor, FName SocketName, float YawOffset, float& TurretAimPitch, float& YawDeltaSmoothed, FRotator& WeaponYaw); // [0xa2faa08] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateSmoothedVehicleYawRate
	// float UpdateSmoothedVehicleYawRate(class AFortAthenaVehicle* VehicleActor, FRotator PreviousRotator);                 // [0xa2fa7ec] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.GetPitchAndYaw
	// void GetPitchAndYaw(class AFortAthenaVehicle* VehicleActor, class AFortPlayerPawn* GunnerActor, float& AdjustedPitch, float& AdjustedYaw, bool& bIsLocalPlayerControlled, FRotator& YawRotator); // [0xa2fa2a4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

