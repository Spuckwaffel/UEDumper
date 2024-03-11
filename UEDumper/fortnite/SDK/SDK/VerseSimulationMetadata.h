
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/VerseSimulationMetadata.VerseSimulationAttribConfig
/// Size: 0x0038 (0x000028 - 0x000060)
class UVerseSimulationAttribConfig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FName>                                      AllowedEditablePropertyNames;                               // 0x0028   (0x0010)  
	TArray<FName>                                      DisallowedEditablePropertyNames;                            // 0x0038   (0x0010)  
	TArray<FSoftClassPath>                             DisallowedObjectPropertyClasses;                            // 0x0048   (0x0010)  
	bool                                               bAllowTuples;                                               // 0x0058   (0x0001)  
	bool                                               bAllowMultidimensionalArrays;                               // 0x0059   (0x0001)  
	bool                                               bFilterProperties;                                          // 0x005A   (0x0001)  
	bool                                               bFilterObjectProperties;                                    // 0x005B   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

