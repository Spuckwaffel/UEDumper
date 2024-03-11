
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Enum /Script/DanceVolume.EDanceBeatSyncMode
/// Size: 0x04
enum class EDanceBeatSyncMode : uint8_t
{
	EDanceBeatSyncMode__Off                                                          = 0,
	EDanceBeatSyncMode__Tempo                                                        = 1,
	EDanceBeatSyncMode__Music                                                        = 2,
	EDanceBeatSyncMode__EDanceBeatSyncMode_MAX                                       = 3
};

/// Struct /Script/DanceVolume.DanceBeatInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDanceBeatInfo
{ 
	float                                              LengthBeats;                                                // 0x0000   (0x0004)  
	float                                              StartOffsetMs;                                              // 0x0004   (0x0004)  
};

/// Class /Script/DanceVolume.DanceSynchronizerComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UDanceSynchronizerComponent : public UActorComponent
{ 
public:
	bool                                               bShouldHalfOrDoubleTimeDances : 1;                          // 0x00A0:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FDanceBeatInfo                                     BeatInfo;                                                   // 0x00A4   (0x0008)  
	EDanceBeatSyncMode                                 SyncMode;                                                   // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              Tempo;                                                      // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	class AFortPlayerPawn*                             OwnerPlayerPawn;                                            // 0x00B8   (0x0008)  
	class USkeletalMeshComponent*                      OwnerMeshComponent;                                         // 0x00C0   (0x0008)  
	class USkeletalMeshComponent*                      LeaderMeshComponent;                                        // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DanceVolume.DanceSynchronizerComponent.StopOwnerEmoteAudio
	// void StopOwnerEmoteAudio();                                                                                           // [0xab92bc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.SetTempo
	// void SetTempo(float NewTempo);                                                                                        // [0xab92b48] Final|Native|Public|BlueprintCallable 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.SetDanceBeatInfo
	// void SetDanceBeatInfo(FDanceBeatInfo& NewDanceBeatInfo);                                                              // [0xab92ab4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.SetBeatSyncMode
	// void SetBeatSyncMode(EDanceBeatSyncMode NewMode);                                                                     // [0xab92a38] Final|Native|Public|BlueprintCallable 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.OnRep_SyncMode
	// void OnRep_SyncMode();                                                                                                // [0xab929d8] Final|Native|Private 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.IsTempoSyncEnabled
	// bool IsTempoSyncEnabled();                                                                                            // [0xab929bc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.GetOwnerSkeletalMeshComponent
	// class USkeletalMeshComponent* GetOwnerSkeletalMeshComponent();                                                        // [0x6b2d9dc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.GetOwnerFortPlayerPawn
	// class AFortPlayerPawn* GetOwnerFortPlayerPawn();                                                                      // [0x7c1a220] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DanceVolume.DanceSynchronizerComponent.CalculateDanceMontagePlayRate
	// float CalculateDanceMontagePlayRate(float CurrentTempo, class UAnimMontage* Montage, FDanceBeatInfo& DanceBeatInfo);  // [0xab92780] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/DanceVolume.DanceVolumeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDanceVolumeLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DanceVolume.DanceVolumeLibrary.GetLastEmoteExecuted
	// class UFortItemDefinition* GetLastEmoteExecuted(class AController* Controller);                                       // [0xa51c9f8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DanceVolume.DanceVolumeLibrary.ForceStopMontage
	// void ForceStopMontage(class AFortPawn* FortPawn);                                                                     // [0xab928fc] Final|Native|Static|Public|BlueprintCallable 
};

