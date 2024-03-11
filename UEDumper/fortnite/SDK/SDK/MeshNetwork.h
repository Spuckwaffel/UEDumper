
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils
/// dependency: ReplicationGraph

/// Enum /Script/MeshNetwork.EMeshNetworkNodeType
/// Size: 0x06
enum class EMeshNetworkNodeType : uint8_t
{
	EMeshNetworkNodeType__Root                                                       = 0,
	EMeshNetworkNodeType__Inner                                                      = 1,
	EMeshNetworkNodeType__Edge                                                       = 2,
	EMeshNetworkNodeType__Client                                                     = 3,
	EMeshNetworkNodeType__Unknown                                                    = 4,
	EMeshNetworkNodeType__EMeshNetworkNodeType_MAX                                   = 5
};

/// Enum /Script/MeshNetwork.EMeshNetworkRelevancy
/// Size: 0x04
enum class EMeshNetworkRelevancy : uint8_t
{
	EMeshNetworkRelevancy__NotRelevant                                               = 0,
	EMeshNetworkRelevancy__RelevantToEdgeNodes                                       = 1,
	EMeshNetworkRelevancy__RelevantToClients                                         = 2,
	EMeshNetworkRelevancy__EMeshNetworkRelevancy_MAX                                 = 3
};

/// Class /Script/MeshNetwork.MeshBeaconClient
/// Size: 0x0080 (0x000320 - 0x0003A0)
class AMeshBeaconClient : public AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x0320   (0x0040)  MISSED
	bool                                               bConnectedToRoot;                                           // 0x0360   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0361   (0x0007)  MISSED
	FDateTime                                          MeshPingTime;                                               // 0x0368   (0x0008)  
	SDK_UNDEFINED(16,2598) /* TArray<FString> */       __um(ParentIds);                                            // 0x0370   (0x0010)  
	SDK_UNDEFINED(16,2599) /* FString */               __um(ClientId);                                             // 0x0380   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0390   (0x0010)  MISSED


	/// Functions
	// Function /Script/MeshNetwork.MeshBeaconClient.ServerUpdateMultipleLevelsVisibility
	// void ServerUpdateMultipleLevelsVisibility(TArray<FUpdateLevelVisibilityLevelInfo> LevelVisibilities);                 // [0x7e2b960] Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/MeshNetwork.MeshBeaconClient.ServerUpdateLevelVisibility
	// void ServerUpdateLevelVisibility(FUpdateLevelVisibilityLevelInfo LevelVisibility);                                    // [0x7e2b800] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/MeshNetwork.MeshBeaconClient.ServerSetClientId
	// void ServerSetClientId(FString NewClientId);                                                                          // [0x7e2b72c] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/MeshNetwork.MeshBeaconClient.OnRep_ParentIds
	// void OnRep_ParentIds();                                                                                               // [0x7e2b718] Final|Native|Protected 
	// Function /Script/MeshNetwork.MeshBeaconClient.OnRep_MeshPingTime
	// void OnRep_MeshPingTime();                                                                                            // [0x3e5b89c] Native|Protected     
	// Function /Script/MeshNetwork.MeshBeaconClient.OnRep_ConnectedToRoot
	// void OnRep_ConnectedToRoot();                                                                                         // [0x7e2b704] Final|Native|Protected 
};

/// Class /Script/MeshNetwork.MeshBeaconHost
/// Size: 0x0008 (0x0003D0 - 0x0003D8)
class AMeshBeaconHost : public AOnlineBeaconHost
{ 
public:
	int32_t                                            MaxConnections;                                             // 0x03D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03D4   (0x0004)  MISSED
};

/// Class /Script/MeshNetwork.MeshBeaconHostObject
/// Size: 0x0018 (0x0002B8 - 0x0002D0)
class AMeshBeaconHostObject : public AOnlineBeaconHostObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x02B8   (0x0018)  MISSED
};

/// Class /Script/MeshNetwork.MeshConnection
/// Size: 0x0000 (0x001E90 - 0x001E90)
class UMeshConnection : public UIpConnection
{ 
public:
};

/// Class /Script/MeshNetwork.MeshNetDriver
/// Size: 0x0018 (0x0008E8 - 0x000900)
class UMeshNetDriver : public UIpNetDriver
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x08E8   (0x0008)  MISSED
	TArray<class AActor*>                              ClientDormantDynamicActors;                                 // 0x08F0   (0x0010)  
};

