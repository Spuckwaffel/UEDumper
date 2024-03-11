
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: JsonUtilities

/// Class /Script/McpProfileSys.McpItemAware
/// Size: 0x0000 (0x000028 - 0x000028)
class UMcpItemAware : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/McpProfileSys.McpItemDefinitionBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UMcpItemDefinitionBase : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/McpProfileSys.McpProfile
/// Size: 0x0118 (0x000028 - 0x000140)
class UMcpProfile : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(bool)                                      AllowSubscriptionToNotificationsService                     OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FString)                                   DebugName                                                   OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	DMember(bool)                                      bProfileLockOperationPending                                OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bProfileUnlockOperationPending                              OFFSET(get<bool>, {0xB1, 1, 0, 0})
	DMember(bool)                                      bEnableMocks                                                OFFSET(get<bool>, {0xB2, 1, 0, 0})
	CMember(class UMcpProfileGroup*)                   ProfileGroup                                                OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FString)                                   ProfileId                                                   OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	DMember(int64_t)                                   ProfileRevision                                             OFFSET(get<int64_t>, {0xE0, 8, 0, 0})
	DMember(int32_t)                                   FullProfileQueryQueued                                      OFFSET(get<int32_t>, {0xE8, 4, 0, 0})
	DMember(bool)                                      bProfileWriteLocked                                         OFFSET(get<bool>, {0xEC, 1, 0, 0})
	SMember(FDateTime)                                 ProfileWriteLockExpireTime                                  OFFSET(getStruct<T>, {0xF0, 8, 0, 0})
	DMember(bool)                                      QueuedProfileUpdatingEnabled                                OFFSET(get<bool>, {0xF8, 1, 0, 0})


	/// Functions
	// Function /Script/McpProfileSys.McpProfile.UnlockProfileForWrite
	// void UnlockProfileForWrite(FString Code, FDedicatedServerUrlContext& Context);                                           // [0xffff80099b780000] Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 
	// Function /Script/McpProfileSys.McpProfile.QueryPublicProfile
	// void QueryPublicProfile(FBaseUrlContext& Context);                                                                       // [0xffff80099b780000] Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 
	// Function /Script/McpProfileSys.McpProfile.QueryProfile
	// void QueryProfile(FBaseUrlContext& Context);                                                                             // [0xffff80099b780000] Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 
	// Function /Script/McpProfileSys.McpProfile.LockProfileForWrite
	// void LockProfileForWrite(FString Code, int32_t Timeout, FDedicatedServerUrlContext& Context);                            // [0xffff80099b780000] Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 
	// Function /Script/McpProfileSys.McpProfile.DeleteProfile
	// void DeleteProfile(FClientUrlContext& Context);                                                                          // [0xffff80099b780000] Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 
	// Function /Script/McpProfileSys.McpProfile.DeleteAllProfiles
	// void DeleteAllProfiles(FClientUrlContext& Context);                                                                      // [0xffff80099b780000] Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 
};

/// Class /Script/McpProfileSys.McpProfileGroup
/// Size: 0x0258 (0x000028 - 0x000280)
class UMcpProfileGroup : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	DMember(int32_t)                                   DelayMcpResults                                             OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
	DMember(int32_t)                                   WeeklyIntervalStartDay                                      OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	CMember(TArray<FProfileEntry>)                     ProfileList                                                 OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FString)                                   PlayerName                                                  OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	DMember(bool)                                      bIsServer                                                   OFFSET(get<bool>, {0x110, 1, 0, 0})
	SMember(FString)                                   ProfileNotificationsStompTopic                              OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FString)                                   LastMcpVersion                                              OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	SMember(FString)                                   LastContentVersion                                          OFFSET(getStruct<T>, {0x188, 16, 0, 0})
	SMember(FString)                                   LastMinBuild                                                OFFSET(getStruct<T>, {0x198, 16, 0, 0})
	SMember(FTimespan)                                 LocalTimeOffset                                             OFFSET(getStruct<T>, {0x1A8, 8, 0, 0})
	SMember(FString)                                   LockCode                                                    OFFSET(getStruct<T>, {0x1B8, 16, 0, 0})
	CMember(TArray<class UMcpProfile*>)                LockedProfiles                                              OFFSET(get<T>, {0x1C8, 16, 0, 0})
	SMember(FString)                                   LockedProfilesString                                        OFFSET(getStruct<T>, {0x1D8, 16, 0, 0})
	DMember(int32_t)                                   ProfileWriteLockTimeoutSecs                                 OFFSET(get<int32_t>, {0x1E8, 4, 0, 0})
	DMember(bool)                                      bSubscribedToNotifications                                  OFFSET(get<bool>, {0x1EC, 1, 0, 0})
	SMember(FString)                                   ApplyStashEndPoint                                          OFFSET(getStruct<T>, {0x1F0, 16, 0, 0})
	DMember(bool)                                      bSendProfileCommandRevisions                                OFFSET(get<bool>, {0x208, 1, 0, 0})
	DMember(bool)                                      bAsyncParseProfileUpdates                                   OFFSET(get<bool>, {0x209, 1, 0, 0})
	DMember(int32_t)                                   MaxChangesToForwardInUpdate                                 OFFSET(get<int32_t>, {0x260, 4, 0, 0})
	DMember(int32_t)                                   MaxChangeSizeInBytes                                        OFFSET(get<int32_t>, {0x264, 4, 0, 0})
	CMember(TArray<FString>)                           ForwardToClientExclusions                                   OFFSET(get<T>, {0x268, 16, 0, 0})
};

