
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: MeshNetwork
/// dependency: NetCore

/// Enum /Script/VotingFramework.EVoteState
/// Size: 0x05
enum class EVoteState : uint8_t
{
	EVoteState__None                                                                 = 0,
	EVoteState__Setup                                                                = 1,
	EVoteState__Active                                                               = 2,
	EVoteState__Completed                                                            = 3,
	EVoteState__EVoteState_MAX                                                       = 4
};

/// Enum /Script/VotingFramework.EVoteSessionState
/// Size: 0x06
enum class EVoteSessionState : uint8_t
{
	EVoteSessionState__None                                                          = 0,
	EVoteSessionState__Setup                                                         = 1,
	EVoteSessionState__Voting                                                        = 2,
	EVoteSessionState__Complete                                                      = 3,
	EVoteSessionState__Shutdown                                                      = 4,
	EVoteSessionState__EVoteSessionState_MAX                                         = 5
};

/// Enum /Script/VotingFramework.EVoteSessionNetworkType
/// Size: 0x04
enum class EVoteSessionNetworkType : uint8_t
{
	EVoteSessionNetworkType__NotDetermined                                           = 0,
	EVoteSessionNetworkType__DedicatedServer                                         = 1,
	EVoteSessionNetworkType__MeshNetwork                                             = 2,
	EVoteSessionNetworkType__EVoteSessionNetworkType_MAX                             = 3
};

/// Struct /Script/VotingFramework.VoteSelectionSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVoteSelectionSettings
{ 
	FGameplayTag                                       VoteSelectionId;                                            // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,15751) /* FText */                __um(VoteSelectionText);                                    // 0x0008   (0x0018)  
};

