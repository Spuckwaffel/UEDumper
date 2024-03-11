
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/Account.ExternalAccountProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UExternalAccountProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FExternalAccountServiceConfig>)     Services                                                    OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/Account.OnlineAccountCommon
/// Size: 0x0960 (0x000028 - 0x000988)
class UOnlineAccountCommon : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2440;

public:
	SMember(FString)                                   AvailabilityServiceGameName                                 OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bRequireLightswitchAtStartup                                OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FString)                                   EulaKey                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(TArray<FString>)                           EulaKeys                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TMap<FString, FString>)                    EulaKeyMapping                                              OFFSET(get<T>, {0x70, 80, 0, 0})
	DMember(bool)                                      bEnableWaitingRoom                                          OFFSET(get<bool>, {0xC0, 1, 0, 0})
	CMember(TArray<FWebEnvUrl>)                        WebCreateEpicAccountUrl                                     OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(bool)                                      bAllowLocalLogout                                           OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(float)                                     DefaultLoginStepTimeout                                     OFFSET(get<float>, {0x110, 4, 0, 0})
	CMember(TMap<FName, float>)                        CustomLoginStepTimeouts                                     OFFSET(get<T>, {0x118, 80, 0, 0})
	DMember(bool)                                      bEnableDevLoginStepTimeouts                                 OFFSET(get<bool>, {0x168, 1, 0, 0})
	DMember(float)                                     DefaultLogoutStepTimeout                                    OFFSET(get<float>, {0x1C0, 4, 0, 0})
	CMember(TMap<FName, float>)                        CustomLogoutStepTimeouts                                    OFFSET(get<T>, {0x1C8, 80, 0, 0})
	DMember(bool)                                      bEnableDevLogoutStepTimeouts                                OFFSET(get<bool>, {0x218, 1, 0, 0})
	SMember(FString)                                   RedeemAccessUrl                                             OFFSET(getStruct<T>, {0x280, 16, 0, 0})
	SMember(FString)                                   RequestFreeAccessUrl                                        OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	SMember(FString)                                   RealGameAccessUrl                                           OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	DMember(float)                                     SkipRedeemOfflinePurchasesChance                            OFFSET(get<float>, {0x2B0, 4, 0, 0})
	DMember(bool)                                      bUseFreeAccessInsteadOfGameAccess                           OFFSET(get<bool>, {0x2B4, 1, 0, 0})
	DMember(bool)                                      bShouldGrantFreeAccess                                      OFFSET(get<bool>, {0x2B5, 1, 0, 0})
	DMember(bool)                                      bAllowHomeSharingAccess                                     OFFSET(get<bool>, {0x2B7, 1, 0, 0})
	DMember(bool)                                      bRequireUGCPrivilege                                        OFFSET(get<bool>, {0x2B8, 1, 0, 0})
	DMember(float)                                     AccessGrantDelaySeconds                                     OFFSET(get<float>, {0x4E0, 4, 0, 0})
	CMember(class UWaitingRoomState*)                  WaitingRoomState                                            OFFSET(get<T>, {0x4E8, 8, 0, 0})
};

/// Class /Script/Account.WaitingRoomState
/// Size: 0x0060 (0x000028 - 0x000088)
class UWaitingRoomState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(int32_t)                                   GracePeriodMins                                             OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
};

/// Struct /Script/Account.WebEnvUrl
/// Size: 0x0030 (0x000000 - 0x000030)
class FWebEnvUrl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   URL                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   RedirectUrl                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Environment                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Account.ExternalAccountServiceConfig
/// Size: 0x0008 (0x000000 - 0x000008)
class FExternalAccountServiceConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EExternalAccountType)                      Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     ExternalServiceName                                         OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Account.ExchangeAccessParams
/// Size: 0x0040 (0x000000 - 0x000040)
class FExchangeAccessParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   EntitlementId                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ReceiptId                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   VendorReceipt                                               OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   AppStore                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Account.GiftMessage
/// Size: 0x0030 (0x000000 - 0x000030)
class FGiftMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   GiftCode                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   SenderName                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Account.OnlineAccountTexts_FailedLoginConsole
/// Size: 0x0168 (0x000000 - 0x000168)
class FOnlineAccountTexts_FailedLoginConsole : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FText)                                     AgeRestriction                                              OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     Generic                                                     OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FText)                                     MissingAuthAssociation                                      OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     NeedPremiumAccount                                          OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FText)                                     OnlinePlayRestriction                                       OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FText)                                     PatchAvailable                                              OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	SMember(FText)                                     PatchAvailableInstruction_Default                           OFFSET(getStruct<T>, {0x90, 24, 0, 0})
	SMember(FText)                                     PatchAvailableInstruction_Xbox                              OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FText)                                     PleaseSignIn                                                OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	SMember(FText)                                     SystemUpdateAvailable                                       OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	SMember(FText)                                     UI                                                          OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	SMember(FText)                                     UnableToComplete                                            OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	SMember(FText)                                     UnableToSignIn                                              OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	SMember(FText)                                     UnableToStartPrivCheck                                      OFFSET(getStruct<T>, {0x138, 24, 0, 0})
	SMember(FText)                                     UnexpectedError                                             OFFSET(getStruct<T>, {0x150, 24, 0, 0})
};

