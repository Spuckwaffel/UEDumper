
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings

/// Class /Script/AssetDependencies.AssetDependencySettings
/// Size: 0x0120 (0x000030 - 0x000150)
class UAssetDependencySettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(TArray<FName>)                             ExcludedPaths                                               OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FName>)                             ExcludedPackages                                            OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<class UClass*>)                     ClassIgnoreList                                             OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TSet<UClass*>)                             ClassIgnoreListSet                                          OFFSET(get<T>, {0x100, 80, 0, 0})
};

