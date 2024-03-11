
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: FortniteGame

/// Class /Script/FlyingCodeRuntime.FortCameraMode_Flying
/// Size: 0x0010 (0x001CA0 - 0x001CB0)
class UFortCameraMode_Flying : public UFortCameraMode_ThirdPerson
{ 
public:
	float                                              LastActiveTimeSeconds;                                      // 0x1CA0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x1CA4   (0x000C)  MISSED


	/// Functions
	// Function /Script/FlyingCodeRuntime.FortCameraMode_Flying.BP_ProcessViewRotation
	// void BP_ProcessViewRotation(FRotator& InViewRotation, FRotator& InDeltaRot, float DeltaTime, bool& bOutShouldOverride, FRotator& OutViewRotation, FRotator& OutDeltaRot); // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 
};

/// Class /Script/FlyingCodeRuntime.FortMovementMode_ExtLogicFlying
/// Size: 0x0000 (0x000120 - 0x000120)
class UFortMovementMode_ExtLogicFlying : public UFortMovementMode_BaseExtLogic
{ 
public:


	/// Functions
	// Function /Script/FlyingCodeRuntime.FortMovementMode_ExtLogicFlying.CanBeginFlying
	// bool CanBeginFlying();                                                                                                // [0x331049c] Native|Event|Public|BlueprintEvent|Const 
};

/// Struct /Script/FlyingCodeRuntime.FortMovementMode_FlyingRuntimeData
/// Size: 0x0038 (0x000010 - 0x000048)
struct FFortMovementMode_FlyingRuntimeData : FFortMovementMode_BaseExtRuntimeData
{ 
	FVector2D                                          MovementInput;                                              // 0x0010   (0x0010)  
	float                                              CeilingHeight;                                              // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FRotator                                           MoveOrientation;                                            // 0x0028   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Struct /Script/FlyingCodeRuntime.FortMovementMode_FlyingCreationData
/// Size: 0x0020 (0x000008 - 0x000028)
struct FFortMovementMode_FlyingCreationData : FFortMovementMode_BaseExtCreationData
{ 
	float                                              CeilingHeight;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRotator                                           MoveOrientation;                                            // 0x0010   (0x0018)  
};

