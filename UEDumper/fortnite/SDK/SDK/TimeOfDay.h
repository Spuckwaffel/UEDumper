
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C
/// Size: 0x02F0 (0x000FF0 - 0x0012E0)
class AMASTER_TODM_C : public AFortTimeOfDayManager
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0FE8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0FF0   (0x0008)  
	class UPostProcessComponent*                       HeavySSAO_Postprocess;                                      // 0x0FF8   (0x0008)  
	class UPostProcessComponent*                       EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_; // 0x1000   (0x0008)  
	float                                              New_Storm_Timeline_Wind_Strength_5E5E494B489306ED044096A143F228CF; // 0x1008   (0x0004)  
	float                                              New_Storm_Timeline_RainInt_5E5E494B489306ED044096A143F228CF; // 0x100C   (0x0004)  
	float                                              New_Storm_Timeline_Lightning_Modulator_5E5E494B489306ED044096A143F228CF; // 0x1010   (0x0004)  
	float                                              New_Storm_Timeline_Storm_Ramp_In_Value_5E5E494B489306ED044096A143F228CF; // 0x1014   (0x0004)  
	SDK_UNDEFINED(1,15701) /* TEnumAsByte<ETimelineDirection> */ __um(New_Storm_Timeline__Direction_5E5E494B489306ED044096A143F228CF); // 0x1018   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x1019   (0x0007)  MISSED
	class UTimelineComponent*                          New_Storm_Timeline;                                         // 0x1020   (0x0008)  
	float                                              FlashLightning_LightningColorLERP_FA5447C54EBAE729F521C3B243BEC285; // 0x1028   (0x0004)  
	float                                              FlashLightning_lightning_alpha_FA5447C54EBAE729F521C3B243BEC285; // 0x102C   (0x0004)  
	float                                              FlashLightning_Lightning_Intensity_FA5447C54EBAE729F521C3B243BEC285; // 0x1030   (0x0004)  
	SDK_UNDEFINED(1,15702) /* TEnumAsByte<ETimelineDirection> */ __um(FlashLightning__Direction_FA5447C54EBAE729F521C3B243BEC285); // 0x1034   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x1035   (0x0003)  MISSED
	class UTimelineComponent*                          FlashLightning;                                             // 0x1038   (0x0008)  
	double                                             WindSpeed;                                                  // 0x1040   (0x0008)  
	double                                             RandomWeatherWaitTime;                                      // 0x1048   (0x0008)  
	double                                             CurrentAmountOfRandomWeatherTimeLeft;                       // 0x1050   (0x0008)  
	double                                             NewWeatherLerpAmount;                                       // 0x1058   (0x0008)  
	double                                             WindStrength;                                               // 0x1060   (0x0008)  
	double                                             FutureWindStrength;                                         // 0x1068   (0x0008)  
	double                                             FutureWindSpeed;                                            // 0x1070   (0x0008)  
	bool                                               bPickNewWindConditions;                                     // 0x1078   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x1079   (0x0007)  MISSED
	double                                             LightningStrength;                                          // 0x1080   (0x0008)  
	double                                             ThreatCloudStormAmount;                                     // 0x1088   (0x0008)  
	bool                                               UseRainWithStorms;                                          // 0x1090   (0x0001)  
	bool                                               Play_a_Particle_Effect_Near_the_players_Feet;               // 0x1091   (0x0001)  
	bool                                               Internal_Rain_WindEffects_Should_be_Active;                 // 0x1092   (0x0001)  
	unsigned char                                      UnknownData04_5[0x5];                                       // 0x1093   (0x0005)  MISSED
	class UParticleSystemComponent*                    Storm_Foot_Particle_Outdoor;                                // 0x1098   (0x0008)  
	class UParticleSystem*                             Storm_Foot_Particle_While_on_Terrain;                       // 0x10A0   (0x0008)  
	class UParticleSystemComponent*                    Storm_Foot_Particle_Indoor;                                 // 0x10A8   (0x0008)  
	class UParticleSystem*                             Storm_Foot_Particle_While_NOT_on_Terrain;                   // 0x10B0   (0x0008)  
	double                                             Storm_Wind_Strength;                                        // 0x10B8   (0x0008)  
	bool                                               Generate_Foliage_Wind_Gusts;                                // 0x10C0   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x10C1   (0x0007)  MISSED
	FTimerHandle                                       LightningStrikeTimerHandle;                                 // 0x10C8   (0x0008)  
	FLinearColor                                       PreviousDirectionalLightColor;                              // 0x10D0   (0x0010)  
	FLinearColor                                       Lightning_Flash_Color;                                      // 0x10E0   (0x0010)  
	double                                             Lightning_Flash_Timeline_Min;                               // 0x10F0   (0x0008)  
	double                                             Lightning_Flash_Timeline_Max;                               // 0x10F8   (0x0008)  
	FLinearColor                                       SkyboxFogMorningColor;                                      // 0x1100   (0x0010)  
	FLinearColor                                       SkyboxFogMorningLitColor;                                   // 0x1110   (0x0010)  
	double                                             SkyboxFogMorningDistance;                                   // 0x1120   (0x0008)  
	double                                             SkyboxFogMorningDiffuseAmount;                              // 0x1128   (0x0008)  
	double                                             SkyboxFogMorningEmissiveAmount;                             // 0x1130   (0x0008)  
	double                                             SkyboxFogMorningLitLength;                                  // 0x1138   (0x0008)  
	double                                             SkyboxFogMorningLitRotation;                                // 0x1140   (0x0008)  
	double                                             SkyboxFogMorningLitOffset;                                  // 0x1148   (0x0008)  
	FLinearColor                                       SkyboxFogDayColor;                                          // 0x1150   (0x0010)  
	FLinearColor                                       SkyboxFogDayLitColor;                                       // 0x1160   (0x0010)  
	double                                             SkyboxFogDayDistance;                                       // 0x1170   (0x0008)  
	double                                             SkyboxFogDayDiffuseAmount;                                  // 0x1178   (0x0008)  
	double                                             SkyboxFogDayEmissiveAmount;                                 // 0x1180   (0x0008)  
	double                                             SkyboxFogDayLitLength;                                      // 0x1188   (0x0008)  
	double                                             SkyboxFogDayLitRotation;                                    // 0x1190   (0x0008)  
	double                                             SkyboxFogDayLitOffset;                                      // 0x1198   (0x0008)  
	FLinearColor                                       SkyboxFogEveningColor;                                      // 0x11A0   (0x0010)  
	FLinearColor                                       SkyboxFogEveningLitColor;                                   // 0x11B0   (0x0010)  
	double                                             SkyboxFogEveningDistance;                                   // 0x11C0   (0x0008)  
	double                                             SkyboxFogEveningDiffuseAmount;                              // 0x11C8   (0x0008)  
	double                                             SkyboxFogEveningEmissiveAmount;                             // 0x11D0   (0x0008)  
	double                                             SkyboxFogEveningLitLength;                                  // 0x11D8   (0x0008)  
	double                                             SkyboxFogEveningLitRotation;                                // 0x11E0   (0x0008)  
	double                                             SkyboxFogEveningLitOffset;                                  // 0x11E8   (0x0008)  
	FLinearColor                                       SkyboxFogNightColor;                                        // 0x11F0   (0x0010)  
	FLinearColor                                       SkyboxFogNightLitColor;                                     // 0x1200   (0x0010)  
	double                                             SkyboxFogNightDistance;                                     // 0x1210   (0x0008)  
	double                                             SkyboxFogNightDiffuseAmount;                                // 0x1218   (0x0008)  
	double                                             SkyboxFogNightEmissiveAmount;                               // 0x1220   (0x0008)  
	double                                             SkyboxFogNightLitLength;                                    // 0x1228   (0x0008)  
	double                                             SkyboxFogNightLitRotation;                                  // 0x1230   (0x0008)  
	double                                             SkyboxFogNightLitOffset;                                    // 0x1238   (0x0008)  
	double                                             World_Border_Cloud_Base_Color_Brightness;                   // 0x1240   (0x0008)  
	FLinearColor                                       World_Border_Cloud_Sub_Surface_Color_and_Opacity;           // 0x1248   (0x0010)  
	bool                                               EnableCometDynamicPlacement;                                // 0x1258   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x1259   (0x0007)  MISSED
	FVector4                                           Night;                                                      // 0x1260   (0x0020)  
	FVector4                                           Evening;                                                    // 0x1280   (0x0020)  
	FVector4                                           Day;                                                        // 0x12A0   (0x0020)  
	FVector4                                           Morning;                                                    // 0x12C0   (0x0020)  


	/// Functions
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.EmptyTransform
	// void EmptyTransform(FTransform& Transform);                                                                           // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.SetHeavySSAO
	// void SetHeavySSAO();                                                                                                  // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.FlashLightning__FinishedFunc
	// void FlashLightning__FinishedFunc();                                                                                  // [0x18a39e4] BlueprintEvent       
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.FlashLightning__UpdateFunc
	// void FlashLightning__UpdateFunc();                                                                                    // [0x18a39e4] BlueprintEvent       
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.New Storm Timeline__FinishedFunc
	// void New Storm Timeline__FinishedFunc();                                                                              // [0x18a39e4] BlueprintEvent       
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.New Storm Timeline__UpdateFunc
	// void New Storm Timeline__UpdateFunc();                                                                                // [0x18a39e4] BlueprintEvent       
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.New Storm Timeline__FireOffRain__EventFunc
	// void New Storm Timeline__FireOffRain__EventFunc();                                                                    // [0x18a39e4] BlueprintEvent       
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.StartStorm
	// void StartStorm();                                                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.OnStormStart
	// void OnStormStart();                                                                                                  // [0x18a39e4] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.OnStormEnd
	// void OnStormEnd();                                                                                                    // [0x18a39e4] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.LightningStrike
	// void LightningStrike();                                                                                               // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.DisableLightAndFog
	// void DisableLightAndFog(bool Enable);                                                                                 // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.EnableHDRRendering
	// void EnableHDRRendering();                                                                                            // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.UpdateSSAO
	// void UpdateSSAO();                                                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.ExecuteUbergraph_MASTER_TODM
	// void ExecuteUbergraph_MASTER_TODM(int32_t EntryPoint);                                                                // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C
/// Size: 0x0008 (0x0012E0 - 0x0012E8)
class ATODM_Disabled_C : public AMASTER_TODM_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x12E0   (0x0008)  


	/// Functions
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.SetReflectionQualityMPC
	// void SetReflectionQualityMPC();                                                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.SetGlobalIlluminationMPC
	// void SetGlobalIlluminationMPC();                                                                                      // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.DisableLightAndFog
	// void DisableLightAndFog(bool Enable);                                                                                 // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.Update Scalabilty Settings
	// void Update Scalabilty Settings();                                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.DebugScalabilitySettings
	// void DebugScalabilitySettings();                                                                                      // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.ExecuteUbergraph_TODM_Disabled
	// void ExecuteUbergraph_TODM_Disabled(int32_t EntryPoint);                                                              // [0x18a39e4] Final                
};

