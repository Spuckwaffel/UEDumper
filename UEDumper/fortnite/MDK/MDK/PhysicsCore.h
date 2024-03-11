
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: Chaos
/// dependency: CoreUObject
/// dependency: DeveloperSettings

/// Class /Script/PhysicsCore.PhysicalMaterialPropertyBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhysicalMaterialPropertyBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PhysicsCore.BodySetupCore
/// Size: 0x0008 (0x000028 - 0x000030)
class UBodySetupCore : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(TEnumAsByte<EPhysicsType>)                 PhysicsType                                                 OFFSET(get<T>, {0x2C, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionTraceFlag>)          CollisionTraceFlag                                          OFFSET(get<T>, {0x2D, 1, 0, 0})
	CMember(TEnumAsByte<EBodyCollisionResponse>)       CollisionReponse                                            OFFSET(get<T>, {0x2E, 1, 0, 0})
};

/// Class /Script/PhysicsCore.ChaosPhysicalMaterial
/// Size: 0x0020 (0x000028 - 0x000048)
class UChaosPhysicalMaterial : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     Friction                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     StaticFriction                                              OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Restitution                                                 OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     LinearEtherDrag                                             OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     AngularEtherDrag                                            OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     SleepingLinearVelocityThreshold                             OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     SleepingAngularVelocityThreshold                            OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Class /Script/PhysicsCore.PhysicalMaterial
/// Size: 0x0068 (0x000028 - 0x000090)
class UPhysicalMaterial : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(float)                                     Friction                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     StaticFriction                                              OFFSET(get<float>, {0x2C, 4, 0, 0})
	CMember(TEnumAsByte<EFrictionCombineMode>)         FrictionCombineMode                                         OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(bool)                                      bOverrideFrictionCombineMode                                OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(float)                                     Restitution                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(TEnumAsByte<EFrictionCombineMode>)         RestitutionCombineMode                                      OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(bool)                                      bOverrideRestitutionCombineMode                             OFFSET(get<bool>, {0x39, 1, 0, 0})
	DMember(float)                                     Density                                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     SleepLinearVelocityThreshold                                OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     SleepAngularVelocityThreshold                               OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   SleepCounterThreshold                                       OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(float)                                     RaiseMassToPower                                            OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     DestructibleDamageThresholdScale                            OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(class UPhysicalMaterialPropertyBase*)      PhysicalMaterialProperty                                    OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(TEnumAsByte<EPhysicalSurface>)             SurfaceType                                                 OFFSET(get<T>, {0x60, 1, 0, 0})
	SMember(FPhysicalMaterialStrength)                 Strength                                                    OFFSET(getStruct<T>, {0x64, 12, 0, 0})
	SMember(FPhysicalMaterialDamageModifier)           DamageModifier                                              OFFSET(getStruct<T>, {0x70, 4, 0, 0})
};

/// Class /Script/PhysicsCore.PhysicsSettingsCore
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class UPhysicsSettingsCore : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(float)                                     DefaultGravityZ                                             OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     DefaultTerminalVelocity                                     OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     DefaultFluidFriction                                        OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   SimulateScratchMemorySize                                   OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   RagdollAggregateThreshold                                   OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     TriangleMeshTriangleMinAreaThreshold                        OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(bool)                                      bEnableEnhancedDeterminism                                  OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bEnableShapeSharing                                         OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(bool)                                      bEnablePCM                                                  OFFSET(get<bool>, {0x4A, 1, 0, 0})
	DMember(bool)                                      bEnableStabilization                                        OFFSET(get<bool>, {0x4B, 1, 0, 0})
	DMember(bool)                                      bWarnMissingLocks                                           OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(bool)                                      bEnable2DPhysics                                            OFFSET(get<bool>, {0x4D, 1, 0, 0})
	DMember(bool)                                      bDefaultHasComplexCollision                                 OFFSET(get<bool>, {0x4E, 1, 0, 0})
	DMember(float)                                     BounceThresholdVelocity                                     OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(TEnumAsByte<EFrictionCombineMode>)         FrictionCombineMode                                         OFFSET(get<T>, {0x54, 1, 0, 0})
	CMember(TEnumAsByte<EFrictionCombineMode>)         RestitutionCombineMode                                      OFFSET(get<T>, {0x55, 1, 0, 0})
	DMember(float)                                     MaxAngularVelocity                                          OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     MaxDepenetrationVelocity                                    OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     ContactOffsetMultiplier                                     OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     MinContactOffset                                            OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     MaxContactOffset                                            OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(bool)                                      bSimulateSkeletalMeshOnDedicatedServer                      OFFSET(get<bool>, {0x6C, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionTraceFlag>)          DefaultShapeComplexity                                      OFFSET(get<T>, {0x6D, 1, 0, 0})
	SMember(FChaosSolverConfiguration)                 SolverOptions                                               OFFSET(getStruct<T>, {0x70, 108, 0, 0})
};

