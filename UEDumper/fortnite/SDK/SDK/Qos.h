
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

/// Enum /Script/Qos.EQosResponseType
/// Size: 0x04
enum class EQosResponseType : uint8_t
{
	EQosResponseType__NoResponse                                                     = 0,
	EQosResponseType__Success                                                        = 1,
	EQosResponseType__Failure                                                        = 2,
	EQosResponseType__EQosResponseType_MAX                                           = 3
};

/// Enum /Script/Qos.EQosDatacenterResult
/// Size: 0x04
enum class EQosDatacenterResult : uint8_t
{
	EQosDatacenterResult__Invalid                                                    = 0,
	EQosDatacenterResult__Success                                                    = 1,
	EQosDatacenterResult__Incomplete                                                 = 2,
	EQosDatacenterResult__EQosDatacenterResult_MAX                                   = 3
};

/// Enum /Script/Qos.EQosCompletionResult
/// Size: 0x05
enum class EQosCompletionResult : uint8_t
{
	EQosCompletionResult__Invalid                                                    = 0,
	EQosCompletionResult__Success                                                    = 1,
	EQosCompletionResult__Failure                                                    = 2,
	EQosCompletionResult__Canceled                                                   = 3,
	EQosCompletionResult__EQosCompletionResult_MAX                                   = 4
};

/// Class /Script/Qos.QosBeaconClient
/// Size: 0x0038 (0x000320 - 0x000358)
class AQosBeaconClient : public AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0320   (0x0038)  MISSED


	/// Functions
	// Function /Script/Qos.QosBeaconClient.ServerQosRequest
	// void ServerQosRequest(FString InSessionId);                                                                           // [0x75723b0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Qos.QosBeaconClient.ClientQosResponse
	// void ClientQosResponse(EQosResponseType Response);                                                                    // [0x757232c] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/Qos.QosBeaconHost
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class AQosBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02B8   (0x0008)  MISSED
};

/// Struct /Script/Qos.QosPingServerInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FQosPingServerInfo
{ 
	SDK_UNDEFINED(16,15349) /* FString */              __um(address);                                              // 0x0000   (0x0010)  
	int32_t                                            Port;                                                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Qos.QosDatacenterInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FQosDatacenterInfo
{ 
	SDK_UNDEFINED(16,15350) /* FString */              __um(ID);                                                   // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,15351) /* FString */              __um(RegionId);                                             // 0x0010   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<FQosPingServerInfo>                         Servers;                                                    // 0x0028   (0x0010)  
};

/// Struct /Script/Qos.DatacenterQosInstance
/// Size: 0x0068 (0x000000 - 0x000068)
struct FDatacenterQosInstance
{ 
	FQosDatacenterInfo                                 Definition;                                                 // 0x0000   (0x0038)  
	EQosDatacenterResult                               Result;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            AvgPingMs;                                                  // 0x003C   (0x0004)  
	TArray<int32_t>                                    PingResults;                                                // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0050   (0x0008)  MISSED
	FDateTime                                          LastCheckTimestamp;                                         // 0x0058   (0x0008)  
	bool                                               bUsable;                                                    // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/Qos.QosEvaluator
/// Size: 0x0058 (0x000028 - 0x000080)
class UQosEvaluator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0000   (0x0048)  MISSED
	bool                                               bInProgress;                                                // 0x0048   (0x0001)  
	bool                                               bCancelOperation;                                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x004A   (0x0006)  MISSED
	TArray<FDatacenterQosInstance>                     Datacenters;                                                // 0x0050   (0x0010)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0060   (0x0020)  MISSED
};

/// Struct /Script/Qos.QosSubspaceComparisonParams
/// Size: 0x0010 (0x000000 - 0x000010)
struct FQosSubspaceComparisonParams
{ 
	int32_t                                            MaxNonSubspacePingMs;                                       // 0x0000   (0x0004)  
	int32_t                                            MinSubspacePingMs;                                          // 0x0004   (0x0004)  
	int32_t                                            ConstantMaxToleranceMs;                                     // 0x0008   (0x0004)  
	float                                              ScaledMaxTolerancePct;                                      // 0x000C   (0x0004)  
};

/// Struct /Script/Qos.QosRegionInfo
/// Size: 0x0040 (0x000000 - 0x000040)
struct FQosRegionInfo
{ 
	SDK_UNDEFINED(24,15352) /* FText */                __um(DisplayName);                                          // 0x0000   (0x0018)  
	SDK_UNDEFINED(16,15353) /* FString */              __um(RegionId);                                             // 0x0018   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0028   (0x0001)  
	bool                                               bVisible;                                                   // 0x0029   (0x0001)  
	bool                                               bAutoAssignable;                                            // 0x002A   (0x0001)  
	bool                                               bAllowSubspaceBias;                                         // 0x002B   (0x0001)  
	FQosSubspaceComparisonParams                       SubspaceBiasParams;                                         // 0x002C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/Qos.RegionQosInstance
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRegionQosInstance
{ 
	FQosRegionInfo                                     Definition;                                                 // 0x0000   (0x0040)  
	TArray<FDatacenterQosInstance>                     DatacenterOptions;                                          // 0x0040   (0x0010)  
};

/// Class /Script/Qos.QosRegionManager
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UQosRegionManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            NumTestsPerRegion;                                          // 0x0028   (0x0004)  
	float                                              PingTimeout;                                                // 0x002C   (0x0004)  
	bool                                               bEnableSubspaceBiasOrder;                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	SDK_UNDEFINED(16,15354) /* FString */              __um(SubspaceDelimiter);                                    // 0x0038   (0x0010)  
	TArray<FQosRegionInfo>                             RegionDefinitions;                                          // 0x0048   (0x0010)  
	TArray<FQosDatacenterInfo>                         DatacenterDefinitions;                                      // 0x0058   (0x0010)  
	FDateTime                                          LastCheckTimestamp;                                         // 0x0068   (0x0008)  
	class UQosEvaluator*                               Evaluator;                                                  // 0x0070   (0x0008)  
	EQosCompletionResult                               QosEvalResult;                                              // 0x0078   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	TArray<FRegionQosInstance>                         RegionOptions;                                              // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,15355) /* FString */              __um(ForceRegionId);                                        // 0x0090   (0x0010)  
	bool                                               bRegionForcedViaCommandline;                                // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	SDK_UNDEFINED(16,15356) /* FString */              __um(SelectedRegionId);                                     // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x40];                                      // 0x00B8   (0x0040)  MISSED
};

