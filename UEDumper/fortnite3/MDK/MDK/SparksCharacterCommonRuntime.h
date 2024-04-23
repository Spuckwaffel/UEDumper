
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: BeatSyncedAnimRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: HarmonixMetasound
/// dependency: ModularGameplay
/// dependency: SparksCoreRuntime
/// dependency: SparksMusicPlayspaceRuntime

/// Class /Script/SparksCharacterCommonRuntime.SparksAnimationSubsystem
/// Size: 0x0088 (0x000030 - 0x0000B8)
class USparksAnimationSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TWeakObjectPtr<USparksInstrumentAnimations*>) Anims_Default                                            OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(TWeakObjectPtr<USparksInstrumentAnimations*>) Anims_Light                                              OFFSET(get<T>, {0x50, 32, 0, 0})
	DMember(int32_t)                                   NumAnimationRefs                                            OFFSET(get<int32_t>, {0x98, 4, 0, 0})


	/// Functions
	// Function /Script/SparksCharacterCommonRuntime.SparksAnimationSubsystem.GetLoadedSparksAnimations
	// class USparksInstrumentAnimations* GetLoadedSparksAnimations();                                                          // [0xb6ff998] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance
/// Size: 0x0080 (0x000470 - 0x0004F0)
class USparksBaseLayerAnimInstance : public UFortBaseLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1264;

public:
	DMember(float)                                     MinTempo                                                    OFFSET(get<float>, {0x468, 4, 0, 0})
	DMember(float)                                     MaxTempo                                                    OFFSET(get<float>, {0x46C, 4, 0, 0})
	CMember(TArray<float>)                             BPMBucketMaxTempos                                          OFFSET(get<T>, {0x470, 16, 0, 0})
	DMember(int32_t)                                   BPMBucketCooldownBeats                                      OFFSET(get<int32_t>, {0x480, 4, 0, 0})
	DMember(float)                                     PreviewBPM                                                  OFFSET(get<float>, {0x484, 4, 0, 0})
	CMember(class USparksInstrumentAnimPlayerStateComponent*) InstrumentPSC                                        OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class ASparksMusicPlayspace*)              SparksPlayspace                                             OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class UMusicClockComponent*)               MusicClock                                                  OFFSET(get<T>, {0x498, 8, 0, 0})
	SMember(FBeatAndTime)                              SongBeatAndTime                                             OFFSET(getStruct<T>, {0x4A0, 12, 0, 0})
	SMember(FBeatAndTime)                              AnimBeatAndTime                                             OFFSET(getStruct<T>, {0x4AC, 12, 0, 0})
	DMember(float)                                     SongBPM                                                     OFFSET(get<float>, {0x4B8, 4, 0, 0})
	DMember(int32_t)                                   BPMBucketCooldownRemaining                                  OFFSET(get<int32_t>, {0x4BC, 4, 0, 0})
	DMember(int32_t)                                   BPMBucket                                                   OFFSET(get<int32_t>, {0x4C0, 4, 0, 0})
	CMember(ESparksInstrumentType)                     Instrument                                                  OFFSET(get<T>, {0x4C4, 1, 0, 0})
	DMember(bool)                                      bCanPlayMidiAnimations                                      OFFSET(get<bool>, {0x4C5, 1, 0, 0})
	DMember(bool)                                      bMusicBeatIsActive                                          OFFSET(get<bool>, {0x4C6, 1, 0, 0})
	DMember(bool)                                      bIsRoamingOrNotAnimatable                                   OFFSET(get<bool>, {0x4C7, 1, 0, 0})
	SMember(FBeatAndTime)                              PrevSongBeatAndTime                                         OFFSET(getStruct<T>, {0x4C8, 12, 0, 0})
	SMember(FBeatAndTime)                              PrevAnimBeatAndTime                                         OFFSET(getStruct<T>, {0x4D4, 12, 0, 0})
	DMember(float)                                     TempoHalfOrDoubleFactor                                     OFFSET(get<float>, {0x4E0, 4, 0, 0})
	CMember(ESparksAnimatableState)                    AnimatableState                                             OFFSET(get<T>, {0x4E4, 1, 0, 0})
	DMember(bool)                                      bIsRoaming                                                  OFFSET(get<bool>, {0x4E5, 1, 0, 0})


	/// Functions
	// Function /Script/SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance.SetIsRoaming
	// void SetIsRoaming(bool bInIsRoaming);                                                                                    // [0xb70002c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance.GetIsRoaming
	// bool GetIsRoaming();                                                                                                     // [0xb6ff918] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance.GetAnimatableState
	// ESparksAnimatableState GetAnimatableState();                                                                             // [0xa9ff2f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance.BP_OnSetInstrumentPSC
	// void BP_OnSetInstrumentPSC(class USparksInstrumentAnimPlayerStateComponent* OldInstrumentPSC, class USparksInstrumentAnimPlayerStateComponent* NewInstrumentPSC); // [0x1340978] Event|Public|BlueprintEvent 
};

