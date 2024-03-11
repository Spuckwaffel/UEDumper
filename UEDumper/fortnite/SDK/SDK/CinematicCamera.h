
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Enum /Script/CinematicCamera.ECameraFocusMethod
/// Size: 0x05
enum class ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__DoNotOverride                                                = 0,
	ECameraFocusMethod__Manual                                                       = 1,
	ECameraFocusMethod__Tracking                                                     = 2,
	ECameraFocusMethod__Disable                                                      = 3,
	ECameraFocusMethod__MAX                                                          = 4
};

/// Class /Script/CinematicCamera.CameraRig_Crane
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ACameraRig_Crane : public AActor
{ 
public:
	float                                              CranePitch;                                                 // 0x0290   (0x0004)  
	float                                              CraneYaw;                                                   // 0x0294   (0x0004)  
	float                                              CraneArmLength;                                             // 0x0298   (0x0004)  
	bool                                               bLockMountPitch;                                            // 0x029C   (0x0001)  
	bool                                               bLockMountYaw;                                              // 0x029D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x029E   (0x0002)  MISSED
	class USceneComponent*                             TransformComponent;                                         // 0x02A0   (0x0008)  
	class USceneComponent*                             CraneYawControl;                                            // 0x02A8   (0x0008)  
	class USceneComponent*                             CranePitchControl;                                          // 0x02B0   (0x0008)  
	class USceneComponent*                             CraneCameraMount;                                           // 0x02B8   (0x0008)  
};

/// Class /Script/CinematicCamera.CameraRig_Rail
/// Size: 0x0020 (0x000290 - 0x0002B0)
class ACameraRig_Rail : public AActor
{ 
public:
	float                                              CurrentPositionOnRail;                                      // 0x0290   (0x0004)  
	bool                                               bLockOrientationToRail;                                     // 0x0294   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0295   (0x0003)  MISSED
	class USceneComponent*                             TransformComponent;                                         // 0x0298   (0x0008)  
	class USplineComponent*                            RailSplineComponent;                                        // 0x02A0   (0x0008)  
	class USceneComponent*                             RailCameraMount;                                            // 0x02A8   (0x0008)  


