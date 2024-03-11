
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

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

/// Struct /Script/Account.ExternalAccountServiceConfig
/// Size: 0x0008 (0x000000 - 0x000008)
struct FExternalAccountServiceConfig
{ 
	EExternalAccountType                               Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              ExternalServiceName;                                        // 0x0004   (0x0004)  
};

/// Class /Script/Account.ExternalAccountProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UExternalAccountProvider : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FExternalAccountServiceConfig>              Services;                                                   // 0x0028   (0x0010)  
};

/// Struct /Script/Account.WebEnvUrl
/// Size: 0x0030 (0x000000 - 0x000030)
struct FWebEnvUrl
{ 
	SDK_UNDEFINED(16,994) /* FString */                __um(URL);                                                  // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,995) /* FString */                __um(RedirectUrl);                                          // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,996) /* FString */                __um(Environment);                                          // 0x0020   (0x0010)  
};

/// Class /Script/Account.OnlineAccountCommon
/// Size: 0x0960 (0x000028 - 0x000988)
class UOnlineAccountCommon : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0000   (0x0038)  MISSED
	SDK_UNDEFINED(16,997) /* FString */                __um(AvailabilityServiceGameName);                          // 0x0038   (0x0010)  
	bool                                               bRequireLightswitchAtStartup;                               // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	SDK_UNDEFINED(16,998) /* FString */                __um(EulaKey);                                              // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,999) /* TArray<FString> */        __um(EulaKeys);                                             // 0x0060   (0x0010)  
	SDK_UNDEFINED(80,1000) /* TMap<FString, FString> */ __um(EulaKeyMapping);                                      // 0x0070   (0x0050)  
	bool                                               bEnableWaitingRoom;                                         // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00C1   (0x0007)  MISSED
	TArray<FWebEnvUrl>                                 WebCreateEpicAccountUrl;                                    // 0x00C8   (0x0010)  
	bool                                               bAllowLocalLogout;                                          // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x37];                                      // 0x00D9   (0x0037)  MISSED
	float                                              DefaultLoginStepTimeout;                                    // 0x0110   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0114   (0x0004)  MISSED
	SDK_UNDEFINED(80,1001) /* TMap<FName, float> */    __um(CustomLoginStepTimeouts);                              // 0x0118   (0x0050)  
	bool                                               bEnableDevLoginStepTimeouts;                                // 0x0168   (0x0001)  
	unsigned char                                      UnknownData05_5[0x57];                                      // 0x0169   (0x0057)  MISSED
	float                                              DefaultLogoutStepTimeout;                                   // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x01C4   (0x0004)  MISSED
	SDK_UNDEFINED(80,1002) /* TMap<FName, float> */    __um(CustomLogoutStepTimeouts);                             // 0x01C8   (0x0050)  
	bool                                               bEnableDevLogoutStepTimeouts;                               // 0x0218   (0x0001)  
	unsigned char                                      UnknownData07_5[0x67];                                      // 0x0219   (0x0067)  MISSED
	SDK_UNDEFINED(16,1003) /* FString */               __um(RedeemAccessUrl);                                      // 0x0280   (0x0010)  
	SDK_UNDEFINED(16,1004) /* FString */               __um(RequestFreeAccessUrl);                                 // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,1005) /* FString */               __um(RealGameAccessUrl);                                    // 0x02A0   (0x0010)  
	float                                              SkipRedeemOfflinePurchasesChance;                           // 0x02B0   (0x0004)  
	bool                                               bUseFreeAccessInsteadOfGameAccess;                          // 0x02B4   (0x0001)  
	bool                                               bShouldGrantFreeAccess;                                     // 0x02B5   (0x0001)  
	unsigned char                                      UnknownData08_5[0x1];                                       // 0x02B6   (0x0001)  MISSED
	bool                                               bAllowHomeSharingAccess;                                    // 0x02B7   (0x0001)  
	bool                                               bRequireUGCPrivilege;                                       // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData09_5[0x227];                                     // 0x02B9   (0x0227)  MISSED
	float                                              AccessGrantDelaySeconds;                                    // 0x04E0   (0x0004)  
	unsigned char                                      UnknownData10_5[0x4];                                       // 0x04E4   (0x0004)  MISSED
	class UWaitingRoomState*                           WaitingRoomState;                                           // 0x04E8   (0x0008)  
	unsigned char                                      UnknownData11_6[0x498];                                     // 0x04F0   (0x0498)  MISSED
};

