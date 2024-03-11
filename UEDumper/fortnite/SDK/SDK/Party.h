
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/Party.ESocialChannelType
/// Size: 0x07
enum class ESocialChannelType : uint8_t
{
	ESocialChannelType__General                                                      = 0,
	ESocialChannelType__Founder                                                      = 1,
	ESocialChannelType__Party                                                        = 2,
	ESocialChannelType__Team                                                         = 3,
	ESocialChannelType__System                                                       = 4,
	ESocialChannelType__Private                                                      = 5,
	ESocialChannelType__ESocialChannelType_MAX                                       = 6
};

/// Enum /Script/Party.EPartyType
/// Size: 0x04
enum class EPartyType : uint8_t
{
	EPartyType__Public                                                               = 0,
	EPartyType__FriendsOnly                                                          = 1,
	EPartyType__Private                                                              = 2,
	EPartyType__EPartyType_MAX                                                       = 3
};

/// Enum /Script/Party.EPartyInviteRestriction
/// Size: 0x04
enum class EPartyInviteRestriction : uint8_t
{
	EPartyInviteRestriction__AnyMember                                               = 0,
	EPartyInviteRestriction__LeaderOnly                                              = 1,
	EPartyInviteRestriction__NoInvites                                               = 2,
	EPartyInviteRestriction__EPartyInviteRestriction_MAX                             = 3
};

/// Enum /Script/Party.EPartyJoinDenialReason
/// Size: 0x67
enum class EPartyJoinDenialReason : uint8_t
{
	EPartyJoinDenialReason__NoReason                                                 = 0,
	EPartyJoinDenialReason__JoinAttemptAborted                                       = 1,
	EPartyJoinDenialReason__Busy                                                     = 2,
	EPartyJoinDenialReason__OssUnavailable                                           = 3,
	EPartyJoinDenialReason__PartyFull                                                = 4,
	EPartyJoinDenialReason__GameFull                                                 = 5,
	EPartyJoinDenialReason__NotPartyLeader                                           = 6,
	EPartyJoinDenialReason__PartyPrivate                                             = 7,
	EPartyJoinDenialReason__JoinerCrossplayRestricted                                = 8,
	EPartyJoinDenialReason__MemberCrossplayRestricted                                = 9,
	EPartyJoinDenialReason__GameModeRestricted                                       = 10,
	EPartyJoinDenialReason__Banned                                                   = 11,
	EPartyJoinDenialReason__NotLoggedIn                                              = 12,
	EPartyJoinDenialReason__CheckingForRejoin                                        = 13,
	EPartyJoinDenialReason__TargetUserMissingPresence                                = 14,
	EPartyJoinDenialReason__TargetUserUnjoinable                                     = 15,
	EPartyJoinDenialReason__TargetUserAway                                           = 16,
	EPartyJoinDenialReason__AlreadyLeaderInPlatformSession                           = 17,
	EPartyJoinDenialReason__TargetUserPlayingDifferentGame                           = 18,
	EPartyJoinDenialReason__TargetUserMissingPlatformSession                         = 19,
	EPartyJoinDenialReason__PlatformSessionMissingJoinInfo                           = 20,
	EPartyJoinDenialReason__FailedToStartFindConsoleSession                          = 21,
	EPartyJoinDenialReason__MissingPartyClassForTypeId                               = 22,
	EPartyJoinDenialReason__TargetUserBlocked                                        = 23,
	EPartyJoinDenialReason__InvalidJoinInfo                                          = 24,
	EPartyJoinDenialReason__NotFriends                                               = 25,
	EPartyJoinDenialReason__CustomReason0                                            = 26,
	EPartyJoinDenialReason__CustomReason1                                            = 27,
	EPartyJoinDenialReason__CustomReason2                                            = 28,
	EPartyJoinDenialReason__CustomReason3                                            = 29,
	EPartyJoinDenialReason__CustomReason4                                            = 30,
	EPartyJoinDenialReason__CustomReason5                                            = 31,
	EPartyJoinDenialReason__CustomReason6                                            = 32,
	EPartyJoinDenialReason__CustomReason7                                            = 33,
	EPartyJoinDenialReason__CustomReason8                                            = 34,
	EPartyJoinDenialReason__CustomReason9                                            = 35,
	EPartyJoinDenialReason__CustomReason10                                           = 36,
	EPartyJoinDenialReason__CustomReason11                                           = 37,
	EPartyJoinDenialReason__CustomReason12                                           = 38,
	EPartyJoinDenialReason__CustomReason13                                           = 39,
	EPartyJoinDenialReason__CustomReason14                                           = 40,
	EPartyJoinDenialReason__CustomReason15                                           = 41,
	EPartyJoinDenialReason__CustomReason16                                           = 42,
	EPartyJoinDenialReason__CustomReason17                                           = 43,
	EPartyJoinDenialReason__CustomReason18                                           = 44,
	EPartyJoinDenialReason__CustomReason19                                           = 45,
	EPartyJoinDenialReason__CustomReason20                                           = 46,
	EPartyJoinDenialReason__CustomReason21                                           = 47,
	EPartyJoinDenialReason__CustomReason22                                           = 48,
	EPartyJoinDenialReason__CustomReason23                                           = 49,
	EPartyJoinDenialReason__CustomReason24                                           = 50,
	EPartyJoinDenialReason__CustomReason25                                           = 51,
	EPartyJoinDenialReason__CustomReason26                                           = 52,
	EPartyJoinDenialReason__CustomReason27                                           = 53,
	EPartyJoinDenialReason__CustomReason28                                           = 54,
	EPartyJoinDenialReason__CustomReason29                                           = 55,
	EPartyJoinDenialReason__CustomReason30                                           = 56,
	EPartyJoinDenialReason__CustomReason31                                           = 57,
	EPartyJoinDenialReason__CustomReason32                                           = 58,
	EPartyJoinDenialReason__CustomReason33                                           = 59,
	EPartyJoinDenialReason__CustomReason34                                           = 60,
	EPartyJoinDenialReason__CustomReason35                                           = 61,
	EPartyJoinDenialReason__CustomReason36                                           = 62,
	EPartyJoinDenialReason__CustomReason37                                           = 63,
	EPartyJoinDenialReason__CustomReason38                                           = 64,
	EPartyJoinDenialReason__CustomReason39                                           = 65,
	EPartyJoinDenialReason__MAX                                                      = 66
};

