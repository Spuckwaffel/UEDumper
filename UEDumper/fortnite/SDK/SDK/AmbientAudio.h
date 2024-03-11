
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioGameplay
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

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

/// Class /Script/AmbientAudio.AmbientAudioComponent
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UAmbientAudioComponent : public UAudioGameplayComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A8   (0x0008)  MISSED
	class UAmbientAudioDataAsset*                      AmbientAsset;                                               // 0x00B0   (0x0008)  
	int32_t                                            Priority;                                                   // 0x00B8   (0x0004)  
	float                                              CrossfadeTime;                                              // 0x00BC   (0x0004)  
	FGuid                                              AmbientGuid;                                                // 0x00C0   (0x0010)  
	FName                                              DisplayName;                                                // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00D4   (0x0004)  MISSED


	/// Functions
	// Function /Script/AmbientAudio.AmbientAudioComponent.SetPriority
	// void SetPriority(int32_t InPriority);                                                                                 // [0x7e35fe4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AmbientAudio.AmbientAudioComponent.SetCrossfadeTime
	// void SetCrossfadeTime(float InCrossfadeTime);                                                                         // [0x7e35f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/AmbientAudio.AmbientAudioComponent.SetAmbientAsset
	// void SetAmbientAsset(class UAmbientAudioDataAsset* InAmbientAsset);                                                   // [0x7e35ed0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/AmbientAudio.AmbientAudioBase
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FAmbientAudioBase
{ 
	SDK_UNDEFINED(32,1208) /* TWeakObjectPtr<USoundBase*> */ __um(sound);                                          // 0x0000   (0x0020)  
	FGameplayTagQuery                                  Requirements;                                               // 0x0020   (0x0048)  
	FAudioGameplayRequirements                         PlaybackRequirements;                                       // 0x0068   (0x0050)  
};

/// Struct /Script/AmbientAudio.AmbientAudioLoop
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
struct FAmbientAudioLoop : FAmbientAudioBase
{ 
};

/// Struct /Script/AmbientAudio.AmbientAudioOneShot
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
struct FAmbientAudioOneShot : FAmbientAudioBase
{ 
	FVector2D                                          RetriggerTimeRange;                                         // 0x00B8   (0x0010)  
	FVector2D                                          TriggerDistanceRange;                                       // 0x00C8   (0x0010)  
};

/// Class /Script/AmbientAudio.AmbientAudioDataAsset
/// Size: 0x0028 (0x000030 - 0x000058)
class UAmbientAudioDataAsset : public UDataAsset
{ 
public:
	TArray<FAmbientAudioLoop>                          LoopingSounds;                                              // 0x0030   (0x0010)  
	TArray<FAmbientAudioOneShot>                       OneShotSounds;                                              // 0x0040   (0x0010)  
	float                                              TagCrossfadeTime;                                           // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/AmbientAudio.AmbientAudioSubsystem
/// Size: 0x0228 (0x000030 - 0x000258)
class UAmbientAudioSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(16,1209) /* FMulticastInlineDelegate */ __um(OnTagChanged);                                      // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1210) /* FMulticastInlineDelegate */ __um(OnEntryChanged);                                    // 0x0048   (0x0010)  
	TArray<class UAmbientAudioComponent*>              AmbientComponents;                                          // 0x0058   (0x0010)  
	class AAmbientAudioParameterActor*                 ParameterActor;                                             // 0x0068   (0x0008)  
	unsigned char                                      UnknownData01_6[0x1E8];                                     // 0x0070   (0x01E8)  MISSED


	/// Functions
	// Function /Script/AmbientAudio.AmbientAudioSubsystem.RemoveGameplayTag
	// void RemoveGameplayTag(FGameplayTag GameplayTag);                                                                     // [0x2d5690c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AmbientAudio.AmbientAudioSubsystem.RemoveAmbientEntry
	// void RemoveAmbientEntry(FName AmbientName, float CrossfadeOverride);                                                  // [0x365dad4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AmbientAudio.AmbientAudioSubsystem.GetAudioParameterComponent
	// class UAudioParameterComponent* GetAudioParameterComponent();                                                         // [0x7e35e8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AmbientAudio.AmbientAudioSubsystem.AddGameplayTag
	// void AddGameplayTag(FGameplayTag GameplayTag);                                                                        // [0x2d56a4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AmbientAudio.AmbientAudioSubsystem.AddAmbientEntry
	// void AddAmbientEntry(FName AmbientName, class UAmbientAudioDataAsset* Asset, int32_t Priority, float CrossfadeTime);  // [0x2d56170] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AmbientAudio.AmbientAudioParameterActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AAmbientAudioParameterActor : public AActor
{ 
public:
	class UAudioParameterComponent*                    Parameters;                                                 // 0x0290   (0x0008)  
};

