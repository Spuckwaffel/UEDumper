
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Party.Chatroom
/// Size: 0x0030 (0x000028 - 0x000058)
class UChatroom : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   CurrentChatRoomId                                           OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   MaxChatRoomRetries                                          OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   NumChatRoomRetries                                          OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/Party.SocialManager
/// Size: 0x0188 (0x000028 - 0x0001B0)
class USocialManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(TArray<class USocialToolkit*>)             SocialToolkits                                              OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(class USocialDebugTools*)                  SocialDebugTools                                            OFFSET(get<T>, {0xB8, 8, 0, 0})
};

/// Class /Script/Party.SocialToolkit
/// Size: 0x0288 (0x000028 - 0x0002B0)
class USocialToolkit : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(class USocialUser*)                        LocalUser                                                   OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TArray<class USocialUser*>)                AllUsers                                                    OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bRemoveInvalidatedUserFromMaps                              OFFSET(get<bool>, {0xD0, 1, 0, 0})
	CMember(TWeakObjectPtr<ULocalPlayer*>)             LocalPlayerOwner                                            OFFSET(get<T>, {0xD4, 8, 0, 0})
	CMember(class USocialChatManager*)                 SocialChatManager                                           OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Class /Script/Party.SocialChatManager
/// Size: 0x01F8 (0x000028 - 0x000220)
class USocialChatManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(TMap<TWeakObjectPtr<USocialUser*>, USocialPrivateMessageChannel*>) DirectChannelsByTargetUser          OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TMap<FString, USocialChatRoom*>)           ChatRoomsById                                               OFFSET(get<T>, {0xC8, 80, 0, 0})
	CMember(TMap<FString, USocialReadOnlyChatChannel*>) ReadOnlyChannelsByDisplayName                              OFFSET(get<T>, {0x118, 80, 0, 0})
	DMember(bool)                                      bEnableChatSlashCommands                                    OFFSET(get<bool>, {0x168, 1, 0, 0})
	CMember(TMap<FUniqueNetIdRepl, USocialGroupChannel*>) GroupChannels                                            OFFSET(get<T>, {0x170, 80, 0, 0})
};

/// Class /Script/Party.SocialChatChannel
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class USocialChatChannel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/Party.SocialChatRoom
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class USocialChatRoom : public USocialChatChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/Party.SocialGroupChannel
/// Size: 0x0068 (0x000028 - 0x000090)
class USocialGroupChannel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class USocialUser*)                        SocialUser                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FUniqueNetIdRepl)                          GroupId                                                     OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	CMember(TArray<class USocialUser*>)                Members                                                     OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Class /Script/Party.SocialPartyChatRoom
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class USocialPartyChatRoom : public USocialChatRoom
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/Party.SocialPrivateMessageChannel
/// Size: 0x0008 (0x0000E0 - 0x0000E8)
class USocialPrivateMessageChannel : public USocialChatChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(class USocialUser*)                        TargetUser                                                  OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Class /Script/Party.SocialReadOnlyChatChannel
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class USocialReadOnlyChatChannel : public USocialChatChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/Party.SocialParty
/// Size: 0x0338 (0x000028 - 0x000360)
class USocialParty : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(class UClass*)                             ReservationBeaconClientClass                                OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UClass*)                             SpectatorBeaconClientClass                                  OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FUniqueNetIdRepl)                          OwningLocalUserId                                           OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	SMember(FUniqueNetIdRepl)                          CurrentLeaderId                                             OFFSET(getStruct<T>, {0xB0, 48, 0, 0})
	CMember(TMap<FUniqueNetIdRepl, UPartyMember*>)     PartyMembersById                                            OFFSET(get<T>, {0xE0, 80, 0, 0})
	DMember(bool)                                      bEnableAutomaticPartyRejoin                                 OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(double)                                    PlatformUserInviteCooldown                                  OFFSET(get<double>, {0x188, 8, 0, 0})
	DMember(double)                                    PrimaryUserInviteCooldown                                   OFFSET(get<double>, {0x190, 8, 0, 0})
	CMember(TWeakObjectPtr<APartyBeaconClient*>)       ReservationBeaconClient                                     OFFSET(get<T>, {0x208, 8, 0, 0})
	CMember(TWeakObjectPtr<ASpectatorBeaconClient*>)   SpectatorBeaconClient                                       OFFSET(get<T>, {0x214, 8, 0, 0})
	DMember(float)                                     JoinInProgressTimerRate                                     OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(int32_t)                                   JoinInProgressRequestTimeout                                OFFSET(get<int32_t>, {0x24C, 4, 0, 0})
	DMember(int32_t)                                   JoinInProgressResponseTimeout                               OFFSET(get<int32_t>, {0x250, 4, 0, 0})
};

