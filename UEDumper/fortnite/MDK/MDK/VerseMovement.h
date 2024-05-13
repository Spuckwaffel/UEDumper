
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityActor
/// dependency: EntityCore

/// Class /Script/VerseMovement.NetPhysicsMoveConfig
/// Size: 0x0090 (0x000030 - 0x0000C0)
class UNetPhysicsMoveConfig : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FNetPhysicsMoveConfigEntry>)        Entries                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FNetPhysicsMoveLimits)                     Limits                                                      OFFSET(getStruct<T>, {0x40, 128, 0, 0})
};

/// Class /Script/VerseMovement.NetPhysicsMoveComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UNetPhysicsMoveComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(class UNetPhysicsMoveConfig*)              MoveConfig                                                  OFFSET(get<T>, {0xF8, 8, 0, 0})
	SMember(FNetPhysicsMoveObject)                     SimOutput                                                   OFFSET(getStruct<T>, {0x100, 1, 0, 0})
	CMember(class APlayerController*)                  CachedPC                                                    OFFSET(get<T>, {0x108, 8, 0, 0})
};

/// Class /Script/VerseMovement.VerseMovementComponentBase
/// Size: 0x0000 (0x000088 - 0x000088)
class UVerseMovementComponentBase : public UEntityActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/VerseMovement.NetPhysicsMoveInputTriggerParams
/// Size: 0x0028 (0x000000 - 0x000028)
class FNetPhysicsMoveInputTriggerParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bIsAxis                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(class UCurveFloat*)                        AxisToMagnitudeCurve                                        OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      AccumulateAxisInput                                         OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FVector2D)                                 ClampAxis                                                   OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/VerseMovement.NetPhysicsMovePhysicsTriggerParams
/// Size: 0x0018 (0x000000 - 0x000018)
class FNetPhysicsMovePhysicsTriggerParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   SpeedInDirection                                            OFFSET(getStruct<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/VerseMovement.NetPhysicsMoveTraceTriggerParams
/// Size: 0x0050 (0x000000 - 0x000050)
class FNetPhysicsMoveTraceTriggerParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(ENetPhysicsMoveResponseFrame)              Frame                                                       OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            CollisionChannel                                            OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FCollisionResponseContainer)               ResponseParams                                              OFFSET(getStruct<T>, {0x21, 32, 0, 0})
	DMember(bool)                                      bProportionalToHitDistance                                  OFFSET(get<bool>, {0x41, 1, 0, 0})
	CMember(class UCurveFloat*)                        HitDistanceToMagnitudeCurve                                 OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/VerseMovement.NetPhysicsMoveTrigger
/// Size: 0x0098 (0x000000 - 0x000098)
class FNetPhysicsMoveTrigger : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(ENetPhysicsMoveTriggerType)                Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FNetPhysicsMoveInputTriggerParams)         InputParams                                                 OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	SMember(FNetPhysicsMovePhysicsTriggerParams)       PhysicsParams                                               OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FNetPhysicsMoveTraceTriggerParams)         TraceParams                                                 OFFSET(getStruct<T>, {0x48, 80, 0, 0})
};

/// Struct /Script/VerseMovement.NetPhysicsMoveResponse
/// Size: 0x0050 (0x000000 - 0x000050)
class FNetPhysicsMoveResponse : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(class UCurveFloat*)                        MagnitudeCurve                                              OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(ENetPhysicsMoveResponseType)               Type                                                        OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(ENetPhysicsMoveResponseFrame)              Frame                                                       OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(ENetPhysicsMoveResponseEffect)             Effect                                                      OFFSET(get<T>, {0x2A, 1, 0, 0})
	CMember(ENetPhysicsMoveResponseModifier)           Modifier                                                    OFFSET(get<T>, {0x2B, 1, 0, 0})
	SMember(FVector)                                   ClampVector                                                 OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	CMember(ENetPhysicsMoveResponseFrame)              ClampFrame                                                  OFFSET(get<T>, {0x48, 1, 0, 0})
};

