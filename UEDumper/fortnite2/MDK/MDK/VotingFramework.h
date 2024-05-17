
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: MeshNetwork
/// dependency: NetCore

/// Class /Script/VotingFramework.VoteBroadcasterComponent
/// Size: 0x03C0 (0x000150 - 0x000510)
class UVoteBroadcasterComponent : public UMeshNetworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	CMember(TArray<FVoteSessionSettings>)              VoteSessionSettingsList                                     OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FVoteSessionRuntimeArray)                  VoteSessionRuntimeList                                      OFFSET(getStruct<T>, {0x160, 288, 0, 0})
	SMember(FVoteRuntimeArray)                         VoteRuntimeList                                             OFFSET(getStruct<T>, {0x280, 288, 0, 0})
	SMember(FVoteSelectionResultsArray)                VoteResultsList                                             OFFSET(getStruct<T>, {0x3A0, 288, 0, 0})
	CMember(TMap<FUniqueNetIdRepl, FCastedVote>)       PlayerCastedVotesMap                                        OFFSET(get<T>, {0x4C0, 80, 0, 0})


	/// Functions
	// Function /Script/VotingFramework.VoteBroadcasterComponent.VoteStart
	// void VoteStart(FName VoteSessionId, FName VoteId);                                                                       // [0xd1e88e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/VotingFramework.VoteBroadcasterComponent.VoteSetup
	// void VoteSetup(FName VoteSessionId, FName VoteId);                                                                       // [0xd1e86e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VotingFramework.VoteBroadcasterComponent.VoteSessionShutdown
	// void VoteSessionShutdown(FName VoteSessionId);                                                                           // [0xd1e85b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/VotingFramework.VoteBroadcasterComponent.VoteSessionSetup
	// void VoteSessionSetup(FName VoteSessionId, FName StartingVoteId, EVoteSessionNetworkType NetworkType);                   // [0xd1e82e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/VotingFramework.VoteBroadcasterComponent.VoteSessionComplete
	// void VoteSessionComplete(FName VoteSessionId);                                                                           // [0xd1e81bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/VotingFramework.VoteBroadcasterComponent.VoteEnd
	// void VoteEnd(FName VoteSessionId, FName VoteId, FName WinningVoteSelectionId);                                           // [0xd1e7ee8] Final|Native|Public|BlueprintCallable 
	// Function /Script/VotingFramework.VoteBroadcasterComponent.ServerSubmitVotesAggregated
	// void ServerSubmitVotesAggregated(FName VoteSessionId, FName VoteId, FName VoteSelectionId, int32_t VoteDelta);           // [0xd1e7b08] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/VotingFramework.VoteBroadcasterComponent.OnVoteCasted
	// void OnVoteCasted(FUniqueNetIdRepl& UserNetId, FGameplayTag& VoteSessionId, FGameplayTag& VoteId, FGameplayTag& VoteSelectionId); // [0xd1e6ab8] Final|Native|Protected|HasOutParms 
};

/// Class /Script/VotingFramework.VoteDispatchSubsystem
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UVoteDispatchSubsystem : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FVoteSelectionResults>)             VotingResults                                               OFFSET(get<T>, {0xC0, 16, 0, 0})
};

