
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: BeatSyncedAnimMetaData
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: HarmonixMetasound

/// Enum /Script/BeatSyncedAnimRuntime.ESyncAnimBeatTo
/// Size: 0x05
enum class ESyncAnimBeatTo : uint8_t
{
	ESyncAnimBeatTo__None                                                            = 0,
	ESyncAnimBeatTo__Now                                                             = 1,
	ESyncAnimBeatTo__PrevBeat                                                        = 2,
	ESyncAnimBeatTo__Num                                                             = 3,
	ESyncAnimBeatTo__ESyncAnimBeatTo_MAX                                             = 4
};

/// Enum /Script/BeatSyncedAnimRuntime.EBeatSyncAnimNodeLogging
/// Size: 0x04
enum class EBeatSyncAnimNodeLogging : uint8_t
{
	EBeatSyncAnimNodeLogging__Enabled                                                = 0,
	EBeatSyncAnimNodeLogging__Disabled                                               = 1,
	EBeatSyncAnimNodeLogging__Default                                                = 2,
	EBeatSyncAnimNodeLogging__EBeatSyncAnimNodeLogging_MAX                           = 3
};

/// Enum /Script/BeatSyncedAnimRuntime.EGotBeatAndTimeFrom
/// Size: 0x05
enum class EGotBeatAndTimeFrom : uint8_t
{
	EGotBeatAndTimeFrom__Invalid                                                     = 0,
	EGotBeatAndTimeFrom__None                                                        = 1,
	EGotBeatAndTimeFrom__PreviewBPM                                                  = 2,
	EGotBeatAndTimeFrom__MusicClock                                                  = 3,
	EGotBeatAndTimeFrom__EGotBeatAndTimeFrom_MAX                                     = 4
};

/// Class /Script/BeatSyncedAnimRuntime.BeatSyncedAnimLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBeatSyncedAnimLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BeatSyncedAnimRuntime.BeatSyncedAnimLibrary.GetLastEmoteExecuted
	// class UFortItemDefinition* GetLastEmoteExecuted(class AController* Controller);                                       // [0xa51c9f8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.BeatSyncedAnimLibrary.CalculateMontagePlayRate
	// float CalculateMontagePlayRate(class UMusicClockComponent* MusicClock, class UAnimMontage* Montage, float MontageBeatLength); // [0xa51c2b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.BeatSyncedAnimLibrary.CalculateMontageBeatSyncInfo
	// FFMontageBeatSyncInfo CalculateMontageBeatSyncInfo(class UMusicClockComponent* MusicClock, class UAnimMontage* Montage, float LengthInBeats, float MsOffset); // [0xa51bf40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/BeatSyncedAnimRuntime.FMBeatTimingUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UFMBeatTimingUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BeatSyncedAnimRuntime.FMBeatTimingUtils.GetCurrentSongTime_Unsafe
	// float GetCurrentSongTime_Unsafe(class UMusicClockComponent* InMusicClock, bool bRounded);                             // [0xa51c930] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.FMBeatTimingUtils.GetCurrentSongTime
	// float GetCurrentSongTime(class UMusicClockComponent* InMusicClock, bool bRounded);                                    // [0xa51c868] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.FMBeatTimingUtils.GetCurrentBeatForBPM
	// float GetCurrentBeatForBPM(float InBPM, class UObject* WorldContextObject);                                           // [0xa51c698] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.FMBeatTimingUtils.GetCurrentBeatAndTime
	// FBeatAndTime GetCurrentBeatAndTime(class UMusicClockComponent* MusicClock, class UObject* WorldContext, bool bAlwaysAllowPreviewBPM, float PreviewBPM, bool bForceUnsafe); // [0xa51c500] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.FMBeatTimingUtils.GetCurrentBeat_Unsafe
	// float GetCurrentBeat_Unsafe(class UMusicClockComponent* InMusicClock, bool bRounded);                                 // [0xa51c760] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.FMBeatTimingUtils.GetCurrentBeat
	// float GetCurrentBeat(class UMusicClockComponent* InMusicClock, bool bRounded);                                        // [0xa51c438] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.FMBeatTimingUtils.GetBeatsPerMeasure
	// float GetBeatsPerMeasure();                                                                                           // [0xa51c420] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UMontageBeatSyncComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x00A0   (0x0004)  MISSED
	float                                              MaxPlayRateBeforeHalf;                                      // 0x00A4   (0x0004)  
	float                                              MinPlayRateBeforeDouble;                                    // 0x00A8   (0x0004)  
	float                                              DefaultToAnimationBPM;                                      // 0x00AC   (0x0004)  
	bool                                               bForceBeatSyncAllMontages;                                  // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              MontageLengthInBeats;                                       // 0x00B4   (0x0004)  
	float                                              MontageOffsetMs;                                            // 0x00B8   (0x0004)  
	SDK_UNDEFINED(8,11900) /* TWeakObjectPtr<UMusicClockComponent*> */ __um(WeakMusicClockPtr);                    // 0x00BC   (0x0008)  
	bool                                               bIsMusicPlaying;                                            // 0x00C4   (0x0001)  
	bool                                               bHaveTimingInfo;                                            // 0x00C5   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x00C6   (0x0002)  MISSED
	int32_t                                            LastKnownMontageInstanceId;                                 // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	class AFortPlayerPawn*                             OwnerPlayerPawn;                                            // 0x00D0   (0x0008)  
	class USkeletalMeshComponent*                      OwnerMeshComponent;                                         // 0x00D8   (0x0008)  
	SDK_UNDEFINED(16,11901) /* TArray<TWeakObjectPtr<UMontageBeatSyncComponent*>> */ __um(YoungerSiblings);        // 0x00E0   (0x0010)  
	class UPreciseBeatSyncedAnimMetaData*              ActiveTimingInfo;                                           // 0x00F0   (0x0008)  


	/// Functions
	// Function /Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent.SetMusicClockReference
	// void SetMusicClockReference(class UMusicClockComponent* MusicClock);                                                  // [0xa51cb7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent.LookupMontageTimingInfo_BP
	// class UPreciseBeatSyncedAnimMetaData* LookupMontageTimingInfo_BP(class UAnimMontage* Montage, class AFortPlayerPawn* PlayerPawn); // [0xa51cab0] Native|Event|Public|BlueprintEvent 
	// Function /Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent.IsMusicPlaying
	// bool IsMusicPlaying();                                                                                                // [0xa51ca98] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent.GetOwnerSkeletalMeshComponent
	// class USkeletalMeshComponent* GetOwnerSkeletalMeshComponent();                                                        // [0x76f77fc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent.GetOwnerFortPlayerPawn
	// class AFortPlayerPawn* GetOwnerFortPlayerPawn();                                                                      // [0x8e75714] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent.EndedPlayingMusic
	// void EndedPlayingMusic();                                                                                             // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/BeatSyncedAnimRuntime.MontageBeatSyncComponent.BeganPlayingMusic
	// void BeganPlayingMusic();                                                                                             // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/BeatSyncedAnimRuntime.SparksAnimLoggingComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class USparksAnimLoggingComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/BeatSyncedAnimRuntime.SparksAnimLoggingComponent.GetCurrentFullBodyAnimName
	// FString GetCurrentFullBodyAnimName();                                                                                 // [0xa51c828] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BeatSyncedAnimRuntime.AnimNotify_BeatMarker
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_BeatMarker : public UAnimNotify
{ 
public:
};