/// Enum /Script/Party.EApprovalAction
/// Size: 0x05
enum class EApprovalAction : uint8_t
{
	EApprovalAction__Approve                                                         = 0,
	EApprovalAction__Enqueue                                                         = 1,
	EApprovalAction__EnqueueAndStartBeacon                                           = 2,
	EApprovalAction__Deny                                                            = 3,
	EApprovalAction__EApprovalAction_MAX                                             = 4
};

/// Enum /Script/Party.ESocialPartyInviteMethod
/// Size: 0x14
enum class ESocialPartyInviteMethod : uint8_t
{
	ESocialPartyInviteMethod__Other                                                  = 0,
	ESocialPartyInviteMethod__Notification                                           = 1,
	ESocialPartyInviteMethod__AcceptRequestToJoin                                    = 2,
	ESocialPartyInviteMethod__Custom0                                                = 3,
	ESocialPartyInviteMethod__Custom1                                                = 4,
	ESocialPartyInviteMethod__Custom2                                                = 5,
	ESocialPartyInviteMethod__Custom3                                                = 6,
	ESocialPartyInviteMethod__Custom4                                                = 7,
	ESocialPartyInviteMethod__Custom5                                                = 8,
	ESocialPartyInviteMethod__Custom6                                                = 9,
	ESocialPartyInviteMethod__Custom7                                                = 10,
	ESocialPartyInviteMethod__Custom8                                                = 11,
	ESocialPartyInviteMethod__Custom9                                                = 12,
	ESocialPartyInviteMethod__MAX                                                    = 13
};

/// Enum /Script/Party.ESocialPartyInviteFailureReason
/// Size: 0x10
enum class ESocialPartyInviteFailureReason : uint8_t
{
	ESocialPartyInviteFailureReason__Success                                         = 0,
	ESocialPartyInviteFailureReason__NotOnline                                       = 1,
	ESocialPartyInviteFailureReason__NotAcceptingMembers                             = 2,
	ESocialPartyInviteFailureReason__NotFriends                                      = 3,
	ESocialPartyInviteFailureReason__AlreadyInParty                                  = 4,
	ESocialPartyInviteFailureReason__OssValidationFailed                             = 5,
	ESocialPartyInviteFailureReason__PlatformInviteFailed                            = 6,
	ESocialPartyInviteFailureReason__PartyInviteFailed                               = 7,
	ESocialPartyInviteFailureReason__InviteRateLimitExceeded                         = 8,
	ESocialPartyInviteFailureReason__ESocialPartyInviteFailureReason_MAX             = 9
};

