
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/VkRuntime.ValkyrieGameFeatureSetDefinition
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UValkyrieGameFeatureSetDefinition : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FString)                                   GameFeatureSet                                              OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FString)                                   ContentGuidelinesUrl                                        OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FText)                                     CreationAccessPrompt                                        OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	SMember(FString)                                   CreationAccessUrl                                           OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	CMember(TArray<FString>)                           CreationEntitlements                                        OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Class /Script/VkRuntime.ValkyrieGameFeatureSetMetadataSubsystem
/// Size: 0x00D8 (0x000030 - 0x000108)
class UValkyrieGameFeatureSetMetadataSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

