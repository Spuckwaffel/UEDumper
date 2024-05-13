
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/EpicCMS.DownloadCacheEntry
/// Size: 0x0030 (0x000000 - 0x000030)
class FDownloadCacheEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   FilePath                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   SourceUrl                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FDateTime)                                 LastAccessTime                                              OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	DMember(int32_t)                                   LifetimeInDays                                              OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/EpicCMS.DownloadCache
/// Size: 0x0058 (0x000000 - 0x000058)
class FDownloadCache : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TMap<FString, FDownloadCacheEntry>)        Cache                                                       OFFSET(get<T>, {0x8, 80, 0, 0})
};

