
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/MemoryUsageQueries.CollectionInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FCollectionInfo
{ 
	SDK_UNDEFINED(16,14925) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,14926) /* TArray<FString> */      __um(Includes);                                             // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,14927) /* TArray<FString> */      __um(Excludes);                                             // 0x0020   (0x0010)  
	float                                              BudgetMB;                                                   // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/MemoryUsageQueries.MemoryUsageQueriesConfig
/// Size: 0x0060 (0x000028 - 0x000088)
class UMemoryUsageQueriesConfig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FCollectionInfo>                            Collections;                                                // 0x0028   (0x0010)  
	SDK_UNDEFINED(80,14928) /* TMap<FString, FString> */ __um(SavingsPresets);                                     // 0x0038   (0x0050)  
};