/// Enum /Script/Party.ESocialSubsystem
/// Size: 0x03
enum class ESocialSubsystem : uint8_t
{
	ESocialSubsystem__Primary                                                        = 0,
	ESocialSubsystem__Platform                                                       = 1,
	ESocialSubsystem__MAX                                                            = 2
};

/// Enum /Script/Party.ESocialRelationship
/// Size: 0x10
enum class ESocialRelationship : uint8_t
{
	ESocialRelationship__Any                                                         = 0,
	ESocialRelationship__FriendInviteReceived                                        = 1,
	ESocialRelationship__FriendInviteSent                                            = 2,
	ESocialRelationship__PartyInvite                                                 = 3,
	ESocialRelationship__Friend                                                      = 4,
	ESocialRelationship__BlockedPlayer                                               = 5,
	ESocialRelationship__SuggestedFriend                                             = 6,
	ESocialRelationship__RecentPlayer                                                = 7,
	ESocialRelationship__JoinRequest                                                 = 8,
	ESocialRelationship__ESocialRelationship_MAX                                     = 9
};

/// Enum /Script/Party.ECrossplayPreference
/// Size: 0x05
enum class ECrossplayPreference : uint8_t
{
	ECrossplayPreference__NoSelection                                                = 0,
	ECrossplayPreference__OptedIn                                                    = 1,
	ECrossplayPreference__OptedOut                                                   = 2,
	ECrossplayPreference__OptedOutRestricted                                         = 3,
	ECrossplayPreference__ECrossplayPreference_MAX                                   = 4
};

/// Enum /Script/Party.EPlatformIconDisplayRule
/// Size: 0x06
enum class EPlatformIconDisplayRule : uint8_t
{
	EPlatformIconDisplayRule__Always                                                 = 0,
	EPlatformIconDisplayRule__AlwaysIfDifferent                                      = 1,
	EPlatformIconDisplayRule__AlwaysWhenInCrossplayParty                             = 2,
	EPlatformIconDisplayRule__AlwaysIfDifferentWhenInCrossplayParty                  = 3,
	EPlatformIconDisplayRule__Never                                                  = 4,
	EPlatformIconDisplayRule__EPlatformIconDisplayRule_MAX                           = 5
};

/// Class /Script/Party.Chatroom
/// Size: 0x0030 (0x000028 - 0x000058)
class UChatroom : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,2661) /* FString */               __um(CurrentChatRoomId);                                    // 0x0028   (0x0010)  
	int32_t                                            MaxChatRoomRetries;                                         // 0x0038   (0x0004)  
	int32_t                                            NumChatRoomRetries;                                         // 0x003C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0040   (0x0018)  MISSED
};

/// Class /Script/Party.SocialManager
/// Size: 0x0188 (0x000028 - 0x0001B0)
class USocialManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0xA8];                                      // 0x0000   (0x00A8)  MISSED
	TArray<class USocialToolkit*>                      SocialToolkits;                                             // 0x00A8   (0x0010)  
	class USocialDebugTools*                           SocialDebugTools;                                           // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData01_6[0xF0];                                      // 0x00C0   (0x00F0)  MISSED
};

/// Class /Script/Party.SocialToolkit
/// Size: 0x0288 (0x000028 - 0x0002B0)
class USocialToolkit : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x68];                                      // 0x0000   (0x0068)  MISSED
	class USocialUser*                                 LocalUser;                                                  // 0x0068   (0x0008)  
	TArray<class USocialUser*>                         AllUsers;                                                   // 0x0070   (0x0010)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x0080   (0x0050)  MISSED
	bool                                               bRemoveInvalidatedUserFromMaps;                             // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	SDK_UNDEFINED(8,2662) /* TWeakObjectPtr<ULocalPlayer*> */ __um(LocalPlayerOwner);                              // 0x00D4   (0x0008)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	class USocialChatManager*                          SocialChatManager;                                          // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData04_6[0x1C8];                                     // 0x00E8   (0x01C8)  MISSED
};

