
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara
/// dependency: VerseAssets

/// Class /Script/EpicGamesAssets.PlayedSoundReplication
/// Size: 0x0040 (0x000290 - 0x0002D0)
class APlayedSoundReplication : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	DMember(double)                                    StartTime                                                   OFFSET(get<double>, {0x290, 8, 0, 0})
	DMember(bool)                                      bPlaySound2D                                                OFFSET(get<bool>, {0x298, 1, 0, 0})
	CMember(class UVerseAssetPtr*)                     SoundAsset                                                  OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UAudioComponent*)                    AudioComponent                                              OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class USoundAttenuation*)                  SoundAttenuation                                            OFFSET(get<T>, {0x2B0, 8, 0, 0})


	/// Functions
	// Function /Script/EpicGamesAssets.PlayedSoundReplication.OnSystemFinished
	// void OnSystemFinished(class UAudioComponent* FinishedComponent);                                                         // [0xb13525c] Final|Native|Private 
	// Function /Script/EpicGamesAssets.PlayedSoundReplication.OnRep_SoundAsset
	// void OnRep_SoundAsset();                                                                                                 // [0xb135220] Final|Native|Private 
};

/// Class /Script/EpicGamesAssets.SpawnedParticleSystemReplication
/// Size: 0x0038 (0x000290 - 0x0002C8)
class ASpawnedParticleSystemReplication : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	DMember(double)                                    StartTime                                                   OFFSET(get<double>, {0x290, 8, 0, 0})
	CMember(class UVerseAssetPtr*)                     VFXAsset                                                    OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  VFXComponent                                                OFFSET(get<T>, {0x2A0, 8, 0, 0})


	/// Functions
	// Function /Script/EpicGamesAssets.SpawnedParticleSystemReplication.OnSystemFinished
	// void OnSystemFinished(class UNiagaraComponent* FinishedComponent);                                                       // [0xb13525c] Final|Native|Private 
	// Function /Script/EpicGamesAssets.SpawnedParticleSystemReplication.OnRep_VFXAsset
	// void OnRep_VFXAsset();                                                                                                   // [0xb135248] Final|Native|Private 
	// Function /Script/EpicGamesAssets.SpawnedParticleSystemReplication.OnRep_StartTime
	// void OnRep_StartTime();                                                                                                  // [0xb135234] Final|Native|Private 
};

