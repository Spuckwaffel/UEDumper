
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/DataAssetDirectory.DataAssetDirectoryPatchableAsset
/// Size: 0x0000 (0x000028 - 0x000028)
class UDataAssetDirectoryPatchableAsset : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DataAssetDirectory.DataAssetDirectorySimpleObject
/// Size: 0x0008 (0x000028 - 0x000030)
class UDataAssetDirectorySimpleObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   IntProperty                                                 OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Class /Script/DataAssetDirectory.DataAssetDirectoryTestPODAsset
/// Size: 0x0050 (0x000028 - 0x000078)
class UDataAssetDirectoryTestPODAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FString)                                   AssetName                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(EDataAssetDirectoryTestEnum)               EnumProperty                                                OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   IntProperty                                                 OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(float)                                     FloatProperty                                               OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      BoolProperty                                                OFFSET(get<bool>, {0x44, 1, 0, 0})
	SMember(FString)                                   StringProperty                                              OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FName)                                     NameProperty                                                OFFSET(getStruct<T>, {0x58, 4, 0, 0})
	SMember(FText)                                     TextProperty                                                OFFSET(getStruct<T>, {0x60, 24, 0, 0})
};

/// Class /Script/DataAssetDirectory.DataAssetDirectoryTestStructAsset
/// Size: 0x0040 (0x000028 - 0x000068)
class UDataAssetDirectoryTestStructAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FDataAssetDirectoryTestPODStruct)          TestStruct                                                  OFFSET(getStruct<T>, {0x28, 64, 0, 0})
};

/// Class /Script/DataAssetDirectory.DataAssetDirectoryTestArrayAsset
/// Size: 0x0020 (0x000028 - 0x000048)
class UDataAssetDirectoryTestArrayAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<int32_t>)                           IntArray                                                    OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FDataAssetDirectoryTestSimpleStruct>) SimpleStructArray                                         OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/DataAssetDirectory.DataAssetDirectoryTestObjectAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class UDataAssetDirectoryTestObjectAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UDataAssetDirectorySimpleObject*)    SimpleObject                                                OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/DataAssetDirectory.DataAssetDirectoryTestMapAsset
/// Size: 0x0140 (0x000028 - 0x000168)
class UDataAssetDirectoryTestMapAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(TMap<FString, int32_t>)                    StringIntMap                                                OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TMap<FString, int32_t>)                    ShrinkStringIntMap                                          OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TMap<FString, int32_t>)                    GrowStringIntMap                                            OFFSET(get<T>, {0xC8, 80, 0, 0})
	CMember(TMap<int32_t, FDataAssetDirectoryTestSimpleStruct>) IntStructMap                                       OFFSET(get<T>, {0x118, 80, 0, 0})
};

/// Class /Script/DataAssetDirectory.DataAssetDirectoryManager
/// Size: 0x01A8 (0x000028 - 0x0001D0)
class UDataAssetDirectoryManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	CMember(TArray<class UObject*>)                    PatchedAssets                                               OFFSET(get<T>, {0x1A0, 16, 0, 0})
	SMember(FDateTime)                                 LastUpdateCheck                                             OFFSET(getStruct<T>, {0x1B0, 8, 0, 0})
	DMember(uint32_t)                                  UpdateCheckLimitSeconds                                     OFFSET(get<uint32_t>, {0x1B8, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1BC, 1, 0, 0})
	DMember(bool)                                      bFailOnError                                                OFFSET(get<bool>, {0x1BD, 1, 0, 0})
	DMember(bool)                                      bAnalyticsEnabled                                           OFFSET(get<bool>, {0x1BE, 1, 0, 0})
};

/// Class /Script/DataAssetDirectory.DataAssetDirectoryPatcher
/// Size: 0x0000 (0x000028 - 0x000028)
class UDataAssetDirectoryPatcher : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/DataAssetDirectory.DataAssetDirectoryTestPODStruct
/// Size: 0x0040 (0x000000 - 0x000040)
class FDataAssetDirectoryTestPODStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EDataAssetDirectoryTestEnum)               EnumProperty                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   IntProperty                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     FloatProperty                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      BoolProperty                                                OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FString)                                   StringProperty                                              OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     NameProperty                                                OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FText)                                     TextProperty                                                OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/DataAssetDirectory.DataAssetDirectoryTestSimpleStruct
/// Size: 0x0004 (0x000000 - 0x000004)
class FDataAssetDirectoryTestSimpleStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   IntProperty                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

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

