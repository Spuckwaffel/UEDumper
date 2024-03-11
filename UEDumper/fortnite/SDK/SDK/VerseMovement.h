
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityActor
/// dependency: EntityCore

/// Enum /Script/VerseMovement.ENetPhysicsMoveTriggerType
/// Size: 0x06
enum class ENetPhysicsMoveTriggerType : uint8_t
{
	ENetPhysicsMoveTriggerType__Input                                                = 0,
	ENetPhysicsMoveTriggerType__Constraint                                           = 1,
	ENetPhysicsMoveTriggerType__Physics                                              = 2,
	ENetPhysicsMoveTriggerType__Trace                                                = 3,
	ENetPhysicsMoveTriggerType__Constant                                             = 4,
	ENetPhysicsMoveTriggerType__ENetPhysicsMoveTriggerType_MAX                       = 5
};

/// Enum /Script/VerseMovement.ENetPhysicsMoveResponseType
/// Size: 0x03
enum class ENetPhysicsMoveResponseType : uint8_t
{
	ENetPhysicsMoveResponseType__Linear                                              = 0,
	ENetPhysicsMoveResponseType__Angular                                             = 1,
	ENetPhysicsMoveResponseType__ENetPhysicsMoveResponseType_MAX                     = 2
};

/// Enum /Script/VerseMovement.ENetPhysicsMoveResponseFrame
/// Size: 0x04
enum class ENetPhysicsMoveResponseFrame : uint8_t
{
	ENetPhysicsMoveResponseFrame__Absolute                                           = 0,
	ENetPhysicsMoveResponseFrame__Object                                             = 1,
	ENetPhysicsMoveResponseFrame__Camera                                             = 2,
	ENetPhysicsMoveResponseFrame__ENetPhysicsMoveResponseFrame_MAX                   = 3
};

/// Enum /Script/VerseMovement.ENetPhysicsMoveResponseEffect
/// Size: 0x04
enum class ENetPhysicsMoveResponseEffect : uint8_t
{
	ENetPhysicsMoveResponseEffect__Force                                             = 0,
	ENetPhysicsMoveResponseEffect__VelocityChange                                    = 1,
	ENetPhysicsMoveResponseEffect__Transform                                         = 2,
	ENetPhysicsMoveResponseEffect__ENetPhysicsMoveResponseEffect_MAX                 = 3
};

/// Enum /Script/VerseMovement.ENetPhysicsMoveResponseModifier
/// Size: 0x06
enum class ENetPhysicsMoveResponseModifier : uint8_t
{
	ENetPhysicsMoveResponseModifier__Add                                             = 0,
	ENetPhysicsMoveResponseModifier__TargetTransform                                 = 1,
	ENetPhysicsMoveResponseModifier__TargetVelocity                                  = 2,
	ENetPhysicsMoveResponseModifier__OverrideTransform                               = 3,
	ENetPhysicsMoveResponseModifier__OverrideVelocity                                = 4,
	ENetPhysicsMoveResponseModifier__ENetPhysicsMoveResponseModifier_MAX             = 5
};

/// Struct /Script/VerseMovement.NetPhysicsMoveInputTriggerParams
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNetPhysicsMoveInputTriggerParams
{ 
	bool                                               bIsAxis;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x0004   (0x0004)  
	class UCurveFloat*                                 AxisToMagnitudeCurve;                                       // 0x0008   (0x0008)  
	bool                                               AccumulateAxisInput;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FVector2D                                          ClampAxis;                                                  // 0x0018   (0x0010)  
};

/// Struct /Script/VerseMovement.NetPhysicsMovePhysicsTriggerParams
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNetPhysicsMovePhysicsTriggerParams
{ 
	FVector                                            SpeedInDirection;                                           // 0x0000   (0x0018)  
};

/// Struct /Script/VerseMovement.NetPhysicsMoveTraceTriggerParams
/// Size: 0x0050 (0x000000 - 0x000050)
struct FNetPhysicsMoveTraceTriggerParams
{ 
	FVector                                            Direction;                                                  // 0x0000   (0x0018)  
	ENetPhysicsMoveResponseFrame                       Frame;                                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              Length;                                                     // 0x001C   (0x0004)  
	SDK_UNDEFINED(1,9363) /* TEnumAsByte<ECollisionChannel> */ __um(CollisionChannel);                             // 0x0020   (0x0001)  
	FCollisionResponseContainer                        ResponseParams;                                             // 0x0021   (0x0020)  
	bool                                               bProportionalToHitDistance;                                 // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0042   (0x0006)  MISSED
	class UCurveFloat*                                 HitDistanceToMagnitudeCurve;                                // 0x0048   (0x0008)  
};