/// Struct /Script/VotingFramework.VoteSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FVoteSettings
{ 
	FGameplayTag                                       VoteId;                                                     // 0x0000   (0x0004)  
	bool                                               bLocksSelection;                                            // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	SDK_UNDEFINED(24,15752) /* FText */                __um(VoteText);                                             // 0x0008   (0x0018)  
	TArray<FVoteSelectionSettings>                     VoteSelections;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/VotingFramework.VoteSessionSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FVoteSessionSettings
{ 
	FGameplayTag                                       VoteSessionId;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,15753) /* FText */                __um(VoteSessionText);                                      // 0x0008   (0x0018)  
	TArray<FVoteSettings>                              VoteSettingsList;                                           // 0x0020   (0x0010)  
	EVoteSessionNetworkType                            NetworkType;                                                // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/VotingFramework.VoteSessionRuntime
/// Size: 0x001C (0x00000C - 0x000028)
struct FVoteSessionRuntime : FFastArraySerializerItem
{ 
	FName                                              VoteSessionId;                                              // 0x000C   (0x0004)  
	EVoteSessionNetworkType                            NetworkType;                                                // 0x0010   (0x0001)  
	EVoteSessionState                                  VoteSessionState;                                           // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0012   (0x0002)  MISSED
	FName                                              CurrentVoteId;                                              // 0x0014   (0x0004)  
	class UWorld*                                      WorldRef;                                                   // 0x0018   (0x0008)  
	EVoteSessionState                                  Shadow_VoteSessionState;                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/VotingFramework.VoteSessionRuntimeArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FVoteSessionRuntimeArray : FFastArraySerializer
{ 
	class UWorld*                                      WorldRef;                                                   // 0x0108   (0x0008)  
	TArray<FVoteSessionRuntime>                        VotingSessions;                                             // 0x0110   (0x0010)  
};

/// Struct /Script/VotingFramework.VoteRuntime
/// Size: 0x0034 (0x00000C - 0x000040)
struct FVoteRuntime : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UWorld*                                      WorldRef;                                                   // 0x0010   (0x0008)  
	FName                                              VoteSessionId;                                              // 0x0018   (0x0004)  
	FName                                              VoteId;                                                     // 0x001C   (0x0004)  
	TArray<FName>                                      VoteSelectionIds;                                           // 0x0020   (0x0010)  
	EVoteState                                         VoteState;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	FName                                              VoteSelectionWinningResult;                                 // 0x0034   (0x0004)  
	FName                                              Shadow_VoteSelectionWinningResult;                          // 0x0038   (0x0004)  
	EVoteState                                         Shadow_VoteState;                                           // 0x003C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/VotingFramework.VoteRuntimeArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FVoteRuntimeArray : FFastArraySerializer
{ 
	class UWorld*                                      WorldRef;                                                   // 0x0108   (0x0008)  
	TArray<FVoteRuntime>                               VotingResults;                                              // 0x0110   (0x0010)  
};

/// Struct /Script/VotingFramework.VoteSelectionResults
/// Size: 0x002C (0x00000C - 0x000038)
struct FVoteSelectionResults : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UWorld*                                      WorldRef;                                                   // 0x0010   (0x0008)  
	FName                                              VoteSessionId;                                              // 0x0018   (0x0004)  
	FName                                              VoteId;                                                     // 0x001C   (0x0004)  
	FName                                              VoteSelectionId;                                            // 0x0020   (0x0004)  
	int32_t                                            ServerVoteTotal;                                            // 0x0024   (0x0004)  
	int32_t                                            AllServersVoteTotal;                                        // 0x0028   (0x0004)  
	int32_t                                            Shadow_ServerVoteTotal;                                     // 0x002C   (0x0004)  
	int32_t                                            Shadow_AllServersVoteTotal;                                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/VotingFramework.VoteSelectionResultsArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FVoteSelectionResultsArray : FFastArraySerializer
{ 
	class UWorld*                                      WorldRef;                                                   // 0x0108   (0x0008)  
	TArray<FVoteSelectionResults>                      VoteSelectionResults;                                       // 0x0110   (0x0010)  
};

/// Class /Script/VotingFramework.VoteBroadcasterComponent
/// Size: 0x03C0 (0x000150 - 0x000510)
class UVoteBroadcasterComponent : public UMeshNetworkComponent
{ 
public:
	TArray<FVoteSessionSettings>                       VoteSessionSettingsList;                                    // 0x0150   (0x0010)  
	FVoteSessionRuntimeArray                           VoteSessionRuntimeList;                                     // 0x0160   (0x0120)  
	FVoteRuntimeArray                                  VoteRuntimeList;                                            // 0x0280   (0x0120)  
	FVoteSelectionResultsArray                         VoteResultsList;                                            // 0x03A0   (0x0120)  
	SDK_UNDEFINED(80,15754) /* TMap<FUniqueNetIdRepl, FCastedVote> */ __um(PlayerCastedVotesMap);                  // 0x04C0   (0x0050)  


	/// Functions
	// Function /Script/VotingFramework.VoteBroadcasterComponent.VoteStart
	// void VoteStart(FName VoteSessionId, FName VoteId);                                                                    // [0xb8b13bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/VotingFramework.VoteBroadcasterComponent.VoteSetup
	// void VoteSetup(FName VoteSessionId, FName VoteId);                                                                    // [0xb8b12fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/VotingFramework.VoteBroadcasterComponent.VoteSessionShutdown
	// void VoteSessionShutdown(FName VoteSessionId);                                                                        // [0xb8b127c] Final|Native|Public|BlueprintCallable 
	// Function /Script/VotingFramework.VoteBroadcasterComponent.VoteSessionSetup
	// void VoteSessionSetup(FName VoteSessionId, FName StartingVoteId, EVoteSessionNetworkType NetworkType);                // [0xb8b1184] Final|Native|Public|BlueprintCallable 
	// Function /Script/VotingFramework.VoteBroadcasterComponent.VoteSessionComplete
	// void VoteSessionComplete(FName VoteSessionId);                                                                        // [0xb8b1104] Final|Native|Public|BlueprintCallable 
	// Function /Script/VotingFramework.VoteBroadcasterComponent.VoteEnd
	// void VoteEnd(FName VoteSessionId, FName VoteId, FName WinningVoteSelectionId);                                        // [0xb8b1010] Final|Native|Public|BlueprintCallable 
	// Function /Script/VotingFramework.VoteBroadcasterComponent.ServerSubmitVotesAggregated
	// void ServerSubmitVotesAggregated(FName VoteSessionId, FName VoteId, FName VoteSelectionId, int32_t VoteDelta);        // [0xb8b0ea0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/VotingFramework.VoteBroadcasterComponent.OnVoteCasted
	// void OnVoteCasted(FUniqueNetIdRepl& UserNetId, FGameplayTag& VoteSessionId, FGameplayTag& VoteId, FGameplayTag& VoteSelectionId); // [0xb8afc40] Final|Native|Protected|HasOutParms 
};

/// Class /Script/VotingFramework.VoteDispatchSubsystem
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UVoteDispatchSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x90];                                      // 0x0030   (0x0090)  MISSED
	TArray<FVoteSelectionResults>                      VotingResults;                                              // 0x00C0   (0x0010)  
};

/// Class /Script/VotingFramework.VoteInitiationActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AVoteInitiationActor : public AInfo
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0290   (0x0008)  MISSED
	class UVoteBroadcasterComponent*                   VoteBroadcasterComponent;                                   // 0x0298   (0x0008)  
};

