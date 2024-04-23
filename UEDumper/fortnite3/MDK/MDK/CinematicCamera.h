
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/CinematicCamera.CameraRig_Crane
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ACameraRig_Crane : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	DMember(float)                                     CranePitch                                                  OFFSET(get<float>, {0x290, 4, 0, 0})
	DMember(float)                                     CraneYaw                                                    OFFSET(get<float>, {0x294, 4, 0, 0})
	DMember(float)                                     CraneArmLength                                              OFFSET(get<float>, {0x298, 4, 0, 0})
	DMember(bool)                                      bLockMountPitch                                             OFFSET(get<bool>, {0x29C, 1, 0, 0})
	DMember(bool)                                      bLockMountYaw                                               OFFSET(get<bool>, {0x29D, 1, 0, 0})
	CMember(class USceneComponent*)                    TransformComponent                                          OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class USceneComponent*)                    CraneYawControl                                             OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class USceneComponent*)                    CranePitchControl                                           OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class USceneComponent*)                    CraneCameraMount                                            OFFSET(get<T>, {0x2B8, 8, 0, 0})
};

/// Class /Script/CinematicCamera.CameraRig_Rail
/// Size: 0x0020 (0x000290 - 0x0002B0)
class ACameraRig_Rail : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	DMember(float)                                     CurrentPositionOnRail                                       OFFSET(get<float>, {0x290, 4, 0, 0})
	DMember(bool)                                      bLockOrientationToRail                                      OFFSET(get<bool>, {0x294, 1, 0, 0})
	CMember(class USceneComponent*)                    TransformComponent                                          OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class USplineComponent*)                   RailSplineComponent                                         OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class USceneComponent*)                    RailCameraMount                                             OFFSET(get<T>, {0x2A8, 8, 0, 0})


	/// Functions
	// Function /Script/CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	// class USplineComponent* GetRailSplineComponent();                                                                        // [0x67681c8] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/CinematicCamera.CineCameraActor
/// Size: 0x0070 (0x0009B0 - 0x000A20)
class ACineCameraActor : public ACameraActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2592;

public:
	SMember(FCameraLookatTrackingSettings)             LookatTrackingSettings                                      OFFSET(getStruct<T>, {0x9B0, 96, 0, 0})


	/// Functions
	// Function /Script/CinematicCamera.CineCameraActor.GetCineCameraComponent
	// class UCineCameraComponent* GetCineCameraComponent();                                                                    // [0x6764878] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CinematicCamera.CineCameraComponent
/// Size: 0x0110 (0x0009D0 - 0x000AE0)
class UCineCameraComponent : public UCameraComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2784;

