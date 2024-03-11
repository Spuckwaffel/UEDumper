
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Struct /Script/EpicMediaSegmentCache.EpicMediaSegmentCacheConfig
/// Size: 0x0018 (0x000000 - 0x000018)
struct FEpicMediaSegmentCacheConfig
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	bool                                               bResetCache;                                                // 0x0001   (0x0001)  
	bool                                               bPersistentCache;                                           // 0x0002   (0x0001)  
	bool                                               bAllowPersistentCacheAsTemporary;                           // 0x0003   (0x0001)  
	bool                                               bClearCache;                                                // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            CacheSizeMaxFiles;                                          // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            CacheSizeOnDiskMaxBytes;                                    // 0x0010   (0x0008)  
};

/// Class /Script/EpicMediaSegmentCache.EpicMediaSegmentCacheInit
/// Size: 0x0018 (0x000028 - 0x000040)
class UEpicMediaSegmentCacheInit : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FEpicMediaSegmentCacheConfig                       CacheConfig;                                                // 0x0028   (0x0018)  
};