/// Struct /Script/PhysicsCore.BodyInstanceCore
/// Size: 0x0018 (0x000000 - 0x000018)
class FBodyInstanceCore : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bSimulatePhysics                                            OFFSET(get<bool>, {0x10, 1, 1, 0})
	DMember(bool)                                      bOverrideMass                                               OFFSET(get<bool>, {0x10, 1, 1, 1})
	DMember(bool)                                      bEnableGravity                                              OFFSET(get<bool>, {0x10, 1, 1, 2})
	DMember(bool)                                      bUpdateKinematicFromSimulation                              OFFSET(get<bool>, {0x10, 1, 1, 3})
	DMember(bool)                                      bAutoWeld                                                   OFFSET(get<bool>, {0x10, 1, 1, 4})
	DMember(bool)                                      bStartAwake                                                 OFFSET(get<bool>, {0x10, 1, 1, 5})
	DMember(bool)                                      bGenerateWakeEvents                                         OFFSET(get<bool>, {0x10, 1, 1, 6})
	DMember(bool)                                      bUpdateMassWhenScaleChanges                                 OFFSET(get<bool>, {0x10, 1, 1, 7})
};

/// Struct /Script/PhysicsCore.PhysicalMaterialStrength
/// Size: 0x000C (0x000000 - 0x00000C)
class FPhysicalMaterialStrength : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     TensileStrength                                             OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     CompressionStrength                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ShearStrength                                               OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/PhysicsCore.PhysicalMaterialDamageModifier
/// Size: 0x0004 (0x000000 - 0x000004)
class FPhysicalMaterialDamageModifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     DamageThresholdMultiplier                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Enum /Script/PhysicsCore.ECollisionTraceFlag
/// Size: 0x05
enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                                                                   = 0,
	CTF_UseSimpleAndComplex                                                          = 1,
	CTF_UseSimpleAsComplex                                                           = 2,
	CTF_UseComplexAsSimple                                                           = 3,
	CTF_MAX                                                                          = 4
};

/// Enum /Script/PhysicsCore.EPhysicsType
/// Size: 0x04
enum class EPhysicsType : uint8_t
{
	PhysType_Default                                                                 = 0,
	PhysType_Kinematic                                                               = 1,
	PhysType_Simulated                                                               = 2,
	PhysType_MAX                                                                     = 3
};

/// Enum /Script/PhysicsCore.EBodyCollisionResponse
/// Size: 0x03
enum class EBodyCollisionResponse : uint8_t
{
	EBodyCollisionResponse__BodyCollision_Enabled                                    = 0,
	EBodyCollisionResponse__BodyCollision_Disabled                                   = 1,
	EBodyCollisionResponse__BodyCollision_MAX                                        = 2
};

