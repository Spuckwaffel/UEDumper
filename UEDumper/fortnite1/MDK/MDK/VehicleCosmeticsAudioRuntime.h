
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameFeatures
/// dependency: VehicleAudioRuntime

/// Class /Script/VehicleCosmeticsAudioRuntime.GameFeatureAction_OverrideMaxLoadedVehicleAudio
/// Size: 0x0028 (0x000028 - 0x000050)
class UGameFeatureAction_OverrideMaxLoadedVehicleAudio : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   DefaultSetting                                              OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   XB1Setting                                                  OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   XSXSetting                                                  OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   PS4Setting                                                  OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   PS5Setting                                                  OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MobileSetting                                               OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   SwitchSetting                                               OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Class /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioController
/// Size: 0x0038 (0x000308 - 0x000340)
class AVehicleCosmeticsAudioController : public AFortVehicleAudioController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(TWeakObjectPtr<UVehicleAudioCosmeticData*>) CachedEngineAudioItem                                      OFFSET(get<T>, {0x310, 32, 0, 0})


	/// Functions
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioController.UpdateAudioData
	// void UpdateAudioData(class UVehicleAudioCosmeticData* CosmeticData);                                                     // [0xb0f98ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioController.HandleEngineAudioItemUpdated
	// void HandleEngineAudioItemUpdated(TWeakObjectPtr<UVehicleCosmeticsItemDefinition_EngineAudio*> EngineAudioItem);         // [0xb0f9648] Final|Native|Public  
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioController.HandleEngineAudioCosmeticsFailed
	// void HandleEngineAudioCosmeticsFailed(FVehicleCosmeticsFailureInfo ReasonInfo);                                          // [0xb0f9588] Final|Native|Public  
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioController.BP_OnUpdateAudioData
	// void BP_OnUpdateAudioData(class UVehicleAudioCosmeticData* CosmeticData);                                                // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioController.BP_OnCosmeticsFailed
	// void BP_OnCosmeticsFailed(FVehicleCosmeticsFailureInfo ReasonInfo);                                                      // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioController.BP_OnAudioDataLoaded
	// void BP_OnAudioDataLoaded(class USoundBase* sound);                                                                      // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioController.BP_OnAudioDataEjected
	// void BP_OnAudioDataEjected();                                                                                            // [0x246f7d8] Event|Public|BlueprintEvent 
};

/// Class /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioManager
/// Size: 0x0078 (0x000040 - 0x0000B8)
class UVehicleCosmeticsAudioManager : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<class USoundBase*>)                 LoadedAssets                                                OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(int32_t)                                   DefaultMaxLoadedCosmetics                                   OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	CMember(TArray<FDistancePriority>)                 DistancePriorities                                          OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(float)                                     LocalPlayerCosmeticPriority                                 OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     PartyPlayerCosmeticPriority                                 OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     LicensedCosmeticPriority                                    OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     TickInterval                                                OFFSET(get<float>, {0xA4, 4, 0, 0})


	/// Functions
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioManager.UnregisterVehcle
	// void UnregisterVehcle(TScriptInterface<Class> Vehicle);                                                                  // [0x233618c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioManager.SetVehicleBudgetOverride
	// void SetVehicleBudgetOverride(int32_t NewBudget);                                                                        // [0xb0f9830] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioManager.RemoveVehicleBudgetOverride
	// void RemoveVehicleBudgetOverride();                                                                                      // [0xb0f9814] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioManager.RegisterVehicleWithAsset
	// void RegisterVehicleWithAsset(FVehicleCosmeticLoadRequestInfo& RequestInfo);                                             // [0xb0f977c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioUser
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleCosmeticsAudioUser : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/VehicleCosmeticsAudioRuntime.DistancePriority
/// Size: 0x0008 (0x000000 - 0x000008)
class FDistancePriority : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Priority                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticLoadRequestInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FVehicleCosmeticLoadRequestInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TScriptInterface<Class>)                   User                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               sound                                                       OFFSET(get<T>, {0x10, 32, 0, 0})
	DMember(bool)                                      bIsClientEquippedCosmetic                                   OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bIsIPCosmetic                                               OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bIsClientPartyCosmetic                                      OFFSET(get<bool>, {0x32, 1, 0, 0})
};