/// Class /Script/VotingFramework.VoteListenerComponent
/// Size: 0x00E0 (0x0000A0 - 0x000180)
class UVoteListenerComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,15755) /* FMulticastInlineDelegate */ __um(OnVoteSessionSetupEvent);                          // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,15756) /* FMulticastInlineDelegate */ __um(OnVoteSessionVotingEvent);                         // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,15757) /* FMulticastInlineDelegate */ __um(OnVoteSetupEvent);                                 // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,15758) /* FMulticastInlineDelegate */ __um(OnVoteStartEvent);                                 // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,15759) /* FMulticastInlineDelegate */ __um(OnVoteChangeEvent);                                // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,15760) /* FMulticastInlineDelegate */ __um(OnVoteEndEvent);                                   // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,15761) /* FMulticastInlineDelegate */ __um(OnVoteSessionCompleteEvent);                       // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,15762) /* FMulticastInlineDelegate */ __um(OnVoteSessionShutdownEvent);                       // 0x0110   (0x0010)  
	FGameplayTagContainer                              RequestedVoteSessionIds;                                    // 0x0120   (0x0020)  
	FGameplayTagContainer                              RequestedVoteIds;                                           // 0x0140   (0x0020)  
	FGameplayTagContainer                              RequestedVoteSelectionIds;                                  // 0x0160   (0x0020)  


	/// Functions
	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteStart
	// void OnVoteStart(FGameplayTag& VoteSessionId, FGameplayTag& VoteId, EVoteState VoteState);                            // [0xb8b0a48] Native|Protected|HasOutParms 
	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteSetup
	// void OnVoteSetup(FGameplayTag& VoteSessionId, FGameplayTag& VoteId, EVoteState VoteState);                            // [0xb8b086c] Native|Protected|HasOutParms 
	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteSessionVoting
	// void OnVoteSessionVoting(FGameplayTag& VoteSessionId, FGameplayTag& StartingVoteId, EVoteSessionState SessionState);  // [0xb8b0690] Native|Protected|HasOutParms 
	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteSessionShutdown
	// void OnVoteSessionShutdown(FGameplayTag& VoteSessionId);                                                              // [0x99f9d64] Native|Protected|HasOutParms 
	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteSessionSetup
	// void OnVoteSessionSetup(FGameplayTag& VoteSessionId, FGameplayTag& StartingVoteId, EVoteSessionNetworkType NetworkType, EVoteSessionState SessionState); // [0xb8b0434] Native|Protected|HasOutParms 
	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteSessionComplete
	// void OnVoteSessionComplete(FGameplayTag& VoteSessionId);                                                              // [0xb8b0368] Native|Protected|HasOutParms 
	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteEnd
	// void OnVoteEnd(FGameplayTag& VoteSessionId, FGameplayTag& VoteId, FGameplayTag& WinningVoteSelectionId, EVoteState VoteState); // [0xb8b0104] Native|Protected|HasOutParms 
	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteChange
	// void OnVoteChange(FGameplayTag& VoteSessionId, FGameplayTag& VoteId, FGameplayTag& VoteSelectionId, int32_t ServerVoteTotal, int32_t AllServersVoteTotal); // [0xb8afe24] Native|Protected|HasOutParms 
};

/// Struct /Script/VotingFramework.VoteSelection
/// Size: 0x000C (0x000000 - 0x00000C)
struct FVoteSelection
{ 
	FGameplayTag                                       VoteSessionId;                                              // 0x0000   (0x0004)  
	FGameplayTag                                       VoteId;                                                     // 0x0004   (0x0004)  
	FGameplayTag                                       VoteSelectionId;                                            // 0x0008   (0x0004)  
};

/// Class /Script/VotingFramework.VoteResponderComponent
/// Size: 0x0070 (0x000180 - 0x0001F0)
class UVoteResponderComponent : public UVoteListenerComponent
{ 
public:
	TArray<FVoteSelection>                             SupportedVoteSelections;                                    // 0x0180   (0x0010)  
	bool                                               bShouldLockVotingAfterCasted;                               // 0x0190   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0191   (0x0007)  MISSED
	SDK_UNDEFINED(80,15763) /* TMap<FUniqueNetIdRepl, FCastedVote> */ __um(PlayerCastedVotesMap);                  // 0x0198   (0x0050)  
	FName                                              ActiveVoteSessionId;                                        // 0x01E8   (0x0004)  
	FName                                              ActiveVoteId;                                               // 0x01EC   (0x0004)  


	/// Functions
	// Function /Script/VotingFramework.VoteResponderComponent.ServerCastVoteSelection
	// void ServerCastVoteSelection(FUniqueNetIdRepl InUserId, FCastedVote CastedVote);                                      // [0xb8b0c24] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/VotingFramework.VoteResponderComponent.CastManualVoteSelectionAtIndex
	// void CastManualVoteSelectionAtIndex(class APlayerState* InPlayerState, int32_t SelectionIndex);                       // [0xb8afb7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/VotingFramework.VoteResponderComponent.CastManualVoteSelection
	// void CastManualVoteSelection(class APlayerState* InPlayerState, FGameplayTag& VoteSelection);                         // [0xb8afa70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VotingFramework.VoteResponderComponent.CastDefaultVoteSelection
	// void CastDefaultVoteSelection(class APlayerState* InPlayerState);                                                     // [0xb8af9ec] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/VotingFramework.CastedVote
/// Size: 0x000C (0x000000 - 0x00000C)
struct FCastedVote
{ 
	FName                                              VoteSessionId;                                              // 0x0000   (0x0004)  
	FName                                              VoteId;                                                     // 0x0004   (0x0004)  
	FName                                              VoteSelectionId;                                            // 0x0008   (0x0004)  
};