/// Class /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimInstance
/// Size: 0x0060 (0x000370 - 0x0003D0)
class USparksInstrumentAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	CMember(class USparksInstrumentAnimPlayerStateComponent*) InstrumentPSC                                        OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class ASparksMusicPlayspace*)              SparksMusicPlayspace                                        OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UMusicClockComponent*)               MusicClock                                                  OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   MidiEventDriver                                             OFFSET(get<T>, {0x380, 16, 0, 0})
	CMember(TWeakObjectPtr<UAnimSequence*>)            LipSyncAsset                                                OFFSET(get<T>, {0x390, 32, 0, 0})
	CMember(ESparksInstrumentType)                     Instrument                                                  OFFSET(get<T>, {0x3B0, 1, 0, 0})
	DMember(float)                                     PreviewBPM                                                  OFFSET(get<float>, {0x3B4, 4, 0, 0})
	SMember(FBeatAndTime)                              SongBeatAndTime                                             OFFSET(getStruct<T>, {0x3B8, 12, 0, 0})
	SMember(FBeatAndTime)                              AnimBeatAndTime                                             OFFSET(getStruct<T>, {0x3C4, 12, 0, 0})


	/// Functions
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimInstance.BP_OnSetInstrumentPSC
	// void BP_OnSetInstrumentPSC(class USparksInstrumentAnimPlayerStateComponent* OldInstrumentPSC, class USparksInstrumentAnimPlayerStateComponent* NewInstrumentPSC); // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimInstance.BP_OnMidiEventDriverChanged
	// void BP_OnMidiEventDriverChanged(TScriptInterface<Class>& NewMidiEventDriver);                                           // [0x1340978] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimInstance.BP_OnLipSyncAssetChanged
	// void BP_OnLipSyncAssetChanged(TWeakObjectPtr<UAnimSequence*>& NewLipSyncAsset);                                          // [0x1340978] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimInstance.BP_OnCosmeticInstrumentTypeChanged
	// void BP_OnCosmeticInstrumentTypeChanged(ESparksInstrumentType NewInstrument);                                            // [0x1340978] Event|Public|BlueprintEvent 
};

/// Class /Script/SparksCharacterCommonRuntime.SparksGuitarAnimInstance
/// Size: 0x0010 (0x0003D0 - 0x0003E0)
class USparksGuitarAnimInstance : public USparksInstrumentAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	DMember(int32_t)                                   FretNumber                                                  OFFSET(get<int32_t>, {0x3D0, 4, 0, 0})


	/// Functions
	// Function /Script/SparksCharacterCommonRuntime.SparksGuitarAnimInstance.GetFretNumberFromMidiNote
	// int32_t GetFretNumberFromMidiNote(char MidiNote);                                                                        // [0xb6ff898] Final|Native|Static|Protected|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SparksCharacterCommonRuntime.SparksBassAnimInstance
/// Size: 0x0000 (0x0003E0 - 0x0003E0)
class USparksBassAnimInstance : public USparksGuitarAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
};

/// Class /Script/SparksCharacterCommonRuntime.SparksDrumsAnimInstance
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class USparksDrumsAnimInstance : public USparksInstrumentAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimations
/// Size: 0x0030 (0x000030 - 0x000060)
class USparksInstrumentAnimations : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UClass*)                             BandPlayAnimBP                                              OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UClass*)                             InstrumentAnimBPs                                           OFFSET(get<T>, {0x38, 40, 0, 0})


	/// Functions
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimations.GetAnimClassForInstrument
	// class UClass* GetAnimClassForInstrument(ESparksInstrumentType Instrument);                                               // [0xb6ff7e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent
