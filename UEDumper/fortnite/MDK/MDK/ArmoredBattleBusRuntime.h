
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance
/// Size: 0x00D0 (0x0015F0 - 0x0016C0)
class UFortArmoredBattleBusPassengerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5824;

public:
	SMember(FRotator)                                  PreviousVehicleRotator                                      OFFSET(getStruct<T>, {0x15F0, 24, 0, 0})
	DMember(float)                                     SmoothedVehicleYawRate                                      OFFSET(get<float>, {0x1608, 4, 0, 0})
	DMember(int32_t)                                   PawnSeat                                                    OFFSET(get<int32_t>, {0x160C, 4, 0, 0})
	DMember(bool)                                      bIsFrontTurretPassenger                                     OFFSET(get<bool>, {0x1610, 1, 0, 0})
	DMember(bool)                                      bIsRearTurretPassenger                                      OFFSET(get<bool>, {0x1611, 1, 0, 0})
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x1614, 4, 0, 0})
	DMember(float)                                     YawDelta                                                    OFFSET(get<float>, {0x1618, 4, 0, 0})
	DMember(float)                                     TurretYaw                                                   OFFSET(get<float>, {0x161C, 4, 0, 0})
	DMember(float)                                     TurretPitch                                                 OFFSET(get<float>, {0x1620, 4, 0, 0})
	SMember(FRotator)                                  TurretYawRotator                                            OFFSET(getStruct<T>, {0x1628, 24, 0, 0})
	DMember(float)                                     SlopeRollDegreeAngle                                        OFFSET(get<float>, {0x1640, 4, 0, 0})
	DMember(float)                                     SlopePitchDegreeAngle                                       OFFSET(get<float>, {0x1644, 4, 0, 0})
	SMember(FVector)                                   HandAttachL                                                 OFFSET(getStruct<T>, {0x1648, 24, 0, 0})
	SMember(FVector)                                   HandAttachR                                                 OFFSET(getStruct<T>, {0x1660, 24, 0, 0})
	CMember(TEnumAsByte<ERelativeTransformSpace>)      TransformSpace                                              OFFSET(get<T>, {0x1678, 1, 0, 0})
	DMember(float)                                     UpdateYawDeltaSmoothedLerpRate                              OFFSET(get<float>, {0x167C, 4, 0, 0})
	DMember(int32_t)                                   TurretPassengerFront                                        OFFSET(get<int32_t>, {0x1680, 4, 0, 0})
	DMember(int32_t)                                   TurretPassengerRear                                         OFFSET(get<int32_t>, {0x1684, 4, 0, 0})
	SMember(FName)                                     FrontFootBoneName                                           OFFSET(getStruct<T>, {0x1688, 4, 0, 0})
	SMember(FName)                                     RearFootBoneName                                            OFFSET(getStruct<T>, {0x168C, 4, 0, 0})
	SMember(FName)                                     GunHandAttachBoneName_FrontLeft                             OFFSET(getStruct<T>, {0x1690, 4, 0, 0})
	SMember(FName)                                     GunHandAttachBoneName_RearLeft                              OFFSET(getStruct<T>, {0x1694, 4, 0, 0})
	SMember(FName)                                     GunHandAttachBoneName_FrontRight                            OFFSET(getStruct<T>, {0x1698, 4, 0, 0})
	SMember(FName)                                     GunHandAttachBoneName_RearRight                             OFFSET(getStruct<T>, {0x169C, 4, 0, 0})
	SMember(FName)                                     PassengerBoneName_Front                                     OFFSET(getStruct<T>, {0x16A0, 4, 0, 0})
	SMember(FName)                                     PassengerBoneName_Rear                                      OFFSET(getStruct<T>, {0x16A4, 4, 0, 0})
	DMember(float)                                     TurretPitchDegMin                                           OFFSET(get<float>, {0x16A8, 4, 0, 0})
	DMember(float)                                     TurretPitchDegMax                                           OFFSET(get<float>, {0x16AC, 4, 0, 0})
	DMember(float)                                     LocalPlayerTurretPitchEaseRate                              OFFSET(get<float>, {0x16B0, 4, 0, 0})


	/// Functions
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateYawDeltaSmoothed
	// void UpdateYawDeltaSmoothed(class AFortAthenaVehicle* VehicleActor, FName SocketName, FRotator& NewRotation, float& SmoothedYawValue); // [0xb040cc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateSmoothedVehicleYawRate
	// void UpdateSmoothedVehicleYawRate(class AFortAthenaVehicle* VehicleActor);                                               // [0xb040674] Final|Native|Public|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateHandPositionsSlopeValues
	// void UpdateHandPositionsSlopeValues(class USkeletalMeshComponent* BusMeshComponent);                                     // [0xb0405b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UnrotateHandAttachLocation
	// FVector UnrotateHandAttachLocation(FVector& HandLocation, FVector& FootLocation, FRotator& FootRotation);                // [0xb0403f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetPassengerTransform
	// FTransform GetPassengerTransform(class USkeletalMeshComponent* BusMeshComponent);                                        // [0xb040070] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetHandAttachLocation
	// FVector GetHandAttachLocation(class USkeletalMeshComponent* BusMeshComponent, FName FrontHandAttachBoneName, FName RearHandAttachBoneName); // [0xb03fea0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetFootAttachTransform
	// FTransform GetFootAttachTransform(class USkeletalMeshComponent* BusMeshComponent);                                       // [0xb03fd84] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GenerateCharacterPitchAndYawForSlopedTerrain
	// void GenerateCharacterPitchAndYawForSlopedTerrain(class AFortAthenaVehicle* VehicleActor, float& TurretYaw, float& TurretPitch, FRotator& PawnYawRotator); // [0xb03fbdc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance
