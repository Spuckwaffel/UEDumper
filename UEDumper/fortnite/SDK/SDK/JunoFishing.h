
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/JunoFishing.JunoFishingAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoFishingAnalytics : public UObject
{ 
public:
};

/// Class /Script/JunoFishing.JunoFishingBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoFishingBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/JunoFishing.JunoFishingBlueprintLibrary.FireEvent_EndJunoFishingSession
	// void FireEvent_EndJunoFishingSession(class AFortPlayerPawn* PlayerPawn, class UFortWorldItemDefinition* ItemFished, bool bFromHotspot, bool bIsPlayerSpawnedHotspot, FString HotspotTierTag, FString WaterBodyName, FString CatchTypeName, class AActor* ItemUsedToFish); // [0xb4fe544] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoFishing.JunoFishingBlueprintLibrary.FireEvent_BeginJunoFishingSession
	// void FireEvent_BeginJunoFishingSession(class AFortPlayerPawn* PlayerPawn);                                            // [0xb4fe4b0] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/JunoFishing.JunoPlayerFishingTelemetryData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FJunoPlayerFishingTelemetryData
{ 
	float                                              TimeFishingSessionBegan;                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UFortWorldItemDefinition*                    ResultItem;                                                 // 0x0008   (0x0008)  
	SDK_UNDEFINED(8,14455) /* TWeakObjectPtr<AActor*> */ __um(ItemUsedToFish);                                     // 0x0010   (0x0008)  
	bool                                               bFromHotspot;                                               // 0x0018   (0x0001)  
	bool                                               bIsPlayerSpawnedHotspot;                                    // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x001A   (0x0006)  MISSED
	SDK_UNDEFINED(16,14456) /* FString */              __um(HotspotTierTag);                                       // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,14457) /* FString */              __um(WaterBodyName);                                        // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,14458) /* FString */              __um(CatchTypeName);                                        // 0x0040   (0x0010)  
};

/// Class /Script/JunoFishing.JunoPlayerControllerComponent_FishingAnalytics
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UJunoPlayerControllerComponent_FishingAnalytics : public UControllerComponent
{ 
public:
	FJunoPlayerFishingTelemetryData                    PlayerFishingTelemetryData;                                 // 0x00A0   (0x0050)  
};