/// Class /Script/Account.WaitingRoomState
/// Size: 0x0060 (0x000028 - 0x000088)
class UWaitingRoomState : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x5C];                                      // 0x0000   (0x005C)  MISSED
	int32_t                                            GracePeriodMins;                                            // 0x005C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0060   (0x0028)  MISSED
};

/// Struct /Script/Account.ExchangeAccessParams
/// Size: 0x0040 (0x000000 - 0x000040)
struct FExchangeAccessParams
{ 
	SDK_UNDEFINED(16,1006) /* FString */               __um(EntitlementId);                                        // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1007) /* FString */               __um(ReceiptId);                                            // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1008) /* FString */               __um(VendorReceipt);                                        // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,1009) /* FString */               __um(AppStore);                                             // 0x0030   (0x0010)  
};

/// Struct /Script/Account.GiftMessage
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGiftMessage
{ 
	SDK_UNDEFINED(16,1010) /* FString */               __um(GiftCode);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1011) /* FString */               __um(SenderName);                                           // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Struct /Script/Account.OnlineAccountTexts_FailedLoginConsole
/// Size: 0x0168 (0x000000 - 0x000168)
struct FOnlineAccountTexts_FailedLoginConsole
{ 
	SDK_UNDEFINED(24,1012) /* FText */                 __um(AgeRestriction);                                       // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,1013) /* FText */                 __um(Generic);                                              // 0x0018   (0x0018)  
	SDK_UNDEFINED(24,1014) /* FText */                 __um(MissingAuthAssociation);                               // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,1015) /* FText */                 __um(NeedPremiumAccount);                                   // 0x0048   (0x0018)  
	SDK_UNDEFINED(24,1016) /* FText */                 __um(OnlinePlayRestriction);                                // 0x0060   (0x0018)  
	SDK_UNDEFINED(24,1017) /* FText */                 __um(PatchAvailable);                                       // 0x0078   (0x0018)  
	SDK_UNDEFINED(24,1018) /* FText */                 __um(PatchAvailableInstruction_Default);                    // 0x0090   (0x0018)  
	SDK_UNDEFINED(24,1019) /* FText */                 __um(PatchAvailableInstruction_Xbox);                       // 0x00A8   (0x0018)  
	SDK_UNDEFINED(24,1020) /* FText */                 __um(PleaseSignIn);                                         // 0x00C0   (0x0018)  
	SDK_UNDEFINED(24,1021) /* FText */                 __um(SystemUpdateAvailable);                                // 0x00D8   (0x0018)  
	SDK_UNDEFINED(24,1022) /* FText */                 __um(UI);                                                   // 0x00F0   (0x0018)  
	SDK_UNDEFINED(24,1023) /* FText */                 __um(UnableToComplete);                                     // 0x0108   (0x0018)  
	SDK_UNDEFINED(24,1024) /* FText */                 __um(UnableToSignIn);                                       // 0x0120   (0x0018)  
	SDK_UNDEFINED(24,1025) /* FText */                 __um(UnableToStartPrivCheck);                               // 0x0138   (0x0018)  
	SDK_UNDEFINED(24,1026) /* FText */                 __um(UnexpectedError);                                      // 0x0150   (0x0018)  
};

