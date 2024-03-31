
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	// void GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementID, bool& bFoundID, float& Progress); // [0x6e6a63c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
	// void GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementID, bool& bFoundID, FText& Title, FText& LockedDescription, FText& UnlockedDescription, bool& bHidden); // [0x6e6a2e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy
/// Size: 0x0038 (0x000030 - 0x000068)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	// class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x6e658a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	// class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x6e656c4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy
/// Size: 0x0050 (0x000030 - 0x000080)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	// class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementName, float Progress, int32_t UserTag); // [0x6e6affc] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ConnectionCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	// class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x6e65a84] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy
/// Size: 0x0068 (0x000030 - 0x000098)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
	// class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN, bool bUseLobbiesIfAvailable); // [0x6e685b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
	// class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x6e68910] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndMatchCallbackProxy
/// Size: 0x0050 (0x000030 - 0x000080)
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
	// class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<Class> MatchActor, FString MatchID, TEnumAsByte<EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome> OtherPlayersOutcome); // [0x6e68aec] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndTurnCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
	// class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TScriptInterface<Class> TurnBasedMatchInterface); // [0x6e693c8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy
/// Size: 0x0060 (0x000030 - 0x000090)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	// FString GetServerName(FBlueprintSessionResult& Result);                                                                  // [0x6e6aad4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	// int32_t GetPingInMs(FBlueprintSessionResult& Result);                                                                    // [0x6e6aa10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	// int32_t GetMaxPlayers(FBlueprintSessionResult& Result);                                                                  // [0x6e6a94c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	// int32_t GetCurrentPlayers(FBlueprintSessionResult& Result);                                                              // [0x6e6a884] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
	// class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // [0x6e69ba4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
/// Size: 0x0058 (0x000030 - 0x000088)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
	// class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<Class> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // [0x6e69e7c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UInAppPurchaseCallbackProxy2 : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
	// class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController); // [0x6e68168] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
	// class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController); // [0x6e67b70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
	// class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, FInAppPurchaseProductRequest2& ProductRequest); // [0x6e65ef4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCheckoutCallbackProxy
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UInAppPurchaseCheckoutCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCheckoutCallbackProxy.CreateProxyObjectForInAppPurchaseCheckout
	// class UInAppPurchaseCheckoutCallbackProxy* CreateProxyObjectForInAppPurchaseCheckout(class APlayerController* PlayerController, FInAppPurchaseProductRequest2& ProductRequest); // [0x6e6682c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseFinalizeProxy
/// Size: 0x0000 (0x000028 - 0x000028)
class UInAppPurchaseFinalizeProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseFinalizeProxy.CreateProxyObjectForInAppPurchaseFinalize
	// class UInAppPurchaseFinalizeProxy* CreateProxyObjectForInAppPurchaseFinalize(FInAppPurchaseReceiptInfo2& InAppPurchaseReceipt, class APlayerController* PlayerController); // [0x6e66eec] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
/// Size: 0x0040 (0x000028 - 0x000068)
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
	// class UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<FString>& ProductIdentifiers); // [0x6e6787c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseReceiptsCallbackProxy
/// Size: 0x0060 (0x000028 - 0x000088)
class UInAppPurchaseReceiptsCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseReceiptsCallbackProxy.CreateProxyObjectForInAppPurchaseRestoreOwnedProducts
	// class UInAppPurchaseReceiptsCallbackProxy* CreateProxyObjectForInAppPurchaseRestoreOwnedProducts(class APlayerController* PlayerController); // [0x6e68084] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseReceiptsCallbackProxy.CreateProxyObjectForInAppPurchaseQueryOwnedProducts
	// class UInAppPurchaseReceiptsCallbackProxy* CreateProxyObjectForInAppPurchaseQueryOwnedProducts(class APlayerController* PlayerController); // [0x6e67e20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseReceiptsCallbackProxy.CreateProxyObjectForInAppPurchaseGetKnownReceipts
	// class UInAppPurchaseReceiptsCallbackProxy* CreateProxyObjectForInAppPurchaseGetKnownReceipts(class APlayerController* PlayerController); // [0x6e67648] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
	// class UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest2>& ConsumableProductFlags, class APlayerController* PlayerController); // [0x6e67f04] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.IpConnection
/// Size: 0x0090 (0x001E00 - 0x001E90)
class UIpConnection : public UNetConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7824;