/// Struct /Script/VerseMovement.NetPhysicsMoveConfigEntry
/// Size: 0x0030 (0x000000 - 0x000030)
class FNetPhysicsMoveConfigEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNetPhysicsMoveTrigger>)            Triggers                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FNetPhysicsMoveResponse>)           Responses                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/VerseMovement.NetPhysicsMoveLimits
/// Size: 0x0080 (0x000000 - 0x000080)
class FNetPhysicsMoveLimits : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bClampVelocity                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FVector)                                   MaxVelocity                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bClampAngularVelocity                                       OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FVector)                                   MaxAngularVelocity                                          OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      bClampMaxPosition                                           OFFSET(get<bool>, {0x40, 1, 0, 0})
	SMember(FVector)                                   MaxPosition                                                 OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(bool)                                      bClampMinPosition                                           OFFSET(get<bool>, {0x60, 1, 0, 0})
	SMember(FVector)                                   MinPosition                                                 OFFSET(getStruct<T>, {0x68, 24, 0, 0})
};

/// Struct /Script/VerseMovement.NetPhysicsMoveInputCmd
/// Size: 0x0038 (0x000000 - 0x000038)
class FNetPhysicsMoveInputCmd : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<float>)                             AxisValues                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<bool>)                              ActionValues                                                OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FRotator)                                  ViewRotation                                                OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/VerseMovement.NetPhysicsMoveObject
/// Size: 0x0001 (0x000000 - 0x000001)
class FNetPhysicsMoveObject : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/VerseMovement.NetPhysicsMoveObjectLocal
/// Size: 0x0088 (0x000000 - 0x000088)
class FNetPhysicsMoveObjectLocal : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Enum /Script/VerseMovement.ENetPhysicsMoveTriggerType
/// Size: 0x05
enum class ENetPhysicsMoveTriggerType : uint8_t
{
	ENetPhysicsMoveTriggerType__Input                                                = 0,
	ENetPhysicsMoveTriggerType__Constraint                                           = 1,
	ENetPhysicsMoveTriggerType__Physics                                              = 2,
	ENetPhysicsMoveTriggerType__Trace                                                = 3,
	ENetPhysicsMoveTriggerType__Constant                                             = 4
};

/// Enum /Script/VerseMovement.ENetPhysicsMoveResponseType
/// Size: 0x02
enum class ENetPhysicsMoveResponseType : uint8_t
{
	ENetPhysicsMoveResponseType__Linear                                              = 0,
	ENetPhysicsMoveResponseType__Angular                                             = 1
};

/// Enum /Script/VerseMovement.ENetPhysicsMoveResponseFrame
/// Size: 0x03
enum class ENetPhysicsMoveResponseFrame : uint8_t
{
	ENetPhysicsMoveResponseFrame__Absolute                                           = 0,
	ENetPhysicsMoveResponseFrame__Object                                             = 1,
	ENetPhysicsMoveResponseFrame__Camera                                             = 2
};

/// Enum /Script/VerseMovement.ENetPhysicsMoveResponseEffect
/// Size: 0x03
enum class ENetPhysicsMoveResponseEffect : uint8_t
{
	ENetPhysicsMoveResponseEffect__Force                                             = 0,
	ENetPhysicsMoveResponseEffect__VelocityChange                                    = 1,
	ENetPhysicsMoveResponseEffect__Transform                                         = 2
};

/// Enum /Script/VerseMovement.ENetPhysicsMoveResponseModifier
/// Size: 0x05
enum class ENetPhysicsMoveResponseModifier : uint8_t
{
	ENetPhysicsMoveResponseModifier__Add                                             = 0,
	ENetPhysicsMoveResponseModifier__TargetTransform                                 = 1,
	ENetPhysicsMoveResponseModifier__TargetVelocity                                  = 2,
	ENetPhysicsMoveResponseModifier__OverrideTransform                               = 3,
	ENetPhysicsMoveResponseModifier__OverrideVelocity                                = 4
};

