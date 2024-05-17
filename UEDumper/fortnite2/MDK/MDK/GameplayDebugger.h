
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: InputCore

/// Class /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator
/// Size: 0x00B8 (0x000290 - 0x000348)
class AGameplayDebuggerCategoryReplicator : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(class APlayerController*)                  OwnerPC                                                     OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x298, 1, 0, 0})
	SMember(FGameplayDebuggerNetPack)                  ReplicatedData                                              OFFSET(getStruct<T>, {0x2A0, 24, 0, 0})
	SMember(FGameplayDebuggerDebugActor)               DebugActor                                                  OFFSET(getStruct<T>, {0x2B8, 16, 0, 0})
	SMember(FGameplayDebuggerVisLogSync)               VisLogSync                                                  OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})
	CMember(class UGameplayDebuggerRenderingComponent*) RenderingComp                                              OFFSET(get<T>, {0x2D8, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetViewPoint
	// void ServerSetViewPoint(FVector InViewLocation, FVector InViewDirection);                                                // [0x74cc298] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetEnabled
	// void ServerSetEnabled(bool bEnable);                                                                                     // [0x74cc1e8] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetDebugActor
	// void ServerSetDebugActor(class AActor* Actor, bool bSelectInEditor);                                                     // [0x74cc0f0] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled
	// void ServerSetCategoryEnabled(int32_t CategoryID, bool bEnable);                                                         // [0x74cbff8] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent
	// void ServerSendExtensionInputEvent(int32_t ExtensionId, int32_t HandlerId);                                              // [0x74cbf10] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent
	// void ServerSendCategoryInputEvent(int32_t CategoryID, int32_t HandlerId);                                                // [0x74cbe28] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerResetViewPoint
	// void ServerResetViewPoint();                                                                                             // [0x74cbddc] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.OnRep_ReplicatedData
	// void OnRep_ReplicatedData();                                                                                             // [0x74cbda8] Final|RequiredAPI|Native|Protected 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ClientDataPackPacket
	// void ClientDataPackPacket(FGameplayDebuggerDataPackRPCParams Params);                                                    // [0x74cbcf8] RequiredAPI|Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/GameplayDebugger.GameplayDebuggerConfig
/// Size: 0x0230 (0x000028 - 0x000258)
class UGameplayDebuggerConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	SMember(FKey)                                      ActivationKey                                               OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FKey)                                      CategoryRowNextKey                                          OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FKey)                                      CategoryRowPrevKey                                          OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FKey)                                      CategorySlot0                                               OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FKey)                                      CategorySlot1                                               OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	SMember(FKey)                                      CategorySlot2                                               OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	SMember(FKey)                                      CategorySlot3                                               OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	SMember(FKey)                                      CategorySlot4                                               OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	SMember(FKey)                                      CategorySlot5                                               OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	SMember(FKey)                                      CategorySlot6                                               OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	SMember(FKey)                                      CategorySlot7                                               OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	SMember(FKey)                                      CategorySlot8                                               OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	SMember(FKey)                                      CategorySlot9                                               OFFSET(getStruct<T>, {0x148, 24, 0, 0})
	DMember(float)                                     DebugCanvasPaddingLeft                                      OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     DebugCanvasPaddingRight                                     OFFSET(get<float>, {0x164, 4, 0, 0})
	DMember(float)                                     DebugCanvasPaddingTop                                       OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     DebugCanvasPaddingBottom                                    OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(bool)                                      bDebugCanvasEnableTextShadow                                OFFSET(get<bool>, {0x170, 1, 0, 0})
	CMember(TArray<FGameplayDebuggerCategoryConfig>)   Categories                                                  OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(TArray<FGameplayDebuggerExtensionConfig>)  Extensions                                                  OFFSET(get<T>, {0x188, 16, 0, 0})
};

/// Class /Script/GameplayDebugger.GameplayDebuggerUserSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class UGameplayDebuggerUserSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bEnableGameplayDebuggerInEditor                             OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(float)                                     MaxViewDistance                                             OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaxViewAngle                                                OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   FontSize                                                    OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/GameplayDebugger.GameplayDebuggerLocalController
/// Size: 0x0060 (0x000028 - 0x000088)
class UGameplayDebuggerLocalController : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class AGameplayDebuggerCategoryReplicator*) CachedReplicator                                           OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class AGameplayDebuggerPlayerManager*)     CachedPlayerManager                                         OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class AActor*)                             DebugActorCandidate                                         OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UFont*)                              HUDFont                                                     OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/GameplayDebugger.GameplayDebuggerPlayerManager
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AGameplayDebuggerPlayerManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(TArray<FGameplayDebuggerPlayerData>)       PlayerData                                                  OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(TArray<class AGameplayDebuggerCategoryReplicator*>) PendingRegistrations                               OFFSET(get<T>, {0x2A8, 16, 0, 0})
};

