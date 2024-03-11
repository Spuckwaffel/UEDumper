
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: JsonUtilities

/// Class /Script/McpProfileSys.McpItemAware
/// Size: 0x0000 (0x000028 - 0x000028)
class UMcpItemAware : public UInterface
{ 
public:
};

/// Class /Script/McpProfileSys.McpItemDefinitionBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UMcpItemDefinitionBase : public UPrimaryDataAsset
{ 
public:
};

/// Class /Script/McpProfileSys.McpProfile
/// Size: 0x0118 (0x000028 - 0x000140)
class UMcpProfile : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               AllowSubscriptionToNotificationsService;                    // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x77];                                      // 0x0029   (0x0077)  MISSED
	SDK_UNDEFINED(16,2312) /* FString */               __um(DebugName);                                            // 0x00A0   (0x0010)  
	bool                                               bProfileLockOperationPending;                               // 0x00B0   (0x0001)  
	bool                                               bProfileUnlockOperationPending;                             // 0x00B1   (0x0001)  
	bool                                               bEnableMocks;                                               // 0x00B2   (0x0001)  
	unsigned char                                      UnknownData02_5[0x15];                                      // 0x00B3   (0x0015)  MISSED
	class UMcpProfileGroup*                            ProfileGroup;                                               // 0x00C8   (0x0008)  
	SDK_UNDEFINED(16,2313) /* FString */               __um(ProfileId);                                            // 0x00D0   (0x0010)  
	int64_t                                            ProfileRevision;                                            // 0x00E0   (0x0008)  
	int32_t                                            FullProfileQueryQueued;                                     // 0x00E8   (0x0004)  
	bool                                               bProfileWriteLocked;                                        // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00ED   (0x0003)  MISSED
	FDateTime                                          ProfileWriteLockExpireTime;                                 // 0x00F0   (0x0008)  
	bool                                               QueuedProfileUpdatingEnabled;                               // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x47];                                      // 0x00F9   (0x0047)  MISSED


	/// Functions
	// Function /Script/McpProfileSys.McpProfile.UnlockProfileForWrite
	// void UnlockProfileForWrite(FString Code, FDedicatedServerUrlContext& Context);                                        // [0xffff80099b780000] Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 
	// Function /Script/McpProfileSys.McpProfile.QueryPublicProfile
	// void QueryPublicProfile(FBaseUrlContext& Context);                                                                    // [0xffff80099b780000] Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 
	// Function /Script/McpProfileSys.McpProfile.QueryProfile
	// void QueryProfile(FBaseUrlContext& Context);                                                                          // [0xffff80099b780000] Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 
	// Function /Script/McpProfileSys.McpProfile.LockProfileForWrite
	// void LockProfileForWrite(FString Code, int32_t Timeout, FDedicatedServerUrlContext& Context);                         // [0xffff80099b780000] Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 
	// Function /Script/McpProfileSys.McpProfile.DeleteProfile
	// void DeleteProfile(FClientUrlContext& Context);                                                                       // [0xffff80099b780000] Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 
	// Function /Script/McpProfileSys.McpProfile.DeleteAllProfiles
	// void DeleteAllProfiles(FClientUrlContext& Context);                                                                   // [0xffff80099b780000] Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms 
};

/// Struct /Script/McpProfileSys.ProfileEntry
/// Size: 0x0020 (0x000000 - 0x000020)
struct FProfileEntry
{ 
	SDK_UNDEFINED(16,2314) /* FString */               __um(ProfileId);                                            // 0x0000   (0x0010)  
	class UMcpProfile*                                 ProfileObject;                                              // 0x0010   (0x0008)  
	bool                                               bWaitingForRefreshAllProfilesResponse;                      // 0x0018   (0x0001)  
	bool                                               bForwardUpdatesToClient;                                    // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x001A   (0x0006)  MISSED
};

