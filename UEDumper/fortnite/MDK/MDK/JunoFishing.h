
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/JunoFishing.JunoFishingAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoFishingAnalytics : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoFishing.JunoFishingBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoFishingBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoFishing.JunoFishingBlueprintLibrary.FireEvent_EndJunoFishingSession
	// void FireEvent_EndJunoFishingSession(class AFortPlayerPawn* PlayerPawn, class UFortWorldItemDefinition* ItemFished, bool bFromHotspot, bool bIsPlayerSpawnedHotspot, FString HotspotTierTag, FString WaterBodyName, FString CatchTypeName, class AActor* ItemUsedToFish); // [0xb4fe544] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoFishing.JunoFishingBlueprintLibrary.FireEvent_BeginJunoFishingSession
	// void FireEvent_BeginJunoFishingSession(class AFortPlayerPawn* PlayerPawn);                                               // [0xb4fe4b0] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoFishing.JunoPlayerControllerComponent_FishingAnalytics
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UJunoPlayerControllerComponent_FishingAnalytics : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FJunoPlayerFishingTelemetryData)           PlayerFishingTelemetryData                                  OFFSET(getStruct<T>, {0xA0, 80, 0, 0})
};

/// Struct /Script/JunoFishing.JunoPlayerFishingTelemetryData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoPlayerFishingTelemetryData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     TimeFishingSessionBegan                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(class UFortWorldItemDefinition*)           ResultItem                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   ItemUsedToFish                                              OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bFromHotspot                                                OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bIsPlayerSpawnedHotspot                                     OFFSET(get<bool>, {0x19, 1, 0, 0})
	SMember(FString)                                   HotspotTierTag                                              OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   WaterBodyName                                               OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   CatchTypeName                                               OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

