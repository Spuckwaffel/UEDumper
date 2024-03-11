
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: HarmonixDsp

/// Enum /Script/FabricMetasoundDataTypes.EFabricUserOptionConversionType
/// Size: 0x04
enum class EFabricUserOptionConversionType : uint8_t
{
	EFabricUserOptionConversionType__Linear                                          = 0,
	EFabricUserOptionConversionType__Exponential                                     = 1,
	EFabricUserOptionConversionType__Lookup                                          = 2,
	EFabricUserOptionConversionType__EFabricUserOptionConversionType_MAX             = 3
};

/// Struct /Script/FabricMetasoundDataTypes.FabricMetasoundDrumPlayerSampleData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFabricMetasoundDrumPlayerSampleData
{ 
	SDK_UNDEFINED(24,13607) /* FText */                __um(SampleLabel);                                          // 0x0000   (0x0018)  
	class USoundWave*                                  WaveAsset;                                                  // 0x0018   (0x0008)  
};

/// Class /Script/FabricMetasoundDataTypes.FabricMetasoundDrumPlayerSampleBankAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UFabricMetasoundDrumPlayerSampleBankAsset : public UDataAsset
{ 
public:
	TArray<FFabricMetasoundDrumPlayerSampleData>       Samples;                                                    // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/FabricMetasoundDataTypes.FabricMetasoundDrumPlayerSampleBankAsset.GetSampleLabels
	// TArray<FText> GetSampleLabels();                                                                                      // [0xabb0278] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricMetasoundDataTypes.FabricMetasoundDrumPlayerDataAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UFabricMetasoundDrumPlayerDataAsset : public UDataAsset
{ 
public:
	SDK_UNDEFINED(16,13608) /* TArray<TWeakObjectPtr<UFabricMetasoundDrumPlayerSampleBankAsset*>> */ __um(SampleBanks); // 0x0030   (0x0010)  
};

/// Class /Script/FabricMetasoundDataTypes.FabricMetasoundInstrumentPlayerDataAsset
/// Size: 0x0008 (0x000030 - 0x000038)
class UFabricMetasoundInstrumentPlayerDataAsset : public UDataAsset
{ 
public:
	class UFusionPatch*                                Patch;                                                      // 0x0030   (0x0008)  
};

/// Class /Script/FabricMetasoundDataTypes.FabricMetasoundInstrumentPlayerDataAssetList
/// Size: 0x0010 (0x000030 - 0x000040)
class UFabricMetasoundInstrumentPlayerDataAssetList : public UDataAsset
{ 
public:
	SDK_UNDEFINED(16,13609) /* TArray<TWeakObjectPtr<UFabricMetasoundInstrumentPlayerDataAsset*>> */ __um(InstrumentPlayerData); // 0x0030   (0x0010)  
};

/// Struct /Script/FabricMetasoundDataTypes.FabricUserOption
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFabricUserOption
{ 
	EFabricUserOptionConversionType                    ConversionType;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Min;                                                        // 0x0004   (0x0004)  
	float                                              Max;                                                        // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<float>                                      LookupTable;                                                // 0x0010   (0x0010)  
};

/// Class /Script/FabricMetasoundDataTypes.FabricMetaSoundUserOption
/// Size: 0x0038 (0x000028 - 0x000060)
class UFabricMetaSoundUserOption : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	FFabricUserOption                                  FabricUserOption;                                           // 0x0030   (0x0020)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0050   (0x0010)  MISSED
};