/// Class /Script/Party.PartyMember
/// Size: 0x00E8 (0x000028 - 0x000110)
class UPartyMember : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(class USocialUser*)                        SocialUser                                                  OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/Party.SocialDebugTools
/// Size: 0x0060 (0x000028 - 0x000088)
class USocialDebugTools : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Script/Party.SocialSettings
/// Size: 0x0048 (0x000028 - 0x000070)
class USocialSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FName>)                             OssNamesWithEnvironmentIdPrefix                             OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   DefaultMaxPartySize                                         OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      bPreferPlatformInvites                                      OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(bool)                                      bMustSendPrimaryInvites                                     OFFSET(get<bool>, {0x3D, 1, 0, 0})
	DMember(bool)                                      bLeavePartyOnDisconnect                                     OFFSET(get<bool>, {0x3E, 1, 0, 0})
	DMember(bool)                                      bSetDesiredPrivacyOnLocalPlayerBecomesLeader                OFFSET(get<bool>, {0x3F, 1, 0, 0})
	DMember(float)                                     UserListAutoUpdateRate                                      OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   MinNicknameLength                                           OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   MaxNicknameLength                                           OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	CMember(TArray<FSocialPlatformDescription>)        SocialPlatformDescriptions                                  OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FName>)                             SonyOSSNames                                                OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/Party.SocialUser
/// Size: 0x01A8 (0x000028 - 0x0001D0)
class USocialUser : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Struct /Script/Party.PartyMemberPlatformData
/// Size: 0x0098 (0x000000 - 0x000098)
class FPartyMemberPlatformData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FUserPlatform)                             Platform                                                    OFFSET(getStruct<T>, {0x0, 88, 0, 0})
	SMember(FUniqueNetIdRepl)                          UniqueID                                                    OFFSET(getStruct<T>, {0x58, 48, 0, 0})
	SMember(FString)                                   SessionId                                                   OFFSET(getStruct<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/Party.UserPlatform
/// Size: 0x0058 (0x000000 - 0x000058)
class FUserPlatform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FSocialPlatformDescription)                PlatformDescription                                         OFFSET(getStruct<T>, {0x0, 88, 0, 0})
};

/// Struct /Script/Party.SocialPlatformDescription
/// Size: 0x0058 (0x000000 - 0x000058)
class FSocialPlatformDescription : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   PlatformType                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     OnlineSubsystem                                             OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FString)                                   SessionType                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   ExternalAccountType                                         OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   CrossplayPool                                               OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/Party.PartyMemberJoinInProgressRequest
/// Size: 0x0038 (0x000000 - 0x000038)
class FPartyMemberJoinInProgressRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FUniqueNetIdRepl)                          Target                                                      OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(int64_t)                                   Time                                                        OFFSET(get<int64_t>, {0x30, 8, 0, 0})
};

/// Struct /Script/Party.PartyMemberJoinInProgressResponse
/// Size: 0x0048 (0x000000 - 0x000048)
class FPartyMemberJoinInProgressResponse : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FUniqueNetIdRepl)                          Requester                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(int64_t)                                   RequestTime                                                 OFFSET(get<int64_t>, {0x30, 8, 0, 0})
	DMember(int64_t)                                   ResponseTime                                                OFFSET(get<int64_t>, {0x38, 8, 0, 0})
	DMember(char)                                      DenialReason                                                OFFSET(get<char>, {0x40, 1, 0, 0})
};

/// Struct /Script/Party.PartyMemberJoinInProgressData
/// Size: 0x0048 (0x000000 - 0x000048)
class FPartyMemberJoinInProgressData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FPartyMemberJoinInProgressRequest)         Request                                                     OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	CMember(TArray<FPartyMemberJoinInProgressResponse>) Responses                                                  OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/Party.OnlinePartyRepDataBase
/// Size: 0x0018 (0x000000 - 0x000018)
class FOnlinePartyRepDataBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/Party.PartyMemberRepData
/// Size: 0x0258 (0x000018 - 0x000270)
class FPartyMemberRepData : public FOnlinePartyRepDataBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FPartyMemberPlatformData)                  PlatformData                                                OFFSET(getStruct<T>, {0x28, 152, 0, 0})
	CMember(ECrossplayPreference)                      CrossplayPreference                                         OFFSET(get<T>, {0x150, 1, 0, 0})
	SMember(FString)                                   JoinMethod                                                  OFFSET(getStruct<T>, {0x188, 16, 0, 0})
	SMember(FPartyMemberJoinInProgressData)            JoinInProgressData                                          OFFSET(getStruct<T>, {0x1C8, 72, 0, 0})
};

/// Struct /Script/Party.PartyPlatformSessionInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FPartyPlatformSessionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   SessionType                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   SessionId                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FUniqueNetIdRepl)                          OwnerPrimaryId                                              OFFSET(getStruct<T>, {0x20, 48, 0, 0})
};

/// Struct /Script/Party.PartyPrivacySettings
/// Size: 0x0003 (0x000000 - 0x000003)
class FPartyPrivacySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	CMember(EPartyType)                                PartyType                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EPartyInviteRestriction)                   PartyInviteRestriction                                      OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(bool)                                      bOnlyLeaderFriendsCanJoin                                   OFFSET(get<bool>, {0x2, 1, 0, 0})
};

/// Struct /Script/Party.PartyRepData
/// Size: 0x0068 (0x000018 - 0x000080)
class FPartyRepData : public FOnlinePartyRepDataBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FPartyPrivacySettings)                     PrivacySettings                                             OFFSET(getStruct<T>, {0x21, 3, 0, 0})
	CMember(TArray<FPartyPlatformSessionInfo>)         PlatformSessions                                            OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/Party.SocialChatChannelConfig
/// Size: 0x0038 (0x000000 - 0x000038)
class FSocialChatChannelConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class USocialUser*)                        SocialUser                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class USocialChatChannel*>)         ListenChannels                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

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

