
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara
/// dependency: VerseAssets

/// Class /Script/EpicGamesAssets.SpawnedParticleSystemReplication
/// Size: 0x0038 (0x000290 - 0x0002C8)
class ASpawnedParticleSystemReplication : public AActor
{ 
public:
	double                                             StartTime;                                                  // 0x0290   (0x0008)  
	class UVerseAssetPtr*                              VFXAsset;                                                   // 0x0298   (0x0008)  
	class UNiagaraComponent*                           VFXComponent;                                               // 0x02A0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x02A8   (0x0020)  MISSED


	/// Functions
	// Function /Script/EpicGamesAssets.SpawnedParticleSystemReplication.OnSystemFinished
	// void OnSystemFinished(class UNiagaraComponent* FinishedComponent);                                                    // [0xa051d50] Final|Native|Private 
	// Function /Script/EpicGamesAssets.SpawnedParticleSystemReplication.OnRep_VFXAsset
	// void OnRep_VFXAsset();                                                                                                // [0xa051d3c] Final|Native|Private 
	// Function /Script/EpicGamesAssets.SpawnedParticleSystemReplication.OnRep_StartTime
	// void OnRep_StartTime();                                                                                               // [0xa051ccc] Final|Native|Private 
};