/// Class /Script/Party.SocialChatManager
/// Size: 0x01F8 (0x000028 - 0x000220)
class USocialChatManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x78];                                      // 0x0000   (0x0078)  MISSED
	SDK_UNDEFINED(80,2663) /* TMap<TWeakObjectPtr<USocialUser*>, USocialPrivateMessageChannel*> */ __um(DirectChannelsByTargetUser); // 0x0078   (0x0050)  
	SDK_UNDEFINED(80,2664) /* TMap<FString, USocialChatRoom*> */ __um(ChatRoomsById);                              // 0x00C8   (0x0050)  
	SDK_UNDEFINED(80,2665) /* TMap<FString, USocialReadOnlyChatChannel*> */ __um(ReadOnlyChannelsByDisplayName);   // 0x0118   (0x0050)  
	bool                                               bEnableChatSlashCommands;                                   // 0x0168   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0169   (0x0007)  MISSED
	SDK_UNDEFINED(80,2666) /* TMap<FUniqueNetIdRepl, USocialGroupChannel*> */ __um(GroupChannels);                 // 0x0170   (0x0050)  
	unsigned char                                      UnknownData02_6[0x60];                                      // 0x01C0   (0x0060)  MISSED
};

/// Class /Script/Party.SocialChatChannel
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class USocialChatChannel : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xE8];                                      // 0x0000   (0x00E8)  MISSED
};

/// Class /Script/Party.SocialChatRoom
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class USocialChatRoom : public USocialChatChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00E8   (0x0010)  MISSED
};

/// Class /Script/Party.SocialGroupChannel
/// Size: 0x0070 (0x000028 - 0x000098)
class USocialGroupChannel : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class USocialUser*                                 SocialUser;                                                 // 0x0028   (0x0008)  
	FUniqueNetIdRepl                                   GroupId;                                                    // 0x0030   (0x0030)  
	SDK_UNDEFINED(24,2667) /* FText */                 __um(DisplayName);                                          // 0x0060   (0x0018)  
	TArray<class USocialUser*>                         Members;                                                    // 0x0078   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0088   (0x0010)  MISSED
};

/// Class /Script/Party.SocialPartyChatRoom
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class USocialPartyChatRoom : public USocialChatRoom
{ 
public:
};

/// Class /Script/Party.SocialPrivateMessageChannel
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
class USocialPrivateMessageChannel : public USocialChatChannel
{ 
public:
	class USocialUser*                                 TargetUser;                                                 // 0x00E8   (0x0008)  
};

/// Class /Script/Party.SocialReadOnlyChatChannel
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class USocialReadOnlyChatChannel : public USocialChatChannel
{ 
public:
};

/// Class /Script/Party.SocialParty
/// Size: 0x0338 (0x000028 - 0x000360)
class USocialParty : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x60];                                      // 0x0000   (0x0060)  MISSED
	class UClass*                                      ReservationBeaconClientClass;                               // 0x0060   (0x0008)  
	class UClass*                                      SpectatorBeaconClientClass;                                 // 0x0068   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0070   (0x0010)  MISSED
	FUniqueNetIdRepl                                   OwningLocalUserId;                                          // 0x0080   (0x0030)  
	FUniqueNetIdRepl                                   CurrentLeaderId;                                            // 0x00B0   (0x0030)  
	SDK_UNDEFINED(80,2668) /* TMap<FUniqueNetIdRepl, UPartyMember*> */ __um(PartyMembersById);                     // 0x00E0   (0x0050)  
	bool                                               bEnableAutomaticPartyRejoin;                                // 0x0130   (0x0001)  
	unsigned char                                      UnknownData02_5[0x57];                                      // 0x0131   (0x0057)  MISSED
	double                                             PlatformUserInviteCooldown;                                 // 0x0188   (0x0008)  
	double                                             PrimaryUserInviteCooldown;                                  // 0x0190   (0x0008)  
	unsigned char                                      UnknownData03_5[0x70];                                      // 0x0198   (0x0070)  MISSED
	SDK_UNDEFINED(8,2669) /* TWeakObjectPtr<APartyBeaconClient*> */ __um(ReservationBeaconClient);                 // 0x0208   (0x0008)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0210   (0x0004)  MISSED
	SDK_UNDEFINED(8,2670) /* TWeakObjectPtr<ASpectatorBeaconClient*> */ __um(SpectatorBeaconClient);               // 0x0214   (0x0008)  
	unsigned char                                      UnknownData05_5[0x2C];                                      // 0x021C   (0x002C)  MISSED
	float                                              JoinInProgressTimerRate;                                    // 0x0248   (0x0004)  
	int32_t                                            JoinInProgressRequestTimeout;                               // 0x024C   (0x0004)  
	int32_t                                            JoinInProgressResponseTimeout;                              // 0x0250   (0x0004)  
	unsigned char                                      UnknownData06_6[0x10C];                                     // 0x0254   (0x010C)  MISSED
};

