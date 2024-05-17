
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioGameplay
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioGameplayBehavior.AudioGameplayBehavior
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UAudioGameplayBehavior : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(bool)                                      bKillOnSoundsFinished                                       OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bTickWhileStopped                                           OFFSET(get<bool>, {0xA9, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAllSoundsFinished                                         OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSoundFinished                                             OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FActiveVoice>)                      PlayingSounds                                               OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(class UAudioComponentGroup*)               ComponentGroupOwner                                         OFFSET(get<T>, {0xE0, 8, 0, 0})


	/// Functions
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.SubscribeToStringParam
	// void SubscribeToStringParam(FName ParamName, FDelegateProperty Delegate);                                                // [0xc8b6b08] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.SubscribeToEvent
	// void SubscribeToEvent(FName EventName, FDelegateProperty Delegate);                                                      // [0xc8b68ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.SubscribeToBoolParam
	// void SubscribeToBoolParam(FName ParamName, FDelegateProperty Delegate);                                                  // [0xc8b66d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.StopSound
	// void StopSound(class USoundBase* sound, float InFadeOutTime, EAudioFaderCurve InFadeCurve);                              // [0xc8b65d8] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.StopComponent
	// void StopComponent(class UAudioComponent* Comp, float InFadeOutTime, EAudioFaderCurve InFadeCurve);                      // [0x345cf78] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.StopById
	// void StopById(FPlayingId ID, float InFadeOutTime, EAudioFaderCurve InFadeCurve);                                         // [0xc8b64b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.StopAllPlayingVoices
	// void StopAllPlayingVoices(float InFadeOutTime);                                                                          // [0xc8b6434] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.Stop
	// void Stop();                                                                                                             // [0x134cb7c] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.Start
	// void Start();                                                                                                            // [0x14f8d74] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.SetPlayState
	// void SetPlayState(EAudioGameplayBehaviorPlayState NewState);                                                             // [0xc8b63b0] Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.PlaySound
	// FActiveVoice PlaySound(class USoundBase* sound, float InFadeInTime, float InTargetVolume, float InStartTime, bool bDisableAttenuation, EAudioFaderCurve InFadeCurve, FVector InRelativeLocation, FRotator InRelativeRotation); // [0x23a9fb8] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.PlayFrom
	// void PlayFrom(class UAudioComponentGroup* SoundGroup);                                                                   // [0x92ce1f4] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.Kill
	// void Kill();                                                                                                             // [0x2e40598] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.IsVirtualized
	// bool IsVirtualized();                                                                                                    // [0x2c31010] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.IsPlayingAny
	// bool IsPlayingAny();                                                                                                     // [0x8af6f5c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.GetStringParamValue
	// FString GetStringParamValue(FName ParamName);                                                                            // [0xc8b5c28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.GetStopState
	// EAudioGameplayBehaviorPlayState GetStopState();                                                                          // [0x75da598] Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.GetSoundGroup
	// class UAudioComponentGroup* GetSoundGroup();                                                                             // [0x8ae48d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.GetPlayState
	// EAudioGameplayBehaviorPlayState GetPlayState();                                                                          // [0x897dc70] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.GetFloatParamValue
	// float GetFloatParamValue(FName ParamName);                                                                               // [0xc8b5ae8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.GetBoolParamValue
	// bool GetBoolParamValue(FName ParamName);                                                                                 // [0x23aaca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.EnableVirtualization
	// void EnableVirtualization();                                                                                             // [0xc8b5ad4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.DisableVirtualization
	// void DisableVirtualization();                                                                                            // [0xc8b5ac0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.BP_OnVirtualized
	// void BP_OnVirtualized();                                                                                                 // [0x228deb8] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.BP_OnUnvirtualized
	// void BP_OnUnvirtualized();                                                                                               // [0x228deb8] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.BP_OnStop
	// void BP_OnStop();                                                                                                        // [0x228deb8] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.BP_OnStart
	// void BP_OnStart();                                                                                                       // [0x228deb8] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.BP_OnGroupSet
	// void BP_OnGroupSet(class UAudioComponentGroup* SoundGroup);                                                              // [0x228deb8] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/AudioGameplayBehavior.AudioGameplayBehavior.BP_OnFinished
	// void BP_OnFinished();                                                                                                    // [0x228deb8] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Struct /Script/AudioGameplayBehavior.ActiveVoice
/// Size: 0x0018 (0x000000 - 0x000018)
class FActiveVoice : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class USoundBase*)                         sound                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UAudioComponent*)                    Component                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FPlayingId)                                ID                                                          OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/AudioGameplayBehavior.PlayingId
/// Size: 0x0004 (0x000000 - 0x000004)
class FPlayingId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/AudioGameplayBehavior.AudioGameplayBehaviorInstance
/// Size: 0x0010 (0x000000 - 0x000010)
class FAudioGameplayBehaviorInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UClass*)                             sound                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UAudioGameplayBehavior*)             Instance                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Enum /Script/AudioGameplayBehavior.EAudioGameplayBehaviorPlayState
/// Size: 0x03
enum class EAudioGameplayBehaviorPlayState : uint8_t
{
	EAudioGameplayBehaviorPlayState__Stopped                                         = 0,
	EAudioGameplayBehaviorPlayState__Playing                                         = 1,
	EAudioGameplayBehaviorPlayState__TickingWhileStopped                             = 2
};

