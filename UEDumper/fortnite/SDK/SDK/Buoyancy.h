
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Enum /Script/Buoyancy.EBuoyancyEventFlags
/// Size: 0x05
enum class EBuoyancyEventFlags : uint8_t
{
	None                                                                             = 0,
	Begin                                                                            = 1,
	Continue                                                                         = 2,
	End                                                                              = 4,
	EBuoyancyEventFlags_MAX                                                          = 5
};

/// Class /Script/Buoyancy.BuoyancyEventInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UBuoyancyEventInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/Buoyancy.BuoyancyEventInterface.OnSurfaceTouching
	// void OnSurfaceTouching(class AWaterBody* WaterBodyActor, class UPrimitiveComponent* WaterComponent, class UPrimitiveComponent* SubmergedComponent, float SubmergedVolume, FVector& SubmergedCenterOfMass, FVector& SubmergedVelocity); // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/Buoyancy.BuoyancyEventInterface.OnSurfaceTouchEnd
	// void OnSurfaceTouchEnd(class AWaterBody* WaterBodyActor, class UPrimitiveComponent* WaterComponent, class UPrimitiveComponent* SubmergedComponent, float SubmergedVolume, FVector& SubmergedCenterOfMass, FVector& SubmergedVelocity); // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/Buoyancy.BuoyancyEventInterface.OnSurfaceTouchBegin
	// void OnSurfaceTouchBegin(class AWaterBody* WaterBodyActor, class UPrimitiveComponent* WaterComponent, class UPrimitiveComponent* SubmergedComponent, float SubmergedVolume, FVector& SubmergedCenterOfMass, FVector& SubmergedVelocity); // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/Buoyancy.BuoyancyRuntimeSettings
/// Size: 0x0030 (0x000030 - 0x000060)
class UBuoyancyRuntimeSettings : public UDeveloperSettings
{ 
public:
	bool                                               bBuoyancyEnabled;                                           // 0x0030   (0x0001)  
	bool                                               bKeepFloatingObjectsAwake;                                  // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              WaterDensity;                                               // 0x0034   (0x0004)  
	float                                              WaterDrag;                                                  // 0x0038   (0x0004)  
	SDK_UNDEFINED(1,12379) /* TEnumAsByte<ECollisionChannel> */ __um(CollisionChannelForWaterObjects);             // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	int32_t                                            MaxNumBoundsSubdivisions;                                   // 0x0040   (0x0004)  
	float                                              MinBoundsSubdivisionVol;                                    // 0x0044   (0x0004)  
	char                                               SurfaceTouchCallbackFlags;                                  // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              MinVelocityForSurfaceTouchCallback;                         // 0x004C   (0x0004)  
	bool                                               bEnableSplineKeyCacheGrid;                                  // 0x0050   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              SplineKeyCacheGridSize;                                     // 0x0054   (0x0004)  
	uint32_t                                           SplineKeyCacheLimit;                                        // 0x0058   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/Buoyancy.BuoyancySubsystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UBuoyancySubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0040   (0x0050)  MISSED


	/// Functions
	// Function /Script/Buoyancy.BuoyancySubsystem.IsEnabled
	// bool IsEnabled();                                                                                                     // [0x7ea1b00] Final|Native|Public|Const 
};