/// Struct /Script/Account.OnlineAccountTexts
/// Size: 0x0990 (0x000000 - 0x000990)
struct FOnlineAccountTexts
{ 
	SDK_UNDEFINED(24,1027) /* FText */                 __um(AllGiftCodesUsed);                                     // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,1028) /* FText */                 __um(AssociateConsoleAuth);                                 // 0x0018   (0x0018)  
	SDK_UNDEFINED(24,1029) /* FText */                 __um(AutoLoginFailed);                                      // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,1030) /* FText */                 __um(AutoLoginFailedMobile);                                // 0x0048   (0x0018)  
	SDK_UNDEFINED(24,1031) /* FText */                 __um(BannedFromGame);                                       // 0x0060   (0x0018)  
	SDK_UNDEFINED(24,1032) /* FText */                 __um(CheckEntitledToPlay);                                  // 0x0078   (0x0018)  
	SDK_UNDEFINED(24,1033) /* FText */                 __um(CheckingRejoin);                                       // 0x0090   (0x0018)  
	SDK_UNDEFINED(24,1034) /* FText */                 __um(CheckServiceAvailability);                             // 0x00A8   (0x0018)  
	SDK_UNDEFINED(24,1035) /* FText */                 __um(ConsolePrivileges);                                    // 0x00C0   (0x0018)  
	SDK_UNDEFINED(24,1036) /* FText */                 __um(CreateAccountCompleted);                               // 0x00D8   (0x0018)  
	SDK_UNDEFINED(24,1037) /* FText */                 __um(CreateAccountFailure);                                 // 0x00F0   (0x0018)  
	SDK_UNDEFINED(24,1038) /* FText */                 __um(CreateHeadless);                                       // 0x0108   (0x0018)  
	SDK_UNDEFINED(24,1039) /* FText */                 __um(DoQosPingTests);                                       // 0x0120   (0x0018)  
	SDK_UNDEFINED(24,1040) /* FText */                 __um(DowntimeMinutesWarningText);                           // 0x0138   (0x0018)  
	SDK_UNDEFINED(24,1041) /* FText */                 __um(DowntimeSecondsWarningText);                           // 0x0150   (0x0018)  
	SDK_UNDEFINED(24,1042) /* FText */                 __um(DuplicateAuthAssociaton);                              // 0x0168   (0x0018)  
	SDK_UNDEFINED(24,1043) /* FText */                 __um(EulaCheck);                                            // 0x0180   (0x0018)  
	SDK_UNDEFINED(24,1044) /* FText */                 __um(ExchangeConsoleGiftsForAccess);                        // 0x0198   (0x0018)  
	SDK_UNDEFINED(24,1045) /* FText */                 __um(FailedAccountCreate);                                  // 0x01B0   (0x0018)  
	SDK_UNDEFINED(24,1046) /* FText */                 __um(FailedEulaCheck_EulaAcceptanceFailed);                 // 0x01C8   (0x0018)  
	SDK_UNDEFINED(24,1047) /* FText */                 __um(FailedEulaCheck_MustAcceptEula);                       // 0x01E0   (0x0018)  
	SDK_UNDEFINED(24,1048) /* FText */                 __um(FailedLoginCredentialsMsg);                            // 0x01F8   (0x0018)  
	SDK_UNDEFINED(24,1049) /* FText */                 __um(FailedLoginAgeVerificationIncomplete);                 // 0x0210   (0x0018)  
	SDK_UNDEFINED(24,1050) /* FText */                 __um(FailedLoginParentalLock);                              // 0x0228   (0x0018)  
	SDK_UNDEFINED(24,1051) /* FText */                 __um(FailedLoginNoRealId);                                  // 0x0240   (0x0018)  
	SDK_UNDEFINED(24,1052) /* FText */                 __um(FailedLoginLockoutMsg);                                // 0x0258   (0x0018)  
	SDK_UNDEFINED(24,1053) /* FText */                 __um(FailedLoginRequiresMFA);                               // 0x0270   (0x0018)  
	SDK_UNDEFINED(24,1054) /* FText */                 __um(FailedLoginRequiresAuthAppMFA);                        // 0x0288   (0x0018)  
	SDK_UNDEFINED(24,1055) /* FText */                 __um(FailedInvalidMFA);                                     // 0x02A0   (0x0018)  
	SDK_UNDEFINED(24,1056) /* FText */                 __um(FailedLoginRequiresCorrectiveAction);                  // 0x02B8   (0x0018)  
	SDK_UNDEFINED(24,1057) /* FText */                 __um(FailedLoginMsg);                                       // 0x02D0   (0x0018)  
	SDK_UNDEFINED(24,1058) /* FText */                 __um(FailedLoginMsg_InvalidRefreshToken);                   // 0x02E8   (0x0018)  
	SDK_UNDEFINED(24,1059) /* FText */                 __um(FailedStartLogin);                                     // 0x0300   (0x0018)  
	SDK_UNDEFINED(24,1060) /* FText */                 __um(FounderChatExitedText);                                // 0x0318   (0x0018)  
	SDK_UNDEFINED(24,1061) /* FText */                 __um(FounderChatJoinedText);                                // 0x0330   (0x0018)  
	SDK_UNDEFINED(24,1062) /* FText */                 __um(GameDisplayName);                                      // 0x0348   (0x0018)  
	SDK_UNDEFINED(24,1063) /* FText */                 __um(GeneralLoginFailure);                                  // 0x0360   (0x0018)  
	SDK_UNDEFINED(24,1064) /* FText */                 __um(GlobalChatExitedText);                                 // 0x0378   (0x0018)  
	SDK_UNDEFINED(24,1065) /* FText */                 __um(GlobalChatJoinedText);                                 // 0x0390   (0x0018)  
	SDK_UNDEFINED(24,1066) /* FText */                 __um(HeadlessAccountFailed);                                // 0x03A8   (0x0018)  
	SDK_UNDEFINED(24,1067) /* FText */                 __um(InMatchShutdownTimeWarningText);                       // 0x03C0   (0x0018)  
	SDK_UNDEFINED(24,1068) /* FText */                 __um(InvalidUser);                                          // 0x03D8   (0x0018)  
	SDK_UNDEFINED(24,1069) /* FText */                 __um(LoggedOutofMCP);                                       // 0x03F0   (0x0018)  
	SDK_UNDEFINED(24,1070) /* FText */                 __um(DisconnectedFromMCP);                                  // 0x0408   (0x0018)  
	SDK_UNDEFINED(24,1071) /* FText */                 __um(LoggedOutReturnedToTitle);                             // 0x0420   (0x0018)  
	SDK_UNDEFINED(24,1072) /* FText */                 __um(LoggedOutSwitchedProfile);                             // 0x0438   (0x0018)  
	SDK_UNDEFINED(24,1073) /* FText */                 __um(LoggingIn);                                            // 0x0450   (0x0018)  
	SDK_UNDEFINED(24,1074) /* FText */                 __um(LoggingInConsoleAuth);                                 // 0x0468   (0x0018)  
	SDK_UNDEFINED(24,1075) /* FText */                 __um(LoggingOut);                                           // 0x0480   (0x0018)  
	SDK_UNDEFINED(24,1076) /* FText */                 __um(LoginConsole);                                         // 0x0498   (0x0018)  
	SDK_UNDEFINED(24,1077) /* FText */                 __um(LoginFailure);                                         // 0x04B0   (0x0018)  
	SDK_UNDEFINED(24,1078) /* FText */                 __um(Logout_Unlink);                                        // 0x04C8   (0x0018)  
	SDK_UNDEFINED(24,1079) /* FText */                 __um(LogoutCompleted);                                      // 0x04E0   (0x0018)  
	SDK_UNDEFINED(24,1080) /* FText */                 __um(LostConnection);                                       // 0x04F8   (0x0018)  
	SDK_UNDEFINED(24,1081) /* FText */                 __um(LoginStepTimeout);                                     // 0x0510   (0x0018)  
	SDK_UNDEFINED(24,1082) /* FText */                 __um(MCPTimeout);                                           // 0x0528   (0x0018)  
	SDK_UNDEFINED(24,1083) /* FText */                 __um(LightswitchCheckNetworkFailureMsg);                    // 0x0540   (0x0018)  
	SDK_UNDEFINED(24,1084) /* FText */                 __um(NetworkConnectionUnavailable);                         // 0x0558   (0x0018)  
	SDK_UNDEFINED(24,1085) /* FText */                 __um(NoPlayEntitlement);                                    // 0x0570   (0x0018)  
	SDK_UNDEFINED(24,1086) /* FText */                 __um(NoServerAccess);                                       // 0x0588   (0x0018)  
	SDK_UNDEFINED(24,1087) /* FText */                 __um(PlayAccessRevoked);                                    // 0x05A0   (0x0018)  
	SDK_UNDEFINED(24,1088) /* FText */                 __um(PremiumAccountName_Default);                           // 0x05B8   (0x0018)  
	SDK_UNDEFINED(24,1089) /* FText */                 __um(PremiumAccountName_Sony);                              // 0x05D0   (0x0018)  
	SDK_UNDEFINED(24,1090) /* FText */                 __um(PremiumAccountName_Switch);                            // 0x05E8   (0x0018)  
	SDK_UNDEFINED(24,1091) /* FText */                 __um(PremiumAccountName_XboxOne);                           // 0x0600   (0x0018)  
	SDK_UNDEFINED(24,1092) /* FText */                 __um(RedeemOfflinePurchases);                               // 0x0618   (0x0018)  
	SDK_UNDEFINED(24,1093) /* FText */                 __um(ServiceDowntime);                                      // 0x0630   (0x0018)  
	SDK_UNDEFINED(24,1094) /* FText */                 __um(SignInCompleting);                                     // 0x0648   (0x0018)  
	SDK_UNDEFINED(24,1095) /* FText */                 __um(SignIntoConsoleServices);                              // 0x0660   (0x0018)  
	SDK_UNDEFINED(24,1096) /* FText */                 __um(TokenExpired);                                         // 0x0678   (0x0018)  
	SDK_UNDEFINED(24,1097) /* FText */                 __um(UnableToConnect);                                      // 0x0690   (0x0018)  
	SDK_UNDEFINED(24,1098) /* FText */                 __um(UnableToJoinWaitingRoomLoginQueue);                    // 0x06A8   (0x0018)  
	SDK_UNDEFINED(24,1099) /* FText */                 __um(UnexpectedConsoleAuthFailure);                         // 0x06C0   (0x0018)  
	SDK_UNDEFINED(24,1100) /* FText */                 __um(UnlinkConsoleFailed);                                  // 0x06D8   (0x0018)  
	SDK_UNDEFINED(24,1101) /* FText */                 __um(UserLoginFailed);                                      // 0x06F0   (0x0018)  
	SDK_UNDEFINED(24,1102) /* FText */                 __um(WaitingRoom);                                          // 0x0708   (0x0018)  
	SDK_UNDEFINED(24,1103) /* FText */                 __um(WaitingRoomError);                                     // 0x0720   (0x0018)  
	SDK_UNDEFINED(24,1104) /* FText */                 __um(WaitingRoomFailure);                                   // 0x0738   (0x0018)  
	SDK_UNDEFINED(24,1105) /* FText */                 __um(WaitingRoomWaiting);                                   // 0x0750   (0x0018)  
	FOnlineAccountTexts_FailedLoginConsole             FailedLoginConsole;                                         // 0x0768   (0x0168)  
	SDK_UNDEFINED(24,1106) /* FText */                 __um(LoggingInExternalAuth);                                // 0x08D0   (0x0018)  
	SDK_UNDEFINED(24,1107) /* FText */                 __um(CreateDeviceAuth);                                     // 0x08E8   (0x0018)  
	SDK_UNDEFINED(24,1108) /* FText */                 __um(ExtAuthCanceled);                                      // 0x0900   (0x0018)  
	SDK_UNDEFINED(24,1109) /* FText */                 __um(ExtAuthFailure);                                       // 0x0918   (0x0018)  
	SDK_UNDEFINED(24,1110) /* FText */                 __um(ExtAuthAssociationFailure);                            // 0x0930   (0x0018)  
	SDK_UNDEFINED(24,1111) /* FText */                 __um(ExtAuthTimeout);                                       // 0x0948   (0x0018)  
	SDK_UNDEFINED(24,1112) /* FText */                 __um(ExtAuthMissingAuthAssociation);                        // 0x0960   (0x0018)  
	SDK_UNDEFINED(24,1113) /* FText */                 __um(UnableToQueryReceipts);                                // 0x0978   (0x0018)  
};