/// Struct /Script/Account.OnlineAccountTexts
/// Size: 0x0990 (0x000000 - 0x000990)
class FOnlineAccountTexts : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2448;

public:
	SMember(FText)                                     AllGiftCodesUsed                                            OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     AssociateConsoleAuth                                        OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FText)                                     AutoLoginFailed                                             OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     AutoLoginFailedMobile                                       OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FText)                                     BannedFromGame                                              OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FText)                                     CheckEntitledToPlay                                         OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	SMember(FText)                                     CheckingRejoin                                              OFFSET(getStruct<T>, {0x90, 24, 0, 0})
	SMember(FText)                                     CheckServiceAvailability                                    OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FText)                                     ConsolePrivileges                                           OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	SMember(FText)                                     CreateAccountCompleted                                      OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	SMember(FText)                                     CreateAccountFailure                                        OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	SMember(FText)                                     CreateHeadless                                              OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	SMember(FText)                                     DoQosPingTests                                              OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	SMember(FText)                                     DowntimeMinutesWarningText                                  OFFSET(getStruct<T>, {0x138, 24, 0, 0})
	SMember(FText)                                     DowntimeSecondsWarningText                                  OFFSET(getStruct<T>, {0x150, 24, 0, 0})
	SMember(FText)                                     DuplicateAuthAssociaton                                     OFFSET(getStruct<T>, {0x168, 24, 0, 0})
	SMember(FText)                                     EulaCheck                                                   OFFSET(getStruct<T>, {0x180, 24, 0, 0})
	SMember(FText)                                     ExchangeConsoleGiftsForAccess                               OFFSET(getStruct<T>, {0x198, 24, 0, 0})
	SMember(FText)                                     FailedAccountCreate                                         OFFSET(getStruct<T>, {0x1B0, 24, 0, 0})
	SMember(FText)                                     FailedEulaCheck_EulaAcceptanceFailed                        OFFSET(getStruct<T>, {0x1C8, 24, 0, 0})
	SMember(FText)                                     FailedEulaCheck_MustAcceptEula                              OFFSET(getStruct<T>, {0x1E0, 24, 0, 0})
	SMember(FText)                                     FailedLoginCredentialsMsg                                   OFFSET(getStruct<T>, {0x1F8, 24, 0, 0})
	SMember(FText)                                     FailedLoginAgeVerificationIncomplete                        OFFSET(getStruct<T>, {0x210, 24, 0, 0})
	SMember(FText)                                     FailedLoginParentalLock                                     OFFSET(getStruct<T>, {0x228, 24, 0, 0})
	SMember(FText)                                     FailedLoginNoRealId                                         OFFSET(getStruct<T>, {0x240, 24, 0, 0})
	SMember(FText)                                     FailedLoginLockoutMsg                                       OFFSET(getStruct<T>, {0x258, 24, 0, 0})
	SMember(FText)                                     FailedLoginRequiresMFA                                      OFFSET(getStruct<T>, {0x270, 24, 0, 0})
	SMember(FText)                                     FailedLoginRequiresAuthAppMFA                               OFFSET(getStruct<T>, {0x288, 24, 0, 0})
	SMember(FText)                                     FailedInvalidMFA                                            OFFSET(getStruct<T>, {0x2A0, 24, 0, 0})
	SMember(FText)                                     FailedLoginRequiresCorrectiveAction                         OFFSET(getStruct<T>, {0x2B8, 24, 0, 0})
	SMember(FText)                                     FailedLoginMsg                                              OFFSET(getStruct<T>, {0x2D0, 24, 0, 0})
	SMember(FText)                                     FailedLoginMsg_InvalidRefreshToken                          OFFSET(getStruct<T>, {0x2E8, 24, 0, 0})
	SMember(FText)                                     FailedStartLogin                                            OFFSET(getStruct<T>, {0x300, 24, 0, 0})
	SMember(FText)                                     FounderChatExitedText                                       OFFSET(getStruct<T>, {0x318, 24, 0, 0})
	SMember(FText)                                     FounderChatJoinedText                                       OFFSET(getStruct<T>, {0x330, 24, 0, 0})
	SMember(FText)                                     GameDisplayName                                             OFFSET(getStruct<T>, {0x348, 24, 0, 0})
	SMember(FText)                                     GeneralLoginFailure                                         OFFSET(getStruct<T>, {0x360, 24, 0, 0})
	SMember(FText)                                     GlobalChatExitedText                                        OFFSET(getStruct<T>, {0x378, 24, 0, 0})
	SMember(FText)                                     GlobalChatJoinedText                                        OFFSET(getStruct<T>, {0x390, 24, 0, 0})
	SMember(FText)                                     HeadlessAccountFailed                                       OFFSET(getStruct<T>, {0x3A8, 24, 0, 0})
	SMember(FText)                                     InMatchShutdownTimeWarningText                              OFFSET(getStruct<T>, {0x3C0, 24, 0, 0})
	SMember(FText)                                     InvalidUser                                                 OFFSET(getStruct<T>, {0x3D8, 24, 0, 0})
	SMember(FText)                                     LoggedOutofMCP                                              OFFSET(getStruct<T>, {0x3F0, 24, 0, 0})
	SMember(FText)                                     DisconnectedFromMCP                                         OFFSET(getStruct<T>, {0x408, 24, 0, 0})
	SMember(FText)                                     LoggedOutReturnedToTitle                                    OFFSET(getStruct<T>, {0x420, 24, 0, 0})
	SMember(FText)                                     LoggedOutSwitchedProfile                                    OFFSET(getStruct<T>, {0x438, 24, 0, 0})
	SMember(FText)                                     LoggingIn                                                   OFFSET(getStruct<T>, {0x450, 24, 0, 0})
	SMember(FText)                                     LoggingInConsoleAuth                                        OFFSET(getStruct<T>, {0x468, 24, 0, 0})
	SMember(FText)                                     LoggingOut                                                  OFFSET(getStruct<T>, {0x480, 24, 0, 0})
	SMember(FText)                                     LoginConsole                                                OFFSET(getStruct<T>, {0x498, 24, 0, 0})
	SMember(FText)                                     LoginFailure                                                OFFSET(getStruct<T>, {0x4B0, 24, 0, 0})
	SMember(FText)                                     Logout_Unlink                                               OFFSET(getStruct<T>, {0x4C8, 24, 0, 0})
	SMember(FText)                                     LogoutCompleted                                             OFFSET(getStruct<T>, {0x4E0, 24, 0, 0})
	SMember(FText)                                     LostConnection                                              OFFSET(getStruct<T>, {0x4F8, 24, 0, 0})
	SMember(FText)                                     LoginStepTimeout                                            OFFSET(getStruct<T>, {0x510, 24, 0, 0})
	SMember(FText)                                     MCPTimeout                                                  OFFSET(getStruct<T>, {0x528, 24, 0, 0})
	SMember(FText)                                     LightswitchCheckNetworkFailureMsg                           OFFSET(getStruct<T>, {0x540, 24, 0, 0})
	SMember(FText)                                     NetworkConnectionUnavailable                                OFFSET(getStruct<T>, {0x558, 24, 0, 0})
	SMember(FText)                                     NoPlayEntitlement                                           OFFSET(getStruct<T>, {0x570, 24, 0, 0})
	SMember(FText)                                     NoServerAccess                                              OFFSET(getStruct<T>, {0x588, 24, 0, 0})
	SMember(FText)                                     PlayAccessRevoked                                           OFFSET(getStruct<T>, {0x5A0, 24, 0, 0})
	SMember(FText)                                     PremiumAccountName_Default                                  OFFSET(getStruct<T>, {0x5B8, 24, 0, 0})
	SMember(FText)                                     PremiumAccountName_Sony                                     OFFSET(getStruct<T>, {0x5D0, 24, 0, 0})
	SMember(FText)                                     PremiumAccountName_Switch                                   OFFSET(getStruct<T>, {0x5E8, 24, 0, 0})
	SMember(FText)                                     PremiumAccountName_XboxOne                                  OFFSET(getStruct<T>, {0x600, 24, 0, 0})
	SMember(FText)                                     RedeemOfflinePurchases                                      OFFSET(getStruct<T>, {0x618, 24, 0, 0})
	SMember(FText)                                     ServiceDowntime                                             OFFSET(getStruct<T>, {0x630, 24, 0, 0})
	SMember(FText)                                     SignInCompleting                                            OFFSET(getStruct<T>, {0x648, 24, 0, 0})
	SMember(FText)                                     SignIntoConsoleServices                                     OFFSET(getStruct<T>, {0x660, 24, 0, 0})
	SMember(FText)                                     TokenExpired                                                OFFSET(getStruct<T>, {0x678, 24, 0, 0})
	SMember(FText)                                     UnableToConnect                                             OFFSET(getStruct<T>, {0x690, 24, 0, 0})
	SMember(FText)                                     UnableToJoinWaitingRoomLoginQueue                           OFFSET(getStruct<T>, {0x6A8, 24, 0, 0})
	SMember(FText)                                     UnexpectedConsoleAuthFailure                                OFFSET(getStruct<T>, {0x6C0, 24, 0, 0})
	SMember(FText)                                     UnlinkConsoleFailed                                         OFFSET(getStruct<T>, {0x6D8, 24, 0, 0})
	SMember(FText)                                     UserLoginFailed                                             OFFSET(getStruct<T>, {0x6F0, 24, 0, 0})
	SMember(FText)                                     WaitingRoom                                                 OFFSET(getStruct<T>, {0x708, 24, 0, 0})
	SMember(FText)                                     WaitingRoomError                                            OFFSET(getStruct<T>, {0x720, 24, 0, 0})
	SMember(FText)                                     WaitingRoomFailure                                          OFFSET(getStruct<T>, {0x738, 24, 0, 0})
	SMember(FText)                                     WaitingRoomWaiting                                          OFFSET(getStruct<T>, {0x750, 24, 0, 0})
	SMember(FOnlineAccountTexts_FailedLoginConsole)    FailedLoginConsole                                          OFFSET(getStruct<T>, {0x768, 360, 0, 0})
	SMember(FText)                                     LoggingInExternalAuth                                       OFFSET(getStruct<T>, {0x8D0, 24, 0, 0})
	SMember(FText)                                     CreateDeviceAuth                                            OFFSET(getStruct<T>, {0x8E8, 24, 0, 0})
	SMember(FText)                                     ExtAuthCanceled                                             OFFSET(getStruct<T>, {0x900, 24, 0, 0})
	SMember(FText)                                     ExtAuthFailure                                              OFFSET(getStruct<T>, {0x918, 24, 0, 0})
	SMember(FText)                                     ExtAuthAssociationFailure                                   OFFSET(getStruct<T>, {0x930, 24, 0, 0})
	SMember(FText)                                     ExtAuthTimeout                                              OFFSET(getStruct<T>, {0x948, 24, 0, 0})
	SMember(FText)                                     ExtAuthMissingAuthAssociation                               OFFSET(getStruct<T>, {0x960, 24, 0, 0})
	SMember(FText)                                     UnableToQueryReceipts                                       OFFSET(getStruct<T>, {0x978, 24, 0, 0})
};