/// Class /Script/McpProfileSys.McpProfileManager
/// Size: 0x0040 (0x000028 - 0x000068)
class UMcpProfileManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FProfileGroupEntry>)                ServerProfileGroups                                         OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FProfileGroupEntry>)                ClientProfileGroups                                         OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(int32_t)                                   MaxItemsProcessedInInitialUpdatesPerTick                    OFFSET(get<int32_t>, {0x60, 4, 0, 0})
};

/// Struct /Script/McpProfileSys.ProfileUpdateSingle
/// Size: 0x0050 (0x000000 - 0x000050)
class FProfileUpdateSingle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int64_t)                                   ProfileRevision                                             OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FString)                                   ProfileId                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int64_t)                                   ProfileChangesBaseRevision                                  OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	CMember(TArray<FJsonObjectWrapper>)                ProfileChanges                                              OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FDateTime)                                 LockExpiration                                              OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	CMember(TArray<FJsonObjectWrapper>)                Notifications                                               OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(int32_t)                                   ProfileCommandRevision                                      OFFSET(get<int32_t>, {0x48, 4, 0, 0})
};

/// Struct /Script/McpProfileSys.ProfileUpdate
/// Size: 0x0020 (0x000050 - 0x000070)
class FProfileUpdate : public FProfileUpdateSingle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int32_t)                                   ResponseVersion                                             OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	SMember(FDateTime)                                 ServerTime                                                  OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	CMember(TArray<FProfileUpdateSingle>)              MultiUpdate                                                 OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/McpProfileSys.McpLootEntry
/// Size: 0x0058 (0x000000 - 0x000058)
class FMcpLootEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   ItemType                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ItemGuid                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   Quantity                                                    OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	SMember(FJsonObjectWrapper)                        Attributes                                                  OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	SMember(FString)                                   ItemProfile                                                 OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/McpProfileSys.BaseUrlContext
/// Size: 0x0080 (0x000000 - 0x000080)
class FBaseUrlContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Struct /Script/McpProfileSys.ClientUrlContext
/// Size: 0x0000 (0x000080 - 0x000080)
class FClientUrlContext : public FBaseUrlContext
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Struct /Script/McpProfileSys.DedicatedServerUrlContext
/// Size: 0x0000 (0x000080 - 0x000080)
class FDedicatedServerUrlContext : public FBaseUrlContext
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Struct /Script/McpProfileSys.McpProfileChangeRequest
/// Size: 0x0058 (0x000000 - 0x000058)
class FMcpProfileChangeRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   BaseCommandRevision                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FMcpAddItemRequest>)                AddRequests                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FMcpRemoveItemRequest>)             RemoveRequests                                              OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FMcpChangeQuantityRequest>)         ChangeQuantityRequests                                      OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FMcpChangeAttributesRequest>)       ChangeAttributesRequests                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FJsonObjectWrapper>)                ChangeStatRequests                                          OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/McpProfileSys.McpChangeAttributesRequest
/// Size: 0x0030 (0x000000 - 0x000030)
class FMcpChangeAttributesRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ItemId                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        Attributes                                                  OFFSET(getStruct<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/McpProfileSys.McpChangeQuantityRequest
/// Size: 0x0018 (0x000000 - 0x000018)
class FMcpChangeQuantityRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ItemId                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   DeltaQuantity                                               OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/McpProfileSys.McpRemoveItemRequest
/// Size: 0x0010 (0x000000 - 0x000010)
class FMcpRemoveItemRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   ItemId                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/McpProfileSys.McpAddItemRequest
/// Size: 0x0048 (0x000000 - 0x000048)
class FMcpAddItemRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   ItemId                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   TemplateId                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   Quantity                                                    OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	SMember(FJsonObjectWrapper)                        Attributes                                                  OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Struct /Script/McpProfileSys.PublicUrlContext
/// Size: 0x0000 (0x000080 - 0x000080)
class FPublicUrlContext : public FBaseUrlContext
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Struct /Script/McpProfileSys.AccountIdAndProfileResponse
/// Size: 0x0080 (0x000000 - 0x000080)
class FAccountIdAndProfileResponse : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   AccountId                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FProfileUpdate)                            Response                                                    OFFSET(getStruct<T>, {0x10, 112, 0, 0})
};

/// Struct /Script/McpProfileSys.ProfileUpdateNotification
/// Size: 0x0028 (0x000000 - 0x000028)
class FProfileUpdateNotification : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FJsonObjectWrapper>)                Changes                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FDateTime)                                 LockExpiration                                              OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   CommandRevision                                             OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int64_t)                                   Revision                                                    OFFSET(get<int64_t>, {0x20, 8, 0, 0})
};

/// Struct /Script/McpProfileSys.ProfileEntry
/// Size: 0x0020 (0x000000 - 0x000020)
class FProfileEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   ProfileId                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(class UMcpProfile*)                        ProfileObject                                               OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bWaitingForRefreshAllProfilesResponse                       OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bForwardUpdatesToClient                                     OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Struct /Script/McpProfileSys.ProfileGroupEntry
/// Size: 0x0028 (0x000000 - 0x000028)
class FProfileGroupEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UMcpProfileGroup*)                   ProfileGroup                                                OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/McpProfileSys.McpLootResult
/// Size: 0x0020 (0x000000 - 0x000020)
class FMcpLootResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   TierGroupName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FMcpLootEntry>)                     Items                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/McpProfileSys.McpItemIdAndQuantity
/// Size: 0x0000 (0x000058 - 0x000058)
class FMcpItemIdAndQuantity : public FMcpLootEntry
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/McpProfileSys.GiftBoxInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FGiftBoxInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FDateTime)                                 GiftedOn                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   FromAccountId                                               OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FMcpLootEntry>)                     LootList                                                    OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        Params                                                      OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	SMember(FDateTime)                                 grant_on_date                                               OFFSET(getStruct<T>, {0x48, 8, 0, 0})
};

