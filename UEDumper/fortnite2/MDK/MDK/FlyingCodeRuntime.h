
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: FortniteGame

/// Class /Script/FlyingCodeRuntime.FortCameraMode_Flying
/// Size: 0x0010 (0x001CD0 - 0x001CE0)
class UFortCameraMode_Flying : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7392;

public:
	DMember(float)                                     LastActiveTimeSeconds                                       OFFSET(get<float>, {0x1CD0, 4, 0, 0})


	/// Functions
	// Function /Script/FlyingCodeRuntime.FortCameraMode_Flying.BP_ProcessViewRotation
	// void BP_ProcessViewRotation(FRotator& InViewRotation, FRotator& InDeltaRot, float DeltaTime, bool& bOutShouldOverride, FRotator& OutViewRotation, FRotator& OutDeltaRot); // [0x228deb8] Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 
};

/// Class /Script/FlyingCodeRuntime.FortMovementMode_ExtLogicFlying
/// Size: 0x0000 (0x000120 - 0x000120)
class UFortMovementMode_ExtLogicFlying : public UFortMovementMode_BaseExtLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:


	/// Functions
	// Function /Script/FlyingCodeRuntime.FortMovementMode_ExtLogicFlying.CanBeginFlying
	// bool CanBeginFlying();                                                                                                   // [0x327f13c] Native|Event|Public|BlueprintEvent|Const 
};

/// Struct /Script/FlyingCodeRuntime.FortMovementMode_FlyingRuntimeData
/// Size: 0x0038 (0x000018 - 0x000050)
class FFortMovementMode_FlyingRuntimeData : public FFortMovementMode_BaseExtRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector2D)                                 MovementInput                                               OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(float)                                     CeilingHeight                                               OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FRotator)                                  MoveOrientation                                             OFFSET(getStruct<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/FlyingCodeRuntime.FortMovementMode_FlyingCreationData
/// Size: 0x0020 (0x000008 - 0x000028)
class FFortMovementMode_FlyingCreationData : public FFortMovementMode_BaseExtCreationData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     CeilingHeight                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FRotator)                                  MoveOrientation                                             OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

