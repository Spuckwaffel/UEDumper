
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils
/// dependency: SocketSubsystemEOS

/// Class /Script/OnlineSubsystemEOS.NetDriverEOS
/// Size: 0x0000 (0x0008F8 - 0x0008F8)
class UNetDriverEOS : public UNetDriverEOSBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2296;

public:
};

/// Class /Script/OnlineSubsystemEOS.EOSArtifactSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UEOSArtifactSettings : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/OnlineSubsystemEOS.EOSSettings
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UEOSSettings : public URuntimeOptionsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FString)                                   CacheDir                                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   DefaultArtifactName                                         OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   RTCBackgroundMode                                           OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	DMember(int32_t)                                   TickBudgetInMilliseconds                                    OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(bool)                                      bEnableOverlay                                              OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(bool)                                      bEnableSocialOverlay                                        OFFSET(get<bool>, {0x6D, 1, 0, 0})
	DMember(bool)                                      bEnableEditorOverlay                                        OFFSET(get<bool>, {0x6E, 1, 0, 0})
	DMember(bool)                                      bPreferPersistentAuth                                       OFFSET(get<bool>, {0x6F, 1, 0, 0})
	CMember(TArray<FString>)                           TitleStorageTags                                            OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(int32_t)                                   TitleStorageReadChunkLength                                 OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	CMember(TArray<FArtifactSettings>)                 Artifacts                                                   OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<FString>)                           AuthScopeFlags                                              OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(bool)                                      bUseEAS                                                     OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bUseEOSConnect                                              OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bMirrorStatsToEOS                                           OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bMirrorAchievementsToEOS                                    OFFSET(get<bool>, {0xAB, 1, 0, 0})
	DMember(bool)                                      bUseEOSSessions                                             OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bMirrorPresenceToEAS                                        OFFSET(get<bool>, {0xAD, 1, 0, 0})
	SMember(FString)                                   SteamTokenType                                              OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemEOS.ArtifactSettings
/// Size: 0x0070 (0x000000 - 0x000070)
class FArtifactSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   ArtifactName                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ClientId                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ClientSecret                                                OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   ProductID                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   SandboxId                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   DeploymentId                                                OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   ClientEncryptionKey                                         OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

