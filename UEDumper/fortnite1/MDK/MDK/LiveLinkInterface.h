
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/LiveLinkInterface.LiveLinkController
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkController : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkFrameInterpolationProcessor
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkFrameInterpolationProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkFramePreProcessor
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkFramePreProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkRole : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkBasicRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkBasicRole : public ULiveLinkRole
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkInputDeviceRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkInputDeviceRole : public ULiveLinkBasicRole
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkSourceSettings
/// Size: 0x0080 (0x000028 - 0x0000A8)
class ULiveLinkSourceSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(ELiveLinkSourceMode)                       Mode                                                        OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FLiveLinkSourceBufferManagementSettings)   BufferSettings                                              OFFSET(getStruct<T>, {0x30, 96, 0, 0})
	SMember(FString)                                   ConnectionString                                            OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	CMember(class UClass*)                             Factory                                                     OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/LiveLinkInterface.LiveLinkCurveRemapSettings
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FLiveLinkCurveConversionSettings)          CurveConversionSettings                                     OFFSET(getStruct<T>, {0xA8, 80, 0, 0})
};

/// Class /Script/LiveLinkInterface.LiveLinkFrameTranslator
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkFrameTranslator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkSourceFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkSourceFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkSubjectSettings
/// Size: 0x0040 (0x000028 - 0x000068)
class ULiveLinkSubjectSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<class ULiveLinkFramePreProcessor*>) PreProcessors                                               OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(class ULiveLinkFrameInterpolationProcessor*) InterpolationProcessor                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<class ULiveLinkFrameTranslator*>)   Translators                                                 OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(class UClass*)                             Role                                                        OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FFrameRate)                                FrameRate                                                   OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	DMember(bool)                                      bRebroadcastSubject                                         OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Class /Script/LiveLinkInterface.LiveLinkVirtualSubject
/// Size: 0x0130 (0x000028 - 0x000158)
class ULiveLinkVirtualSubject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(class UClass*)                             Role                                                        OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FLiveLinkSubjectName>)              Subjects                                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<class ULiveLinkFrameTranslator*>)   FrameTranslators                                            OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bRebroadcastSubject                                         OFFSET(get<bool>, {0x58, 1, 0, 0})
};

/// Class /Script/LiveLinkInterface.LiveLinkAnimationRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkAnimationRole : public ULiveLinkBasicRole
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkTransformRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkTransformRole : public ULiveLinkBasicRole
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkCameraRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkCameraRole : public ULiveLinkTransformRole
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkLightRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkLightRole : public ULiveLinkTransformRole
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourceHandle
/// Size: 0x0018 (0x000000 - 0x000018)
class FLiveLinkSourceHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/LiveLinkInterface.LiveLinkBaseStaticData
/// Size: 0x0010 (0x000000 - 0x000010)
class FLiveLinkBaseStaticData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FName>)                             PropertyNames                                               OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkSkeletonStaticData
/// Size: 0x0020 (0x000010 - 0x000030)
class FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FName>)                             BoneNames                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<int32_t>)                           BoneParents                                                 OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkBaseFrameData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FLiveLinkBaseFrameData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FLiveLinkWorldTime)                        WorldTime                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FLiveLinkMetaData)                         MetaData                                                    OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	CMember(TArray<float>)                             PropertyValues                                              OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkMetaData
/// Size: 0x0060 (0x000000 - 0x000060)
class FLiveLinkMetaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TMap<FName, FString>)                      StringMetadata                                              OFFSET(get<T>, {0x0, 80, 0, 0})
	SMember(FQualifiedFrameTime)                       SceneTime                                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkWorldTime
/// Size: 0x0010 (0x000000 - 0x000010)
class FLiveLinkWorldTime : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    Time                                                        OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    Offset                                                      OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkAnimationFrameData
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkBaseBlueprintData
/// Size: 0x0008 (0x000000 - 0x000008)
class FLiveLinkBaseBlueprintData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/LiveLinkInterface.LiveLinkBasicBlueprintData
/// Size: 0x00B0 (0x000008 - 0x0000B8)
class FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FLiveLinkBaseStaticData)                   StaticData                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FLiveLinkBaseFrameData)                    FrameData                                                   OFFSET(getStruct<T>, {0x18, 160, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransformStaticData
/// Size: 0x0008 (0x000010 - 0x000018)
class FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bIsLocationSupported                                        OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bIsRotationSupported                                        OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bIsScaleSupported                                           OFFSET(get<bool>, {0x12, 1, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkCameraStaticData
/// Size: 0x0010 (0x000018 - 0x000028)
class FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bIsFieldOfViewSupported                                     OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bIsAspectRatioSupported                                     OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      bIsFocalLengthSupported                                     OFFSET(get<bool>, {0x1A, 1, 0, 0})
	DMember(bool)                                      bIsProjectionModeSupported                                  OFFSET(get<bool>, {0x1B, 1, 0, 0})
	DMember(float)                                     FilmBackWidth                                               OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     FilmBackHeight                                              OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bIsApertureSupported                                        OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(bool)                                      bIsFocusDistanceSupported                                   OFFSET(get<bool>, {0x25, 1, 0, 0})
	DMember(bool)                                      bIsDepthOfFieldSupported                                    OFFSET(get<bool>, {0x26, 1, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransformFrameData
/// Size: 0x0060 (0x0000A0 - 0x000100)
class FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0xA0, 96, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkCameraFrameData
/// Size: 0x0020 (0x000100 - 0x000120)
class FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	DMember(float)                                     FieldOfView                                                 OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     AspectRatio                                                 OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     FocalLength                                                 OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     Aperture                                                    OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(float)                                     FocusDistance                                               OFFSET(get<float>, {0x110, 4, 0, 0})
	CMember(ELiveLinkCameraProjectionMode)             ProjectionMode                                              OFFSET(get<T>, {0x114, 1, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkCameraBlueprintData
/// Size: 0x0148 (0x000008 - 0x000150)
class FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FLiveLinkCameraStaticData)                 StaticData                                                  OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	SMember(FLiveLinkCameraFrameData)                  FrameData                                                   OFFSET(getStruct<T>, {0x30, 288, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkGamepadInputDeviceStaticData
/// Size: 0x0000 (0x000010 - 0x000010)
class FLiveLinkGamepadInputDeviceStaticData : public FLiveLinkBaseStaticData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/LiveLinkInterface.LiveLinkGamepadInputDeviceFrameData
/// Size: 0x0080 (0x0000A0 - 0x000120)
class FLiveLinkGamepadInputDeviceFrameData : public FLiveLinkBaseFrameData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	DMember(float)                                     LeftAnalogX                                                 OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     LeftAnalogY                                                 OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     RightAnalogX                                                OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     RightAnalogY                                                OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     LeftTriggerAnalog                                           OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     RightTriggerAnalog                                          OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     LeftThumb                                                   OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     RightThumb                                                  OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     SpecialLeft                                                 OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     SpecialLeft_X                                               OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     SpecialLeft_Y                                               OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     SpecialRight                                                OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     FaceButtonBottom                                            OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     FaceButtonRight                                             OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     FaceButtonLeft                                              OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     FaceButtonTop                                               OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     LeftShoulder                                                OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     RightShoulder                                               OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(float)                                     LeftTriggerThreshold                                        OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     RightTriggerThreshold                                       OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     DPadUp                                                      OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     DPadDown                                                    OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     DPadRight                                                   OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     DPadLeft                                                    OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     LeftStickUp                                                 OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     LeftStickDown                                               OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     LeftStickRight                                              OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     LeftStickLeft                                               OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(float)                                     RightStickUp                                                OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     RightStickDown                                              OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     RightStickRight                                             OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     RightStickLeft                                              OFFSET(get<float>, {0x11C, 4, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkGamepadInputDeviceBlueprintData
/// Size: 0x0130 (0x000008 - 0x000138)
class FLiveLinkGamepadInputDeviceBlueprintData : public FLiveLinkBaseBlueprintData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FLiveLinkGamepadInputDeviceStaticData)     StaticData                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FLiveLinkGamepadInputDeviceFrameData)      FrameData                                                   OFFSET(getStruct<T>, {0x18, 288, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkLightStaticData
/// Size: 0x0010 (0x000018 - 0x000028)
class FLiveLinkLightStaticData : public FLiveLinkTransformStaticData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bIsTemperatureSupported                                     OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bIsIntensitySupported                                       OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      bIsLightColorSupported                                      OFFSET(get<bool>, {0x1A, 1, 0, 0})
	DMember(bool)                                      bIsInnerConeAngleSupported                                  OFFSET(get<bool>, {0x1B, 1, 0, 0})
	DMember(bool)                                      bIsOuterConeAngleSupported                                  OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(bool)                                      bIsAttenuationRadiusSupported                               OFFSET(get<bool>, {0x1D, 1, 0, 0})
	DMember(bool)                                      bIsSourceLenghtSupported                                    OFFSET(get<bool>, {0x1E, 1, 0, 0})
	DMember(bool)                                      bIsSourceRadiusSupported                                    OFFSET(get<bool>, {0x1F, 1, 0, 0})
	DMember(bool)                                      bIsSoftSourceRadiusSupported                                OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkLightFrameData
/// Size: 0x0030 (0x000100 - 0x000130)
class FLiveLinkLightFrameData : public FLiveLinkTransformFrameData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(float)                                     Temperature                                                 OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     Intensity                                                   OFFSET(get<float>, {0x104, 4, 0, 0})
	SMember(FColor)                                    LightColor                                                  OFFSET(getStruct<T>, {0x108, 4, 0, 0})
	DMember(float)                                     InnerConeAngle                                              OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(float)                                     OuterConeAngle                                              OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     AttenuationRadius                                           OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     SourceRadius                                                OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     SoftSourceRadius                                            OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     SourceLength                                                OFFSET(get<float>, {0x120, 4, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkLightBlueprintData
/// Size: 0x0158 (0x000008 - 0x000160)
class FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FLiveLinkLightStaticData)                  StaticData                                                  OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	SMember(FLiveLinkLightFrameData)                   FrameData                                                   OFFSET(getStruct<T>, {0x30, 304, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourcePreset
/// Size: 0x0028 (0x000000 - 0x000028)
class FLiveLinkSourcePreset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(class ULiveLinkSourceSettings*)            Settings                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FText)                                     SourceType                                                  OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectPreset
/// Size: 0x0038 (0x000000 - 0x000038)
class FLiveLinkSubjectPreset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FLiveLinkSubjectKey)                       Key                                                         OFFSET(getStruct<T>, {0x0, 20, 0, 0})
	CMember(class UClass*)                             Role                                                        OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class ULiveLinkSubjectSettings*)           Settings                                                    OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class ULiveLinkVirtualSubject*)            VirtualSubject                                              OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectKey
/// Size: 0x0014 (0x000000 - 0x000014)
class FLiveLinkSubjectKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGuid)                                     Source                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FLiveLinkSubjectName)                      SubjectName                                                 OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectName
/// Size: 0x0004 (0x000000 - 0x000004)
class FLiveLinkSubjectName : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkRefSkeleton
/// Size: 0x0020 (0x000000 - 0x000020)
class FLiveLinkRefSkeleton : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FName>)                             BoneNames                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           BoneParents                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectRepresentation
/// Size: 0x0010 (0x000000 - 0x000010)
class FLiveLinkSubjectRepresentation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FLiveLinkSubjectName)                      Subject                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UClass*)                             Role                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransformBlueprintData
/// Size: 0x0118 (0x000008 - 0x000120)
class FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FLiveLinkTransformStaticData)              StaticData                                                  OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FLiveLinkTransformFrameData)               FrameData                                                   OFFSET(getStruct<T>, {0x20, 256, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkCurveConversionSettings
/// Size: 0x0050 (0x000000 - 0x000050)
class FLiveLinkCurveConversionSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, FSoftObjectPath>)            CurveConversionAssetMap                                     OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourceBufferManagementSettings
/// Size: 0x0060 (0x000000 - 0x000060)
class FLiveLinkSourceBufferManagementSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bValidEngineTimeEnabled                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     ValidEngineTime                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     EngineTimeOffset                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(double)                                    EngineTimeClockOffset                                       OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    SmoothEngineTimeOffset                                      OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(bool)                                      bGenerateSubFrame                                           OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FFrameRate)                                DetectedFrameRate                                           OFFSET(getStruct<T>, {0x24, 8, 0, 0})
	DMember(bool)                                      bUseTimecodeSmoothLatest                                    OFFSET(get<bool>, {0x2C, 1, 0, 0})
	SMember(FFrameRate)                                SourceTimecodeFrameRate                                     OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bValidTimecodeFrameEnabled                                  OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   ValidTimecodeFrame                                          OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(float)                                     TimecodeFrameOffset                                         OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(double)                                    TimecodeClockOffset                                         OFFSET(get<double>, {0x48, 8, 0, 0})
	DMember(int32_t)                                   LatestOffset                                                OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   MaxNumberOfFrameToBuffered                                  OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(bool)                                      bKeepAtLeastOneFrame                                        OFFSET(get<bool>, {0x58, 1, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourceDebugInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FLiveLinkSourceDebugInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FLiveLinkSubjectName)                      SubjectName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SnapshotIndex                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   NumberOfBufferAtSnapshot                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkTimeSynchronizationSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FLiveLinkTimeSynchronizationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FFrameRate)                                FrameRate                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FFrameNumber)                              FrameOffset                                                 OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkInterpolationSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FLiveLinkInterpolationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bUseInterpolation                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     InterpolationOffset                                         OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkTime
/// Size: 0x0018 (0x000000 - 0x000018)
class FLiveLinkTime : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    WorldTime                                                   OFFSET(get<double>, {0x0, 8, 0, 0})
	SMember(FQualifiedFrameTime)                       SceneTime                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkFrameRate
/// Size: 0x0000 (0x000008 - 0x000008)
class FLiveLinkFrameRate : public FFrameRate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
/// Size: 0x0010 (0x000000 - 0x000010)
class FLiveLinkTimeCode_Base_DEPRECATED : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Seconds                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Frames                                                      OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FLiveLinkFrameRate)                        FrameRate                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkTimeCode
/// Size: 0x0000 (0x000010 - 0x000010)
class FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/LiveLinkInterface.LiveLinkCurveElement
/// Size: 0x0008 (0x000000 - 0x000008)
class FLiveLinkCurveElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     CurveName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     CurveValue                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkFrameData
/// Size: 0x0090 (0x000000 - 0x000090)
class FLiveLinkFrameData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FLiveLinkCurveElement>)             CurveElements                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FLiveLinkWorldTime)                        WorldTime                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FLiveLinkMetaData)                         MetaData                                                    OFFSET(getStruct<T>, {0x30, 96, 0, 0})
};