/// Class /Script/Party.PartyMember
/// Size: 0x00E8 (0x000028 - 0x000110)
class UPartyMember : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x70];                                      // 0x0000   (0x0070)  MISSED
	class USocialUser*                                 SocialUser;                                                 // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_6[0x98];                                      // 0x0078   (0x0098)  MISSED
};

/// Class /Script/Party.SocialDebugTools
/// Size: 0x0060 (0x000028 - 0x000088)
class USocialDebugTools : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0000   (0x0088)  MISSED
};

/// Struct /Script/Party.SocialPlatformDescription
/// Size: 0x0058 (0x000000 - 0x000058)
struct FSocialPlatformDescription
{ 
	SDK_UNDEFINED(16,2671) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2672) /* FString */               __um(PlatformType);                                         // 0x0010   (0x0010)  
	FName                                              OnlineSubsystem;                                            // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	SDK_UNDEFINED(16,2673) /* FString */               __um(SessionType);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,2674) /* FString */               __um(ExternalAccountType);                                  // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,2675) /* FString */               __um(CrossplayPool);                                        // 0x0048   (0x0010)  
};

/// Class /Script/Party.SocialSettings
/// Size: 0x0048 (0x000028 - 0x000070)
class USocialSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FName>                                      OssNamesWithEnvironmentIdPrefix;                            // 0x0028   (0x0010)  
	int32_t                                            DefaultMaxPartySize;                                        // 0x0038   (0x0004)  
	bool                                               bPreferPlatformInvites;                                     // 0x003C   (0x0001)  
	bool                                               bMustSendPrimaryInvites;                                    // 0x003D   (0x0001)  
	bool                                               bLeavePartyOnDisconnect;                                    // 0x003E   (0x0001)  
	bool                                               bSetDesiredPrivacyOnLocalPlayerBecomesLeader;               // 0x003F   (0x0001)  
	float                                              UserListAutoUpdateRate;                                     // 0x0040   (0x0004)  
	int32_t                                            MinNicknameLength;                                          // 0x0044   (0x0004)  
	int32_t                                            MaxNicknameLength;                                          // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FSocialPlatformDescription>                 SocialPlatformDescriptions;                                 // 0x0050   (0x0010)  
	TArray<FName>                                      SonyOSSNames;                                               // 0x0060   (0x0010)  
};

/// Class /Script/Party.SocialUser
/// Size: 0x01A8 (0x000028 - 0x0001D0)
class USocialUser : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x1D0];                                     // 0x0000   (0x01D0)  MISSED
};

/// Struct /Script/Party.UserPlatform
/// Size: 0x0058 (0x000000 - 0x000058)
struct FUserPlatform
{ 
	FSocialPlatformDescription                         PlatformDescription;                                        // 0x0000   (0x0058)  
};

/// Struct /Script/Party.PartyMemberPlatformData
/// Size: 0x0098 (0x000000 - 0x000098)
struct FPartyMemberPlatformData
{ 
	FUserPlatform                                      Platform;                                                   // 0x0000   (0x0058)  
	FUniqueNetIdRepl                                   UniqueID;                                                   // 0x0058   (0x0030)  
	SDK_UNDEFINED(16,2676) /* FString */               __um(SessionId);                                            // 0x0088   (0x0010)  
};

