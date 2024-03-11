
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: HarmonixMetasound
/// dependency: ModularGameplay
/// dependency: SparksCoreRuntime
/// dependency: SparksMusicPlayspaceRuntime

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

/// Class /Script/SparksCharacterCommonRuntime.SparksAnimationSubsystem
/// Size: 0x0088 (0x000030 - 0x0000B8)
class USparksAnimationSubsystem : public UWorldSubsystem
{ 
public:
	SDK_UNDEFINED(32,13885) /* TWeakObjectPtr<USparksInstrumentAnimations*> */ __um(Anims_Default);                // 0x0030   (0x0020)  
	SDK_UNDEFINED(32,13886) /* TWeakObjectPtr<USparksInstrumentAnimations*> */ __um(Anims_Light);                  // 0x0050   (0x0020)  
	unsigned char                                      UnknownData00_5[0x28];                                      // 0x0070   (0x0028)  MISSED
	int32_t                                            NumAnimationRefs;                                           // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_6[0x1C];                                      // 0x009C   (0x001C)  MISSED


	/// Functions
	// Function /Script/SparksCharacterCommonRuntime.SparksAnimationSubsystem.GetLoadedSparksAnimations
	// class USparksInstrumentAnimations* GetLoadedSparksAnimations();                                                       // [0xa5022cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance
/// Size: 0x0050 (0x000470 - 0x0004C0)
class USparksBaseLayerAnimInstance : public UFortBaseLayerAnimInstance
{ 
public:
	float                                              MinTempo;                                                   // 0x0468   (0x0004)  
	float                                              MaxTempo;                                                   // 0x046C   (0x0004)  
	TArray<float>                                      BPMBucketMaxTempos;                                         // 0x0470   (0x0010)  
	float                                              BPMBucketCooldownSeconds;                                   // 0x0480   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0484   (0x0004)  MISSED
	class USparksInstrumentAnimPlayerStateComponent*   InstrumentPSC;                                              // 0x0488   (0x0008)  
	class ASparksMusicPlayspace*                       SparksPlayspace;                                            // 0x0490   (0x0008)  
	class UMusicClockComponent*                        MusicClock;                                                 // 0x0498   (0x0008)  
	float                                              SongTempo;                                                  // 0x04A0   (0x0004)  
	float                                              BPMBucketCooldownRemaining;                                 // 0x04A4   (0x0004)  
	int32_t                                            BPMBucket;                                                  // 0x04A8   (0x0004)  
	int32_t                                            PreviousBPMBucket;                                          // 0x04AC   (0x0004)  
	ESparksInstrumentType                              Instrument;                                                 // 0x04B0   (0x0001)  
	bool                                               bCanPlayMidiAnimations;                                     // 0x04B1   (0x0001)  
	bool                                               bMusicBeatIsActive;                                         // 0x04B2   (0x0001)  
	bool                                               bIsRoamingOrNotAnimatable;                                  // 0x04B3   (0x0001)  
	bool                                               bTransitionBeat;                                            // 0x04B4   (0x0001)  
	ESparksAnimatableState                             AnimatableState;                                            // 0x04B5   (0x0001)  
	bool                                               bIsRoaming;                                                 // 0x04B6   (0x0001)  
	unsigned char                                      UnknownData01_6[0x9];                                       // 0x04B7   (0x0009)  MISSED


	/// Functions
	// Function /Script/SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance.SetIsRoaming
	// void SetIsRoaming(bool bInIsRoaming);                                                                                 // [0xa502a4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance.OnInstrumentPSCInitialized
	// void OnInstrumentPSCInitialized(class USparksInstrumentAnimPlayerStateComponent* NewInstrumentPSC);                   // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance.GetIsRoaming
	// bool GetIsRoaming();                                                                                                  // [0xa502290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance.GetAnimatableState
	// ESparksAnimatableState GetAnimatableState();                                                                          // [0xa5021cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimInstance
/// Size: 0x0020 (0x001620 - 0x001640)
#pragma pack(push, 0x1)
class alignas(0x10) USparksInstrumentAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
public:
	SDK_UNDEFINED(8,13887) /* TWeakObjectPtr<ASparksMusicPlayspace*> */ __um(SparksMusicPlayspace);                // 0x1620   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x1628   (0x0010)  MISSED


