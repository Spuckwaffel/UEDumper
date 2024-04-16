
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/DanceVolume.DanceSynchronizerComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UDanceSynchronizerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(bool)                                      bShouldHalfOrDoubleTimeDances                               OFFSET(get<bool>, {0xA0, 1, 1, 0})
	SMember(FDanceBeatInfo)                            BeatInfo                                                    OFFSET(getStruct<T>, {0xA4, 8, 0, 0})
	CMember(EDanceBeatSyncMode)                        SyncMode                                                    OFFSET(get<T>, {0xAC, 1, 0, 0})
	DMember(float)                                     Tempo                                                       OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(class AFortPlayerPawn*)                    OwnerPlayerPawn                                             OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             OwnerMeshComponent                                          OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             LeaderMeshComponent                                         OFFSET(get<T>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Script/DanceVolume.DanceSynchronizerComponent.StopOwnerEmoteAudio
	// void StopOwnerEmoteAudio();                                                                                              // [0xc221970] Final|Native|Public|BlueprintCallable 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.SetTempo
	// void SetTempo(float NewTempo);                                                                                           // [0xc2218ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.SetDanceBeatInfo
	// void SetDanceBeatInfo(FDanceBeatInfo& NewDanceBeatInfo);                                                                 // [0xc221818] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.SetBeatSyncMode
	// void SetBeatSyncMode(EDanceBeatSyncMode NewMode);                                                                        // [0xc221758] Final|Native|Public|BlueprintCallable 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.OnRep_SyncMode
	// void OnRep_SyncMode();                                                                                                   // [0xc2216f8] Final|Native|Private 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.IsTempoSyncEnabled
	// bool IsTempoSyncEnabled();                                                                                               // [0xc2216dc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.GetOwnerSkeletalMeshComponent
	// class USkeletalMeshComponent* GetOwnerSkeletalMeshComponent();                                                           // [0x6b18b7c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.GetOwnerFortPlayerPawn
	// class AFortPlayerPawn* GetOwnerFortPlayerPawn();                                                                         // [0x8213bb0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.CalculateDanceMontagePlayRate
	// float CalculateDanceMontagePlayRate(float CurrentTempo, class UAnimMontage* Montage, FDanceBeatInfo& DanceBeatInfo);     // [0xc2213e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/DanceVolume.DanceVolumeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDanceVolumeLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/DanceVolume.DanceVolumeLibrary.GetLastEmoteExecuted
	// class UFortItemDefinition* GetLastEmoteExecuted(class AController* Controller);                                          // [0xb405884] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DanceVolume.DanceVolumeLibrary.ForceStopMontage
	// void ForceStopMontage(class AFortPawn* FortPawn);                                                                        // [0xc2215d8] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/DanceVolume.DanceBeatInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FDanceBeatInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     LengthBeats                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     StartOffsetMs                                               OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Enum /Script/DanceVolume.EDanceBeatSyncMode
/// Size: 0x04
enum class EDanceBeatSyncMode : uint8_t
{
	EDanceBeatSyncMode__Off                                                          = 0,
	EDanceBeatSyncMode__Tempo                                                        = 1,
	EDanceBeatSyncMode__Music                                                        = 2,
	EDanceBeatSyncMode__EDanceBeatSyncMode_MAX                                       = 3
};

