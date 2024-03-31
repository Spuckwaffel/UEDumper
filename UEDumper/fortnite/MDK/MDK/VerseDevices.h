
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameFeatures

/// Class /Script/VerseDevices.VerseCreativePropAsset
/// Size: 0x0068 (0x000028 - 0x000090)
class UVerseCreativePropAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     AssetPathName                                               OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(class ULevelSaveRecord*)                   LevelSaveRecord                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ActorClass                                                  OFFSET(get<T>, {0x38, 32, 0, 0})
};

/// Class /Script/VerseDevices.PlaylistUserOptionScript
/// Size: 0x0018 (0x0001D0 - 0x0001E8)
class UPlaylistUserOptionScript : public UPlaylistUserOptionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	CMember(TArray<FPlaylistOptionScriptValue>)        OptionValues                                                OFFSET(get<T>, {0x1D0, 16, 0, 0})
	DMember(int32_t)                                   DefaultValueIndex                                           OFFSET(get<int32_t>, {0x1E0, 4, 0, 0})
};

/// Class /Script/VerseDevices.ScriptDevice
/// Size: 0x0028 (0x000BC8 - 0x000BF0)
class AScriptDevice : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3056;

public:
	CMember(class UVerseCreativeDevice*)               Script                                                      OFFSET(get<T>, {0xBD0, 8, 0, 0})
	CMember(class UVerseCreativeDevice*)               ScriptInstance                                              OFFSET(get<T>, {0xBD8, 8, 0, 0})


	/// Functions
	// Function /Script/VerseDevices.ScriptDevice.SetEnabled
	// void SetEnabled(bool bInEnabled);                                                                                        // [0xadb860c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VerseDevices.ScriptDevice.BP_SetVisibility
	// void BP_SetVisibility(bool bVisible);                                                                                    // [0x186becc] Event|Public|BlueprintEvent 
};

/// Class /Script/VerseDevices.VerseMovableObjectBase
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UVerseMovableObjectBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/VerseDevices.VerseCreativeDevice
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UVerseCreativeDevice : public UVerseMovableObjectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class AActor*)                             ActorOwner                                                  OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/VerseDevices.VerseCreativeObject
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UVerseCreativeObject : public UVerseMovableObjectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class AActor*)                             SavedActor                                                  OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/VerseDevices.VerseCreativeObjectQuotaHelperComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UVerseCreativeObjectQuotaHelperComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Script/VerseDevices.VerseDevicesFeatureAction_RegisterWrapperClasses
/// Size: 0x0028 (0x000028 - 0x000050)
class UVerseDevicesFeatureAction_RegisterWrapperClasses : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<UVerseDeviceWrapperClassMap*>) DeviceToWrapperClassMapAsset                             OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Class /Script/VerseDevices.VerseDeviceSubsystem
/// Size: 0x0118 (0x000030 - 0x000148)
class UVerseDeviceSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(TMap<TWeakObjectPtr<UClass*>, UVerseClass*>) DeviceClassToVerseClassMap                                OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/VerseDevices.VerseDeviceWrapperClassMap
/// Size: 0x0050 (0x000030 - 0x000080)
class UVerseDeviceWrapperClassMap : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<TWeakObjectPtr<UClass*>, UClass*>)    DeviceClassMap                                              OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Struct /Script/VerseDevices.PlaylistOptionScriptValue
/// Size: 0x0008 (0x000098 - 0x0000A0)
class FPlaylistOptionScriptValue : public FPlaylistOptionValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class UClass*)                             Value                                                       OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Struct /Script/VerseDevices.VerseDeviceFunctionPayload
/// Size: 0x0008 (0x000000 - 0x000008)
class FVerseDeviceFunctionPayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AController*)                        Instigator                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Enum /Script/VerseDevices.EScriptPropertyOverridesVersion
/// Size: 0x06
enum class EScriptPropertyOverridesVersion : uint8_t
{
	EScriptPropertyOverridesVersion__Initial                                         = 0,
	EScriptPropertyOverridesVersion__UsingSoftObjectPathSerialization                = 1,
	EScriptPropertyOverridesVersion__ObjectClassSerialization                        = 2,
	EScriptPropertyOverridesVersion__LatestPlusOne                                   = 3,
	EScriptPropertyOverridesVersion__Latest                                          = 2,
	EScriptPropertyOverridesVersion__EScriptPropertyOverridesVersion_MAX             = 4
};