/// Class /Script/McpProfileSys.McpProfileGroup
/// Size: 0x0258 (0x000028 - 0x000280)
class UMcpProfileGroup : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0xDC];                                      // 0x0000   (0x00DC)  MISSED
	int32_t                                            DelayMcpResults;                                            // 0x00DC   (0x0004)  
	int32_t                                            WeeklyIntervalStartDay;                                     // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	TArray<FProfileEntry>                              ProfileList;                                                // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x00F8   (0x0008)  MISSED
	SDK_UNDEFINED(16,2315) /* FString */               __um(PlayerName);                                           // 0x0100   (0x0010)  
	bool                                               bIsServer;                                                  // 0x0110   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0111   (0x0007)  MISSED
	SDK_UNDEFINED(16,2316) /* FString */               __um(ProfileNotificationsStompTopic);                       // 0x0118   (0x0010)  
	unsigned char                                      UnknownData04_5[0x50];                                      // 0x0128   (0x0050)  MISSED
	SDK_UNDEFINED(16,2317) /* FString */               __um(LastMcpVersion);                                       // 0x0178   (0x0010)  
	SDK_UNDEFINED(16,2318) /* FString */               __um(LastContentVersion);                                   // 0x0188   (0x0010)  
	SDK_UNDEFINED(16,2319) /* FString */               __um(LastMinBuild);                                         // 0x0198   (0x0010)  
	FTimespan                                          LocalTimeOffset;                                            // 0x01A8   (0x0008)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x01B0   (0x0008)  MISSED
	SDK_UNDEFINED(16,2320) /* FString */               __um(LockCode);                                             // 0x01B8   (0x0010)  
	TArray<class UMcpProfile*>                         LockedProfiles;                                             // 0x01C8   (0x0010)  
	SDK_UNDEFINED(16,2321) /* FString */               __um(LockedProfilesString);                                 // 0x01D8   (0x0010)  
	int32_t                                            ProfileWriteLockTimeoutSecs;                                // 0x01E8   (0x0004)  
	bool                                               bSubscribedToNotifications;                                 // 0x01EC   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x01ED   (0x0003)  MISSED
	SDK_UNDEFINED(16,2322) /* FString */               __um(ApplyStashEndPoint);                                   // 0x01F0   (0x0010)  
	unsigned char                                      UnknownData07_5[0x8];                                       // 0x0200   (0x0008)  MISSED
	bool                                               bSendProfileCommandRevisions;                               // 0x0208   (0x0001)  
	bool                                               bAsyncParseProfileUpdates;                                  // 0x0209   (0x0001)  
	unsigned char                                      UnknownData08_5[0x56];                                      // 0x020A   (0x0056)  MISSED
	int32_t                                            MaxChangesToForwardInUpdate;                                // 0x0260   (0x0004)  
	int32_t                                            MaxChangeSizeInBytes;                                       // 0x0264   (0x0004)  
	SDK_UNDEFINED(16,2323) /* TArray<FString> */       __um(ForwardToClientExclusions);                            // 0x0268   (0x0010)  
	unsigned char                                      UnknownData09_6[0x8];                                       // 0x0278   (0x0008)  MISSED
};

/// Struct /Script/McpProfileSys.ProfileGroupEntry
/// Size: 0x0028 (0x000000 - 0x000028)
struct FProfileGroupEntry
{ 
	class UMcpProfileGroup*                            ProfileGroup;                                               // 0x0020   (0x0008)  
};

/// Class /Script/McpProfileSys.McpProfileManager
/// Size: 0x0040 (0x000028 - 0x000068)
class UMcpProfileManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0000   (0x0038)  MISSED
	TArray<FProfileGroupEntry>                         ServerProfileGroups;                                        // 0x0038   (0x0010)  
	TArray<FProfileGroupEntry>                         ClientProfileGroups;                                        // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	int32_t                                            MaxItemsProcessedInInitialUpdatesPerTick;                   // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/McpProfileSys.ProfileUpdateSingle
/// Size: 0x0050 (0x000000 - 0x000050)
struct FProfileUpdateSingle
{ 
	int64_t                                            ProfileRevision;                                            // 0x0000   (0x0008)  
	SDK_UNDEFINED(16,2324) /* FString */               __um(ProfileId);                                            // 0x0008   (0x0010)  
	int64_t                                            ProfileChangesBaseRevision;                                 // 0x0018   (0x0008)  
	TArray<FJsonObjectWrapper>                         ProfileChanges;                                             // 0x0020   (0x0010)  
	FDateTime                                          LockExpiration;                                             // 0x0030   (0x0008)  
	TArray<FJsonObjectWrapper>                         Notifications;                                              // 0x0038   (0x0010)  
	int32_t                                            ProfileCommandRevision;                                     // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/McpProfileSys.ProfileUpdate
/// Size: 0x0020 (0x000050 - 0x000070)
struct FProfileUpdate : FProfileUpdateSingle
{ 
	int32_t                                            ResponseVersion;                                            // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	FDateTime                                          ServerTime;                                                 // 0x0058   (0x0008)  
	TArray<FProfileUpdateSingle>                       MultiUpdate;                                                // 0x0060   (0x0010)  
};

/// Struct /Script/McpProfileSys.McpLootEntry
/// Size: 0x0058 (0x000000 - 0x000058)
struct FMcpLootEntry
{ 
	SDK_UNDEFINED(16,2325) /* FString */               __um(ItemType);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2326) /* FString */               __um(ItemGuid);                                             // 0x0010   (0x0010)  
	int32_t                                            Quantity;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FJsonObjectWrapper                                 Attributes;                                                 // 0x0028   (0x0020)  
	SDK_UNDEFINED(16,2327) /* FString */               __um(ItemProfile);                                          // 0x0048   (0x0010)  
};

/// Struct /Script/McpProfileSys.BaseUrlContext
/// Size: 0x0080 (0x000000 - 0x000080)
struct FBaseUrlContext
{ 
	unsigned char                                      UnknownData00_2[0x80];                                      // 0x0000   (0x0080)  MISSED
};