/// Struct /Script/VerseMovement.NetPhysicsMoveTrigger
/// Size: 0x0098 (0x000000 - 0x000098)
struct FNetPhysicsMoveTrigger
{ 
	ENetPhysicsMoveTriggerType                         Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FNetPhysicsMoveInputTriggerParams                  InputParams;                                                // 0x0008   (0x0028)  
	FNetPhysicsMovePhysicsTriggerParams                PhysicsParams;                                              // 0x0030   (0x0018)  
	FNetPhysicsMoveTraceTriggerParams                  TraceParams;                                                // 0x0048   (0x0050)  
};

/// Struct /Script/VerseMovement.NetPhysicsMoveResponse
/// Size: 0x0050 (0x000000 - 0x000050)
struct FNetPhysicsMoveResponse
{ 
	FVector                                            Vector;                                                     // 0x0000   (0x0018)  
	float                                              Magnitude;                                                  // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	class UCurveFloat*                                 MagnitudeCurve;                                             // 0x0020   (0x0008)  
	ENetPhysicsMoveResponseType                        Type;                                                       // 0x0028   (0x0001)  
	ENetPhysicsMoveResponseFrame                       Frame;                                                      // 0x0029   (0x0001)  
	ENetPhysicsMoveResponseEffect                      Effect;                                                     // 0x002A   (0x0001)  
	ENetPhysicsMoveResponseModifier                    Modifier;                                                   // 0x002B   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FVector                                            ClampVector;                                                // 0x0030   (0x0018)  
	ENetPhysicsMoveResponseFrame                       ClampFrame;                                                 // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/VerseMovement.NetPhysicsMoveConfigEntry
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNetPhysicsMoveConfigEntry
{ 
	SDK_UNDEFINED(16,9364) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	TArray<FNetPhysicsMoveTrigger>                     Triggers;                                                   // 0x0010   (0x0010)  
	TArray<FNetPhysicsMoveResponse>                    Responses;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/VerseMovement.NetPhysicsMoveLimits
/// Size: 0x0080 (0x000000 - 0x000080)
struct FNetPhysicsMoveLimits
{ 
	bool                                               bClampVelocity;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            MaxVelocity;                                                // 0x0008   (0x0018)  
	bool                                               bClampAngularVelocity;                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	FVector                                            MaxAngularVelocity;                                         // 0x0028   (0x0018)  
	bool                                               bClampMaxPosition;                                          // 0x0040   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	FVector                                            MaxPosition;                                                // 0x0048   (0x0018)  
	bool                                               bClampMinPosition;                                          // 0x0060   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	FVector                                            MinPosition;                                                // 0x0068   (0x0018)  
};

/// Class /Script/VerseMovement.NetPhysicsMoveConfig
/// Size: 0x0090 (0x000030 - 0x0000C0)
class UNetPhysicsMoveConfig : public UDataAsset
{ 
public:
	TArray<FNetPhysicsMoveConfigEntry>                 Entries;                                                    // 0x0030   (0x0010)  
	FNetPhysicsMoveLimits                              Limits;                                                     // 0x0040   (0x0080)  
};

/// Struct /Script/VerseMovement.NetPhysicsMoveObject
/// Size: 0x0001 (0x000000 - 0x000001)
struct FNetPhysicsMoveObject
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
};

/// Class /Script/VerseMovement.NetPhysicsMoveComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UNetPhysicsMoveComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x58];                                      // 0x00A0   (0x0058)  MISSED
	class UNetPhysicsMoveConfig*                       MoveConfig;                                                 // 0x00F8   (0x0008)  
	FNetPhysicsMoveObject                              SimOutput;                                                  // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0101   (0x0007)  MISSED
	class APlayerController*                           CachedPC;                                                   // 0x0108   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0110   (0x0008)  MISSED
};

/// Class /Script/VerseMovement.VerseMovementComponentBase
/// Size: 0x0000 (0x000088 - 0x000088)
class UVerseMovementComponentBase : public UEntityActorComponent
{ 
public:
};

/// Struct /Script/VerseMovement.NetPhysicsMoveInputCmd
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNetPhysicsMoveInputCmd
{ 
	TArray<float>                                      AxisValues;                                                 // 0x0000   (0x0010)  
	TArray<bool>                                       ActionValues;                                               // 0x0010   (0x0010)  
	FRotator                                           ViewRotation;                                               // 0x0020   (0x0018)  
};

/// Struct /Script/VerseMovement.NetPhysicsMoveObjectLocal
/// Size: 0x0088 (0x000000 - 0x000088)
struct FNetPhysicsMoveObjectLocal
{ 
	unsigned char                                      UnknownData00_2[0x88];                                      // 0x0000   (0x0088)  MISSED
};

