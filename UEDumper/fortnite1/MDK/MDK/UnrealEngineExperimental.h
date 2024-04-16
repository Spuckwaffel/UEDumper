
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LocalizableMessage
/// dependency: ModularGameplay

/// Class /Script/UnrealEngineExperimental.ControllerComponentDebugDraw
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UControllerComponentDebugDraw : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TArray<FPersistentLineBatcher>)            PersistentLineBatchers                                      OFFSET(get<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.SetDebugDrawEnabled
	// void SetDebugDrawEnabled(bool bEnabled, uint32_t ChannelId);                                                             // [0x7697934] RequiredAPI|Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.Reset
	// void Reset(uint32_t ChannelId);                                                                                          // [0x7697870] RequiredAPI|Net|NetReliableNative|Event|Public|NetClient|Const 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugSphereInternal
	// void DrawDebugSphereInternal(FVector Center, float Radius, int32_t Segments, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x76973c4] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugPointInternal
	// void DrawDebugPointInternal(FVector Position, float Size, FColor Color, bool bPersistentLines, float Lifetime, uint32_t ChannelId, uint32_t InstanceID); // [0x769701c] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugLineInternal
	// void DrawDebugLineInternal(FVector LineStart, FVector LineEnd, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x7696bf0] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugDirectionalArrowInternal
	// void DrawDebugDirectionalArrowInternal(FVector LineStart, FVector LineEnd, float ArrowSize, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x7696744] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugCylinderInternal
	// void DrawDebugCylinderInternal(FVector Start, FVector End, float Radius, int32_t Segments, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x7696220] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugConeInternal
	// void DrawDebugConeInternal(FVector Origin, FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x7695bfc] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugCapsuleInternal
	// void DrawDebugCapsuleInternal(FVector Center, float HalfHeight, float Radius, FQuat Rotation, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x76956d4] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.DrawDebugBoxInternal
	// void DrawDebugBoxInternal(FVector Center, FVector Extent, FQuat Rotation, FColor Color, bool bPersistentLines, float Lifetime, float Thickness, uint32_t ChannelId, uint32_t InstanceID); // [0x769522c] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.ClearChannel
	// void ClearChannel(uint32_t ChannelId);                                                                                   // [0x7695168] RequiredAPI|Net|NetReliableNative|Event|Public|NetClient|Const 
	// Function /Script/UnrealEngineExperimental.ControllerComponentDebugDraw.Clear
	// void Clear(uint32_t ChannelId, uint32_t InstanceID);                                                                     // [0x7695028] RequiredAPI|Net|NetReliableNative|Event|Public|NetClient|Const 
};

/// Struct /Script/UnrealEngineExperimental.PersistentLineBatcher
/// Size: 0x0010 (0x000000 - 0x000010)
class FPersistentLineBatcher : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class ULineBatchComponent*)                PersistentLineBatcher                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/UnrealEngineExperimental.ScriptDiagnosticSourceLocation
/// Size: 0x0020 (0x000000 - 0x000020)
class FScriptDiagnosticSourceLocation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   FilePath                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FIntPoint)                                 RowSpan                                                     OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FIntPoint)                                 ColSpan                                                     OFFSET(getStruct<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/UnrealEngineExperimental.ScriptDiagnosticMessage
/// Size: 0x0050 (0x000000 - 0x000050)
class FScriptDiagnosticMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TEnumAsByte<EScriptDiagnosticMessageType>) MessageType                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FDateTime)                                 Timestamp                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FString)                                   Channel                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FText)                                     MessageStr                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FScriptDiagnosticSourceLocation)           SourceLocation                                              OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/UnrealEngineExperimental.ScriptScreenLogMessage
/// Size: 0x0008 (0x000050 - 0x000058)
class FScriptScreenLogMessage : public FScriptDiagnosticMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FColor)                                    ScreenColor                                                 OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	DMember(float)                                     DisplayDuration                                             OFFSET(get<float>, {0x54, 4, 0, 0})
};

/// Struct /Script/UnrealEngineExperimental.ScriptScreenLogMessageWithLocalization
/// Size: 0x0050 (0x000000 - 0x000050)
class FScriptScreenLogMessageWithLocalization : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FDateTime)                                 Timestamp                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FLocalizableMessage)                       Message                                                     OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	SMember(FString)                                   Prefix                                                      OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FColor)                                    ScreenColor                                                 OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	DMember(float)                                     DisplayDuration                                             OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Enum /Script/UnrealEngineExperimental.EScriptDiagnosticMessageType
/// Size: 0x06
enum class EScriptDiagnosticMessageType : uint8_t
{
	EScriptDiagnosticMessageType__Debug                                              = 0,
	EScriptDiagnosticMessageType__Verbose                                            = 1,
	EScriptDiagnosticMessageType__Normal                                             = 2,
	EScriptDiagnosticMessageType__Warning                                            = 3,
	EScriptDiagnosticMessageType__Error                                              = 4,
	EScriptDiagnosticMessageType__EScriptDiagnosticMessageType_MAX                   = 5
};