/// Enum /Script/Account.EExternalAccountType
/// Size: 0x10
enum class EExternalAccountType : uint8_t
{
	EExternalAccountType__None                                                       = 0,
	EExternalAccountType__Facebook                                                   = 1,
	EExternalAccountType__Google                                                     = 2,
	EExternalAccountType__Epic_PSN                                                   = 3,
	EExternalAccountType__Epic_XBL                                                   = 4,
	EExternalAccountType__Epic_Erebus                                                = 5,
	EExternalAccountType__Epic_Facebook                                              = 6,
	EExternalAccountType__Epic_Google                                                = 7,
	EExternalAccountType__Epic_Portal                                                = 8,
	EExternalAccountType__EExternalAccountType_MAX                                   = 9
};

/// Enum /Script/Account.EConsoleAuthLinkState
/// Size: 0x09
enum class EConsoleAuthLinkState : uint8_t
{
	EConsoleAuthLinkState__NotOnConsole                                              = 0,
	EConsoleAuthLinkState__ConsoleNotLoggedIn                                        = 1,
	EConsoleAuthLinkState__EpicNotLoggedIn                                           = 2,
	EConsoleAuthLinkState__ThisEpicAccountLinked                                     = 3,
	EConsoleAuthLinkState__OtherEpicAccountLinked                                    = 4,
	EConsoleAuthLinkState__NoEpicAccountLinked                                       = 5,
	EConsoleAuthLinkState__PrimaryIdNotLinked                                        = 6,
	EConsoleAuthLinkState__SecondaryIdNotLinked                                      = 7,
	EConsoleAuthLinkState__EConsoleAuthLinkState_MAX                                 = 8
};