/// Size: 0x0090 (0x000620 - 0x0006B0)
class UFortArmoredBattleBusVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	DMember(float)                                     FrontTurretAimPitch                                         OFFSET(get<float>, {0x618, 4, 0, 0})
	DMember(float)                                     RearTurretAimPitch                                          OFFSET(get<float>, {0x61C, 4, 0, 0})
	DMember(float)                                     FrontYawDeltaSmoothed                                       OFFSET(get<float>, {0x620, 4, 0, 0})
	DMember(float)                                     RearYawDeltaSmoothed                                        OFFSET(get<float>, {0x624, 4, 0, 0})
	DMember(float)                                     SmoothedVehicleYawRate                                      OFFSET(get<float>, {0x628, 4, 0, 0})
	DMember(float)                                     FrontYawDeltaSmoothedAlpha                                  OFFSET(get<float>, {0x62C, 4, 0, 0})
	DMember(float)                                     RearYawDeltaSmoothedAlpha                                   OFFSET(get<float>, {0x630, 4, 0, 0})
	SMember(FRotator)                                  FrontWeaponYaw                                              OFFSET(getStruct<T>, {0x638, 24, 0, 0})
	SMember(FRotator)                                  RearWeaponYaw                                               OFFSET(getStruct<T>, {0x650, 24, 0, 0})
	SMember(FRotator)                                  PreviousVehicleRotator                                      OFFSET(getStruct<T>, {0x668, 24, 0, 0})
	DMember(bool)                                      bHasFrontTurretPassenger                                    OFFSET(get<bool>, {0x680, 1, 0, 0})
	DMember(bool)                                      bHasRearTurretPassenger                                     OFFSET(get<bool>, {0x681, 1, 0, 0})
	DMember(float)                                     NetworkEaseRate                                             OFFSET(get<float>, {0x684, 4, 0, 0})
	DMember(float)                                     UpdateYawDeltaSmoothedLerpRate                              OFFSET(get<float>, {0x688, 4, 0, 0})
	DMember(int32_t)                                   FrontPassengerSeatIndex                                     OFFSET(get<int32_t>, {0x68C, 4, 0, 0})
	DMember(int32_t)                                   RearPassengerSeatIndex                                      OFFSET(get<int32_t>, {0x690, 4, 0, 0})
	DMember(float)                                     FrontPassengerYawOffset                                     OFFSET(get<float>, {0x694, 4, 0, 0})
	DMember(float)                                     RearPassengerYawOffset                                      OFFSET(get<float>, {0x698, 4, 0, 0})
	SMember(FName)                                     FrontPassengerBoneName                                      OFFSET(getStruct<T>, {0x69C, 4, 0, 0})
	SMember(FName)                                     RearPassengerBoneName                                       OFFSET(getStruct<T>, {0x6A0, 4, 0, 0})


	/// Functions
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateYawDeltaSmoothed
	// float UpdateYawDeltaSmoothed(class AFortAthenaVehicle* VehicleActor, FName SocketName, FRotator NewRotation, float SmoothedYawValue); // [0xb040e90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateTurretAimPitchWeaponYaw
	// void UpdateTurretAimPitchWeaponYaw(class AFortAthenaVehicle* OwnerVehicle, class AFortPlayerPawn* GunnerActor, FName SocketName, float YawOffset, float& TurretAimPitch, float& YawDeltaSmoothed, FRotator& WeaponYaw); // [0xb0409a4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateSmoothedVehicleYawRate
	// float UpdateSmoothedVehicleYawRate(class AFortAthenaVehicle* VehicleActor, FRotator PreviousRotator);                    // [0xb0407bc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.GetPitchAndYaw
	// void GetPitchAndYaw(class AFortAthenaVehicle* VehicleActor, class AFortPlayerPawn* GunnerActor, float& AdjustedPitch, float& AdjustedYaw, bool& bIsLocalPlayerControlled, FRotator& YawRotator); // [0xb04018c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

