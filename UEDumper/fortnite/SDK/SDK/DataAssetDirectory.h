
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/DataAssetDirectory.EDataAssetDirectoryTestEnum
/// Size: 0x05
enum class EDataAssetDirectoryTestEnum : uint8_t
{
	EDataAssetDirectoryTestEnum__A                                                   = 0,
	EDataAssetDirectoryTestEnum__B                                                   = 1,
	EDataAssetDirectoryTestEnum__C                                                   = 2,
	EDataAssetDirectoryTestEnum__D                                                   = 3,
	EDataAssetDirectoryTestEnum__EDataAssetDirectoryTestEnum_MAX                     = 4
};

/// Enum /Script/DataAssetDirectory.EDataAssetDirectoryUpdateStatus
/// Size: 0x04
enum class EDataAssetDirectoryUpdateStatus : uint8_t
{
	EDataAssetDirectoryUpdateStatus__Failed                                          = 0,
	EDataAssetDirectoryUpdateStatus__Success                                         = 1,
	EDataAssetDirectoryUpdateStatus__SuccessNoChange                                 = 2,
	EDataAssetDirectoryUpdateStatus__EDataAssetDirectoryUpdateStatus_MAX             = 3
};

/// Class /Script/DataAssetDirectory.DataAssetDirectoryPatchableAsset
/// Size: 0x0000 (0x000028 - 0x000028)
class UDataAssetDirectoryPatchableAsset : public UInterface
{ 
public:
};

/// Class /Script/DataAssetDirectory.DataAssetDirectorySimpleObject
/// Size: 0x0008 (0x000028 - 0x000030)
class UDataAssetDirectorySimpleObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            IntProperty;                                                // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/DataAssetDirectory.DataAssetDirectoryTestPODAsset
/// Size: 0x0050 (0x000028 - 0x000078)
class UDataAssetDirectoryTestPODAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,1949) /* FString */               __um(AssetName);                                            // 0x0028   (0x0010)  
	EDataAssetDirectoryTestEnum                        EnumProperty;                                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            IntProperty;                                                // 0x003C   (0x0004)  
	float                                              FloatProperty;                                              // 0x0040   (0x0004)  
	bool                                               BoolProperty;                                               // 0x0044   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	SDK_UNDEFINED(16,1950) /* FString */               __um(StringProperty);                                       // 0x0048   (0x0010)  
	FName                                              NameProperty;                                               // 0x0058   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	SDK_UNDEFINED(24,1951) /* FText */                 __um(TextProperty);                                         // 0x0060   (0x0018)  
};

/// Struct /Script/DataAssetDirectory.DataAssetDirectoryTestPODStruct
/// Size: 0x0040 (0x000000 - 0x000040)
struct FDataAssetDirectoryTestPODStruct
{ 
	EDataAssetDirectoryTestEnum                        EnumProperty;                                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            IntProperty;                                                // 0x0004   (0x0004)  
	float                                              FloatProperty;                                              // 0x0008   (0x0004)  
	bool                                               BoolProperty;                                               // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	SDK_UNDEFINED(16,1952) /* FString */               __um(StringProperty);                                       // 0x0010   (0x0010)  
	FName                                              NameProperty;                                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	SDK_UNDEFINED(24,1953) /* FText */                 __um(TextProperty);                                         // 0x0028   (0x0018)  
};

/// Class /Script/DataAssetDirectory.DataAssetDirectoryTestStructAsset
/// Size: 0x0040 (0x000028 - 0x000068)
class UDataAssetDirectoryTestStructAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FDataAssetDirectoryTestPODStruct                   TestStruct;                                                 // 0x0028   (0x0040)  
};

/// Struct /Script/DataAssetDirectory.DataAssetDirectoryTestSimpleStruct
/// Size: 0x0004 (0x000000 - 0x000004)
struct FDataAssetDirectoryTestSimpleStruct
{ 
	int32_t                                            IntProperty;                                                // 0x0000   (0x0004)  
};

/// Class /Script/DataAssetDirectory.DataAssetDirectoryTestArrayAsset
/// Size: 0x0020 (0x000028 - 0x000048)
class UDataAssetDirectoryTestArrayAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<int32_t>                                    IntArray;                                                   // 0x0028   (0x0010)  
	TArray<FDataAssetDirectoryTestSimpleStruct>        SimpleStructArray;                                          // 0x0038   (0x0010)  
};

/// Class /Script/DataAssetDirectory.DataAssetDirectoryTestObjectAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class UDataAssetDirectoryTestObjectAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UDataAssetDirectorySimpleObject*             SimpleObject;                                               // 0x0028   (0x0008)  
};

/// Class /Script/DataAssetDirectory.DataAssetDirectoryTestMapAsset
/// Size: 0x0140 (0x000028 - 0x000168)
class UDataAssetDirectoryTestMapAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(80,1954) /* TMap<FString, int32_t> */ __um(StringIntMap);                                        // 0x0028   (0x0050)  
	SDK_UNDEFINED(80,1955) /* TMap<FString, int32_t> */ __um(ShrinkStringIntMap);                                  // 0x0078   (0x0050)  
	SDK_UNDEFINED(80,1956) /* TMap<FString, int32_t> */ __um(GrowStringIntMap);                                    // 0x00C8   (0x0050)  
	SDK_UNDEFINED(80,1957) /* TMap<int32_t, FDataAssetDirectoryTestSimpleStruct> */ __um(IntStructMap);            // 0x0118   (0x0050)  
};

/// Class /Script/DataAssetDirectory.DataAssetDirectoryManager
/// Size: 0x01A8 (0x000028 - 0x0001D0)
class UDataAssetDirectoryManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x1A0];                                     // 0x0000   (0x01A0)  MISSED
	TArray<class UObject*>                             PatchedAssets;                                              // 0x01A0   (0x0010)  
	FDateTime                                          LastUpdateCheck;                                            // 0x01B0   (0x0008)  
	uint32_t                                           UpdateCheckLimitSeconds;                                    // 0x01B8   (0x0004)  
	bool                                               bEnabled;                                                   // 0x01BC   (0x0001)  
	bool                                               bFailOnError;                                               // 0x01BD   (0x0001)  
	bool                                               bAnalyticsEnabled;                                          // 0x01BE   (0x0001)  
	unsigned char                                      UnknownData01_6[0x11];                                      // 0x01BF   (0x0011)  MISSED
};

/// Class /Script/DataAssetDirectory.DataAssetDirectoryPatcher
/// Size: 0x0000 (0x000028 - 0x000028)
class UDataAssetDirectoryPatcher : public UObject
{ 
public:
};