/// Class /Script/VotingFramework.VoteInitiationActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AVoteInitiationActor : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class UVoteBroadcasterComponent*)          VoteBroadcasterComponent                                    OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Script/VotingFramework.VoteListenerComponent
/// Size: 0x00E0 (0x0000A0 - 0x000180)
class UVoteListenerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FMulticastInlineDelegate)                  OnVoteSessionSetupEvent                                     OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVoteSessionVotingEvent                                    OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVoteSetupEvent                                            OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVoteStartEvent                                            OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVoteChangeEvent                                           OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVoteEndEvent                                              OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVoteSessionCompleteEvent                                  OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVoteSessionShutdownEvent                                  OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FGameplayTagContainer)                     RequestedVoteSessionIds                                     OFFSET(getStruct<T>, {0x120, 32, 0, 0})
	SMember(FGameplayTagContainer)                     RequestedVoteIds                                            OFFSET(getStruct<T>, {0x140, 32, 0, 0})
	SMember(FGameplayTagContainer)                     RequestedVoteSelectionIds                                   OFFSET(getStruct<T>, {0x160, 32, 0, 0})


	/// Functions
	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteStart
	// void OnVoteStart(FGameplayTag& VoteSessionId, FGameplayTag& VoteId, EVoteState VoteState);                               // [0xd1e77f4] Native|Protected|HasOutParms 
	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteSetup
	// void OnVoteSetup(FGameplayTag& VoteSessionId, FGameplayTag& VoteId, EVoteState VoteState);                               // [0xd1e7618] Native|Protected|HasOutParms 
	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteSessionVoting
	// void OnVoteSessionVoting(FGameplayTag& VoteSessionId, FGameplayTag& StartingVoteId, EVoteSessionState SessionState);     // [0xd1e743c] Native|Protected|HasOutParms 
	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteSessionShutdown
	// void OnVoteSessionShutdown(FGameplayTag& VoteSessionId);                                                                 // [0xa995fa8] Native|Protected|HasOutParms 
	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteSessionSetup
	// void OnVoteSessionSetup(FGameplayTag& VoteSessionId, FGameplayTag& StartingVoteId, EVoteSessionNetworkType NetworkType, EVoteSessionState SessionState); // [0xd1e71e0] Native|Protected|HasOutParms 
	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteSessionComplete
	// void OnVoteSessionComplete(FGameplayTag& VoteSessionId);                                                                 // [0xa995e10] Native|Protected|HasOutParms 
	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteEnd
	// void OnVoteEnd(FGameplayTag& VoteSessionId, FGameplayTag& VoteId, FGameplayTag& WinningVoteSelectionId, EVoteState VoteState); // [0xd1e6f7c] Native|Protected|HasOutParms 
	// Function /Script/VotingFramework.VoteListenerComponent.OnVoteChange
	// void OnVoteChange(FGameplayTag& VoteSessionId, FGameplayTag& VoteId, FGameplayTag& VoteSelectionId, int32_t ServerVoteTotal, int32_t AllServersVoteTotal); // [0xd1e6c9c] Native|Protected|HasOutParms 
};

/// Class /Script/VotingFramework.VoteResponderComponent
/// Size: 0x0070 (0x000180 - 0x0001F0)
class UVoteResponderComponent : public UVoteListenerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(TArray<FVoteSelection>)                    SupportedVoteSelections                                     OFFSET(get<T>, {0x180, 16, 0, 0})
	DMember(bool)                                      bShouldLockVotingAfterCasted                                OFFSET(get<bool>, {0x190, 1, 0, 0})
	CMember(TMap<FUniqueNetIdRepl, FCastedVote>)       PlayerCastedVotesMap                                        OFFSET(get<T>, {0x198, 80, 0, 0})
	SMember(FName)                                     ActiveVoteSessionId                                         OFFSET(getStruct<T>, {0x1E8, 4, 0, 0})
	SMember(FName)                                     ActiveVoteId                                                OFFSET(getStruct<T>, {0x1EC, 4, 0, 0})


	/// Functions
	// Function /Script/VotingFramework.VoteResponderComponent.ServerCastVoteSelection
	// void ServerCastVoteSelection(FUniqueNetIdRepl InUserId, FCastedVote CastedVote);                                         // [0xd1e79d0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/VotingFramework.VoteResponderComponent.CastManualVoteSelectionAtIndex
	// void CastManualVoteSelectionAtIndex(class APlayerState* InPlayerState, int32_t SelectionIndex);                          // [0xd1e69f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/VotingFramework.VoteResponderComponent.CastManualVoteSelection
	// void CastManualVoteSelection(class APlayerState* InPlayerState, FGameplayTag& VoteSelection);                            // [0xd1e68e8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VotingFramework.VoteResponderComponent.CastDefaultVoteSelection
	// void CastDefaultVoteSelection(class APlayerState* InPlayerState);                                                        // [0xd1e6864] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/VotingFramework.CastedVote
