
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModularGameplay

/// Class /Script/FMJamContentResolver.JamContentResolver
/// Size: 0x0148 (0x0000A0 - 0x0001E8)
class UJamContentResolver : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	CMember(TSet<FString>)                             DownloadingLinkCodes                                        OFFSET(get<T>, {0xE8, 80, 0, 0})
	CMember(TMap<FString, FString>)                    DownloadedLinkCodes                                         OFFSET(get<T>, {0x138, 80, 0, 0})
	CMember(TArray<FString>)                           DownloadedLinkCodesInOrder                                  OFFSET(get<T>, {0x188, 16, 0, 0})


	/// Functions
	// Function /Script/FMJamContentResolver.JamContentResolver.HandleResolveComplete
	// void HandleResolveComplete(bool bSuccess, FString LinkCode, TArray<FString>& PluginURLs);                                // [0xb854c48] Final|Native|Private|HasOutParms 
	// Function /Script/FMJamContentResolver.JamContentResolver.HandleGameFeatureLoadComplete
	// void HandleGameFeatureLoadComplete(bool bSuccess, FString LinkCode, FString PluginURL);                                  // [0xb8544e8] Final|Native|Private 
};

