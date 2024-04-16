
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/NetworkPrediction.NetworkPredictionComponent
/// Size: 0x01F0 (0x0000A0 - 0x000290)
class UNetworkPredictionComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	SMember(FNetworkPredictionProxy)                   NetworkPredictionProxy                                      OFFSET(getStruct<T>, {0xA0, 176, 0, 0})
	SMember(FReplicationProxy)                         ReplicationProxy_ServerRPC                                  OFFSET(getStruct<T>, {0x150, 80, 0, 0})
	SMember(FReplicationProxy)                         ReplicationProxy_Autonomous                                 OFFSET(getStruct<T>, {0x1A0, 80, 0, 0})
	SMember(FReplicationProxy)                         ReplicationProxy_Simulated                                  OFFSET(getStruct<T>, {0x1F0, 80, 0, 0})
	SMember(FReplicationProxy)                         ReplicationProxy_Replay                                     OFFSET(getStruct<T>, {0x240, 80, 0, 0})


	/// Functions
	// Function /Script/NetworkPrediction.NetworkPredictionComponent.ServerReceiveClientInput
	// void ServerReceiveClientInput(FServerReplicationRPCParameter ProxyParameter);                                            // [0x7e84714] Net|Native|Event|Protected|NetServer|NetValidate 
};

/// Class /Script/NetworkPrediction.NetworkPredictionPhysicsComponent
/// Size: 0x0120 (0x0000A0 - 0x0001C0)
class UNetworkPredictionPhysicsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FNetworkPredictionProxy)                   NetworkPredictionProxy                                      OFFSET(getStruct<T>, {0xA0, 176, 0, 0})
	CMember(class UPrimitiveComponent*)                UpdatedPrimitive                                            OFFSET(get<T>, {0x150, 8, 0, 0})
	SMember(FReplicationProxy)                         ReplicationProxy                                            OFFSET(getStruct<T>, {0x160, 80, 0, 0})
};

/// Class /Script/NetworkPrediction.NetworkPredictionReplicatedManager
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ANetworkPredictionReplicatedManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FSharedPackageMap)                         SharedPackageMap                                            OFFSET(getStruct<T>, {0x290, 16, 0, 0})
};

/// Class /Script/NetworkPrediction.NetworkPredictionSettingsObject
/// Size: 0x0040 (0x000028 - 0x000068)
class UNetworkPredictionSettingsObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FNetworkPredictionSettings)                Settings                                                    OFFSET(getStruct<T>, {0x28, 48, 0, 0})
	CMember(TArray<FNetworkPredictionDevHUD>)          DevHUDs                                                     OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/NetworkPrediction.NetworkPredictionWorldManager
/// Size: 0x0640 (0x000030 - 0x000670)
class UNetworkPredictionWorldManager : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	CMember(class ANetworkPredictionReplicatedManager*) ReplicatedManager                                          OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/NetworkPrediction.NetworkPredictionProxy
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FNetworkPredictionProxy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UNetworkPredictionWorldManager*)     WorldManager                                                OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Struct /Script/NetworkPrediction.SharedPackageMapItem
/// Size: 0x0020 (0x000000 - 0x000020)
class FSharedPackageMapItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TWeakObjectPtr<UObject*>)                  SoftPtr                                                     OFFSET(get<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/NetworkPrediction.SharedPackageMap
/// Size: 0x0010 (0x000000 - 0x000010)
class FSharedPackageMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FSharedPackageMapItem>)             Items                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/NetworkPrediction.ReplicationProxy
/// Size: 0x0050 (0x000000 - 0x000050)
class FReplicationProxy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/NetworkPrediction.ServerReplicationRPCParameter
/// Size: 0x0018 (0x000000 - 0x000018)
class FServerReplicationRPCParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/NetworkPrediction.NetworkPredictionSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FNetworkPredictionSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ENetworkPredictionTickingPolicy)           PreferredTickingPolicy                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UClass*)                             ReplicatedManagerClassOverride                              OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   FixedTickFrameRate                                          OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bForceEngineFixTickForcePhysics                             OFFSET(get<bool>, {0x14, 1, 0, 0})
	CMember(ENetworkLOD)                               SimulatedProxyNetworkLOD                                    OFFSET(get<T>, {0x15, 1, 0, 0})
	DMember(int32_t)                                   FixedTickInterpolationBufferedMS                            OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   IndependentTickInterpolationBufferedMS                      OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   IndependentTickInterpolationMaxBufferedMS                   OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   FixedTickInputSendCount                                     OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   IndependentTickInputSendCount                               OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MaximumRemoteInputFaultLimit                                OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Struct /Script/NetworkPrediction.NetworkPredictionDevHUDItem
/// Size: 0x0028 (0x000000 - 0x000028)
class FNetworkPredictionDevHUDItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   DisplayName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ExecCommand                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bAutoBack                                                   OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bRequirePIE                                                 OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(bool)                                      bRequireNotPIE                                              OFFSET(get<bool>, {0x22, 1, 0, 0})
};

/// Struct /Script/NetworkPrediction.NetworkPredictionDevHUD
/// Size: 0x0028 (0x000000 - 0x000028)
class FNetworkPredictionDevHUD : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   HUDName                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNetworkPredictionDevHUDItem>)      Items                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bRequirePIE                                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bRequireNotPIE                                              OFFSET(get<bool>, {0x21, 1, 0, 0})
};

/// Enum /Script/NetworkPrediction.ENetworkPredictionTickingPolicy
/// Size: 0x04
enum class ENetworkPredictionTickingPolicy : uint8_t
{
	ENetworkPredictionTickingPolicy__Independent                                     = 1,
	ENetworkPredictionTickingPolicy__Fixed                                           = 2,
	ENetworkPredictionTickingPolicy__All                                             = 3,
	ENetworkPredictionTickingPolicy__ENetworkPredictionTickingPolicy_MAX             = 4
};

/// Enum /Script/NetworkPrediction.ENetworkLOD
/// Size: 0x05
enum class ENetworkLOD : uint8_t
{
	ENetworkLOD__Interpolated                                                        = 1,
	ENetworkLOD__SimExtrapolate                                                      = 2,
	ENetworkLOD__ForwardPredict                                                      = 4,
	ENetworkLOD__All                                                                 = 7,
	ENetworkLOD__ENetworkLOD_MAX                                                     = 8
};

/// Enum /Script/NetworkPrediction.ENetworkPredictionStateRead
/// Size: 0x03
enum class ENetworkPredictionStateRead : uint8_t
{
	ENetworkPredictionStateRead__Simulation                                          = 0,
	ENetworkPredictionStateRead__Presentation                                        = 1,
	ENetworkPredictionStateRead__ENetworkPredictionStateRead_MAX                     = 2
};