/// Enum /Script/Account.ELoginResult
/// Size: 0x52
enum class ELoginResult : uint8_t
{
	ELoginResult__NotStarted                                                         = 0,
	ELoginResult__Pending                                                            = 1,
	ELoginResult__Success                                                            = 2,
	ELoginResult__Console_LoginFailed                                                = 3,
	ELoginResult__Console_AuthFailed                                                 = 4,
	ELoginResult__Console_MissingAuthAssociation                                     = 5,
	ELoginResult__Console_DuplicateAuthAssociation                                   = 6,
	ELoginResult__Console_AddedAuthAssociation                                       = 7,
	ELoginResult__Console_AuthAssociationFailure                                     = 8,
	ELoginResult__Console_NotEntitled                                                = 9,
	ELoginResult__Console_EntitlementCheckFailed                                     = 10,
	ELoginResult__Console_PrivilegeCheck                                             = 11,
	ELoginResult__Console_PatchOrUpdateRequired                                      = 12,
	ELoginResult__AuthFailed                                                         = 13,
	ELoginResult__AuthFailed_RefreshInvalid                                          = 14,
	ELoginResult__AuthFailed_InvalidMFA                                              = 15,
	ELoginResult__AuthFailed_RequiresMFA                                             = 16,
	ELoginResult__AuthFailed_AgeVerificationIncomplete                               = 17,
	ELoginResult__AuthFailed_LoginLockout                                            = 18,
	ELoginResult__AuthFailed_InvalidCredentials                                      = 19,
	ELoginResult__AuthFailed_CorrectiveActionRequired                                = 20,
	ELoginResult__AuthParentalLock                                                   = 21,
	ELoginResult__PlatformNotAllowed                                                 = 22,
	ELoginResult__NotEntitled                                                        = 23,
	ELoginResult__Banned                                                             = 24,
	ELoginResult__EULACheckFailed                                                    = 25,
	ELoginResult__EULADeclined                                                       = 26,
	ELoginResult__WaitingRoomFailed                                                  = 27,
	ELoginResult__ServiceUnavailable                                                 = 28,
	ELoginResult__GenericError                                                       = 29,
	ELoginResult__RegisterSecondaryPlayerInPrimaryPartyFailed                        = 30,
	ELoginResult__RejoinCheckFailure                                                 = 31,
	ELoginResult__ConnectionFailed                                                   = 32,
	ELoginResult__NetworkConnectionUnavailable                                       = 33,
	ELoginResult__AlreadyLoggingIn                                                   = 34,
	ELoginResult__ExternalAuth_AddedAuthAssociation                                  = 35,
	ELoginResult__ExternalAuth_ConnectionTimeout                                     = 36,
	ELoginResult__ExternalAuth_AuthFailure                                           = 37,
	ELoginResult__ExternalAuth_AssociationFailure                                    = 38,
	ELoginResult__ExternalAuth_MissingAuthAssociation                                = 39,
	ELoginResult__ExternalAuth_Canceled                                              = 40,
	ELoginResult__FailedToCreateParty                                                = 41,
	ELoginResult__ProfileQueryFailed                                                 = 42,
	ELoginResult__QueryKeychainFailed                                                = 43,
	ELoginResult__ClientSettingsDownloadFailed                                       = 44,
	ELoginResult__SupervisedSettingsDownloadFailed                                   = 45,
	ELoginResult__PinGrantFailure                                                    = 46,
	ELoginResult__PinGrantTimeout                                                    = 47,
	ELoginResult__PinGrantCanceled                                                   = 48,
	ELoginResult__LoginStepTimeout                                                   = 49,
	ELoginResult__Console_LoginCanceled                                              = 50,
	ELoginResult__ELoginResult_MAX                                                   = 51
};

/// Enum /Script/Account.ECreateAccountResult
/// Size: 0x08
enum class ECreateAccountResult : uint8_t
{
	ECreateAccountResult__NotStarted                                                 = 0,
	ECreateAccountResult__Pending                                                    = 1,
	ECreateAccountResult__Success                                                    = 2,
	ECreateAccountResult__Console_LoginFailed                                        = 3,
	ECreateAccountResult__Console_DuplicateAuthAssociation                           = 4,
	ECreateAccountResult__DuplicateAccount                                           = 5,
	ECreateAccountResult__GenericError                                               = 6,
	ECreateAccountResult__ECreateAccountResult_MAX                                   = 7
};

