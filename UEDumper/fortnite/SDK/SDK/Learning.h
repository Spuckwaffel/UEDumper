
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: NNE

/// Class /Script/Learning.LearningNeuralNetworkData
/// Size: 0x0038 (0x000028 - 0x000060)
class ULearningNeuralNetworkData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            InputSize;                                                  // 0x0028   (0x0004)  
	int32_t                                            OutputSize;                                                 // 0x002C   (0x0004)  
	int32_t                                            CompatibilityHash;                                          // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<char>                                       FileData;                                                   // 0x0038   (0x0010)  
	class UNNEModelData*                               ModelData;                                                  // 0x0048   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0050   (0x0010)  MISSED
};

