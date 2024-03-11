
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModularGameplay

/// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandComponent
/// Size: 0x0190 (0x0000A0 - 0x000230)
class UDownloadOnDemandComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(class UDownloadOnDemandPlot*)              Plot                                                        OFFSET(get<T>, {0x208, 8, 0, 0})
	CMember(TArray<class UDownloadOnDemandProject*>)   UserOwnedProjects                                           OFFSET(get<T>, {0x210, 16, 0, 0})
	CMember(TArray<class UDownloadOnDemandProjectContent*>) ShelvedContents                                        OFFSET(get<T>, {0x220, 16, 0, 0})


	/// Functions
	// Function /Script/VKDownloadOnDemandGameplay.DownloadOnDemandComponent.HandleMnemonicsFromValkyriePaletteProviderReceived
	// void HandleMnemonicsFromValkyriePaletteProviderReceived(TArray<FString>& Mnemonics);                                     // [0xacf5ba4] Final|Native|Private|HasOutParms 
};

/// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandPlot
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UDownloadOnDemandPlot : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<class UDownloadOnDemandProject*>)   ActiveProjects                                              OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<class UDownloadOnDemandProject*>)   PendingProjects                                             OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandProject
/// Size: 0x0108 (0x000028 - 0x000130)
class UDownloadOnDemandProject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(class UDownloadOnDemandProjectDescriptor*) Descriptor                                                  OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TMap<FString, UDownloadOnDemandProjectContent*>) Contents                                              OFFSET(get<T>, {0xC0, 80, 0, 0})
};

/// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandProjectContent
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UDownloadOnDemandProjectContent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TArray<class UFortItemDefinition*>)        ContentItemDefinitions                                      OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   ContentSoftObjectPaths                                      OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   LoadFailedContentObjectPaths                                OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandProjectDescriptor
/// Size: 0x0058 (0x000028 - 0x000080)
class UDownloadOnDemandProjectDescriptor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UDownloadOnDemandProjectImage*)      Image                                                       OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandProjectImage
/// Size: 0x0038 (0x000028 - 0x000060)
class UDownloadOnDemandProjectImage : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UTexture2DDynamic*)                  PreviewTexture                                              OFFSET(get<T>, {0x58, 8, 0, 0})
};

