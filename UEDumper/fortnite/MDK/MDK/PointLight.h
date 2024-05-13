
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/PointLight.PointLightNativeComponent
/// Size: 0x00D0 (0x0000A0 - 0x000170)
class UPointLightNativeComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(class UTimelineComponent*)                 ShortCircuitTimelineComponent                               OFFSET(get<T>, {0x130, 8, 0, 0})
	SMember(FLinearColor)                              FlickerColor                                                OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	DMember(float)                                     ShortCircuitMinDelay                                        OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     ShortCircuitMaxDelay                                        OFFSET(get<float>, {0x164, 4, 0, 0})


	/// Functions
	// Function /Script/PointLight.PointLightNativeComponent.UpdateShortCircuit
	// void UpdateShortCircuit();                                                                                               // [0xc79937c] Final|Native|Private 
	// Function /Script/PointLight.PointLightNativeComponent.UpdateDeviceSettings
	// void UpdateDeviceSettings(FPointLightRhythmParameters& RhythmParameters);                                                // [0xc7992ec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PointLight.PointLightNativeComponent.StopShortCircuitUpdate
	// void StopShortCircuitUpdate();                                                                                           // [0xc7992d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PointLight.PointLightNativeComponent.StartShortCircuitUpdate
	// void StartShortCircuitUpdate(class UTimelineComponent* ShortCircuitTimeline);                                            // [0xc799114] Final|Native|Public|BlueprintCallable 
	// Function /Script/PointLight.PointLightNativeComponent.StartRhythmUpdate
	// void StartRhythmUpdate(FTimerHandle& TimerHandle, float Rate);                                                           // [0xc799004] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/PointLight.PointLightRhythmParameters
/// Size: 0x0038 (0x000000 - 0x000038)
class FPointLightRhythmParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FLinearColor)                              LightColor                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(class ULightComponent*)                    ActiveLight                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               StaticMeshComponent                                         OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(int32_t)                                   ColorBands                                                  OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(float)                                     RhythmFrequencyValue                                        OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     WindAmplitudeSpotLight                                      OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     FlashFactor                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     SizeBasedIntensity                                          OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(EPointLightDeviceLightType)                LightType                                                   OFFSET(get<T>, {0x34, 1, 0, 0})
	CMember(EPointLightDeviceModes)                    RhythmMode                                                  OFFSET(get<T>, {0x35, 1, 0, 0})
};

/// Enum /Script/PointLight.EPointLightDeviceModes
/// Size: 0x07
enum class EPointLightDeviceModes : uint8_t
{
	EPointLightDeviceModes__Constant                                                 = 0,
	EPointLightDeviceModes__Flicker                                                  = 1,
	EPointLightDeviceModes__Wave                                                     = 2,
	EPointLightDeviceModes__ShortCircuit                                             = 3,
	EPointLightDeviceModes__Party                                                    = 4,
	EPointLightDeviceModes__Windy                                                    = 5,
	EPointLightDeviceModes__Flash                                                    = 6
};

/// Enum /Script/PointLight.EPointLightDeviceLightType
/// Size: 0x02
enum class EPointLightDeviceLightType : uint8_t
{
	EPointLightDeviceLightType__Point                                                = 0,
	EPointLightDeviceLightType__Spot                                                 = 1
};

