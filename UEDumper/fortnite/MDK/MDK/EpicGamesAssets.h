
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara
/// dependency: VerseAssets

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
	// void OnSystemFinished(class UNiagaraComponent* FinishedComponent);                                                       // [0xa051d50] Final|Native|Private 
	// Function /Script/EpicGamesAssets.SpawnedParticleSystemReplication.OnRep_VFXAsset
	// void OnRep_VFXAsset();                                                                                                   // [0xa051d3c] Final|Native|Private 
	// Function /Script/EpicGamesAssets.SpawnedParticleSystemReplication.OnRep_StartTime
	// void OnRep_StartTime();                                                                                                  // [0xa051ccc] Final|Native|Private 
};