/// Class /Script/MeshNetwork.MeshNetworkComponent
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UMeshNetworkComponent : public UActorComponent
{ 
public:
	EMeshNetworkRelevancy                              MeshRelevancy;                                              // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	SDK_UNDEFINED(80,2600) /* TMap<FString, FAggregatedFunction> */ __um(AggregatedFunctions);                     // 0x00A8   (0x0050)  
	SDK_UNDEFINED(80,2601) /* TMap<FName, FAggregatedFunctionConfig> */ __um(AggregatedFunctionConfigs);           // 0x00F8   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0148   (0x0008)  MISSED


	/// Functions
	// Function /Script/MeshNetwork.MeshNetworkComponent.IsConnectedToMeshRoot
	// bool IsConnectedToMeshRoot();                                                                                         // [0x7e2b6b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshNetwork.MeshNetworkComponent.GetMeshNetworkNodeType
	// EMeshNetworkNodeType GetMeshNetworkNodeType();                                                                        // [0x7e2af40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MeshNetwork.MeshNetworkSubsystem
/// Size: 0x00D8 (0x000030 - 0x000108)
class UMeshNetworkSubsystem : public UGameInstanceSubsystem
{ 
public:
	SDK_UNDEFINED(16,2602) /* FMulticastInlineDelegate */ __um(OnMeshNodeTypeChanged);                             // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,2603) /* FMulticastInlineDelegate */ __um(OnConnectedToRootChanged);                          // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,2604) /* FMulticastInlineDelegate */ __um(OnGameServerNodeTypeChanged);                       // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,2605) /* FMulticastInlineDelegate */ __um(OnMeshMetaDataUpdated);                             // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,2606) /* FMulticastInlineDelegate */ __um(OnMeshPlayerRequested);                             // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x0080   (0x0030)  MISSED
	EMeshNetworkNodeType                               NodeType;                                                   // 0x00B0   (0x0001)  
	EMeshNetworkNodeType                               GameServerNodeType;                                         // 0x00B1   (0x0001)  
	bool                                               bConnectedToRoot;                                           // 0x00B2   (0x0001)  
	bool                                               bMetadataReceived;                                          // 0x00B3   (0x0001)  
	unsigned char                                      UnknownData01_6[0x54];                                      // 0x00B4   (0x0054)  MISSED


	/// Functions
	// Function /Script/MeshNetwork.MeshNetworkSubsystem.SetMetaDataWithKey
	// void SetMetaDataWithKey(FName Key, FMeshMetaDataStruct& MetaData);                                                    // [0x7e2ba64] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshNetwork.MeshNetworkSubsystem.SetMetaData
	// void SetMetaData(FMeshMetaDataStruct& MetaData);                                                                      // [0x6474f30] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshNetwork.MeshNetworkSubsystem.GetMetaDataWithKey
	// bool GetMetaDataWithKey(FName Key, FMeshMetaDataStruct& MetaData);                                                    // [0x7e2af7c] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshNetwork.MeshNetworkSubsystem.GetMetadata
	// void GetMetadata(FMeshMetaDataStruct& MetaData);                                                                      // [0x6474f30] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshNetwork.MeshNetworkSubsystem.GetMeshNetworkNodeType
	// EMeshNetworkNodeType GetMeshNetworkNodeType();                                                                        // [0x7e2af64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshNetwork.MeshNetworkSubsystem.GetGameServerNodeType
	// EMeshNetworkNodeType GetGameServerNodeType();                                                                         // [0x7e2af28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshNetwork.MeshNetworkSubsystem.GetConnectedToRoot
	// bool GetConnectedToRoot();                                                                                            // [0x7e2af10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshNetwork.MeshNetworkSubsystem.EnableMeshReplication
	// void EnableMeshReplication(class AActor* Actor, class UClass* MeshComponentClass);                                    // [0x7e2ae44] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshNetwork.MeshNetworkSubsystem.DisableMeshReplication
	// void DisableMeshReplication(class AActor* Actor);                                                                     // [0x7e2add4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MeshNetwork.MeshReplicationGraphConnection
/// Size: 0x0000 (0x000378 - 0x000378)
class UMeshReplicationGraphConnection : public UNetReplicationGraphConnection
{ 
public:
};

/// Class /Script/MeshNetwork.MeshReplicationGraph
/// Size: 0x0000 (0x000570 - 0x000570)
class UMeshReplicationGraph : public UReplicationGraph
{ 
public:
};

/// Struct /Script/MeshNetwork.AggregatedFunction
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAggregatedFunction
{ 
	class UFunction*                                   Function;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
};

/// Struct /Script/MeshNetwork.AggregatedFunctionConfig
/// Size: 0x0060 (0x000000 - 0x000060)
struct FAggregatedFunctionConfig
{ 
	double                                             AggregationTimeout;                                         // 0x0000   (0x0008)  
	bool                                               bAggregationEnabled;                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	SDK_UNDEFINED(80,2607) /* TSet<FName> */           __um(NoAggregationParameters);                              // 0x0010   (0x0050)  
};

/// Struct /Script/MeshNetwork.MeshMetaDataStruct
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMeshMetaDataStruct
{ 
};