/// Enum /Script/PhysicsCore.EPhysicalSurface
/// Size: 0x65
enum class EPhysicalSurface : uint8_t
{
	SurfaceType_Default                                                              = 0,
	SurfaceType1                                                                     = 1,
	SurfaceType2                                                                     = 2,
	SurfaceType3                                                                     = 3,
	SurfaceType4                                                                     = 4,
	SurfaceType5                                                                     = 5,
	SurfaceType6                                                                     = 6,
	SurfaceType7                                                                     = 7,
	SurfaceType8                                                                     = 8,
	SurfaceType9                                                                     = 9,
	SurfaceType10                                                                    = 10,
	SurfaceType11                                                                    = 11,
	SurfaceType12                                                                    = 12,
	SurfaceType13                                                                    = 13,
	SurfaceType14                                                                    = 14,
	SurfaceType15                                                                    = 15,
	SurfaceType16                                                                    = 16,
	SurfaceType17                                                                    = 17,
	SurfaceType18                                                                    = 18,
	SurfaceType19                                                                    = 19,
	SurfaceType20                                                                    = 20,
	SurfaceType21                                                                    = 21,
	SurfaceType22                                                                    = 22,
	SurfaceType23                                                                    = 23,
	SurfaceType24                                                                    = 24,
	SurfaceType25                                                                    = 25,
	SurfaceType26                                                                    = 26,
	SurfaceType27                                                                    = 27,
	SurfaceType28                                                                    = 28,
	SurfaceType29                                                                    = 29,
	SurfaceType30                                                                    = 30,
	SurfaceType31                                                                    = 31,
	SurfaceType32                                                                    = 32,
	SurfaceType33                                                                    = 33,
	SurfaceType34                                                                    = 34,
	SurfaceType35                                                                    = 35,
	SurfaceType36                                                                    = 36,
	SurfaceType37                                                                    = 37,
	SurfaceType38                                                                    = 38,
	SurfaceType39                                                                    = 39,
	SurfaceType40                                                                    = 40,
	SurfaceType41                                                                    = 41,
	SurfaceType42                                                                    = 42,
	SurfaceType43                                                                    = 43,
	SurfaceType44                                                                    = 44,
	SurfaceType45                                                                    = 45,
	SurfaceType46                                                                    = 46,
	SurfaceType47                                                                    = 47,
	SurfaceType48                                                                    = 48,
	SurfaceType49                                                                    = 49,
	SurfaceType50                                                                    = 50,
	SurfaceType51                                                                    = 51,
	SurfaceType52                                                                    = 52,
	SurfaceType53                                                                    = 53,
	SurfaceType54                                                                    = 54,
	SurfaceType55                                                                    = 55,
	SurfaceType56                                                                    = 56,
	SurfaceType57                                                                    = 57,
	SurfaceType58                                                                    = 58,
	SurfaceType59                                                                    = 59,
	SurfaceType60                                                                    = 60,
	SurfaceType61                                                                    = 61,
	SurfaceType62                                                                    = 62,
	SurfaceType_Max                                                                  = 63,
	EPhysicalSurface_MAX                                                             = 64
};

/// Enum /Script/PhysicsCore.ERadialImpulseFalloff
/// Size: 0x03
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                                                                     = 0,
	RIF_Linear                                                                       = 1,
	RIF_MAX                                                                          = 2
};

/// Enum /Script/PhysicsCore.ESleepFamily
/// Size: 0x04
enum class ESleepFamily : uint8_t
{
	ESleepFamily__Normal                                                             = 0,
	ESleepFamily__Sensitive                                                          = 1,
	ESleepFamily__Custom                                                             = 2,
	ESleepFamily__ESleepFamily_MAX                                                   = 3
};

/// Enum /Script/PhysicsCore.EAngularConstraintMotion
/// Size: 0x04
enum class EAngularConstraintMotion : uint8_t
{
	ACM_Free                                                                         = 0,
	ACM_Limited                                                                      = 1,
	ACM_Locked                                                                       = 2,
	ACM_MAX                                                                          = 3
};

/// Enum /Script/PhysicsCore.EConstraintFrame
/// Size: 0x03
enum class EConstraintFrame : uint8_t
{
	EConstraintFrame__Frame1                                                         = 0,
	EConstraintFrame__Frame2                                                         = 1,
	EConstraintFrame__EConstraintFrame_MAX                                           = 2
};

/// Enum /Script/PhysicsCore.EConstraintPlasticityType
/// Size: 0x04
enum class EConstraintPlasticityType : uint8_t
{
	CCPT_Free                                                                        = 0,
	CCPT_Shrink                                                                      = 1,
	CCPT_Grow                                                                        = 2,
	CCPT_MAX                                                                         = 3
};

/// Enum /Script/PhysicsCore.ELinearConstraintMotion
/// Size: 0x04
enum class ELinearConstraintMotion : uint8_t
{
	LCM_Free                                                                         = 0,
	LCM_Limited                                                                      = 1,
	LCM_Locked                                                                       = 2,
	LCM_MAX                                                                          = 3
};

/// Enum /Script/PhysicsCore.EFrictionCombineMode
/// Size: 0x04
enum class EFrictionCombineMode : uint8_t
{
	EFrictionCombineMode__Average                                                    = 0,
	EFrictionCombineMode__Min                                                        = 1,
	EFrictionCombineMode__Multiply                                                   = 2,
	EFrictionCombineMode__Max                                                        = 3
};

