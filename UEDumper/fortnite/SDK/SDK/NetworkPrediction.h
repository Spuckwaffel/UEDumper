
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

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

/// Struct /Script/NetworkPrediction.NetworkPredictionProxy
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FNetworkPredictionProxy
{ 
	class UNetworkPredictionWorldManager*              WorldManager;                                               // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/NetworkPrediction.ReplicationProxy
/// Size: 0x0050 (0x000000 - 0x000050)
struct FReplicationProxy
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Class /Script/NetworkPrediction.NetworkPredictionComponent
/// Size: 0x01F0 (0x0000A0 - 0x000290)
class UNetworkPredictionComponent : public UActorComponent
{ 
public:
	FNetworkPredictionProxy                            NetworkPredictionProxy;                                     // 0x00A0   (0x00B0)  
	FReplicationProxy                                  ReplicationProxy_ServerRPC;                                 // 0x0150   (0x0050)  
	FReplicationProxy                                  ReplicationProxy_Autonomous;                                // 0x01A0   (0x0050)  
	FReplicationProxy                                  ReplicationProxy_Simulated;                                 // 0x01F0   (0x0050)  
	FReplicationProxy                                  ReplicationProxy_Replay;                                    // 0x0240   (0x0050)  


	/// Functions
	// Function /Script/NetworkPrediction.NetworkPredictionComponent.ServerReceiveClientInput
	// void ServerReceiveClientInput(FServerReplicationRPCParameter ProxyParameter);                                         // [0x78f3160] Net|Native|Event|Protected|NetServer|NetValidate 
};

/// Class /Script/NetworkPrediction.NetworkPredictionPhysicsComponent
/// Size: 0x0120 (0x0000A0 - 0x0001C0)
class UNetworkPredictionPhysicsComponent : public UActorComponent
{ 
public:
	FNetworkPredictionProxy                            NetworkPredictionProxy;                                     // 0x00A0   (0x00B0)  
	class UPrimitiveComponent*                         UpdatedPrimitive;                                           // 0x0150   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0158   (0x0008)  MISSED
	FReplicationProxy                                  ReplicationProxy;                                           // 0x0160   (0x0050)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x01B0   (0x0010)  MISSED
};

/// Struct /Script/NetworkPrediction.SharedPackageMapItem
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSharedPackageMapItem
{ 
	SDK_UNDEFINED(32,2622) /* TWeakObjectPtr<UObject*> */ __um(SoftPtr);                                           // 0x0000   (0x0020)  
};

/// Struct /Script/NetworkPrediction.SharedPackageMap
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSharedPackageMap
{ 
	TArray<FSharedPackageMapItem>                      Items;                                                      // 0x0000   (0x0010)  
};

/// Class /Script/NetworkPrediction.NetworkPredictionReplicatedManager
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ANetworkPredictionReplicatedManager : public AActor
{ 
public:
	FSharedPackageMap                                  SharedPackageMap;                                           // 0x0290   (0x0010)  
};

/// Struct /Script/NetworkPrediction.NetworkPredictionSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNetworkPredictionSettings
{ 
	ENetworkPredictionTickingPolicy                    PreferredTickingPolicy;                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UClass*                                      ReplicatedManagerClassOverride;                             // 0x0008   (0x0008)  
	int32_t                                            FixedTickFrameRate;                                         // 0x0010   (0x0004)  
	bool                                               bForceEngineFixTickForcePhysics;                            // 0x0014   (0x0001)  
	ENetworkLOD                                        SimulatedProxyNetworkLOD;                                   // 0x0015   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	int32_t                                            FixedTickInterpolationBufferedMS;                           // 0x0018   (0x0004)  
	int32_t                                            IndependentTickInterpolationBufferedMS;                     // 0x001C   (0x0004)  
	int32_t                                            IndependentTickInterpolationMaxBufferedMS;                  // 0x0020   (0x0004)  
	int32_t                                            FixedTickInputSendCount;                                    // 0x0024   (0x0004)  
	int32_t                                            IndependentTickInputSendCount;                              // 0x0028   (0x0004)  
	int32_t                                            MaximumRemoteInputFaultLimit;                               // 0x002C   (0x0004)  
};

/// Struct /Script/NetworkPrediction.NetworkPredictionDevHUDItem
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNetworkPredictionDevHUDItem
{ 
	SDK_UNDEFINED(16,2623) /* FString */               __um(DisplayName);                                          // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2624) /* FString */               __um(ExecCommand);                                          // 0x0010   (0x0010)  
	bool                                               bAutoBack;                                                  // 0x0020   (0x0001)  
	bool                                               bRequirePIE;                                                // 0x0021   (0x0001)  
	bool                                               bRequireNotPIE;                                             // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0023   (0x0005)  MISSED
};

/// Struct /Script/NetworkPrediction.NetworkPredictionDevHUD
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNetworkPredictionDevHUD
{ 
	SDK_UNDEFINED(16,2625) /* FString */               __um(HUDName);                                              // 0x0000   (0x0010)  
	TArray<FNetworkPredictionDevHUDItem>               Items;                                                      // 0x0010   (0x0010)  
	bool                                               bRequirePIE;                                                // 0x0020   (0x0001)  
	bool                                               bRequireNotPIE;                                             // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Class /Script/NetworkPrediction.NetworkPredictionSettingsObject
/// Size: 0x0040 (0x000028 - 0x000068)
class UNetworkPredictionSettingsObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FNetworkPredictionSettings                         Settings;                                                   // 0x0028   (0x0030)  
	TArray<FNetworkPredictionDevHUD>                   DevHUDs;                                                    // 0x0058   (0x0010)  
};

/// Class /Script/NetworkPrediction.NetworkPredictionWorldManager
/// Size: 0x0640 (0x000030 - 0x000670)
class UNetworkPredictionWorldManager : public UWorldSubsystem
{ 
public:
	class ANetworkPredictionReplicatedManager*         ReplicatedManager;                                          // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x638];                                     // 0x0038   (0x0638)  MISSED
};

/// Struct /Script/NetworkPrediction.ServerReplicationRPCParameter
/// Size: 0x0018 (0x000000 - 0x000018)
struct FServerReplicationRPCParameter
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