/// Struct /Script/BeatSyncedAnimRuntime.BeatAndTime
/// Size: 0x000C (0x000000 - 0x00000C)
struct FBeatAndTime
{ 
	EGotBeatAndTimeFrom                                GotBeatTimeFrom;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Beat;                                                       // 0x0004   (0x0004)  
	float                                              Time;                                                       // 0x0008   (0x0004)  
};

/// Struct /Script/BeatSyncedAnimRuntime.AnimNode_PlayBeatSyncedAnim
/// Size: 0x0068 (0x000040 - 0x0000A8)
struct FAnimNode_PlayBeatSyncedAnim : FAnimNode_SequenceEvaluator
{ 
	class UAnimSequenceBase*                           InSequence;                                                 // 0x0040   (0x0008)  
	class UMusicClockComponent*                        MusicClock;                                                 // 0x0048   (0x0008)  
	FBeatAndTime                                       BeatAndTime;                                                // 0x0050   (0x000C)  
	float                                              PreviewBPM;                                                 // 0x005C   (0x0004)  
	bool                                               bAlwaysAllowPreviewBPM;                                     // 0x0060   (0x0001)  
	ESyncAnimBeatTo                                    SyncAnimBeatTo;                                             // 0x0061   (0x0001)  
	EBeatSyncAnimNodeLogging                           Logging;                                                    // 0x0062   (0x0001)  
	bool                                               bSideloadedLipSync;                                         // 0x0063   (0x0001)  
	unsigned char                                      UnknownData00_6[0x44];                                      // 0x0064   (0x0044)  MISSED
};

/// Struct /Script/BeatSyncedAnimRuntime.FMontageBeatSyncInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFMontageBeatSyncInfo
{ 
	float                                              PlayRate;                                                   // 0x0000   (0x0004)  
	float                                              Offset;                                                     // 0x0004   (0x0004)  
};

