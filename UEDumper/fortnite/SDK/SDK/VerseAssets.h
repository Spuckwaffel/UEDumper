
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: VerseNative

/// Class /Script/VerseAssets.VerseMaterialInstanceDynamic
/// Size: 0x0038 (0x0002A8 - 0x0002E0)
class UVerseMaterialInstanceDynamic : public UMaterialInstanceDynamic
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x02A8   (0x0038)  MISSED
};

/// Class /Script/VerseAssets.VerseAssetPtr
/// Size: 0x0050 (0x000030 - 0x000080)
class UVerseAssetPtr : public UVerseAsset
{ 
public:
	SDK_UNDEFINED(32,9333) /* TWeakObjectPtr<UObject*> */ __um(AssetForEditor);                                    // 0x0030   (0x0020)  
	FName                                              AssetPathName;                                              // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	class UObject*                                     Object;                                                     // 0x0058   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0060   (0x0020)  MISSED


	/// Functions
	// Function /Script/VerseAssets.VerseAssetPtr.OnRep_AssetPathName
	// void OnRep_AssetPathName();                                                                                           // [0x7533594] Final|Native|Protected 
};