/// Struct /Script/LiveLinkInterface.SubjectMetadata
/// Size: 0x0070 (0x000000 - 0x000070)
class FSubjectMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TMap<FName, FString>)                      StringMetadata                                              OFFSET(get<T>, {0x0, 80, 0, 0})
	SMember(FTimecode)                                 SceneTimecode                                               OFFSET(getStruct<T>, {0x50, 20, 0, 0})
	SMember(FFrameRate)                                SceneFramerate                                              OFFSET(getStruct<T>, {0x64, 8, 0, 0})
};

/// Struct /Script/LiveLinkInterface.CachedSubjectFrame
/// Size: 0x0160 (0x000000 - 0x000160)
class FCachedSubjectFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransform
/// Size: 0x0020 (0x000000 - 0x000020)
class FLiveLinkTransform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/LiveLinkInterface.SubjectFrameHandle
/// Size: 0x0010 (0x000008 - 0x000018)
class FSubjectFrameHandle : public FLiveLinkBaseBlueprintData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Enum /Script/LiveLinkInterface.ELiveLinkCameraProjectionMode
/// Size: 0x03
enum class ELiveLinkCameraProjectionMode : uint8_t
{
	ELiveLinkCameraProjectionMode__Perspective                                       = 0,
	ELiveLinkCameraProjectionMode__Orthographic                                      = 1,
	ELiveLinkCameraProjectionMode__ELiveLinkCameraProjectionMode_MAX                 = 2
};

/// Enum /Script/LiveLinkInterface.ELiveLinkSourceMode
/// Size: 0x04
enum class ELiveLinkSourceMode : uint8_t
{
	ELiveLinkSourceMode__Latest                                                      = 0,
	ELiveLinkSourceMode__EngineTime                                                  = 1,
	ELiveLinkSourceMode__Timecode                                                    = 2,
	ELiveLinkSourceMode__ELiveLinkSourceMode_MAX                                     = 3
};