	/// Functions
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimInstance.SetMidiEventDriver
	// void SetMidiEventDriver(TScriptInterface<Class> NewMidiEventDriver);                                                  // [0xa502ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimInstance.GetMidiEventDriver
	// TScriptInterface<Class> GetMidiEventDriver();                                                                         // [0xa5022f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};
#pragma pack(pop)

/// Class /Script/SparksCharacterCommonRuntime.SparksGuitarAnimInstance
/// Size: 0x0000 (0x001640 - 0x001640)
class USparksGuitarAnimInstance : public USparksInstrumentAnimInstance
{ 
public:


	/// Functions
	// Function /Script/SparksCharacterCommonRuntime.SparksGuitarAnimInstance.GetFretNumberFromMidiNote
	// int32_t GetFretNumberFromMidiNote(char MidiNote);                                                                     // [0xa502210] Final|Native|Static|Protected|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SparksCharacterCommonRuntime.SparksBassAnimInstance
/// Size: 0x0000 (0x001640 - 0x001640)
class USparksBassAnimInstance : public USparksGuitarAnimInstance
{ 
public:
};

/// Class /Script/SparksCharacterCommonRuntime.SparksDrumsAnimInstance
/// Size: 0x0000 (0x001640 - 0x001640)
class USparksDrumsAnimInstance : public USparksInstrumentAnimInstance
{ 
public:
};

/// Class /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimations
/// Size: 0x0030 (0x000030 - 0x000060)
class USparksInstrumentAnimations : public UDataAsset
{ 
public:
	class UClass*                                      BandPlayAnimBP;                                             // 0x0030   (0x0008)  
	class UClass*                                      InstrumentAnimBPs;                                          // 0x0038   (0x0028)  


	/// Functions
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimations.GetAnimClassForInstrument
	// class UClass* GetAnimClassForInstrument(ESparksInstrumentType Instrument);                                            // [0xa502140] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent
/// Size: 0x0168 (0x0000A0 - 0x000208)
class USparksInstrumentAnimPlayerStateComponent : public UPlayerStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	class USparksInstrumentAnimations*                 InstrumentAnimations;                                       // 0x00A8   (0x0008)  
	class ASparksMusicPlayspace*                       SparksPlayspace;                                            // 0x00B0   (0x0008)  
	class UMusicClockComponent*                        MusicClock;                                                 // 0x00B8   (0x0008)  
	SDK_UNDEFINED(16,13888) /* TScriptInterface<Class> */ __um(MidiEventDriver);                                   // 0x00C0   (0x0010)  
	ESparksInstrumentType                              CosmeticInstrumentType;                                     // 0x00D0   (0x0001)  
	ESparksAnimatableState                             AnimatableState;                                            // 0x00D1   (0x0001)  
	bool                                               bCanPlayMidiAnimations;                                     // 0x00D2   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x00D3   (0x0005)  MISSED
	class UClass*                                      SparksPlayspaceType;                                        // 0x00D8   (0x0008)  
	SDK_UNDEFINED(16,13889) /* FMulticastInlineDelegate */ __um(BP_OnEnteredSparksMusicPlayspace);                 // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x00F0   (0x0018)  MISSED
	SDK_UNDEFINED(16,13890) /* FMulticastInlineDelegate */ __um(BP_OnExitedSparksMusicPlayspace);                  // 0x0108   (0x0010)  
	unsigned char                                      UnknownData03_5[0x18];                                      // 0x0118   (0x0018)  MISSED
	SDK_UNDEFINED(16,13891) /* FMulticastInlineDelegate */ __um(BP_OnPlayerMusicClockChanged);                     // 0x0130   (0x0010)  
	unsigned char                                      UnknownData04_5[0x18];                                      // 0x0140   (0x0018)  MISSED
	SDK_UNDEFINED(16,13892) /* FMulticastInlineDelegate */ __um(BP_OnPlayerMidiEventDriverChanged);                // 0x0158   (0x0010)  
	unsigned char                                      UnknownData05_5[0x18];                                      // 0x0168   (0x0018)  MISSED
	SDK_UNDEFINED(16,13893) /* FMulticastInlineDelegate */ __um(BP_OnPlayerCosmeticInstrumentTypeChanged);         // 0x0180   (0x0010)  
	unsigned char                                      UnknownData06_5[0x18];                                      // 0x0190   (0x0018)  MISSED
	SDK_UNDEFINED(16,13894) /* FMulticastInlineDelegate */ __um(BP_OnPlayerAnimatableStateChanged);                // 0x01A8   (0x0010)  
	unsigned char                                      UnknownData07_5[0x18];                                      // 0x01B8   (0x0018)  MISSED
	SDK_UNDEFINED(16,13895) /* FMulticastInlineDelegate */ __um(BP_OnPlayerCanPlayMidiAnimationsChanged);          // 0x01D0   (0x0010)  
	unsigned char                                      UnknownData08_6[0x28];                                      // 0x01E0   (0x0028)  MISSED