public:
	SMember(FCameraFilmbackSettings)                   FilmbackSettings                                            OFFSET(getStruct<T>, {0x9D0, 12, 0, 0})
	SMember(FCameraFilmbackSettings)                   Filmback                                                    OFFSET(getStruct<T>, {0x9DC, 12, 0, 0})
	SMember(FCameraLensSettings)                       LensSettings                                                OFFSET(getStruct<T>, {0x9E8, 28, 0, 0})
	SMember(FCameraFocusSettings)                      FocusSettings                                               OFFSET(getStruct<T>, {0xA08, 88, 0, 0})
	SMember(FPlateCropSettings)                        CropSettings                                                OFFSET(getStruct<T>, {0xA60, 4, 0, 0})
	DMember(float)                                     CurrentFocalLength                                          OFFSET(get<float>, {0xA64, 4, 0, 0})
	DMember(float)                                     CurrentAperture                                             OFFSET(get<float>, {0xA68, 4, 0, 0})
	DMember(float)                                     CurrentFocusDistance                                        OFFSET(get<float>, {0xA6C, 4, 0, 0})
	DMember(bool)                                      bOverride_CustomNearClippingPlane                           OFFSET(get<bool>, {0xA70, 1, 1, 0})
	DMember(float)                                     CustomNearClippingPlane                                     OFFSET(get<float>, {0xA74, 4, 0, 0})
	CMember(TArray<FNamedFilmbackPreset>)              FilmbackPresets                                             OFFSET(get<T>, {0xA80, 16, 0, 0})
	CMember(TArray<FNamedLensPreset>)                  LensPresets                                                 OFFSET(get<T>, {0xA90, 16, 0, 0})
	SMember(FString)                                   DefaultFilmbackPresetName                                   OFFSET(getStruct<T>, {0xAA0, 16, 0, 0})
	SMember(FString)                                   DefaultFilmbackPreset                                       OFFSET(getStruct<T>, {0xAB0, 16, 0, 0})
	SMember(FString)                                   DefaultLensPresetName                                       OFFSET(getStruct<T>, {0xAC0, 16, 0, 0})
	DMember(float)                                     DefaultLensFocalLength                                      OFFSET(get<float>, {0xAD0, 4, 0, 0})
	DMember(float)                                     DefaultLensFStop                                            OFFSET(get<float>, {0xAD4, 4, 0, 0})


	/// Functions
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensSettings
	// void SetLensSettings(FCameraLensSettings& NewLensSettings);                                                              // [0x676bf20] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensPresetByName
	// void SetLensPresetByName(FString InPresetName);                                                                          // [0x676b140] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFocusSettings
	// void SetFocusSettings(FCameraFocusSettings& NewFocusSettings);                                                           // [0x676b090] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	// void SetFilmbackPresetByName(FString InPresetName);                                                                      // [0x676a2b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmback
	// void SetFilmback(FCameraFilmbackSettings& NewFilmback);                                                                  // [0x676a200] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCustomNearClippingPlane
	// void SetCustomNearClippingPlane(float NewCustomNearClippingPlane);                                                       // [0x6768b54] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	// void SetCurrentFocalLength(float InFocalLength);                                                                         // [0x6768acc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentAperture
	// void SetCurrentAperture(float NewCurrentAperture);                                                                       // [0x6768a44] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCropSettings
	// void SetCropSettings(FPlateCropSettings& NewCropSettings);                                                               // [0x67689ac] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCropPresetByName
	// void SetCropPresetByName(FString InPresetName);                                                                          // [0x6768208] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	// float GetVerticalFieldOfView();                                                                                          // [0x67681e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	// TArray<FNamedLensPreset> GetLensPresetsCopy();                                                                           // [0x6767adc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetName
	// FString GetLensPresetName();                                                                                             // [0x6767a60] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	// float GetHorizontalFieldOfView();                                                                                        // [0x67672f8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	// TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();                                                                   // [0x6766c0c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	// FString GetFilmbackPresetName();                                                                                         // [0x67664e8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	// FString GetDefaultFilmbackPresetName();                                                                                  // [0x67656fc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetCropPresetName
	// FString GetCropPresetName();                                                                                             // [0x6764fdc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CinematicCamera.CineCameraSettings
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UCineCameraSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FString)                                   DefaultLensPresetName                                       OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(float)                                     DefaultLensFocalLength                                      OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     DefaultLensFStop                                            OFFSET(get<float>, {0x44, 4, 0, 0})
	CMember(TArray<FNamedLensPreset>)                  LensPresets                                                 OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   DefaultFilmbackPreset                                       OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(TArray<FNamedFilmbackPreset>)              FilmbackPresets                                             OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   DefaultCropPresetName                                       OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(TArray<FNamedPlateCropPreset>)             CropPresets                                                 OFFSET(get<T>, {0x88, 16, 0, 0})


	/// Functions
	// Function /Script/CinematicCamera.CineCameraSettings.SetLensPresets
	// void SetLensPresets(TArray<FNamedLensPreset>& InLensPresets);                                                            // [0x676b824] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetFilmbackPresets
	// void SetFilmbackPresets(TArray<FNamedFilmbackPreset>& InFilmbackPresets);                                                // [0x676a994] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensPresetName
	// void SetDefaultLensPresetName(FString InDefaultLensPresetName);                                                          // [0x6769b04] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensFStop
	// void SetDefaultLensFStop(float InDefaultLensFStop);                                                                      // [0x67699cc] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength
	// void SetDefaultLensFocalLength(float InDefaultLensFocalLength);                                                          // [0x6769a68] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset
	// void SetDefaultFilmbackPreset(FString InDefaultFilmbackPreset);                                                          // [0x67692d0] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultCropPresetName
	// void SetDefaultCropPresetName(FString InDefaultCropPresetName);                                                          // [0x6768bd4] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetCropPresets
	// void SetCropPresets(TArray<FNamedPlateCropPreset>& InCropPresets);                                                       // [0x67688f4] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetLensPresetNames
	// TArray<FString> GetLensPresetNames();                                                                                    // [0x6767aa0] Final|Native|Private|Const 
	// Function /Script/CinematicCamera.CineCameraSettings.GetLensPresetByName
	// bool GetLensPresetByName(FString PresetName, FCameraLensSettings& LensSettings);                                         // [0x6767320] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetFilmbackPresetNames
	// TArray<FString> GetFilmbackPresetNames();                                                                                // [0x6766bd0] Final|Native|Private|Const 
	// Function /Script/CinematicCamera.CineCameraSettings.GetFilmbackPresetByName
	// bool GetFilmbackPresetByName(FString PresetName, FCameraFilmbackSettings& FilmbackSettings);                             // [0x6765db4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetCropPresetNames
	// TArray<FString> GetCropPresetNames();                                                                                    // [0x67656c0] Final|Native|Private|Const 
	// Function /Script/CinematicCamera.CineCameraSettings.GetCropPresetByName
	// bool GetCropPresetByName(FString PresetName, FPlateCropSettings& CropSettings);                                          // [0x67648c0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetCineCameraSettings
	// class UCineCameraSettings* GetCineCameraSettings();                                                                      // [0x6764890] Final|Native|Static|Private|BlueprintCallable 
};

