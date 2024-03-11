
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: LagerRuntime

/// Struct /Script/DynamicPoiPointProviderRuntime.DynamicPOIMaxActorCondition
/// Size: 0x000C (0x000000 - 0x00000C)
struct FDynamicPOIMaxActorCondition
{ 
	float                                              MinAreaSize;                                                // 0x0000   (0x0004)  
	float                                              MaxAreaSize;                                                // 0x0004   (0x0004)  
	int32_t                                            MaxCount;                                                   // 0x0008   (0x0004)  
};

/// Class /Script/DynamicPoiPointProviderRuntime.AIServiceDynamicPoiPointProvider
/// Size: 0x0050 (0x000078 - 0x0000C8)
class UAIServiceDynamicPoiPointProvider : public UAthenaAIService
{ 
public:
	FGameplayTagContainer                              DynamicPOIPointProviderTags;                                // 0x0078   (0x0020)  
	TArray<FDynamicPOIMaxActorCondition>               MaxActorConditions;                                         // 0x0098   (0x0010)  
	int32_t                                            DefaultMaxActorCount;                                       // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	class UAthenaAIServicePlayerBots*                  CachedAIServicePlayerBots;                                  // 0x00B0   (0x0008)  
	TArray<class UDynamicPoiPointProvider*>            DynamicPoiPointProviders;                                   // 0x00B8   (0x0010)  
};

/// Class /Script/DynamicPoiPointProviderRuntime.DynamicPoiPointProvider
/// Size: 0x00E8 (0x000028 - 0x000110)
class UDynamicPoiPointProvider : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class AFortGameStateAthena*                        CachedGameState;                                            // 0x0030   (0x0008)  
	class UFortAthenaLivingWorldManager*               CachedLivingWorldManager;                                   // 0x0038   (0x0008)  
	FGameplayTagContainer                              PointProviderFiltersTags;                                   // 0x0040   (0x0020)  
	FFortAthenaLivingWorldPointProviderSpawnLimiter    SpawnLimiter;                                               // 0x0060   (0x0068)  
	FBox                                               Box;                                                        // 0x00C8   (0x0038)  
	TArray<FVector>                                    Locations;                                                  // 0x0100   (0x0010)  
};