/// Struct /Script/McpProfileSys.ClientUrlContext
/// Size: 0x0000 (0x000080 - 0x000080)
struct FClientUrlContext : FBaseUrlContext
{ 
};

/// Struct /Script/McpProfileSys.DedicatedServerUrlContext
/// Size: 0x0000 (0x000080 - 0x000080)
struct FDedicatedServerUrlContext : FBaseUrlContext
{ 
};

/// Struct /Script/McpProfileSys.McpAddItemRequest
/// Size: 0x0048 (0x000000 - 0x000048)
struct FMcpAddItemRequest
{ 
	SDK_UNDEFINED(16,2328) /* FString */               __um(ItemId);                                               // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2329) /* FString */               __um(TemplateId);                                           // 0x0010   (0x0010)  
	int32_t                                            Quantity;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FJsonObjectWrapper                                 Attributes;                                                 // 0x0028   (0x0020)  
};

/// Struct /Script/McpProfileSys.McpRemoveItemRequest
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMcpRemoveItemRequest
{ 
	SDK_UNDEFINED(16,2330) /* FString */               __um(ItemId);                                               // 0x0000   (0x0010)  
};

/// Struct /Script/McpProfileSys.McpChangeQuantityRequest
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMcpChangeQuantityRequest
{ 
	SDK_UNDEFINED(16,2331) /* FString */               __um(ItemId);                                               // 0x0000   (0x0010)  
	int32_t                                            DeltaQuantity;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/McpProfileSys.McpChangeAttributesRequest
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMcpChangeAttributesRequest
{ 
	SDK_UNDEFINED(16,2332) /* FString */               __um(ItemId);                                               // 0x0000   (0x0010)  
	FJsonObjectWrapper                                 Attributes;                                                 // 0x0010   (0x0020)  
};

/// Struct /Script/McpProfileSys.McpProfileChangeRequest
/// Size: 0x0058 (0x000000 - 0x000058)
struct FMcpProfileChangeRequest
{ 
	int32_t                                            BaseCommandRevision;                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FMcpAddItemRequest>                         AddRequests;                                                // 0x0008   (0x0010)  
	TArray<FMcpRemoveItemRequest>                      RemoveRequests;                                             // 0x0018   (0x0010)  
	TArray<FMcpChangeQuantityRequest>                  ChangeQuantityRequests;                                     // 0x0028   (0x0010)  
	TArray<FMcpChangeAttributesRequest>                ChangeAttributesRequests;                                   // 0x0038   (0x0010)  
	TArray<FJsonObjectWrapper>                         ChangeStatRequests;                                         // 0x0048   (0x0010)  
};

/// Struct /Script/McpProfileSys.PublicUrlContext
/// Size: 0x0000 (0x000080 - 0x000080)
struct FPublicUrlContext : FBaseUrlContext
{ 
};

/// Struct /Script/McpProfileSys.AccountIdAndProfileResponse
/// Size: 0x0080 (0x000000 - 0x000080)
struct FAccountIdAndProfileResponse
{ 
	SDK_UNDEFINED(16,2333) /* FString */               __um(AccountId);                                            // 0x0000   (0x0010)  
	FProfileUpdate                                     Response;                                                   // 0x0010   (0x0070)  
};

/// Struct /Script/McpProfileSys.ProfileUpdateNotification
/// Size: 0x0028 (0x000000 - 0x000028)
struct FProfileUpdateNotification
{ 
	TArray<FJsonObjectWrapper>                         Changes;                                                    // 0x0000   (0x0010)  
	FDateTime                                          LockExpiration;                                             // 0x0010   (0x0008)  
	int32_t                                            CommandRevision;                                            // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	int64_t                                            Revision;                                                   // 0x0020   (0x0008)  
};

/// Struct /Script/McpProfileSys.McpLootResult
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMcpLootResult
{ 
	SDK_UNDEFINED(16,2334) /* FString */               __um(TierGroupName);                                        // 0x0000   (0x0010)  
	TArray<FMcpLootEntry>                              Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/McpProfileSys.McpItemIdAndQuantity
/// Size: 0x0000 (0x000058 - 0x000058)
struct FMcpItemIdAndQuantity : FMcpLootEntry
{ 
};

/// Struct /Script/McpProfileSys.GiftBoxInfo
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGiftBoxInfo
{ 
	FDateTime                                          GiftedOn;                                                   // 0x0000   (0x0008)  
	SDK_UNDEFINED(16,2335) /* FString */               __um(FromAccountId);                                        // 0x0008   (0x0010)  
	TArray<FMcpLootEntry>                              LootList;                                                   // 0x0018   (0x0010)  
	FJsonObjectWrapper                                 Params;                                                     // 0x0028   (0x0020)  
	FDateTime                                          grant_on_date;                                              // 0x0048   (0x0008)  
};

