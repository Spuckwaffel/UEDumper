
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Packages

/// Enum /Game/WaterAndWind/Blueprint/PlayerWindParticleEmitters.PlayerWindParticleEmitters
/// Size: 0x05
enum class PlayerWindParticleEmitters : uint8_t
{
	PlayerWindParticleEmitters__NewEnumerator0                                       = 0,
	PlayerWindParticleEmitters__NewEnumerator1                                       = 1,
	PlayerWindParticleEmitters__NewEnumerator3                                       = 2,
	PlayerWindParticleEmitters__NewEnumerator2                                       = 3,
	PlayerWindParticleEmitters__PlayerWindParticleEmitters_MAX                       = 4
};

/// Class /Game/WaterAndWind/AnimNotifies/AnimNotify_PlayPlayerLandsWindEffect.AnimNotify_PlayPlayerLandsWindEffect_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimNotify_PlayPlayerLandsWindEffect_C : public UAnimNotify
{ 
public:


	/// Functions
	// Function /Game/WaterAndWind/AnimNotifies/AnimNotify_PlayPlayerLandsWindEffect.AnimNotify_PlayPlayerLandsWindEffect_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Struct /Game/WaterAndWind/Blueprint/ArrayOfWaterMeshWaterBlueprintPairs.ArrayOfWaterMeshWaterBlueprintPairs
/// Size: 0x0010 (0x000000 - 0x000010)
struct FArrayOfWaterMeshWaterBlueprintPairs
{ 
	TArray<FWaterMeshAssetsToReplace>                  ArrayOfPairedMeshesandBlueprints_3_66DC153A4804C5BFDF6D5187A0EEF992; // 0x0000   (0x0010)  
};

