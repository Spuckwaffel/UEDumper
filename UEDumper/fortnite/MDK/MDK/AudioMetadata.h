
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioModulation
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/AudioMetadata.AudioAssetUserData
/// Size: 0x0020 (0x000028 - 0x000048)
class UAudioAssetUserData : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTagContainer)                     MetadataTags                                                OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Class /Script/AudioMetadata.AudioMetadataDeveloperSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class UAudioMetadataDeveloperSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FAudioMetadataModulationSettings)          ModulationSettings                                          OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/AudioMetadata.AudioMetadataSubsystem
/// Size: 0x0010 (0x000030 - 0x000040)
class UAudioMetadataSubsystem : public UAudioEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:


	/// Functions
	// Function /Script/AudioMetadata.AudioMetadataSubsystem.HasTag
	// bool HasTag(class USoundBase* InSound, FGameplayTag InTag, bool bExactMatch);                                            // [0xce0a348] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AudioMetadata.AudioMetadataModulationSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FAudioMetadataModulationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundControlBus*)                   ControlBusLicensedAudioMuteAll                              OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundControlBus*)                   ControlBusLicensedAudioMuteOthers                           OFFSET(get<T>, {0x8, 8, 0, 0})
};

