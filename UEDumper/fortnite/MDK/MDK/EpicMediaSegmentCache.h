
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/EpicMediaSegmentCache.EpicMediaSegmentCacheInit
/// Size: 0x0018 (0x000028 - 0x000040)
class UEpicMediaSegmentCacheInit : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FEpicMediaSegmentCacheConfig)              CacheConfig                                                 OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/EpicMediaSegmentCache.EpicMediaSegmentCacheConfig
/// Size: 0x0018 (0x000000 - 0x000018)
class FEpicMediaSegmentCacheConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bResetCache                                                 OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bPersistentCache                                            OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bAllowPersistentCacheAsTemporary                            OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bClearCache                                                 OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   CacheSizeMaxFiles                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int64_t)                                   CacheSizeOnDiskMaxBytes                                     OFFSET(get<int64_t>, {0x10, 8, 0, 0})
};

