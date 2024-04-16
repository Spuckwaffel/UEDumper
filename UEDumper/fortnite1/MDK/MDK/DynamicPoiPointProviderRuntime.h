
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: LagerRuntime

/// Class /Script/DynamicPoiPointProviderRuntime.AIServiceDynamicPoiPointProvider
/// Size: 0x0050 (0x000078 - 0x0000C8)
class UAIServiceDynamicPoiPointProvider : public UAthenaAIService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FGameplayTagContainer)                     DynamicPOIPointProviderTags                                 OFFSET(getStruct<T>, {0x78, 32, 0, 0})
	CMember(TArray<FDynamicPOIMaxActorCondition>)      MaxActorConditions                                          OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(int32_t)                                   DefaultMaxActorCount                                        OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	CMember(class UAthenaAIServicePlayerBots*)         CachedAIServicePlayerBots                                   OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TArray<class UDynamicPoiPointProvider*>)   DynamicPoiPointProviders                                    OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/DynamicPoiPointProviderRuntime.DynamicPoiPointProvider
/// Size: 0x00E8 (0x000028 - 0x000110)
class UDynamicPoiPointProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(class AFortGameStateAthena*)               CachedGameState                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UFortAthenaLivingWorldManager*)      CachedLivingWorldManager                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FGameplayTagContainer)                     PointProviderFiltersTags                                    OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	SMember(FFortAthenaLivingWorldPointProviderSpawnLimiter) SpawnLimiter                                          OFFSET(getStruct<T>, {0x60, 104, 0, 0})
	SMember(FBox)                                      Box                                                         OFFSET(getStruct<T>, {0xC8, 56, 0, 0})
	CMember(TArray<FVector>)                           Locations                                                   OFFSET(get<T>, {0x100, 16, 0, 0})
};

/// Struct /Script/DynamicPoiPointProviderRuntime.DynamicPOIMaxActorCondition
/// Size: 0x000C (0x000000 - 0x00000C)
class FDynamicPOIMaxActorCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     MinAreaSize                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxAreaSize                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxCount                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