/// Size: 0x01B0 (0x0000A0 - 0x000250)
class USparksInstrumentAnimPlayerStateComponent : public UPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(class USparksInstrumentAnimations*)        InstrumentAnimations                                        OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class ASparksMusicPlayspace*)              SparksPlayspace                                             OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UMusicClockComponent*)               MusicClock                                                  OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   MidiEventDriver                                             OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TWeakObjectPtr<UAnimSequence*>)            LipSyncAsset                                                OFFSET(get<T>, {0xD0, 32, 0, 0})
	CMember(ESparksInstrumentType)                     CosmeticInstrumentType                                      OFFSET(get<T>, {0xF0, 1, 0, 0})
	CMember(ESparksAnimatableState)                    AnimatableState                                             OFFSET(get<T>, {0xF1, 1, 0, 0})
	DMember(bool)                                      bCanPlayMidiAnimations                                      OFFSET(get<bool>, {0xF2, 1, 0, 0})
	CMember(class UClass*)                             SparksPlayspaceType                                         OFFSET(get<T>, {0xF8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnEnteredSparksMusicPlayspace                            OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnExitedSparksMusicPlayspace                             OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnPlayerMusicClockChanged                                OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnPlayerMidiEventDriverChanged                           OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnPlayerLipSyncAssetChanged                              OFFSET(getStruct<T>, {0x1A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnPlayerCosmeticInstrumentTypeChanged                    OFFSET(getStruct<T>, {0x1C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnPlayerAnimatableStateChanged                           OFFSET(getStruct<T>, {0x1F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnPlayerCanPlayMidiAnimationsChanged                     OFFSET(getStruct<T>, {0x218, 16, 0, 0})


	/// Functions
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.UnlinkInstrumentAnimationLayer
	// void UnlinkInstrumentAnimationLayer();                                                                                   // [0xb7009c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SwapCosmeticInstrument
	// void SwapCosmeticInstrument(ESparksInstrumentType NewInstrumentType);                                                    // [0x1340978] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SetMusicClock
	// void SetMusicClock(class UMusicClockComponent* NewMusicClock);                                                           // [0xb700944] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SetMidiEventDriver
	// void SetMidiEventDriver(TScriptInterface<Class> NewMidiEventDriver);                                                     // [0xb7007e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SetLipSyncAsset
	// void SetLipSyncAsset(TWeakObjectPtr<UAnimSequence*> NewLipSyncAsset);                                                    // [0xb7000b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SetCosmeticInstrumentType
	// void SetCosmeticInstrumentType(ESparksInstrumentType NewCosmeticInstrumentType);                                         // [0xb6fffac] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SetCanPlayMidiAnimations
	// void SetCanPlayMidiAnimations(bool bNewCanPlayMidiAnimations);                                                           // [0xb6fff2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SetAnimatableState
	// void SetAnimatableState(ESparksAnimatableState NewAnimatableState);                                                      // [0xb6ffeac] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.PlayerHasTrackInstrument
	// bool PlayerHasTrackInstrument(ESparksInstrumentType InstrumentType);                                                     // [0xb6ffddc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.PlayerHasCosmeticInstrument
	// bool PlayerHasCosmeticInstrument(ESparksInstrumentType InstrumentType);                                                  // [0xb6ffd10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.OverridePlayspace
	// void OverridePlayspace(class ASparksMusicPlayspace* Playspace);                                                          // [0xb6ffc40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.LinkInstrumentAnimationLayer
	// void LinkInstrumentAnimationLayer(class USparksInstrumentAnimations* Animations);                                        // [0xb6ffbc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.IsUsable
	// bool IsUsable();                                                                                                         // [0x1340978] Event|Public|BlueprintEvent|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.IsInstrumentAnimationLayerLinked
	// bool IsInstrumentAnimationLayerLinked();                                                                                 // [0xb6ffb94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.HandlePlayerPawnSet
	// void HandlePlayerPawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                        // [0xb6ffa9c] Final|Native|Private 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.HandlePawnFinishedCharacterCustomization
	// void HandlePawnFinishedCharacterCustomization(class AFortPlayerPawn* Pawn);                                              // [0xb6ffa1c] Final|Native|Private 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetTrackInstrumentType
	// ESparksInstrumentType GetTrackInstrumentType();                                                                          // [0x1340978] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetSparksPlayspace
	// class ASparksMusicPlayspace* GetSparksPlayspace();                                                                       // [0x370d6e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetRecentOrFirstInstrument
	// ESparksInstrumentType GetRecentOrFirstInstrument();                                                                      // [0xb6ff9f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetMusicClock
	// class UMusicClockComponent* GetMusicClock();                                                                             // [0x84185d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetMidiEventDriver
	// TScriptInterface<Class> GetMidiEventDriver();                                                                            // [0xb6ff9bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetLipSyncAsset
	// TWeakObjectPtr<UAnimSequence*> GetLipSyncAsset();                                                                        // [0xb6ff954] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetLinkedInstrumentAnimationLayer
	// class USparksBaseLayerAnimInstance* GetLinkedInstrumentAnimationLayer();                                                 // [0xb6ff930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetInstrumentAnimations
	// class USparksInstrumentAnimations* GetInstrumentAnimations();                                                            // [0x67cf678] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetCurrentTrackName
	// FName GetCurrentTrackName();                                                                                             // [0xb6ff86c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetCosmeticInstrumentType
	// ESparksInstrumentType GetCosmeticInstrumentType();                                                                       // [0x94e0b1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetAnimatableState
	// ESparksAnimatableState GetAnimatableState();                                                                             // [0x6a0dffc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.CanSwapToInstrument
	// bool CanSwapToInstrument(ESparksInstrumentType NewInstrumentType);                                                       // [0x1340978] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.CanPlayMidiAnimations
	// bool CanPlayMidiAnimations();                                                                                            // [0xb6ff7c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCharacterCommonRuntime.SparksMicAnimInstance
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class USparksMicAnimInstance : public USparksInstrumentAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Enum /Script/SparksCharacterCommonRuntime.ESparksAnimatableState
/// Size: 0x05
enum class ESparksAnimatableState : uint8_t
{
	ESparksAnimatableState__None                                                     = 0,
	ESparksAnimatableState__AnimatableWithoutBeat                                    = 1,
	ESparksAnimatableState__Animatable                                               = 2,
	ESparksAnimatableState__AnimatableAndPlayable                                    = 3,
	ESparksAnimatableState__ESparksAnimatableState_MAX                               = 4
};

