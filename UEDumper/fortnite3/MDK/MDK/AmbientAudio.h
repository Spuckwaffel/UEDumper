
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioGameplay
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/AmbientAudio.AmbientAudioComponent
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UAmbientAudioComponent : public UAudioGameplayComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(class UAmbientAudioDataAsset*)             AmbientAsset                                                OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	DMember(float)                                     CrossfadeTime                                               OFFSET(get<float>, {0xBC, 4, 0, 0})
	SMember(FGuid)                                     AmbientGuid                                                 OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FName)                                     DisplayName                                                 OFFSET(getStruct<T>, {0xD0, 4, 0, 0})


	/// Functions
	// Function /Script/AmbientAudio.AmbientAudioComponent.SetPriority
	// void SetPriority(int32_t InPriority);                                                                                    // [0x85f6164] Final|Native|Public|BlueprintCallable 
	// Function /Script/AmbientAudio.AmbientAudioComponent.SetCrossfadeTime
	// void SetCrossfadeTime(float InCrossfadeTime);                                                                            // [0x85f60d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AmbientAudio.AmbientAudioComponent.SetAmbientAsset
	// void SetAmbientAsset(class UAmbientAudioDataAsset* InAmbientAsset);                                                      // [0x85f6050] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AmbientAudio.AmbientAudioDataAsset
/// Size: 0x0028 (0x000030 - 0x000058)
class UAmbientAudioDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FAmbientAudioLoop>)                 LoopingSounds                                               OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FAmbientAudioOneShot>)              OneShotSounds                                               OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(float)                                     TagCrossfadeTime                                            OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Class /Script/AmbientAudio.AmbientAudioSubsystem
/// Size: 0x0228 (0x000030 - 0x000258)
class UAmbientAudioSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	SMember(FMulticastInlineDelegate)                  OnTagChanged                                                OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEntryChanged                                              OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(TArray<class UAmbientAudioComponent*>)     AmbientComponents                                           OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(class AAmbientAudioParameterActor*)        ParameterActor                                              OFFSET(get<T>, {0x68, 8, 0, 0})


	/// Functions
	// Function /Script/AmbientAudio.AmbientAudioSubsystem.RemoveGameplayTag
	// void RemoveGameplayTag(FGameplayTag GameplayTag);                                                                        // [0x2bf41a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AmbientAudio.AmbientAudioSubsystem.RemoveAmbientEntry
	// void RemoveAmbientEntry(FName AmbientName, float CrossfadeOverride);                                                     // [0x3546698] Final|Native|Public|BlueprintCallable 
	// Function /Script/AmbientAudio.AmbientAudioSubsystem.GetAudioParameterComponent
	// class UAudioParameterComponent* GetAudioParameterComponent();                                                            // [0x85f600c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AmbientAudio.AmbientAudioSubsystem.AddGameplayTag
	// void AddGameplayTag(FGameplayTag GameplayTag);                                                                           // [0x2bf4224] Final|Native|Public|BlueprintCallable 
	// Function /Script/AmbientAudio.AmbientAudioSubsystem.AddAmbientEntry
	// void AddAmbientEntry(FName AmbientName, class UAmbientAudioDataAsset* Asset, int32_t Priority, float CrossfadeTime);     // [0x2bf392c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AmbientAudio.AmbientAudioParameterActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AAmbientAudioParameterActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UAudioParameterComponent*)           Parameters                                                  OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Struct /Script/AmbientAudio.AmbientAudioBase
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FAmbientAudioBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TWeakObjectPtr<USoundBase*>)               sound                                                       OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagQuery)                         Requirements                                                OFFSET(getStruct<T>, {0x20, 72, 0, 0})
	SMember(FAudioGameplayRequirements)                PlaybackRequirements                                        OFFSET(getStruct<T>, {0x68, 80, 0, 0})
};

/// Struct /Script/AmbientAudio.AmbientAudioLoop
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class FAmbientAudioLoop : public FAmbientAudioBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Struct /Script/AmbientAudio.AmbientAudioOneShot
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class FAmbientAudioOneShot : public FAmbientAudioBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FVector2D)                                 RetriggerTimeRange                                          OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FVector2D)                                 TriggerDistanceRange                                        OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
};

/// Enum /Script/AmbientAudio.EAmbientAudioEntryActionType
/// Size: 0x05
enum class EAmbientAudioEntryActionType : uint8_t
{
	EAmbientAudioEntryActionType__Added                                              = 0,
	EAmbientAudioEntryActionType__Updated                                            = 1,
	EAmbientAudioEntryActionType__Removed                                            = 2,
	EAmbientAudioEntryActionType__Count                                              = 3,
	EAmbientAudioEntryActionType__EAmbientAudioEntryActionType_MAX                   = 4
};

/// Enum /Script/AmbientAudio.EAmbientAudioTagActionType
/// Size: 0x04
enum class EAmbientAudioTagActionType : uint8_t
{
	EAmbientAudioTagActionType__Added                                                = 0,
	EAmbientAudioTagActionType__Removed                                              = 1,
	EAmbientAudioTagActionType__Count                                                = 2,
	EAmbientAudioTagActionType__EAmbientAudioTagActionType_MAX                       = 3
};