/// Struct /Script/CinematicCamera.CameraFocusSettings
/// Size: 0x0058 (0x000000 - 0x000058)
class FCameraFocusSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(ECameraFocusMethod)                        FocusMethod                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     ManualFocusDistance                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FCameraTrackingFocusSettings)              TrackingFocusSettings                                       OFFSET(getStruct<T>, {0x8, 64, 0, 0})
	DMember(bool)                                      bSmoothFocusChanges                                         OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(float)                                     FocusSmoothingInterpSpeed                                   OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     FocusOffset                                                 OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Struct /Script/CinematicCamera.CameraTrackingFocusSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FCameraTrackingFocusSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<AActor*>)                   ActorToTrack                                                OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FVector)                                   RelativeOffset                                              OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      bDrawDebugTrackingFocusPoint                                OFFSET(get<bool>, {0x38, 1, 1, 0})
};

/// Struct /Script/CinematicCamera.CameraLensSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FCameraLensSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     MinFocalLength                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxFocalLength                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinFStop                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxFStop                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MinimumFocusDistance                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SqueezeFactor                                               OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   DiaphragmBladeCount                                         OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/CinematicCamera.CameraFilmbackSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FCameraFilmbackSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     SensorWidth                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     SensorHeight                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SensorAspectRatio                                           OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/CinematicCamera.CameraLookatTrackingSettings
/// Size: 0x0060 (0x000000 - 0x000060)
class FCameraLookatTrackingSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bEnableLookAtTracking                                       OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bDrawDebugLookAtTrackingPosition                            OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(float)                                     LookAtTrackingInterpSpeed                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   ActorToTrack                                                OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FVector)                                   RelativeOffset                                              OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	DMember(bool)                                      bAllowRoll                                                  OFFSET(get<bool>, {0x58, 1, 1, 0})
};

/// Struct /Script/CinematicCamera.NamedFilmbackPreset
/// Size: 0x0020 (0x000000 - 0x000020)
class FNamedFilmbackPreset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FCameraFilmbackSettings)                   FilmbackSettings                                            OFFSET(getStruct<T>, {0x10, 12, 0, 0})
};

/// Struct /Script/CinematicCamera.NamedLensPreset
/// Size: 0x0030 (0x000000 - 0x000030)
class FNamedLensPreset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FCameraLensSettings)                       LensSettings                                                OFFSET(getStruct<T>, {0x10, 28, 0, 0})
};

/// Struct /Script/CinematicCamera.PlateCropSettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FPlateCropSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     AspectRatio                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/CinematicCamera.NamedPlateCropPreset
/// Size: 0x0018 (0x000000 - 0x000018)
class FNamedPlateCropPreset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FPlateCropSettings)                        CropSettings                                                OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

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