/// Size: 0x000C (0x000000 - 0x00000C)
class FCastedVote : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     VoteSessionId                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     VoteId                                                      OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     VoteSelectionId                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/VotingFramework.VoteSelection
/// Size: 0x000C (0x000000 - 0x00000C)
class FVoteSelection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              VoteSessionId                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              VoteId                                                      OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FGameplayTag)                              VoteSelectionId                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/VotingFramework.VoteSelectionSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FVoteSelectionSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              VoteSelectionId                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     VoteSelectionText                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/VotingFramework.VoteSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FVoteSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTag)                              VoteId                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bLocksSelection                                             OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FText)                                     VoteText                                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FVoteSelectionSettings>)            VoteSelections                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/VotingFramework.VoteSessionSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FVoteSessionSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              VoteSessionId                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     VoteSessionText                                             OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FVoteSettings>)                     VoteSettingsList                                            OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(EVoteSessionNetworkType)                   NetworkType                                                 OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Struct /Script/VotingFramework.VoteSelectionResults
/// Size: 0x002C (0x00000C - 0x000038)
class FVoteSelectionResults : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UWorld*)                             WorldRef                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     VoteSessionId                                               OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     VoteId                                                      OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	SMember(FName)                                     VoteSelectionId                                             OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   ServerVoteTotal                                             OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   AllServersVoteTotal                                         OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   Shadow_ServerVoteTotal                                      OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   Shadow_AllServersVoteTotal                                  OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/VotingFramework.VoteSelectionResultsArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FVoteSelectionResultsArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(class UWorld*)                             WorldRef                                                    OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TArray<FVoteSelectionResults>)             VoteSelectionResults                                        OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/VotingFramework.VoteRuntime
/// Size: 0x0034 (0x00000C - 0x000040)
class FVoteRuntime : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UWorld*)                             WorldRef                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     VoteSessionId                                               OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     VoteId                                                      OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	CMember(TArray<FName>)                             VoteSelectionIds                                            OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(EVoteState)                                VoteState                                                   OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FName)                                     VoteSelectionWinningResult                                  OFFSET(getStruct<T>, {0x34, 4, 0, 0})
	SMember(FName)                                     Shadow_VoteSelectionWinningResult                           OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	CMember(EVoteState)                                Shadow_VoteState                                            OFFSET(get<T>, {0x3C, 1, 0, 0})
};

/// Struct /Script/VotingFramework.VoteRuntimeArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FVoteRuntimeArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(class UWorld*)                             WorldRef                                                    OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TArray<FVoteRuntime>)                      VotingResults                                               OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/VotingFramework.VoteSessionRuntime
/// Size: 0x001C (0x00000C - 0x000028)
class FVoteSessionRuntime : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     VoteSessionId                                               OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	CMember(EVoteSessionNetworkType)                   NetworkType                                                 OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(EVoteSessionState)                         VoteSessionState                                            OFFSET(get<T>, {0x11, 1, 0, 0})
	SMember(FName)                                     CurrentVoteId                                               OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	CMember(class UWorld*)                             WorldRef                                                    OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(EVoteSessionState)                         Shadow_VoteSessionState                                     OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/VotingFramework.VoteSessionRuntimeArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FVoteSessionRuntimeArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(class UWorld*)                             WorldRef                                                    OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TArray<FVoteSessionRuntime>)               VotingSessions                                              OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Enum /Script/VotingFramework.EVoteState
/// Size: 0x04
enum class EVoteState : uint8_t
{
	EVoteState__None                                                                 = 0,
	EVoteState__Setup                                                                = 1,
	EVoteState__Active                                                               = 2,
	EVoteState__Completed                                                            = 3
};

/// Enum /Script/VotingFramework.EVoteSessionState
/// Size: 0x05
enum class EVoteSessionState : uint8_t
{
	EVoteSessionState__None                                                          = 0,
	EVoteSessionState__Setup                                                         = 1,
	EVoteSessionState__Voting                                                        = 2,
	EVoteSessionState__Complete                                                      = 3,
	EVoteSessionState__Shutdown                                                      = 4
};

/// Enum /Script/VotingFramework.EVoteSessionNetworkType
/// Size: 0x03
enum class EVoteSessionNetworkType : uint8_t
{
	EVoteSessionNetworkType__NotDetermined                                           = 0,
	EVoteSessionNetworkType__DedicatedServer                                         = 1,
	EVoteSessionNetworkType__MeshNetwork                                             = 2
};

