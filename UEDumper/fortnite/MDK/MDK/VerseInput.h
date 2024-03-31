
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: InputCore
/// dependency: NetCore
/// dependency: StructUtils

/// Class /Script/VerseInput.VerseInputActionBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UVerseInputActionBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/VerseInput.VerseInputTriggerBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseInputTriggerBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseInput.VerseInputModifierBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseInputModifierBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseInput.VerseInputClientActionBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseInputClientActionBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseInput.VerseReplicatedInputDataComponent
/// Size: 0x0130 (0x0000A0 - 0x0001D0)
class UVerseReplicatedInputDataComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FVerseInputActionDataList)                 InputActions                                                OFFSET(getStruct<T>, {0xA0, 288, 0, 0})
	CMember(class UEnhancedInputComponent*)            InputComponent                                              OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(class UInputMappingContext*)               CurrentInputMappingContext                                  OFFSET(get<T>, {0x1C8, 8, 0, 0})


	/// Functions
	// Function /Script/VerseInput.VerseReplicatedInputDataComponent.ServerInputActionTriggered
	// void ServerInputActionTriggered(FGuid Guid, FVector InputValue);                                                         // [0xcbce288] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|Const 
	// Function /Script/VerseInput.VerseReplicatedInputDataComponent.OnInputActionTriggered
	// void OnInputActionTriggered(FInputActionInstance& ActionInstance);                                                       // [0xcbce1e4] Final|Native|Private|HasOutParms 
};

/// Struct /Script/VerseInput.VerseInputActionData
/// Size: 0x0064 (0x00000C - 0x000070)
class FVerseInputActionData : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UInputAction*)                       InputAction                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TArray<FKey>)                              InputKeys                                                   OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TArray<FInstancedStruct>)                  Triggers                                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FInstancedStruct>)                  Modifiers                                                   OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FInstancedStruct>)                  Actions                                                     OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FName)                                     VerbName                                                    OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	DMember(bool)                                      bConsumeInput                                               OFFSET(get<bool>, {0x6C, 1, 0, 0})
};

/// Struct /Script/VerseInput.VerseInputActionDataList
/// Size: 0x0018 (0x000108 - 0x000120)
class FVerseInputActionDataList : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FVerseInputActionData>)             InputActions                                                OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(class UVerseReplicatedInputDataComponent*) OwnerComponent                                              OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/VerseInput.VerseInputClientActionBaseData
/// Size: 0x0008 (0x000000 - 0x000008)
class FVerseInputClientActionBaseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/VerseInput.VerseInputClientActionData_ApplyImpulse
/// Size: 0x0018 (0x000008 - 0x000020)
class FVerseInputClientActionData_ApplyImpulse : public FVerseInputClientActionBaseData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Impulse                                                     OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/VerseInput.VerseInputClientActionData_Launch
/// Size: 0x0018 (0x000008 - 0x000020)
class FVerseInputClientActionData_Launch : public FVerseInputClientActionBaseData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/VerseInput.VerseInputClientActionData_PlayAnimation
/// Size: 0x0008 (0x000008 - 0x000010)
class FVerseInputClientActionData_PlayAnimation : public FVerseInputClientActionBaseData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     AssetPath                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/VerseInput.VerseInputClientActionData_PlaySound
/// Size: 0x0008 (0x000008 - 0x000010)
class FVerseInputClientActionData_PlaySound : public FVerseInputClientActionBaseData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     AssetPath                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/VerseInput.VerseInputClientActionData_SpawnParticleEffect
/// Size: 0x0008 (0x000008 - 0x000010)
class FVerseInputClientActionData_SpawnParticleEffect : public FVerseInputClientActionBaseData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     AssetPath                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/VerseInput.VerseInputModifierBaseData
/// Size: 0x0008 (0x000000 - 0x000008)
class FVerseInputModifierBaseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/VerseInput.VerseInputModifierData_DeadZone
/// Size: 0x0010 (0x000008 - 0x000018)
class FVerseInputModifierData_DeadZone : public FVerseInputModifierBaseData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     LowerThreshold                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     UpperThreshold                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(EDeadZoneType)                             Type                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/VerseInput.VerseInputModifierData_Negate
/// Size: 0x0008 (0x000008 - 0x000010)
class FVerseInputModifierData_Negate : public FVerseInputModifierBaseData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bX                                                          OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bY                                                          OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bZ                                                          OFFSET(get<bool>, {0xA, 1, 0, 0})
};

/// Struct /Script/VerseInput.VerseInputModifierData_Scalar
/// Size: 0x0018 (0x000008 - 0x000020)
class FVerseInputModifierData_Scalar : public FVerseInputModifierBaseData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Scalar                                                      OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/VerseInput.VerseInputModifierData_Smooth
/// Size: 0x0000 (0x000008 - 0x000008)
class FVerseInputModifierData_Smooth : public FVerseInputModifierBaseData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/VerseInput.VerseInputModifierData_ResponseCurveExponential
/// Size: 0x0018 (0x000008 - 0x000020)
class FVerseInputModifierData_ResponseCurveExponential : public FVerseInputModifierBaseData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   CurveExponent                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/VerseInput.VerseInputModifierData_Swizzle
/// Size: 0x0008 (0x000008 - 0x000010)
class FVerseInputModifierData_Swizzle : public FVerseInputModifierBaseData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EInputAxisSwizzle)                         Order                                                       OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/VerseInput.VerseInputTriggerBaseData
/// Size: 0x0010 (0x000000 - 0x000010)
class FVerseInputTriggerBaseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     ActuationThreshold                                          OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/VerseInput.VerseInputTriggerData_Down
/// Size: 0x0000 (0x000010 - 0x000010)
class FVerseInputTriggerData_Down : public FVerseInputTriggerBaseData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/VerseInput.VerseInputTriggerData_Pressed
/// Size: 0x0000 (0x000010 - 0x000010)
class FVerseInputTriggerData_Pressed : public FVerseInputTriggerBaseData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/VerseInput.VerseInputTriggerData_Released
/// Size: 0x0000 (0x000010 - 0x000010)
class FVerseInputTriggerData_Released : public FVerseInputTriggerBaseData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/VerseInput.VerseInputTriggerData_Hold
/// Size: 0x0008 (0x000010 - 0x000018)
class FVerseInputTriggerData_Hold : public FVerseInputTriggerBaseData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     HoldTimeThreshold                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      IsOneShot                                                   OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      AffectedByTimeDilation                                      OFFSET(get<bool>, {0x15, 1, 0, 0})
};

/// Struct /Script/VerseInput.VerseInputTriggerData_HoldAndRelease
/// Size: 0x0008 (0x000010 - 0x000018)
class FVerseInputTriggerData_HoldAndRelease : public FVerseInputTriggerBaseData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     HoldTimeThreshold                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      AffectedByTimeDilation                                      OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/VerseInput.VerseInputTriggerData_Tap
/// Size: 0x0008 (0x000010 - 0x000018)
class FVerseInputTriggerData_Tap : public FVerseInputTriggerBaseData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     TapReleaseTimeThreshold                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      AffectedByTimeDilation                                      OFFSET(get<bool>, {0x14, 1, 0, 0})
};