/// Struct /Script/Party.PartyMemberJoinInProgressRequest
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPartyMemberJoinInProgressRequest
{ 
	FUniqueNetIdRepl                                   Target;                                                     // 0x0000   (0x0030)  
	int64_t                                            Time;                                                       // 0x0030   (0x0008)  
};

/// Struct /Script/Party.PartyMemberJoinInProgressResponse
/// Size: 0x0048 (0x000000 - 0x000048)
struct FPartyMemberJoinInProgressResponse
{ 
	FUniqueNetIdRepl                                   Requester;                                                  // 0x0000   (0x0030)  
	int64_t                                            RequestTime;                                                // 0x0030   (0x0008)  
	int64_t                                            ResponseTime;                                               // 0x0038   (0x0008)  
	char                                               DenialReason;                                               // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/Party.PartyMemberJoinInProgressData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FPartyMemberJoinInProgressData
{ 
	FPartyMemberJoinInProgressRequest                  Request;                                                    // 0x0000   (0x0038)  
	TArray<FPartyMemberJoinInProgressResponse>         Responses;                                                  // 0x0038   (0x0010)  
};

/// Struct /Script/Party.OnlinePartyRepDataBase
/// Size: 0x0018 (0x000000 - 0x000018)
struct FOnlinePartyRepDataBase
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/Party.PartyMemberRepData
/// Size: 0x0258 (0x000018 - 0x000270)
struct FPartyMemberRepData : FOnlinePartyRepDataBase
{ 
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0018   (0x0010)  MISSED
	FPartyMemberPlatformData                           PlatformData;                                               // 0x0028   (0x0098)  
	unsigned char                                      UnknownData01_5[0x90];                                      // 0x00C0   (0x0090)  MISSED
	ECrossplayPreference                               CrossplayPreference;                                        // 0x0150   (0x0001)  
	unsigned char                                      UnknownData02_5[0x37];                                      // 0x0151   (0x0037)  MISSED
	SDK_UNDEFINED(16,2677) /* FString */               __um(JoinMethod);                                           // 0x0188   (0x0010)  
	unsigned char                                      UnknownData03_5[0x30];                                      // 0x0198   (0x0030)  MISSED
	FPartyMemberJoinInProgressData                     JoinInProgressData;                                         // 0x01C8   (0x0048)  
	unsigned char                                      UnknownData04_6[0x60];                                      // 0x0210   (0x0060)  MISSED
};

/// Struct /Script/Party.PartyPlatformSessionInfo
/// Size: 0x0050 (0x000000 - 0x000050)
struct FPartyPlatformSessionInfo
{ 
	SDK_UNDEFINED(16,2678) /* FString */               __um(SessionType);                                          // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2679) /* FString */               __um(SessionId);                                            // 0x0010   (0x0010)  
	FUniqueNetIdRepl                                   OwnerPrimaryId;                                             // 0x0020   (0x0030)  
};

/// Struct /Script/Party.PartyPrivacySettings
/// Size: 0x0003 (0x000000 - 0x000003)
struct FPartyPrivacySettings
{ 
	EPartyType                                         PartyType;                                                  // 0x0000   (0x0001)  
	EPartyInviteRestriction                            PartyInviteRestriction;                                     // 0x0001   (0x0001)  
	bool                                               bOnlyLeaderFriendsCanJoin;                                  // 0x0002   (0x0001)  
};

/// Struct /Script/Party.PartyRepData
/// Size: 0x0068 (0x000018 - 0x000080)
struct FPartyRepData : FOnlinePartyRepDataBase
{ 
	unsigned char                                      UnknownData00_3[0x9];                                       // 0x0018   (0x0009)  MISSED
	FPartyPrivacySettings                              PrivacySettings;                                            // 0x0021   (0x0003)  
	unsigned char                                      UnknownData01_5[0x34];                                      // 0x0024   (0x0034)  MISSED
	TArray<FPartyPlatformSessionInfo>                  PlatformSessions;                                           // 0x0058   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0068   (0x0018)  MISSED
};

/// Struct /Script/Party.SocialChatChannelConfig
/// Size: 0x0040 (0x000000 - 0x000040)
struct FSocialChatChannelConfig
{ 
	class USocialUser*                                 SocialUser;                                                 // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0008   (0x0010)  MISSED
	TArray<class USocialChatChannel*>                  ListenChannels;                                             // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0028   (0x0018)  MISSED
};

