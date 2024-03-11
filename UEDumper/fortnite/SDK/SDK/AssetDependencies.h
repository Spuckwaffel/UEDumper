
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings

/// Class /Script/AssetDependencies.AssetDependencySettings
/// Size: 0x0120 (0x000030 - 0x000150)
class UAssetDependencySettings : public UDeveloperSettings
{ 
public:
	TArray<FName>                                      ExcludedPaths;                                              // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0040   (0x0050)  MISSED
	TArray<FName>                                      ExcludedPackages;                                           // 0x0090   (0x0010)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x00A0   (0x0050)  MISSED
	TArray<class UClass*>                              ClassIgnoreList;                                            // 0x00F0   (0x0010)  
	SDK_UNDEFINED(80,11773) /* TSet<UClass*> */        __um(ClassIgnoreListSet);                                   // 0x0100   (0x0050)  
};

