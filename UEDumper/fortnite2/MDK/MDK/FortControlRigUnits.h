
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: RigVM

/// Struct /Script/FortControlRigUnits.FortRigUnit_SphereTrace_WorkData
/// Size: 0x0038 (0x000000 - 0x000038)
class FFortRigUnit_SphereTrace_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(uint32_t)                                  Hash                                                        OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bHit                                                        OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bInitialOverlap                                             OFFSET(get<bool>, {0x5, 1, 0, 0})
	SMember(FVector)                                   HitLocation                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   HitNormal                                                   OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/FortControlRigUnits.FortRigUnit_SphereTraceByChannel
/// Size: 0x00E0 (0x000008 - 0x0000E8)
class FFortRigUnit_SphereTraceByChannel : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FVector)                                   Start                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   End                                                         OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	CMember(TEnumAsByte<ETraceTypeQuery>)              TraceChannel                                                OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bTraceComplex                                               OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(TArray<FName>)                             IgnoreActorTags                                             OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FGameplayTagContainer)                     IgnoreGameplayTags                                          OFFSET(getStruct<T>, {0x58, 32, 0, 0})
	CMember(EFortRigUnitTraceType)                     TraceType                                                   OFFSET(get<T>, {0x78, 1, 0, 0})
	DMember(bool)                                      bHit                                                        OFFSET(get<bool>, {0x79, 1, 0, 0})
	DMember(bool)                                      bInitialOverlap                                             OFFSET(get<bool>, {0x7A, 1, 0, 0})
	SMember(FVector)                                   HitLocation                                                 OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	SMember(FVector)                                   HitNormal                                                   OFFSET(getStruct<T>, {0x98, 24, 0, 0})
	SMember(FFortRigUnit_SphereTrace_WorkData)         WorkData                                                    OFFSET(getStruct<T>, {0xB0, 56, 0, 0})
};

/// Enum /Script/FortControlRigUnits.EFortRigUnitTraceType
/// Size: 0x02
enum class EFortRigUnitTraceType : uint8_t
{
	EFortRigUnitTraceType__SingleTrace                                               = 0,
	EFortRigUnitTraceType__MultiTrace                                                = 1
};

