
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C
/// Size: 0x02F0 (0x000FF0 - 0x0012E0)
class AMASTER_TODM_C : public AFortTimeOfDayManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4832;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xFF0, 8, 0, 0})
	CMember(class UPostProcessComponent*)              HeavySSAO_Postprocess                                       OFFSET(get<T>, {0xFF8, 8, 0, 0})
	CMember(class UPostProcessComponent*)              EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_ OFFSET(get<T>, {0x1000, 8, 0, 0})
	DMember(float)                                     New_Storm_Timeline_Wind_Strength_5E5E494B489306ED044096A143F228CF OFFSET(get<float>, {0x1008, 4, 0, 0})
	DMember(float)                                     New_Storm_Timeline_RainInt_5E5E494B489306ED044096A143F228CF OFFSET(get<float>, {0x100C, 4, 0, 0})
	DMember(float)                                     New_Storm_Timeline_Lightning_Modulator_5E5E494B489306ED044096A143F228CF OFFSET(get<float>, {0x1010, 4, 0, 0})
	DMember(float)                                     New_Storm_Timeline_Storm_Ramp_In_Value_5E5E494B489306ED044096A143F228CF OFFSET(get<float>, {0x1014, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           New_Storm_Timeline__Direction_5E5E494B489306ED044096A143F228CF OFFSET(get<T>, {0x1018, 1, 0, 0})
	CMember(class UTimelineComponent*)                 New_Storm_Timeline                                          OFFSET(get<T>, {0x1020, 8, 0, 0})
	DMember(float)                                     FlashLightning_LightningColorLERP_FA5447C54EBAE729F521C3B243BEC285 OFFSET(get<float>, {0x1028, 4, 0, 0})
	DMember(float)                                     FlashLightning_lightning_alpha_FA5447C54EBAE729F521C3B243BEC285 OFFSET(get<float>, {0x102C, 4, 0, 0})
	DMember(float)                                     FlashLightning_Lightning_Intensity_FA5447C54EBAE729F521C3B243BEC285 OFFSET(get<float>, {0x1030, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           FlashLightning__Direction_FA5447C54EBAE729F521C3B243BEC285  OFFSET(get<T>, {0x1034, 1, 0, 0})
	CMember(class UTimelineComponent*)                 FlashLightning                                              OFFSET(get<T>, {0x1038, 8, 0, 0})
	DMember(double)                                    WindSpeed                                                   OFFSET(get<double>, {0x1040, 8, 0, 0})
	DMember(double)                                    RandomWeatherWaitTime                                       OFFSET(get<double>, {0x1048, 8, 0, 0})
	DMember(double)                                    CurrentAmountOfRandomWeatherTimeLeft                        OFFSET(get<double>, {0x1050, 8, 0, 0})
	DMember(double)                                    NewWeatherLerpAmount                                        OFFSET(get<double>, {0x1058, 8, 0, 0})
	DMember(double)                                    WindStrength                                                OFFSET(get<double>, {0x1060, 8, 0, 0})
	DMember(double)                                    FutureWindStrength                                          OFFSET(get<double>, {0x1068, 8, 0, 0})
	DMember(double)                                    FutureWindSpeed                                             OFFSET(get<double>, {0x1070, 8, 0, 0})
	DMember(bool)                                      bPickNewWindConditions                                      OFFSET(get<bool>, {0x1078, 1, 0, 0})
	DMember(double)                                    LightningStrength                                           OFFSET(get<double>, {0x1080, 8, 0, 0})
	DMember(double)                                    ThreatCloudStormAmount                                      OFFSET(get<double>, {0x1088, 8, 0, 0})
	DMember(bool)                                      UseRainWithStorms                                           OFFSET(get<bool>, {0x1090, 1, 0, 0})
	DMember(bool)                                      Play_a_Particle_Effect_Near_the_players_Feet                OFFSET(get<bool>, {0x1091, 1, 0, 0})
	DMember(bool)                                      Internal_Rain_WindEffects_Should_be_Active                  OFFSET(get<bool>, {0x1092, 1, 0, 0})
	CMember(class UParticleSystemComponent*)           Storm_Foot_Particle_Outdoor                                 OFFSET(get<T>, {0x1098, 8, 0, 0})
	CMember(class UParticleSystem*)                    Storm_Foot_Particle_While_on_Terrain                        OFFSET(get<T>, {0x10A0, 8, 0, 0})
	CMember(class UParticleSystemComponent*)           Storm_Foot_Particle_Indoor                                  OFFSET(get<T>, {0x10A8, 8, 0, 0})
	CMember(class UParticleSystem*)                    Storm_Foot_Particle_While_NOT_on_Terrain                    OFFSET(get<T>, {0x10B0, 8, 0, 0})
	DMember(double)                                    Storm_Wind_Strength                                         OFFSET(get<double>, {0x10B8, 8, 0, 0})
	DMember(bool)                                      Generate_Foliage_Wind_Gusts                                 OFFSET(get<bool>, {0x10C0, 1, 0, 0})
	SMember(FTimerHandle)                              LightningStrikeTimerHandle                                  OFFSET(getStruct<T>, {0x10C8, 8, 0, 0})
	SMember(FLinearColor)                              PreviousDirectionalLightColor                               OFFSET(getStruct<T>, {0x10D0, 16, 0, 0})
	SMember(FLinearColor)                              Lightning_Flash_Color                                       OFFSET(getStruct<T>, {0x10E0, 16, 0, 0})
	DMember(double)                                    Lightning_Flash_Timeline_Min                                OFFSET(get<double>, {0x10F0, 8, 0, 0})
	DMember(double)                                    Lightning_Flash_Timeline_Max                                OFFSET(get<double>, {0x10F8, 8, 0, 0})
	SMember(FLinearColor)                              SkyboxFogMorningColor                                       OFFSET(getStruct<T>, {0x1100, 16, 0, 0})
	SMember(FLinearColor)                              SkyboxFogMorningLitColor                                    OFFSET(getStruct<T>, {0x1110, 16, 0, 0})
	DMember(double)                                    SkyboxFogMorningDistance                                    OFFSET(get<double>, {0x1120, 8, 0, 0})
	DMember(double)                                    SkyboxFogMorningDiffuseAmount                               OFFSET(get<double>, {0x1128, 8, 0, 0})
	DMember(double)                                    SkyboxFogMorningEmissiveAmount                              OFFSET(get<double>, {0x1130, 8, 0, 0})
	DMember(double)                                    SkyboxFogMorningLitLength                                   OFFSET(get<double>, {0x1138, 8, 0, 0})
	DMember(double)                                    SkyboxFogMorningLitRotation                                 OFFSET(get<double>, {0x1140, 8, 0, 0})
	DMember(double)                                    SkyboxFogMorningLitOffset                                   OFFSET(get<double>, {0x1148, 8, 0, 0})
	SMember(FLinearColor)                              SkyboxFogDayColor                                           OFFSET(getStruct<T>, {0x1150, 16, 0, 0})
	SMember(FLinearColor)                              SkyboxFogDayLitColor                                        OFFSET(getStruct<T>, {0x1160, 16, 0, 0})
	DMember(double)                                    SkyboxFogDayDistance                                        OFFSET(get<double>, {0x1170, 8, 0, 0})
	DMember(double)                                    SkyboxFogDayDiffuseAmount                                   OFFSET(get<double>, {0x1178, 8, 0, 0})
	DMember(double)                                    SkyboxFogDayEmissiveAmount                                  OFFSET(get<double>, {0x1180, 8, 0, 0})
	DMember(double)                                    SkyboxFogDayLitLength                                       OFFSET(get<double>, {0x1188, 8, 0, 0})
	DMember(double)                                    SkyboxFogDayLitRotation                                     OFFSET(get<double>, {0x1190, 8, 0, 0})
	DMember(double)                                    SkyboxFogDayLitOffset                                       OFFSET(get<double>, {0x1198, 8, 0, 0})
	SMember(FLinearColor)                              SkyboxFogEveningColor                                       OFFSET(getStruct<T>, {0x11A0, 16, 0, 0})
	SMember(FLinearColor)                              SkyboxFogEveningLitColor                                    OFFSET(getStruct<T>, {0x11B0, 16, 0, 0})
	DMember(double)                                    SkyboxFogEveningDistance                                    OFFSET(get<double>, {0x11C0, 8, 0, 0})
	DMember(double)                                    SkyboxFogEveningDiffuseAmount                               OFFSET(get<double>, {0x11C8, 8, 0, 0})
	DMember(double)                                    SkyboxFogEveningEmissiveAmount                              OFFSET(get<double>, {0x11D0, 8, 0, 0})
	DMember(double)                                    SkyboxFogEveningLitLength                                   OFFSET(get<double>, {0x11D8, 8, 0, 0})
	DMember(double)                                    SkyboxFogEveningLitRotation                                 OFFSET(get<double>, {0x11E0, 8, 0, 0})
	DMember(double)                                    SkyboxFogEveningLitOffset                                   OFFSET(get<double>, {0x11E8, 8, 0, 0})
	SMember(FLinearColor)                              SkyboxFogNightColor                                         OFFSET(getStruct<T>, {0x11F0, 16, 0, 0})
	SMember(FLinearColor)                              SkyboxFogNightLitColor                                      OFFSET(getStruct<T>, {0x1200, 16, 0, 0})
	DMember(double)                                    SkyboxFogNightDistance                                      OFFSET(get<double>, {0x1210, 8, 0, 0})
	DMember(double)                                    SkyboxFogNightDiffuseAmount                                 OFFSET(get<double>, {0x1218, 8, 0, 0})
	DMember(double)                                    SkyboxFogNightEmissiveAmount                                OFFSET(get<double>, {0x1220, 8, 0, 0})
	DMember(double)                                    SkyboxFogNightLitLength                                     OFFSET(get<double>, {0x1228, 8, 0, 0})
	DMember(double)                                    SkyboxFogNightLitRotation                                   OFFSET(get<double>, {0x1230, 8, 0, 0})
	DMember(double)                                    SkyboxFogNightLitOffset                                     OFFSET(get<double>, {0x1238, 8, 0, 0})
	DMember(double)                                    World_Border_Cloud_Base_Color_Brightness                    OFFSET(get<double>, {0x1240, 8, 0, 0})
	SMember(FLinearColor)                              World_Border_Cloud_Sub_Surface_Color_and_Opacity            OFFSET(getStruct<T>, {0x1248, 16, 0, 0})
	DMember(bool)                                      EnableCometDynamicPlacement                                 OFFSET(get<bool>, {0x1258, 1, 0, 0})
	SMember(FVector4)                                  Night                                                       OFFSET(getStruct<T>, {0x1260, 32, 0, 0})
	SMember(FVector4)                                  Evening                                                     OFFSET(getStruct<T>, {0x1280, 32, 0, 0})
	SMember(FVector4)                                  Day                                                         OFFSET(getStruct<T>, {0x12A0, 32, 0, 0})
	SMember(FVector4)                                  Morning                                                     OFFSET(getStruct<T>, {0x12C0, 32, 0, 0})


	/// Functions
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.EmptyTransform
	// void EmptyTransform(FTransform& Transform);                                                                              // [0x20c3f9c] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.SetHeavySSAO
	// void SetHeavySSAO();                                                                                                     // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x20c3f9c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.FlashLightning__FinishedFunc
	// void FlashLightning__FinishedFunc();                                                                                     // [0x20c3f9c] BlueprintEvent       
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.FlashLightning__UpdateFunc
	// void FlashLightning__UpdateFunc();                                                                                       // [0x20c3f9c] BlueprintEvent       
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.New Storm Timeline__FinishedFunc
	// void New Storm Timeline__FinishedFunc();                                                                                 // [0x20c3f9c] BlueprintEvent       
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.New Storm Timeline__UpdateFunc
	// void New Storm Timeline__UpdateFunc();                                                                                   // [0x20c3f9c] BlueprintEvent       
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.New Storm Timeline__FireOffRain__EventFunc
	// void New Storm Timeline__FireOffRain__EventFunc();                                                                       // [0x20c3f9c] BlueprintEvent       
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.StartStorm
	// void StartStorm();                                                                                                       // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.OnStormStart
	// void OnStormStart();                                                                                                     // [0x20c3f9c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.OnStormEnd
	// void OnStormEnd();                                                                                                       // [0x20c3f9c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.LightningStrike
	// void LightningStrike();                                                                                                  // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.DisableLightAndFog
	// void DisableLightAndFog(bool Enable);                                                                                    // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.EnableHDRRendering
	// void EnableHDRRendering();                                                                                               // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.UpdateSSAO
	// void UpdateSSAO();                                                                                                       // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.ExecuteUbergraph_MASTER_TODM
	// void ExecuteUbergraph_MASTER_TODM(int32_t EntryPoint);                                                                   // [0x20c3f9c] Final|HasDefaults    
};

/// Class /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C
/// Size: 0x0008 (0x0012E0 - 0x0012E8)
class ATODM_Disabled_C : public AMASTER_TODM_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4840;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x12E0, 8, 0, 0})


	/// Functions
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.SetReflectionQualityMPC
	// void SetReflectionQualityMPC();                                                                                          // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.SetGlobalIlluminationMPC
	// void SetGlobalIlluminationMPC();                                                                                         // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x20c3f9c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.DisableLightAndFog
	// void DisableLightAndFog(bool Enable);                                                                                    // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.Update Scalabilty Settings
	// void Update Scalabilty Settings();                                                                                       // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.DebugScalabilitySettings
	// void DebugScalabilitySettings();                                                                                         // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.ExecuteUbergraph_TODM_Disabled
	// void ExecuteUbergraph_TODM_Disabled(int32_t EntryPoint);                                                                 // [0x20c3f9c] Final                
};