	/// Functions
	// Function /Script/CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	// class USplineComponent* GetRailSplineComponent();                                                                     // [0x66831a8] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/CinematicCamera.CameraLookatTrackingSettings
/// Size: 0x0060 (0x000000 - 0x000060)
struct FCameraLookatTrackingSettings
{ 
	bool                                               bEnableLookAtTracking : 1;                                  // 0x0000:0 (0x0001)  
	bool                                               bDrawDebugLookAtTrackingPosition : 1;                       // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LookAtTrackingInterpSpeed;                                  // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0008   (0x0018)  MISSED
	SDK_UNDEFINED(32,1755) /* TWeakObjectPtr<AActor*> */ __um(ActorToTrack);                                       // 0x0020   (0x0020)  
	FVector                                            RelativeOffset;                                             // 0x0040   (0x0018)  
	bool                                               bAllowRoll : 1;                                             // 0x0058:0 (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Class /Script/CinematicCamera.CineCameraActor
/// Size: 0x0070 (0x0009B0 - 0x000A20)
class ACineCameraActor : public ACameraActor
{ 
public:
	FCameraLookatTrackingSettings                      LookatTrackingSettings;                                     // 0x09B0   (0x0060)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0A10   (0x0010)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraActor.GetCineCameraComponent
	// class UCineCameraComponent* GetCineCameraComponent();                                                                 // [0x66824f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CinematicCamera.CameraFilmbackSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FCameraFilmbackSettings
{ 
	float                                              SensorWidth;                                                // 0x0000   (0x0004)  
	float                                              SensorHeight;                                               // 0x0004   (0x0004)  
	float                                              SensorAspectRatio;                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CinematicCamera.CameraLensSettings
/// Size: 0x001C (0x000000 - 0x00001C)
struct FCameraLensSettings
{ 
	float                                              MinFocalLength;                                             // 0x0000   (0x0004)  
	float                                              MaxFocalLength;                                             // 0x0004   (0x0004)  
	float                                              MinFStop;                                                   // 0x0008   (0x0004)  
	float                                              MaxFStop;                                                   // 0x000C   (0x0004)  
	float                                              MinimumFocusDistance;                                       // 0x0010   (0x0004)  
	float                                              SqueezeFactor;                                              // 0x0014   (0x0004)  
	int32_t                                            DiaphragmBladeCount;                                        // 0x0018   (0x0004)  
};

/// Struct /Script/CinematicCamera.CameraTrackingFocusSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCameraTrackingFocusSettings
{ 
	SDK_UNDEFINED(32,1756) /* TWeakObjectPtr<AActor*> */ __um(ActorToTrack);                                       // 0x0000   (0x0020)  
	FVector                                            RelativeOffset;                                             // 0x0020   (0x0018)  
	bool                                               bDrawDebugTrackingFocusPoint : 1;                           // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/CinematicCamera.CameraFocusSettings
/// Size: 0x0058 (0x000000 - 0x000058)
struct FCameraFocusSettings
{ 
	ECameraFocusMethod                                 FocusMethod;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ManualFocusDistance;                                        // 0x0004   (0x0004)  
	FCameraTrackingFocusSettings                       TrackingFocusSettings;                                      // 0x0008   (0x0040)  
	bool                                               bSmoothFocusChanges : 1;                                    // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              FocusSmoothingInterpSpeed;                                  // 0x004C   (0x0004)  
	float                                              FocusOffset;                                                // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.PlateCropSettings
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPlateCropSettings
{ 
	float                                              AspectRatio;                                                // 0x0000   (0x0004)  
};

/// Struct /Script/CinematicCamera.NamedFilmbackPreset
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNamedFilmbackPreset
{ 
	SDK_UNDEFINED(16,1757) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.NamedLensPreset
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNamedLensPreset
{ 
	SDK_UNDEFINED(16,1758) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	FCameraLensSettings                                LensSettings;                                               // 0x0010   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/CinematicCamera.CineCameraComponent
/// Size: 0x0110 (0x0009C0 - 0x000AD0)
#pragma pack(push, 0x1)
class alignas(0x10) UCineCameraComponent : public UCameraComponent
{ 
public:
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x09C0   (0x000C)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x09CC   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x09D8   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x09F4   (0x0004)  MISSED
	FCameraFocusSettings                               FocusSettings;                                              // 0x09F8   (0x0058)  
	FPlateCropSettings                                 CropSettings;                                               // 0x0A50   (0x0004)  
	float                                              CurrentFocalLength;                                         // 0x0A54   (0x0004)  
	float                                              CurrentAperture;                                            // 0x0A58   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x0A5C   (0x0004)  
	bool                                               bOverride_CustomNearClippingPlane : 1;                      // 0x0A60:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0A61   (0x0003)  MISSED
	float                                              CustomNearClippingPlane;                                    // 0x0A64   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0A68   (0x0008)  MISSED
	TArray<FNamedFilmbackPreset>                       FilmbackPresets;                                            // 0x0A70   (0x0010)  
	TArray<FNamedLensPreset>                           LensPresets;                                                // 0x0A80   (0x0010)  
	SDK_UNDEFINED(16,1759) /* FString */               __um(DefaultFilmbackPresetName);                            // 0x0A90   (0x0010)  
	SDK_UNDEFINED(16,1760) /* FString */               __um(DefaultFilmbackPreset);                                // 0x0AA0   (0x0010)  
	SDK_UNDEFINED(16,1761) /* FString */               __um(DefaultLensPresetName);                                // 0x0AB0   (0x0010)  
	float                                              DefaultLensFocalLength;                                     // 0x0AC0   (0x0004)  
	float                                              DefaultLensFStop;                                           // 0x0AC4   (0x0004)  


	/// Functions
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensSettings
	// void SetLensSettings(FCameraLensSettings& NewLensSettings);                                                           // [0x66841d0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensPresetByName
	// void SetLensPresetByName(FString InPresetName);                                                                       // [0x6683fb0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFocusSettings
	// void SetFocusSettings(FCameraFocusSettings& NewFocusSettings);                                                        // [0x6683f00] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	// void SetFilmbackPresetByName(FString InPresetName);                                                                   // [0x6683ce0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmback
	// void SetFilmback(FCameraFilmbackSettings& NewFilmback);                                                               // [0x6683c30] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCustomNearClippingPlane
	// void SetCustomNearClippingPlane(float NewCustomNearClippingPlane);                                                    // [0x66835b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	// void SetCurrentFocalLength(float InFocalLength);                                                                      // [0x6683528] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentAperture
	// void SetCurrentAperture(float NewCurrentAperture);                                                                    // [0x66834a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCropSettings
	// void SetCropSettings(FPlateCropSettings& NewCropSettings);                                                            // [0x6683408] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCropPresetByName
	// void SetCropPresetByName(FString InPresetName);                                                                       // [0x66831e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	// float GetVerticalFieldOfView();                                                                                       // [0x66831c0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	// TArray<FNamedLensPreset> GetLensPresetsCopy();                                                                        // [0x66830dc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetName
	// FString GetLensPresetName();                                                                                          // [0x6683060] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	// float GetHorizontalFieldOfView();                                                                                     // [0x6682e48] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	// TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();                                                                // [0x6682d7c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	// FString GetFilmbackPresetName();                                                                                      // [0x6682bd4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	// FString GetDefaultFilmbackPresetName();                                                                               // [0x66828b0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetCropPresetName
	// FString GetCropPresetName();                                                                                          // [0x668270c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};
#pragma pack(pop)

/// Struct /Script/CinematicCamera.NamedPlateCropPreset
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNamedPlateCropPreset
{ 
	SDK_UNDEFINED(16,1762) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	FPlateCropSettings                                 CropSettings;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/CinematicCamera.CineCameraSettings
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UCineCameraSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(16,1763) /* FString */               __um(DefaultLensPresetName);                                // 0x0030   (0x0010)  
	float                                              DefaultLensFocalLength;                                     // 0x0040   (0x0004)  
	float                                              DefaultLensFStop;                                           // 0x0044   (0x0004)  
	TArray<FNamedLensPreset>                           LensPresets;                                                // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1764) /* FString */               __um(DefaultFilmbackPreset);                                // 0x0058   (0x0010)  
	TArray<FNamedFilmbackPreset>                       FilmbackPresets;                                            // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1765) /* FString */               __um(DefaultCropPresetName);                                // 0x0078   (0x0010)  
	TArray<FNamedPlateCropPreset>                      CropPresets;                                                // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0098   (0x0010)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraSettings.SetLensPresets
	// void SetLensPresets(TArray<FNamedLensPreset>& InLensPresets);                                                         // [0x6684110] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetFilmbackPresets
	// void SetFilmbackPresets(TArray<FNamedFilmbackPreset>& InFilmbackPresets);                                             // [0x6683e40] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensPresetName
	// void SetDefaultLensPresetName(FString InDefaultLensPresetName);                                                       // [0x6683a98] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensFStop
	// void SetDefaultLensFStop(float InDefaultLensFStop);                                                                   // [0x6683960] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength
	// void SetDefaultLensFocalLength(float InDefaultLensFocalLength);                                                       // [0x66839fc] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset
	// void SetDefaultFilmbackPreset(FString InDefaultFilmbackPreset);                                                       // [0x66837c8] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultCropPresetName
	// void SetDefaultCropPresetName(FString InDefaultCropPresetName);                                                       // [0x6683630] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetCropPresets
	// void SetCropPresets(TArray<FNamedPlateCropPreset>& InCropPresets);                                                    // [0x6683350] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetLensPresetNames
	// TArray<FString> GetLensPresetNames();                                                                                 // [0x66830a0] Final|Native|Private|Const 
	// Function /Script/CinematicCamera.CineCameraSettings.GetLensPresetByName
	// bool GetLensPresetByName(FString PresetName, FCameraLensSettings& LensSettings);                                      // [0x6682e70] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetFilmbackPresetNames
	// TArray<FString> GetFilmbackPresetNames();                                                                             // [0x6682d40] Final|Native|Private|Const 
	// Function /Script/CinematicCamera.CineCameraSettings.GetFilmbackPresetByName
	// bool GetFilmbackPresetByName(FString PresetName, FCameraFilmbackSettings& FilmbackSettings);                          // [0x66829ec] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetCropPresetNames
	// TArray<FString> GetCropPresetNames();                                                                                 // [0x6682874] Final|Native|Private|Const 
	// Function /Script/CinematicCamera.CineCameraSettings.GetCropPresetByName
	// bool GetCropPresetByName(FString PresetName, FPlateCropSettings& CropSettings);                                       // [0x6682540] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetCineCameraSettings
	// class UCineCameraSettings* GetCineCameraSettings();                                                                   // [0x6682510] Final|Native|Static|Private|BlueprintCallable 
};

