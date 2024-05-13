
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: Water

/// Class /Script/Buoyancy.BuoyancyEventInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UBuoyancyEventInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Buoyancy.BuoyancyEventInterface.OnSurfaceTouching
	// void OnSurfaceTouching(class AWaterBody* WaterBodyActor, class UPrimitiveComponent* WaterComponent, class UPrimitiveComponent* SubmergedComponent, float SubmergedVolume, FVector& SubmergedCenterOfMass, FVector& SubmergedVelocity); // [0x20c3f9c] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/Buoyancy.BuoyancyEventInterface.OnSurfaceTouchEnd
	// void OnSurfaceTouchEnd(class AWaterBody* WaterBodyActor, class UPrimitiveComponent* WaterComponent, class UPrimitiveComponent* SubmergedComponent, float SubmergedVolume, FVector& SubmergedCenterOfMass, FVector& SubmergedVelocity); // [0x20c3f9c] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/Buoyancy.BuoyancyEventInterface.OnSurfaceTouchBegin
	// void OnSurfaceTouchBegin(class AWaterBody* WaterBodyActor, class UPrimitiveComponent* WaterComponent, class UPrimitiveComponent* SubmergedComponent, float SubmergedVolume, FVector& SubmergedCenterOfMass, FVector& SubmergedVelocity); // [0x20c3f9c] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/Buoyancy.BuoyancyRuntimeSettings
/// Size: 0x0030 (0x000030 - 0x000060)
class UBuoyancyRuntimeSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bBuoyancyEnabled                                            OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bKeepFloatingObjectsAwake                                   OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(float)                                     WaterDensity                                                OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     WaterDrag                                                   OFFSET(get<float>, {0x38, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            CollisionChannelForWaterObjects                             OFFSET(get<T>, {0x3C, 1, 0, 0})
	DMember(int32_t)                                   MaxNumBoundsSubdivisions                                    OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     MinBoundsSubdivisionVol                                     OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(char)                                      SurfaceTouchCallbackFlags                                   OFFSET(get<char>, {0x48, 1, 0, 0})
	DMember(float)                                     MinVelocityForSurfaceTouchCallback                          OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(bool)                                      bEnableSplineKeyCacheGrid                                   OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(float)                                     SplineKeyCacheGridSize                                      OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(uint32_t)                                  SplineKeyCacheLimit                                         OFFSET(get<uint32_t>, {0x58, 4, 0, 0})
};

/// Class /Script/Buoyancy.BuoyancySubsystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UBuoyancySubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:


	/// Functions
	// Function /Script/Buoyancy.BuoyancySubsystem.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x87017b0] Final|Native|Public|Const 
};

/// Enum /Script/Buoyancy.EBuoyancyEventFlags
/// Size: 0x04
enum class EBuoyancyEventFlags : uint8_t
{
	None                                                                             = 0,
	Begin                                                                            = 1,
	Continue                                                                         = 2,
	End                                                                              = 4
};

