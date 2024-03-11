
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/PointLight.EPointLightDeviceModes
/// Size: 0x08
enum class EPointLightDeviceModes : uint8_t
{
	EPointLightDeviceModes__Constant                                                 = 0,
	EPointLightDeviceModes__Flicker                                                  = 1,
	EPointLightDeviceModes__Wave                                                     = 2,
	EPointLightDeviceModes__ShortCircuit                                             = 3,
	EPointLightDeviceModes__Party                                                    = 4,
	EPointLightDeviceModes__Windy                                                    = 5,
	EPointLightDeviceModes__Flash                                                    = 6,
	EPointLightDeviceModes__EPointLightDeviceModes_MAX                               = 7
};

/// Enum /Script/PointLight.EPointLightDeviceLightType
/// Size: 0x03
enum class EPointLightDeviceLightType : uint8_t
{
	EPointLightDeviceLightType__Point                                                = 0,
	EPointLightDeviceLightType__Spot                                                 = 1,
	EPointLightDeviceLightType__EPointLightDeviceLightType_MAX                       = 2
};

/// Class /Script/PointLight.PointLightNativeComponent
/// Size: 0x00D0 (0x0000A0 - 0x000170)
class UPointLightNativeComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x90];                                      // 0x00A0   (0x0090)  MISSED
	class UTimelineComponent*                          ShortCircuitTimelineComponent;                              // 0x0130   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0138   (0x0018)  MISSED
	FLinearColor                                       FlickerColor;                                               // 0x0150   (0x0010)  
	float                                              ShortCircuitMinDelay;                                       // 0x0160   (0x0004)  
	float                                              ShortCircuitMaxDelay;                                       // 0x0164   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0168   (0x0008)  MISSED


	/// Functions
	// Function /Script/PointLight.PointLightNativeComponent.UpdateShortCircuit
	// void UpdateShortCircuit();                                                                                            // [0xac63fc4] Final|Native|Private 
	// Function /Script/PointLight.PointLightNativeComponent.UpdateDeviceSettings
	// void UpdateDeviceSettings(FPointLightRhythmParameters& RhythmParameters);                                             // [0xac63f34] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PointLight.PointLightNativeComponent.StopShortCircuitUpdate
	// void StopShortCircuitUpdate();                                                                                        // [0xac63f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/PointLight.PointLightNativeComponent.StartShortCircuitUpdate
	// void StartShortCircuitUpdate(class UTimelineComponent* ShortCircuitTimeline);                                         // [0xac63d64] Final|Native|Public|BlueprintCallable 
	// Function /Script/PointLight.PointLightNativeComponent.StartRhythmUpdate
	// void StartRhythmUpdate(FTimerHandle& TimerHandle, float Rate);                                                        // [0xac63c54] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/PointLight.PointLightRhythmParameters
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPointLightRhythmParameters
{ 
	FLinearColor                                       LightColor;                                                 // 0x0000   (0x0010)  
	class ULightComponent*                             ActiveLight;                                                // 0x0010   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x0018   (0x0008)  
	int32_t                                            ColorBands;                                                 // 0x0020   (0x0004)  
	float                                              RhythmFrequencyValue;                                       // 0x0024   (0x0004)  
	float                                              WindAmplitudeSpotLight;                                     // 0x0028   (0x0004)  
	float                                              FlashFactor;                                                // 0x002C   (0x0004)  
	float                                              SizeBasedIntensity;                                         // 0x0030   (0x0004)  
	EPointLightDeviceLightType                         LightType;                                                  // 0x0034   (0x0001)  
	EPointLightDeviceModes                             RhythmMode;                                                 // 0x0035   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0036   (0x0002)  MISSED
};