/// Class /Script/GameplayDebugger.GameplayDebuggerRenderingComponent
/// Size: 0x0060 (0x000550 - 0x0005B0)
class UGameplayDebuggerRenderingComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerDataPackRPCParams
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayDebuggerDataPackRPCParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     CategoryName                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DataPackIdx                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FGameplayDebuggerDataPackHeader)           Header                                                      OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<char>)                              Data                                                        OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerDataPackHeader
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayDebuggerDataPackHeader : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int16_t)                                   DataVersion                                                 OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	DMember(int16_t)                                   SyncCounter                                                 OFFSET(get<int16_t>, {0x2, 2, 0, 0})
	DMember(int32_t)                                   DataSize                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   DataOffset                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bIsCompressed                                               OFFSET(get<bool>, {0xC, 1, 1, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerCategoryData
/// Size: 0x0040 (0x000000 - 0x000040)
class FGameplayDebuggerCategoryData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     CategoryName                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FString>)                           TextLines                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FGameplayDebuggerShape>)            Shapes                                                      OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FGameplayDebuggerDataPackHeader>)   DataPacks                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerShape
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayDebuggerShape : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FVector>)                           ShapeData                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Description                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	CMember(EGameplayDebuggerShape)                    Type                                                        OFFSET(get<T>, {0x24, 1, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerNetPack
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayDebuggerNetPack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AGameplayDebuggerCategoryReplicator*) Owner                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FGameplayDebuggerCategoryData>)     SavedData                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerDebugActor
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayDebuggerDebugActor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ActorName                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int16_t)                                   SyncCounter                                                 OFFSET(get<int16_t>, {0xC, 2, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerVisLogSync
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayDebuggerVisLogSync : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   DeviceIDs                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerInputConfig
/// Size: 0x0030 (0x000000 - 0x000030)
class FGameplayDebuggerInputConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ConfigName                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FKey)                                      Key                                                         OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(bool)                                      bModShift                                                   OFFSET(get<bool>, {0x28, 1, 1, 0})
	DMember(bool)                                      bModCtrl                                                    OFFSET(get<bool>, {0x28, 1, 1, 1})
	DMember(bool)                                      bModAlt                                                     OFFSET(get<bool>, {0x28, 1, 1, 2})
	DMember(bool)                                      bModCmd                                                     OFFSET(get<bool>, {0x28, 1, 1, 3})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerCategoryConfig
/// Size: 0x0030 (0x000000 - 0x000030)
class FGameplayDebuggerCategoryConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   CategoryName                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   SlotIdx                                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(EGameplayDebuggerOverrideMode)             ActiveInGame                                                OFFSET(get<T>, {0x14, 1, 0, 0})
	CMember(EGameplayDebuggerOverrideMode)             ActiveInSimulate                                            OFFSET(get<T>, {0x15, 1, 0, 0})
	CMember(EGameplayDebuggerOverrideMode)             Hidden                                                      OFFSET(get<T>, {0x16, 1, 0, 0})
	DMember(bool)                                      bOverrideSlotIdx                                            OFFSET(get<bool>, {0x18, 1, 1, 0})
	CMember(TArray<FGameplayDebuggerInputConfig>)      InputHandlers                                               OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerExtensionConfig
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayDebuggerExtensionConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ExtensionName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EGameplayDebuggerOverrideMode)             UseExtension                                                OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(TArray<FGameplayDebuggerInputConfig>)      InputHandlers                                               OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerPlayerData
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayDebuggerPlayerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UGameplayDebuggerLocalController*)   Controller                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UInputComponent*)                    InputComponent                                              OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class AGameplayDebuggerCategoryReplicator*) Replicator                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Enum /Script/GameplayDebugger.EGameplayDebuggerOverrideMode
/// Size: 0x03
enum class EGameplayDebuggerOverrideMode : uint8_t
{
	EGameplayDebuggerOverrideMode__Enable                                            = 0,
	EGameplayDebuggerOverrideMode__Disable                                           = 1,
	EGameplayDebuggerOverrideMode__UseDefault                                        = 2
};

/// Enum /Script/GameplayDebugger.EGameplayDebuggerShape
/// Size: 0x12
enum class EGameplayDebuggerShape : uint8_t
{
	EGameplayDebuggerShape__Invalid                                                  = 0,
	EGameplayDebuggerShape__Point                                                    = 1,
	EGameplayDebuggerShape__Segment                                                  = 2,
	EGameplayDebuggerShape__Box                                                      = 3,
	EGameplayDebuggerShape__Cone                                                     = 4,
	EGameplayDebuggerShape__Cylinder                                                 = 5,
	EGameplayDebuggerShape__Circle                                                   = 6,
	EGameplayDebuggerShape__Rectangle                                                = 7,
	EGameplayDebuggerShape__Capsule                                                  = 8,
	EGameplayDebuggerShape__Polygon                                                  = 9,
	EGameplayDebuggerShape__Polyline                                                 = 10,
	EGameplayDebuggerShape__Arrow                                                    = 11
};