public:
	DMember(float)                                     SocketErrorDisconnectDelay                                  OFFSET(get<float>, {0x1E74, 4, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.IpNetDriver
/// Size: 0x00B0 (0x000890 - 0x000940)
class UIpNetDriver : public UNetDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2368;

public:
	DMember(bool)                                      LogPortUnreach                                              OFFSET(get<bool>, {0x890, 1, 1, 0})
	DMember(bool)                                      AllowPlayerPortUnreach                                      OFFSET(get<bool>, {0x890, 1, 1, 1})
	DMember(bool)                                      bExitOnBindFailure                                          OFFSET(get<bool>, {0x890, 1, 1, 2})
	DMember(uint32_t)                                  MaxPortCountToTry                                           OFFSET(get<uint32_t>, {0x894, 4, 0, 0})
	DMember(uint32_t)                                  ServerDesiredSocketReceiveBufferBytes                       OFFSET(get<uint32_t>, {0x89C, 4, 0, 0})
	DMember(uint32_t)                                  ServerDesiredSocketSendBufferBytes                          OFFSET(get<uint32_t>, {0x8A0, 4, 0, 0})
	DMember(uint32_t)                                  ClientDesiredSocketReceiveBufferBytes                       OFFSET(get<uint32_t>, {0x8A4, 4, 0, 0})
	DMember(uint32_t)                                  ClientDesiredSocketSendBufferBytes                          OFFSET(get<uint32_t>, {0x8A8, 4, 0, 0})
	DMember(double)                                    MaxSecondsInReceive                                         OFFSET(get<double>, {0x8B0, 8, 0, 0})
	DMember(int32_t)                                   NbPacketsBetweenReceiveTimeTest                             OFFSET(get<int32_t>, {0x8B8, 4, 0, 0})
	DMember(float)                                     ResolutionConnectionTimeout                                 OFFSET(get<float>, {0x8BC, 4, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy
/// Size: 0x0168 (0x000030 - 0x000198)
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
	// class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, FBlueprintSessionResult& SearchResult); // [0x6e6abb4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
	// bool WriteLeaderboardInteger(class APlayerController* PlayerController, FName StatName, int32_t StatValue);              // [0x6e6b2a8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
/// Size: 0x0040 (0x000028 - 0x000068)
class ULeaderboardFlushCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
	// class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, FName SessionName); // [0x6e65c60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
/// Size: 0x0068 (0x000028 - 0x000090)
class ULeaderboardQueryCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	// class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, FName StatName); // [0x6e68450] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LogoutCallbackProxy
/// Size: 0x0038 (0x000030 - 0x000068)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LogoutCallbackProxy.Logout
	// class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);        // [0x6e6ae20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeacon
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AOnlineBeacon : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	DMember(float)                                     BeaconConnectionInitialTimeout                              OFFSET(get<float>, {0x298, 4, 0, 0})
	DMember(float)                                     BeaconConnectionTimeout                                     OFFSET(get<float>, {0x29C, 4, 0, 0})
	CMember(class UNetDriver*)                         NetDriver                                                   OFFSET(get<T>, {0x2A0, 8, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconClient
/// Size: 0x0060 (0x0002C0 - 0x000320)
class AOnlineBeaconClient : public AOnlineBeacon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(class AOnlineBeaconHostObject*)            BeaconOwner                                                 OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UNetConnection*)                     BeaconConnection                                            OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(EBeaconConnectionState)                    ConnectionState                                             OFFSET(get<T>, {0x2D0, 1, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	// void ClientOnConnected();                                                                                                // [0x1e9cc90] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHost
/// Size: 0x0110 (0x0002C0 - 0x0003D0)
class AOnlineBeaconHost : public AOnlineBeacon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	DMember(int32_t)                                   ListenPort                                                  OFFSET(get<int32_t>, {0x2C0, 4, 0, 0})
	DMember(bool)                                      bReuseAddressAndPort                                        OFFSET(get<bool>, {0x2C4, 1, 0, 0})
	DMember(bool)                                      bAuthRequired                                               OFFSET(get<bool>, {0x2C5, 1, 0, 0})
	DMember(uint32_t)                                  MaxAuthTokenSize                                            OFFSET(get<uint32_t>, {0x2C8, 4, 0, 0})
	CMember(TArray<class AOnlineBeaconClient*>)        ClientActors                                                OFFSET(get<T>, {0x320, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHostObject
/// Size: 0x0028 (0x000290 - 0x0002B8)
class AOnlineBeaconHostObject : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FString)                                   BeaconTypeName                                              OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	CMember(class UClass*)                             ClientBeaconActorClass                                      OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(TArray<class AOnlineBeaconClient*>)        ClientActors                                                OFFSET(get<T>, {0x2A8, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl
/// Size: 0x0160 (0x000028 - 0x000188)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(TMap<FName, FName>)                        MappedUniqueNetIdTypes                                      OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TArray<FName>)                             CompatibleUniqueNetIdTypes                                  OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FName)                                     VoiceSubsystemNameOverride                                  OFFSET(getStruct<T>, {0x88, 4, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.OnlinePIESettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UOnlinePIESettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bOnlinePIEEnabled                                           OFFSET(get<bool>, {0x30, 1, 0, 0})
	CMember(TArray<FPIELoginSettingsInternal>)         Logins                                                      OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl
/// Size: 0x0000 (0x000028 - 0x000028)
class UOnlineServicesEngineInterfaceImpl : public UOnlineEngineInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OnlineSubsystemUtils.OnlineSessionClient
/// Size: 0x01B8 (0x000028 - 0x0001E0)
class UOnlineSessionClient : public UOnlineSession
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	DMember(bool)                                      bIsFromInvite                                               OFFSET(get<bool>, {0x1D8, 1, 0, 0})
	DMember(bool)                                      bHandlingDisconnect                                         OFFSET(get<bool>, {0x1D9, 1, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconClient
/// Size: 0x00C8 (0x000320 - 0x0003E8)
class APartyBeaconClient : public AOnlineBeaconClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	SMember(FString)                                   DestSessionId                                               OFFSET(getStruct<T>, {0x350, 16, 0, 0})
	SMember(FPartyReservation)                         PendingReservation                                          OFFSET(getStruct<T>, {0x360, 88, 0, 0})
	CMember(EClientRequestType)                        RequestType                                                 OFFSET(get<T>, {0x3B8, 1, 0, 0})
	DMember(bool)                                      bPendingReservationSent                                     OFFSET(get<bool>, {0x3B9, 1, 0, 0})
	DMember(bool)                                      bCancelReservation                                          OFFSET(get<bool>, {0x3BA, 1, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	// void ServerUpdateReservationRequest(FString SessionId, FPartyReservation ReservationUpdate);                             // [0x6e8b75c] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	// void ServerReservationRequest(FString SessionId, FPartyReservation Reservation);                                         // [0x6e8b3c4] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
	// void ServerRemoveMemberFromReservationRequest(FString SessionId, FPartyReservation ReservationUpdate);                   // [0x6e8b1e0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	// void ServerCancelReservationRequest(FUniqueNetIdRepl PartyLeader);                                                       // [0x6e8b064] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
	// void ServerAddOrUpdateReservationRequest(FString SessionId, FPartyReservation Reservation);                              // [0x6e8ae80] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	// void ClientSendReservationUpdates(int32_t NumRemainingReservations);                                                     // [0x6e88b6c] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	// void ClientSendReservationFull();                                                                                        // [0x6e88b54] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	// void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                                // [0x6e889cc] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
	// void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                          // [0x6e88844] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconHost
/// Size: 0x0078 (0x0002B8 - 0x000330)
class APartyBeaconHost : public AOnlineBeaconHostObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(class UPartyBeaconState*)                  State                                                       OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      bLogoutOnSessionTimeout                                     OFFSET(get<bool>, {0x320, 1, 0, 0})
	DMember(bool)                                      bIsValidationStrRequired                                    OFFSET(get<bool>, {0x321, 1, 0, 0})
	DMember(float)                                     SessionTimeoutSecs                                          OFFSET(get<float>, {0x324, 4, 0, 0})
	DMember(float)                                     TravelSessionTimeoutSecs                                    OFFSET(get<float>, {0x328, 4, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconState
/// Size: 0x0070 (0x000028 - 0x000098)
class UPartyBeaconState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FName)                                     SessionName                                                 OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumConsumedReservations                                     OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   MaxReservations                                             OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   NumTeams                                                    OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   NumPlayersPerTeam                                           OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FName)                                     TeamAssignmentMethod                                        OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   ReservedHostTeamNum                                         OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   ForceTeamNum                                                OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(bool)                                      bRestrictCrossConsole                                       OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(TArray<FString>)                           PlatformCrossplayRestrictions                               OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FPartyBeaconCrossplayPlatformMapping>) PlatformTypeMapping                                      OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(bool)                                      bEnableRemovalRequests                                      OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bRespectCompetitiveIntegrity                                OFFSET(get<bool>, {0x71, 1, 0, 0})
	CMember(TArray<FPartyReservation>)                 Reservations                                                OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
	// class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int32_t TurnTimeoutInSeconds); // [0x6e8a47c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy
/// Size: 0x0030 (0x000030 - 0x000060)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
	// class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController); // [0x6e8b940] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconClient
/// Size: 0x00F8 (0x000320 - 0x000418)
class ASpectatorBeaconClient : public AOnlineBeaconClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	SMember(FString)                                   DestSessionId                                               OFFSET(getStruct<T>, {0x350, 16, 0, 0})
	SMember(FSpectatorReservation)                     PendingReservation                                          OFFSET(getStruct<T>, {0x360, 136, 0, 0})
	CMember(ESpectatorClientRequestType)               RequestType                                                 OFFSET(get<T>, {0x3E8, 1, 0, 0})
	DMember(bool)                                      bPendingReservationSent                                     OFFSET(get<bool>, {0x3E9, 1, 0, 0})
	DMember(bool)                                      bCancelReservation                                          OFFSET(get<bool>, {0x3EA, 1, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
	// void ServerReservationRequest(FString SessionId, FSpectatorReservation Reservation);                                     // [0x6e8b5a8] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
	// void ServerCancelReservationRequest(FUniqueNetIdRepl Spectator);                                                         // [0x6e8b064] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
	// void ClientSendReservationUpdates(int32_t NumRemainingReservations);                                                     // [0x6e88c30] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
	// void ClientSendReservationFull();                                                                                        // [0x254e784] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
	// void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);                            // [0x6e88a90] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
	// void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);                      // [0x6e88908] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconHost
/// Size: 0x0078 (0x0002B8 - 0x000330)
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(class USpectatorBeaconState*)              State                                                       OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      bLogoutOnSessionTimeout                                     OFFSET(get<bool>, {0x320, 1, 0, 0})
	DMember(bool)                                      bIsValidationStrRequired                                    OFFSET(get<bool>, {0x321, 1, 0, 0})
	DMember(float)                                     SessionTimeoutSecs                                          OFFSET(get<float>, {0x324, 4, 0, 0})
	DMember(float)                                     TravelSessionTimeoutSecs                                    OFFSET(get<float>, {0x328, 4, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconState
/// Size: 0x0030 (0x000028 - 0x000058)
class USpectatorBeaconState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     SessionName                                                 OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumConsumedReservations                                     OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   MaxReservations                                             OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bRestrictCrossConsole                                       OFFSET(get<bool>, {0x34, 1, 0, 0})
	CMember(TArray<FSpectatorReservation>)             Reservations                                                OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconClient
/// Size: 0x0000 (0x000320 - 0x000320)
class ATestBeaconClient : public AOnlineBeaconClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.TestBeaconClient.ServerPong
	// void ServerPong();                                                                                                       // [0x6e8b194] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.TestBeaconClient.ClientPing
	// void ClientPing();                                                                                                       // [0x21dc768] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconHost
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class ATestBeaconHost : public AOnlineBeaconHostObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
};

/// Class /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
	// void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object); // [0x6e8acc8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	// void GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32_t PlayerIndex, FString& PlayerDisplayName); // [0x6e89c58] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	// void GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32_t& PlayerIndex); // [0x6e89488] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
	// void GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, bool& bIsMyTurn); // [0x6e88cf4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.VoipListenerSynthComponent
/// Size: 0x0060 (0x000880 - 0x0008E0)
class UVoipListenerSynthComponent : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2272;

public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
	// bool IsIdling();                                                                                                         // [0x6e8cf50] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemUtils.BlueprintSessionResult
/// Size: 0x0120 (0x000000 - 0x000120)
class FBlueprintSessionResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Struct /Script/OnlineSubsystemUtils.OnlineProxyStoreOffer
/// Size: 0x0110 (0x000000 - 0x000110)
class FOnlineProxyStoreOffer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FString)                                   OfferId                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FText)                                     LongDescription                                             OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FText)                                     RegularPriceText                                            OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	DMember(int32_t)                                   RegularPrice                                                OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	SMember(FText)                                     PriceText                                                   OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	DMember(int32_t)                                   NumericPrice                                                OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	SMember(FString)                                   CurrencyCode                                                OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FDateTime)                                 ReleaseDate                                                 OFFSET(getStruct<T>, {0xA8, 8, 0, 0})
	SMember(FDateTime)                                 ExpirationDate                                              OFFSET(getStruct<T>, {0xB0, 8, 0, 0})
	CMember(EOnlineProxyStoreOfferDiscountType)        DiscountType                                                OFFSET(get<T>, {0xB8, 1, 0, 0})
	CMember(TMap<FString, FString>)                    DynamicFields                                               OFFSET(get<T>, {0xC0, 80, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
/// Size: 0x0030 (0x000000 - 0x000030)
class FInAppPurchaseRestoreInfo2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ItemName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ItemId                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ValidationInfo                                              OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
/// Size: 0x0040 (0x000000 - 0x000040)
class FInAppPurchaseReceiptInfo2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   ItemName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ItemId                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ValidationInfo                                              OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   TransactionIdentifier                                       OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductRequest2
/// Size: 0x0018 (0x000000 - 0x000018)
class FInAppPurchaseProductRequest2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ProductIdentifier                                           OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsConsumable                                               OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.PlayerReservation
/// Size: 0x0058 (0x000000 - 0x000058)
class FPlayerReservation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FUniqueNetIdRepl)                          UniqueID                                                    OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FString)                                   ValidationStr                                               OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   Platform                                                    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      bAllowCrossplay                                             OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(float)                                     ElapsedTime                                                 OFFSET(get<float>, {0x54, 4, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductInfo2
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FInAppPurchaseProductInfo2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FString)                                   Identifier                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   TransactionIdentifier                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   DisplayName                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   DisplayDescription                                          OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   DisplayPrice                                                OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(float)                                     RawPrice                                                    OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FString)                                   CurrencyCode                                                OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   CurrencySymbol                                              OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   DecimalSeparator                                            OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   GroupingSeparator                                           OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FString)                                   ReceiptData                                                 OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	CMember(TMap<FString, FString>)                    DynamicFields                                               OFFSET(get<T>, {0xA8, 80, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.PIELoginSettingsInternal
/// Size: 0x0040 (0x000000 - 0x000040)
class FPIELoginSettingsInternal : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Token                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Type                                                        OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TArray<char>)                              TokenBytes                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.PartyReservation
/// Size: 0x0058 (0x000000 - 0x000058)
class FPartyReservation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   TeamNum                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FUniqueNetIdRepl)                          PartyLeader                                                 OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	CMember(TArray<FPlayerReservation>)                PartyMembers                                                OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FPlayerReservation>)                RemovedPartyMembers                                         OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
/// Size: 0x0020 (0x000000 - 0x000020)
class FPartyBeaconCrossplayPlatformMapping : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   PlatformName                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   PlatformType                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.SpectatorReservation
/// Size: 0x0088 (0x000000 - 0x000088)
class FSpectatorReservation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FUniqueNetIdRepl)                          SpectatorId                                                 OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FPlayerReservation)                        Spectator                                                   OFFSET(getStruct<T>, {0x30, 88, 0, 0})
};

/// Enum /Script/OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
/// Size: 0x05
enum class EOnlineProxyStoreOfferDiscountType : uint8_t
{
	EOnlineProxyStoreOfferDiscountType__NotOnSale                                    = 0,
	EOnlineProxyStoreOfferDiscountType__Percentage                                   = 1,
	EOnlineProxyStoreOfferDiscountType__DiscountAmount                               = 2,
	EOnlineProxyStoreOfferDiscountType__PayAmount                                    = 3,
	EOnlineProxyStoreOfferDiscountType__EOnlineProxyStoreOfferDiscountType_MAX       = 4
};

/// Enum /Script/OnlineSubsystemUtils.EInAppPurchaseStatus
/// Size: 0x07
enum class EInAppPurchaseStatus : uint8_t
{
	EInAppPurchaseStatus__Invalid                                                    = 0,
	EInAppPurchaseStatus__Failed                                                     = 1,
	EInAppPurchaseStatus__Deferred                                                   = 2,
	EInAppPurchaseStatus__Canceled                                                   = 3,
	EInAppPurchaseStatus__Purchased                                                  = 4,
	EInAppPurchaseStatus__Restored                                                   = 5,
	EInAppPurchaseStatus__EInAppPurchaseStatus_MAX                                   = 6
};

/// Enum /Script/OnlineSubsystemUtils.EBeaconConnectionState
/// Size: 0x05
enum class EBeaconConnectionState : uint8_t
{
	EBeaconConnectionState__Invalid                                                  = 0,
	EBeaconConnectionState__Closed                                                   = 1,
	EBeaconConnectionState__Pending                                                  = 2,
	EBeaconConnectionState__Open                                                     = 3,
	EBeaconConnectionState__EBeaconConnectionState_MAX                               = 4
};

/// Enum /Script/OnlineSubsystemUtils.EClientRequestType
/// Size: 0x09
enum class EClientRequestType : uint8_t
{
	EClientRequestType__NonePending                                                  = 0,
	EClientRequestType__ExistingSessionReservation                                   = 1,
	EClientRequestType__ReservationUpdate                                            = 2,
	EClientRequestType__EmptyServerReservation                                       = 3,
	EClientRequestType__Reconnect                                                    = 4,
	EClientRequestType__Abandon                                                      = 5,
	EClientRequestType__ReservationRemoveMembers                                     = 6,
	EClientRequestType__AddOrUpdateReservation                                       = 7,
	EClientRequestType__EClientRequestType_MAX                                       = 8
};

/// Enum /Script/OnlineSubsystemUtils.EPartyReservationResult
/// Size: 0x17
enum class EPartyReservationResult : uint8_t
{
	EPartyReservationResult__NoResult                                                = 0,
	EPartyReservationResult__RequestPending                                          = 1,
	EPartyReservationResult__GeneralError                                            = 2,
	EPartyReservationResult__PartyLimitReached                                       = 3,
	EPartyReservationResult__IncorrectPlayerCount                                    = 4,
	EPartyReservationResult__RequestTimedOut                                         = 5,
	EPartyReservationResult__ReservationDuplicate                                    = 6,
	EPartyReservationResult__ReservationNotFound                                     = 7,
	EPartyReservationResult__ReservationAccepted                                     = 8,
	EPartyReservationResult__ReservationDenied                                       = 9,
	EPartyReservationResult__ReservationDenied_CrossPlayRestriction                  = 10,
	EPartyReservationResult__ReservationDenied_Banned                                = 11,
	EPartyReservationResult__ReservationRequestCanceled                              = 12,
	EPartyReservationResult__ReservationInvalid                                      = 13,
	EPartyReservationResult__BadSessionId                                            = 14,
	EPartyReservationResult__ReservationDenied_ContainsExistingPlayers               = 15,
	EPartyReservationResult__EPartyReservationResult_MAX                             = 16
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorClientRequestType
/// Size: 0x07
enum class ESpectatorClientRequestType : uint8_t
{
	ESpectatorClientRequestType__NonePending                                         = 0,
	ESpectatorClientRequestType__ExistingSessionReservation                          = 1,
	ESpectatorClientRequestType__ReservationUpdate                                   = 2,
	ESpectatorClientRequestType__EmptyServerReservation                              = 3,
	ESpectatorClientRequestType__Reconnect                                           = 4,
	ESpectatorClientRequestType__Abandon                                             = 5,
	ESpectatorClientRequestType__ESpectatorClientRequestType_MAX                     = 6
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorReservationResult
/// Size: 0x17
enum class ESpectatorReservationResult : uint8_t
{
	ESpectatorReservationResult__NoResult                                            = 0,
	ESpectatorReservationResult__RequestPending                                      = 1,
	ESpectatorReservationResult__GeneralError                                        = 2,
	ESpectatorReservationResult__SpectatorLimitReached                               = 3,
	ESpectatorReservationResult__IncorrectPlayerCount                                = 4,
	ESpectatorReservationResult__RequestTimedOut                                     = 5,
	ESpectatorReservationResult__ReservationDuplicate                                = 6,
	ESpectatorReservationResult__ReservationNotFound                                 = 7,
	ESpectatorReservationResult__ReservationAccepted                                 = 8,
	ESpectatorReservationResult__ReservationDenied                                   = 9,
	ESpectatorReservationResult__ReservationDenied_CrossPlayRestriction              = 10,
	ESpectatorReservationResult__ReservationDenied_Banned                            = 11,
	ESpectatorReservationResult__ReservationRequestCanceled                          = 12,
	ESpectatorReservationResult__ReservationInvalid                                  = 13,
	ESpectatorReservationResult__BadSessionId                                        = 14,
	ESpectatorReservationResult__ReservationDenied_ContainsExistingPlayers           = 15,
	ESpectatorReservationResult__ESpectatorReservationResult_MAX                     = 16
};

