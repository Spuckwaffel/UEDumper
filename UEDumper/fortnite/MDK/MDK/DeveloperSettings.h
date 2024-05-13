
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/DeveloperSettings.DeveloperSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UDeveloperSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/DeveloperSettings.DeveloperSettingsBackedByCVars
/// Size: 0x0000 (0x000030 - 0x000030)
class UDeveloperSettingsBackedByCVars : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/DeveloperSettings.PlatformSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UPlatformSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/DeveloperSettings.PlatformSettingsManager
/// Size: 0x0058 (0x000028 - 0x000080)
class UPlatformSettingsManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<UClass*, FPlatformSettingsInstances>) SettingsMap                                                 OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Struct /Script/DeveloperSettings.PerPlatformSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FPerPlatformSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UPlatformSettings*>)          Settings                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/DeveloperSettings.PlatformSettingsInstances
/// Size: 0x0058 (0x000000 - 0x000058)
class FPlatformSettingsInstances : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UPlatformSettings*)                  PlatformInstance                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TMap<FName, UPlatformSettings*>)           OtherPlatforms                                              OFFSET(get<T>, {0x8, 80, 0, 0})
};