	/// Functions
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.UnlinkInstrumentAnimationLayer
	// void UnlinkInstrumentAnimationLayer();                                                                                // [0xa502d58] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SwapCosmeticInstrument
	// void SwapCosmeticInstrument(ESparksInstrumentType NewInstrumentType);                                                 // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SetMusicClock
	// void SetMusicClock(class UMusicClockComponent* NewMusicClock);                                                        // [0x38731f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SetMidiEventDriver
	// void SetMidiEventDriver(TScriptInterface<Class> NewMidiEventDriver);                                                  // [0xa502c14] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SetCosmeticInstrumentType
	// void SetCosmeticInstrumentType(ESparksInstrumentType NewCosmeticInstrumentType);                                      // [0xa5029cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SetCanPlayMidiAnimations
	// void SetCanPlayMidiAnimations(bool bNewCanPlayMidiAnimations);                                                        // [0x378161c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.SetAnimatableState
	// void SetAnimatableState(ESparksAnimatableState NewAnimatableState);                                                   // [0x39f816c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.PlayerHasTrackInstrument
	// bool PlayerHasTrackInstrument(ESparksInstrumentType InstrumentType);                                                  // [0xa502938] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.PlayerHasCosmeticInstrument
	// bool PlayerHasCosmeticInstrument(ESparksInstrumentType InstrumentType);                                               // [0xa5028a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.OverridePlayspace
	// void OverridePlayspace(class ASparksMusicPlayspace* Playspace);                                                       // [0xa50282c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.LinkInstrumentAnimationLayer
	// void LinkInstrumentAnimationLayer(class USparksInstrumentAnimations* Animations);                                     // [0xa502648] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.IsUsable
	// bool IsUsable();                                                                                                      // [0x18a39e4] Event|Public|BlueprintEvent|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.IsInstrumentAnimationLayerLinked
	// bool IsInstrumentAnimationLayerLinked();                                                                              // [0xa50261c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.HandlePlayerPawnSet
	// void HandlePlayerPawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                     // [0xa502404] Final|Native|Private 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.HandlePawnFinishedCharacterCustomization
	// void HandlePawnFinishedCharacterCustomization(class AFortPlayerPawn* Pawn);                                           // [0xa502384] Final|Native|Private 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetTrackInstrumentType
	// ESparksInstrumentType GetTrackInstrumentType();                                                                       // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetSparksPlayspace
	// class ASparksMusicPlayspace* GetSparksPlayspace();                                                                    // [0x35ceac4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetRecentOrFirstInstrument
	// ESparksInstrumentType GetRecentOrFirstInstrument();                                                                   // [0xa502360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetMusicClock
	// class UMusicClockComponent* GetMusicClock();                                                                          // [0x7c1a220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetMidiEventDriver
	// TScriptInterface<Class> GetMidiEventDriver();                                                                         // [0xa502324] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetLinkedInstrumentAnimationLayer
	// class USparksBaseLayerAnimInstance* GetLinkedInstrumentAnimationLayer();                                              // [0xa5022a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetInstrumentAnimations
	// class USparksInstrumentAnimations* GetInstrumentAnimations();                                                         // [0x66de484] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetCurrentTrackName
	// FName GetCurrentTrackName();                                                                                          // [0xa5021e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetCosmeticInstrumentType
	// ESparksInstrumentType GetCosmeticInstrumentType();                                                                    // [0x945cf30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.GetAnimatableState
	// ESparksAnimatableState GetAnimatableState();                                                                          // [0x945cf18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.CanSwapToInstrument
	// bool CanSwapToInstrument(ESparksInstrumentType NewInstrumentType);                                                    // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPlayerStateComponent.CanPlayMidiAnimations
	// bool CanPlayMidiAnimations();                                                                                         // [0x945cf48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCharacterCommonRuntime.SparksMicAnimInstance
/// Size: 0x0000 (0x001640 - 0x001640)
class USparksMicAnimInstance : public USparksInstrumentAnimInstance
{ 
public:
};

