
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
/// dependency: GameFeatures
/// dependency: MLDeformerFramework

/// Class /Script/MLDeformerRuntime.FortMLDeformerComponent
/// Size: 0x0020 (0x0000E0 - 0x000100)
class UFortMLDeformerComponent : public UMLDeformerComponent
{ 
public:
	class UMLDeformerAsset*                            RequestedMLDeformerAsset;                                   // 0x00E0   (0x0008)  
	class UMeshDeformer*                               RequestedMeshDeformerAsset;                                 // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00F0   (0x0010)  MISSED
};

/// Class /Script/MLDeformerRuntime.MLDeformerGameFeatureData
/// Size: 0x0008 (0x000530 - 0x000538)
class UMLDeformerGameFeatureData : public UFortGameFeatureData
{ 
public:
	bool                                               bDisableWhenOwnerIsNotViewTarget;                           // 0x0530   (0x0001)  
	bool                                               bShouldRampUpWeightWhenEnabled;                             // 0x0531   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0532   (0x0002)  MISSED
	float                                              WeightIncreasePerSecond;                                    // 0x0534   (0x0004)  
};

/// Class /Script/MLDeformerRuntime.MLDeformerAssetMapping
/// Size: 0x0130 (0x000030 - 0x000160)
class UMLDeformerAssetMapping : public UPrimaryDataAsset
{ 
public:
	SDK_UNDEFINED(16,15067) /* TArray<TWeakObjectPtr<UAthenaCharacterItemDefinition*>> */ __um(CharacterItemDefinitionToMLDeformerAssetMappingKeys); // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,15068) /* TArray<TWeakObjectPtr<UMLDeformerAsset*>> */ __um(CharacterItemDefinitionToMLDeformerAssetMappingValues); // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,15069) /* TArray<TWeakObjectPtr<UCustomCharacterPart*>> */ __um(CharacterPartToMLDeformerAssetMappingKeys); // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,15070) /* TArray<TWeakObjectPtr<UMLDeformerAsset*>> */ __um(CharacterPartToMLDeformerAssetMappingValues); // 0x0060   (0x0010)  
	SDK_UNDEFINED(80,15071) /* TMap<TWeakObjectPtr<UMLDeformerAsset*>, TWeakObjectPtr<UMeshDeformer*>> */ __um(MLDeformerToMeshDeformerAssetMap); // 0x0070   (0x0050)  
	SDK_UNDEFINED(80,15072) /* TMap<TWeakObjectPtr<UAthenaCharacterItemDefinition*>, TWeakObjectPtr<UMLDeformerAsset*>> */ __um(CharacterItemDefinitionToMLDeformerAssetMap); // 0x00C0   (0x0050)  
	SDK_UNDEFINED(80,15073) /* TMap<TWeakObjectPtr<UCustomCharacterPart*>, TWeakObjectPtr<UMLDeformerAsset*>> */ __um(CharacterPartToMLDeformerAssetMap); // 0x0110   (0x0050)  
};

/// Class /Script/MLDeformerRuntime.MLDeformerComponentManager
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UMLDeformerComponentManager : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00A0   (0x0028)  MISSED
};

