
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameFeatures
/// dependency: VehicleAudioRuntime

/// Class /Script/VehicleCosmeticsAudioRuntime.GameFeatureAction_OverrideMaxLoadedVehicleAudio
/// Size: 0x0028 (0x000028 - 0x000050)
class UGameFeatureAction_OverrideMaxLoadedVehicleAudio : public UGameFeatureAction
{ 
public:
	int32_t                                            DefaultSetting;                                             // 0x0028   (0x0004)  
	int32_t                                            XB1Setting;                                                 // 0x002C   (0x0004)  
	int32_t                                            XSXSetting;                                                 // 0x0030   (0x0004)  
	int32_t                                            PS4Setting;                                                 // 0x0034   (0x0004)  
	int32_t                                            PS5Setting;                                                 // 0x0038   (0x0004)  
	int32_t                                            MobileSetting;                                              // 0x003C   (0x0004)  
	int32_t                                            SwitchSetting;                                              // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0044   (0x000C)  MISSED
};

/// Class /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioController
/// Size: 0x0038 (0x000300 - 0x000338)
class AVehicleCosmeticsAudioController : public AFortVehicleAudioController
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0300   (0x0008)  MISSED
	SDK_UNDEFINED(32,12826) /* TWeakObjectPtr<UVehicleAudioCosmeticData*> */ __um(CachedEngineAudioItem);          // 0x0308   (0x0020)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0328   (0x0010)  MISSED


	/// Functions
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioController.UpdateAudioData
	// void UpdateAudioData(class UVehicleAudioCosmeticData* CosmeticData);                                                  // [0xa254a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioController.HandleEngineAudioItemUpdated
	// void HandleEngineAudioItemUpdated(TWeakObjectPtr<UVehicleCosmeticsItemDefinition_EngineAudio*> EngineAudioItem);      // [0x2fc1128] Final|Native|Public  
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioController.HandleEngineAudioCosmeticsFailed
	// void HandleEngineAudioCosmeticsFailed(FVehicleCosmeticsFailureInfo ReasonInfo);                                       // [0xa254838] Final|Native|Public  
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioController.BP_OnUpdateAudioData
	// void BP_OnUpdateAudioData(class UVehicleAudioCosmeticData* CosmeticData);                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioController.BP_OnCosmeticsFailed
	// void BP_OnCosmeticsFailed(FVehicleCosmeticsFailureInfo ReasonInfo);                                                   // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioController.BP_OnAudioDataLoaded
	// void BP_OnAudioDataLoaded(class USoundBase* sound);                                                                   // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioController.BP_OnAudioDataEjected
	// void BP_OnAudioDataEjected();                                                                                         // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Struct /Script/VehicleCosmeticsAudioRuntime.DistancePriority
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDistancePriority
{ 
	float                                              Distance;                                                   // 0x0000   (0x0004)  
	float                                              Priority;                                                   // 0x0004   (0x0004)  
};

/// Class /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioManager
/// Size: 0x0078 (0x000040 - 0x0000B8)
class UVehicleCosmeticsAudioManager : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0040   (0x0020)  MISSED
	TArray<class USoundBase*>                          LoadedAssets;                                               // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0070   (0x0010)  MISSED
	int32_t                                            DefaultMaxLoadedCosmetics;                                  // 0x0080   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	TArray<FDistancePriority>                          DistancePriorities;                                         // 0x0088   (0x0010)  
	float                                              LocalPlayerCosmeticPriority;                                // 0x0098   (0x0004)  
	float                                              PartyPlayerCosmeticPriority;                                // 0x009C   (0x0004)  
	float                                              LicensedCosmeticPriority;                                   // 0x00A0   (0x0004)  
	float                                              TickInterval;                                               // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x00A8   (0x0010)  MISSED


	/// Functions
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioManager.UnregisterVehcle
	// void UnregisterVehcle(TScriptInterface<Class> Vehicle);                                                               // [0x2752a74] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioManager.SetVehicleBudgetOverride
	// void SetVehicleBudgetOverride(int32_t NewBudget);                                                                     // [0xa254984] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioManager.RemoveVehicleBudgetOverride
	// void RemoveVehicleBudgetOverride();                                                                                   // [0xa254968] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioManager.RegisterVehicleWithAsset
	// void RegisterVehicleWithAsset(FVehicleCosmeticLoadRequestInfo& RequestInfo);                                          // [0x2752164] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioUser
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleCosmeticsAudioUser : public UInterface
{ 
public:
};

/// Struct /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticLoadRequestInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FVehicleCosmeticLoadRequestInfo
{ 
	SDK_UNDEFINED(16,12827) /* TScriptInterface<Class> */ __um(User);                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(32,12828) /* TWeakObjectPtr<USoundBase*> */ __um(sound);                                         // 0x0010   (0x0020)  
	bool                                               bIsClientEquippedCosmetic;                                  // 0x0030   (0x0001)  
	bool                                               bIsIPCosmetic;                                              // 0x0031   (0x0001)  
	bool                                               bIsClientPartyCosmetic;                                     // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0033   (0x0005)  MISSED
};

