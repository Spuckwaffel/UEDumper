
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: Constraints
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

/// Class /Script/MovieSceneTracks.MovieSceneTransformOrigin
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneTransformOrigin : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
	// FTransform BP_GetTransformOrigin();                                                                                      // [0x1340978] RequiredAPI|Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneConsoleVariableTrackInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneConsoleVariableTrackInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneDecomposerTestObject
/// Size: 0x0008 (0x000028 - 0x000030)
class UMovieSceneDecomposerTestObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     FloatProperty                                               OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScenePartialEvaluationTestObject
/// Size: 0x0020 (0x000028 - 0x000048)
class UMovieScenePartialEvaluationTestObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     FloatProperty                                               OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FVector)                                   VectorProperty                                              OFFSET(getStruct<T>, {0x30, 24, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneReplaceableActorBinding
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneReplaceableActorBinding : public UMovieSceneReplaceableBindingBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneSpawnableActorBindingBase
/// Size: 0x0008 (0x000030 - 0x000038)
class UMovieSceneSpawnableActorBindingBase : public UMovieSceneSpawnableBindingBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bNetAddressableName                                         OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FName)                                     LevelName                                                   OFFSET(getStruct<T>, {0x34, 4, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneSpawnableActorBinding
/// Size: 0x0008 (0x000038 - 0x000040)
class UMovieSceneSpawnableActorBinding : public UMovieSceneSpawnableActorBindingBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class AActor*)                             ActorTemplate                                               OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneTestSequence
/// Size: 0x0028 (0x000068 - 0x000090)
class UMovieSceneTestSequence : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UMovieScene*)                        MovieScene                                                  OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TArray<class UObject*>)                    BoundObjects                                                OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FGuid>)                             BindingGuids                                                OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneDoublePerlinNoiseChannelContainer
/// Size: 0x0068 (0x000058 - 0x0000C0)
class UMovieSceneDoublePerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FMovieSceneDoublePerlinNoiseChannel)       PerlinNoiseChannel                                          OFFSET(getStruct<T>, {0x58, 104, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatPerlinNoiseChannelContainer
/// Size: 0x0068 (0x000058 - 0x0000C0)
class UMovieSceneFloatPerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FMovieSceneFloatPerlinNoiseChannel)        PerlinNoiseChannel                                          OFFSET(getStruct<T>, {0x58, 104, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
/// Size: 0x01B0 (0x000040 - 0x0001F0)
class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Script/MovieSceneTracks.MovieScene3DConstraintSection
/// Size: 0x0028 (0x0000F0 - 0x000118)
class UMovieScene3DConstraintSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FGuid)                                     ConstraintID                                                OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FMovieSceneObjectBindingID)                ConstraintBindingID                                         OFFSET(getStruct<T>, {0x100, 24, 0, 0})


	/// Functions
	// Function /Script/MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
	// void SetConstraintBindingID(FMovieSceneObjectBindingID& InConstraintBindingID);                                          // [0x664fc50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
	// FMovieSceneObjectBindingID GetConstraintBindingID();                                                                     // [0x664fa78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieScene3DAttachSection
/// Size: 0x0018 (0x000118 - 0x000130)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FName)                                     AttachSocketName                                            OFFSET(getStruct<T>, {0x120, 4, 0, 0})
	SMember(FName)                                     AttachComponentName                                         OFFSET(getStruct<T>, {0x124, 4, 0, 0})
	CMember(EAttachmentRule)                           AttachmentLocationRule                                      OFFSET(get<T>, {0x128, 1, 0, 0})
	CMember(EAttachmentRule)                           AttachmentRotationRule                                      OFFSET(get<T>, {0x129, 1, 0, 0})
	CMember(EAttachmentRule)                           AttachmentScaleRule                                         OFFSET(get<T>, {0x12A, 1, 0, 0})
	CMember(EDetachmentRule)                           DetachmentLocationRule                                      OFFSET(get<T>, {0x12B, 1, 0, 0})
	CMember(EDetachmentRule)                           DetachmentRotationRule                                      OFFSET(get<T>, {0x12C, 1, 0, 0})
	CMember(EDetachmentRule)                           DetachmentScaleRule                                         OFFSET(get<T>, {0x12D, 1, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScene3DPathSection
/// Size: 0x0118 (0x000118 - 0x000230)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FMovieSceneFloatChannel)                   TimingCurve                                                 OFFSET(getStruct<T>, {0x118, 272, 0, 0})
	CMember(MovieScene3DPathSection_Axis)              FrontAxisEnum                                               OFFSET(get<T>, {0x228, 1, 0, 0})
	CMember(MovieScene3DPathSection_Axis)              UpAxisEnum                                                  OFFSET(get<T>, {0x229, 1, 0, 0})
	DMember(bool)                                      bFollow                                                     OFFSET(get<bool>, {0x22C, 1, 1, 0})
	DMember(bool)                                      bReverse                                                    OFFSET(get<bool>, {0x22C, 1, 1, 1})
	DMember(bool)                                      bForceUpright                                               OFFSET(get<bool>, {0x22C, 1, 1, 2})
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformSectionConstraints
/// Size: 0x0010 (0x000028 - 0x000038)
class UMovieScene3DTransformSectionConstraints : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FConstraintAndActiveChannel>)       ConstraintsChannels                                         OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformSection
/// Size: 0x0B48 (0x0000F0 - 0x000C38)
class UMovieScene3DTransformSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3128;

public:
	SMember(FMovieSceneTransformMask)                  TransformMask                                               OFFSET(getStruct<T>, {0x130, 4, 0, 0})
	SMember(FMovieSceneDoubleChannel)                  Translation                                                 OFFSET(getStruct<T>, {0x138, 840, 0, 0})
	SMember(FMovieSceneDoubleChannel)                  Rotation                                                    OFFSET(getStruct<T>, {0x480, 840, 0, 0})
	SMember(FMovieSceneDoubleChannel)                  Scale                                                       OFFSET(getStruct<T>, {0x7C8, 840, 0, 0})
	SMember(FMovieSceneFloatChannel)                   ManualWeight                                                OFFSET(getStruct<T>, {0xB10, 272, 0, 0})
	CMember(class UMovieSceneSectionChannelOverrideRegistry*) OverrideRegistry                                     OFFSET(get<T>, {0xC20, 8, 0, 0})
	CMember(class UMovieScene3DTransformSectionConstraints*) Constraints                                           OFFSET(get<T>, {0xC28, 8, 0, 0})
	DMember(bool)                                      bUseQuaternionInterpolation                                 OFFSET(get<bool>, {0xC30, 1, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneActorReferenceSection
/// Size: 0x01A8 (0x0000F0 - 0x000298)
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	SMember(FMovieSceneActorReferenceData)             ActorReferenceData                                          OFFSET(getStruct<T>, {0xF0, 280, 0, 0})
	SMember(FIntegralCurve)                            ActorGuidIndexCurve                                         OFFSET(getStruct<T>, {0x208, 128, 0, 0})
	CMember(TArray<FString>)                           ActorGuidStrings                                            OFFSET(get<T>, {0x288, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneAudioSection
/// Size: 0x0530 (0x0000F0 - 0x000620)
class UMovieSceneAudioSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
	CMember(class USoundBase*)                         sound                                                       OFFSET(get<T>, {0xF8, 8, 0, 0})
	SMember(FFrameNumber)                              StartFrameOffset                                            OFFSET(getStruct<T>, {0x100, 4, 0, 0})
	DMember(float)                                     StartOffset                                                 OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     AudioStartTime                                              OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     AudioDilationFactor                                         OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(float)                                     AudioVolume                                                 OFFSET(get<float>, {0x110, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   SoundVolume                                                 OFFSET(getStruct<T>, {0x118, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   PitchMultiplier                                             OFFSET(getStruct<T>, {0x228, 272, 0, 0})
	CMember(TMap<FName, FMovieSceneFloatChannel>)      Inputs_Float                                                OFFSET(get<T>, {0x338, 80, 0, 0})
	CMember(TMap<FName, FMovieSceneStringChannel>)     Inputs_String                                               OFFSET(get<T>, {0x388, 80, 0, 0})
	CMember(TMap<FName, FMovieSceneBoolChannel>)       Inputs_Bool                                                 OFFSET(get<T>, {0x3D8, 80, 0, 0})
	CMember(TMap<FName, FMovieSceneIntegerChannel>)    Inputs_Int                                                  OFFSET(get<T>, {0x428, 80, 0, 0})
	CMember(TMap<FName, FMovieSceneAudioTriggerChannel>) Inputs_Trigger                                            OFFSET(get<T>, {0x478, 80, 0, 0})
	SMember(FMovieSceneActorReferenceData)             AttachActorData                                             OFFSET(getStruct<T>, {0x4C8, 280, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x5E0, 1, 0, 0})
	DMember(bool)                                      bSuppressSubtitles                                          OFFSET(get<bool>, {0x5E1, 1, 0, 0})
	DMember(bool)                                      bOverrideAttenuation                                        OFFSET(get<bool>, {0x5E2, 1, 0, 0})
	CMember(class USoundAttenuation*)                  AttenuationSettings                                         OFFSET(get<T>, {0x5E8, 8, 0, 0})
	SMember(FDelegateProperty)                         OnQueueSubtitles                                            OFFSET(getStruct<T>, {0x5F0, 12, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAudioFinished                                             OFFSET(getStruct<T>, {0x600, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAudioPlaybackPercent                                      OFFSET(getStruct<T>, {0x610, 16, 0, 0})


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.SetSuppressSubtitles
	// void SetSuppressSubtitles(bool bInSuppressSubtitles);                                                                    // [0x664fef8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
	// void SetStartOffset(FFrameNumber InStartOffset);                                                                         // [0x664fe7c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.SetSound
	// void SetSound(class USoundBase* InSound);                                                                                // [0x664fdfc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.SetOverrideAttenuation
	// void SetOverrideAttenuation(bool bInOverrideAttenuation);                                                                // [0x664fd7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.SetLooping
	// void SetLooping(bool bInLooping);                                                                                        // [0x664fcfc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.SetAttenuationSettings
	// void SetAttenuationSettings(class USoundAttenuation* InAttenuationSettings);                                             // [0x664fb18] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.GetSuppressSubtitles
	// bool GetSuppressSubtitles();                                                                                             // [0x664fb00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
	// FFrameNumber GetStartOffset();                                                                                           // [0x664fae8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.GetSound
	// class USoundBase* GetSound();                                                                                            // [0x664fad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.GetOverrideAttenuation
	// bool GetOverrideAttenuation();                                                                                           // [0x664fab8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.GetLooping
	// bool GetLooping();                                                                                                       // [0x664faa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.GetAttenuationSettings
	// class USoundAttenuation* GetAttenuationSettings();                                                                       // [0x664fa38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneBaseCacheSection
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class UMovieSceneBaseCacheSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneByteSection
/// Size: 0x0110 (0x0000F0 - 0x000200)
class UMovieSceneByteSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FMovieSceneByteChannel)                    ByteCurve                                                   OFFSET(getStruct<T>, {0xF8, 264, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraCutSection
/// Size: 0x00B0 (0x0000F0 - 0x0001A0)
class UMovieSceneCameraCutSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	DMember(bool)                                      bLockPreviousCamera                                         OFFSET(get<bool>, {0xF8, 1, 0, 0})
	SMember(FGuid)                                     CameraGuid                                                  OFFSET(getStruct<T>, {0xFC, 16, 0, 0})
	SMember(FMovieSceneObjectBindingID)                CameraBindingID                                             OFFSET(getStruct<T>, {0x10C, 24, 0, 0})
	SMember(FTransform)                                InitialCameraCutTransform                                   OFFSET(getStruct<T>, {0x130, 96, 0, 0})
	DMember(bool)                                      bHasInitialCameraCutTransform                               OFFSET(get<bool>, {0x190, 1, 0, 0})


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
	// void SetCameraBindingID(FMovieSceneObjectBindingID& InCameraBindingID);                                                  // [0x664fba4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
	// FMovieSceneObjectBindingID GetCameraBindingID();                                                                         // [0x664fa50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSection
/// Size: 0x0058 (0x0000F0 - 0x000148)
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FMovieSceneCameraShakeSectionData)         ShakeData                                                   OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	CMember(class UClass*)                             ShakeClass                                                  OFFSET(get<T>, {0x120, 8, 0, 0})
	DMember(float)                                     PlayScale                                                   OFFSET(get<float>, {0x128, 4, 0, 0})
	CMember(ECameraShakePlaySpace)                     Playspace                                                   OFFSET(get<T>, {0x12C, 1, 0, 0})
	SMember(FRotator)                                  UserDefinedPlaySpace                                        OFFSET(getStruct<T>, {0x130, 24, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
/// Size: 0x0030 (0x0000F0 - 0x000120)
class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FMovieSceneCameraShakeSectionData)         ShakeData                                                   OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
/// Size: 0x0100 (0x0000F0 - 0x0001F0)
class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FMovieSceneCameraShakeSourceTriggerChannel) Channel                                                    OFFSET(getStruct<T>, {0xF8, 248, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCinematicShotSection
/// Size: 0x0020 (0x000138 - 0x000158)
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FString)                                   ShotDisplayName                                             OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x148, 16, 0, 0})


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
	// void SetShotDisplayName(FString InShotDisplayName);                                                                      // [0x66923f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
	// FString GetShotDisplayName();                                                                                            // [0x66901b4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneColorSection
/// Size: 0x0448 (0x0000F0 - 0x000538)
class UMovieSceneColorSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1336;

public:
	SMember(FMovieSceneFloatChannel)                   RedCurve                                                    OFFSET(getStruct<T>, {0xF8, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   GreenCurve                                                  OFFSET(getStruct<T>, {0x208, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   BlueCurve                                                   OFFSET(getStruct<T>, {0x318, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   AlphaCurve                                                  OFFSET(getStruct<T>, {0x428, 272, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentMaterialParameterSection
/// Size: 0x0028 (0x0000F0 - 0x000118)
class UMovieSceneComponentMaterialParameterSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FScalarMaterialParameterInfoAndCurve>) ScalarParameterInfosAndCurves                            OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FColorMaterialParameterInfoAndCurves>) ColorParameterInfosAndCurves                             OFFSET(get<T>, {0x108, 16, 0, 0})


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneComponentMaterialParameterSection.RemoveScalarParameter
	// bool RemoveScalarParameter(FMaterialParameterInfo& InParameterInfo);                                                     // [0x66905a4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneComponentMaterialParameterSection.RemoveColorParameter
	// bool RemoveColorParameter(FMaterialParameterInfo& InParameterInfo);                                                      // [0x66903b0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneComponentMaterialParameterSection.AddScalarParameterKey
	// void AddScalarParameterKey(FMaterialParameterInfo& InParameterInfo, FFrameNumber InTime, float InValue, FString InLayerName, FString InAssetName); // [0x668e7d0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneComponentMaterialParameterSection.AddColorParameterKey
	// void AddColorParameterKey(FMaterialParameterInfo& InParameterInfo, FFrameNumber InTime, FLinearColor InValue, FString InLayerName, FString InAssetName); // [0x668d994] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/MovieSceneTracks.MovieSceneConstrainedSection
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneConstrainedSection : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneParameterSection
/// Size: 0x0068 (0x0000F0 - 0x000158)
class UMovieSceneParameterSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(TArray<FBoolParameterNameAndCurve>)        BoolParameterNamesAndCurves                                 OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FScalarParameterNameAndCurve>)      ScalarParameterNamesAndCurves                               OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TArray<FVector2DParameterNameAndCurves>)   Vector2DParameterNamesAndCurves                             OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(TArray<FVectorParameterNameAndCurves>)     VectorParameterNamesAndCurves                               OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TArray<FColorParameterNameAndCurves>)      ColorParameterNamesAndCurves                                OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(TArray<FTransformParameterNameAndCurves>)  TransformParameterNamesAndCurves                            OFFSET(get<T>, {0x148, 16, 0, 0})


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
	// bool RemoveVectorParameter(FName InParameterName);                                                                       // [0x6690a40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
	// bool RemoveVector2DParameter(FName InParameterName);                                                                     // [0x66908ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
	// bool RemoveTransformParameter(FName InParameterName);                                                                    // [0x6690798] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
	// bool RemoveScalarParameter(FName InParameterName);                                                                       // [0x6690644] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
	// bool RemoveColorParameter(FName InParameterName);                                                                        // [0x6690450] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
	// bool RemoveBoolParameter(FName InParameterName);                                                                         // [0x669025c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
	// void GetParameterNames(TSet<FName>& ParameterNames);                                                                     // [0x6690054] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
	// void AddVectorParameterKey(FName InParameterName, FFrameNumber InTime, FVector InValue);                                 // [0x668fc18] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
	// void AddVector2DParameterKey(FName InParameterName, FFrameNumber InTime, FVector2D InValue);                             // [0x668f8dc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
	// void AddTransformParameterKey(FName InParameterName, FFrameNumber InTime, FTransform& InValue);                          // [0x668f5f8] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
	// void AddScalarParameterKey(FName InParameterName, FFrameNumber InTime, float InValue);                                   // [0x668f2cc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
	// void AddColorParameterKey(FName InParameterName, FFrameNumber InTime, FLinearColor InValue);                             // [0x668e494] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
	// void AddBoolParameterKey(FName InParameterName, FFrameNumber InTime, bool InValue);                                      // [0x668d670] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MovieSceneTracks.MovieSceneCustomPrimitiveDataSection
/// Size: 0x0000 (0x000158 - 0x000158)
class UMovieSceneCustomPrimitiveDataSection : public UMovieSceneParameterSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneCVarSection
/// Size: 0x0068 (0x0000F0 - 0x000158)
class UMovieSceneCVarSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(TArray<FMovieSceneConsoleVariableCollection>) ConsoleVariableCollections                               OFFSET(get<T>, {0xF8, 16, 0, 0})
	SMember(FMovieSceneCVarOverrides)                  ConsoleVariables                                            OFFSET(getStruct<T>, {0x108, 80, 0, 0})


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneCVarSection.SetFromString
	// void SetFromString(FString InString);                                                                                    // [0x6691b38] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneCVarSection.GetString
	// FString GetString();                                                                                                     // [0x66901f4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneDataLayerSection
/// Size: 0x0030 (0x0000F0 - 0x000120)
class UMovieSceneDataLayerSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FActorDataLayer>)                   DataLayers                                                  OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<class UDataLayerAsset*>)            DataLayerAssets                                             OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(EDataLayerRuntimeState)                    DesiredState                                                OFFSET(get<T>, {0x118, 1, 0, 0})
	CMember(EDataLayerRuntimeState)                    PrerollState                                                OFFSET(get<T>, {0x119, 1, 0, 0})
	DMember(bool)                                      bFlushOnActivated                                           OFFSET(get<bool>, {0x11A, 1, 0, 0})
	DMember(bool)                                      bFlushOnUnload                                              OFFSET(get<bool>, {0x11B, 1, 0, 0})
	DMember(bool)                                      bPerformGCOnUnload                                          OFFSET(get<bool>, {0x11C, 1, 0, 0})


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.SetPrerollState
	// void SetPrerollState(EDataLayerRuntimeState InPrerollState);                                                             // [0x6692374] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.SetPerformGCOnUnload
	// void SetPerformGCOnUnload(bool bPerformGCOnUnload);                                                                      // [0x66922f4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.SetFlushOnUnload
	// void SetFlushOnUnload(bool bFlushOnUnload);                                                                              // [0x6691ab8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.SetFlushOnActivated
	// void SetFlushOnActivated(bool bFlushOnActivated);                                                                        // [0x6691a38] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.SetDesiredState
	// void SetDesiredState(EDataLayerRuntimeState InDesiredState);                                                             // [0x66919bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayers
	// void SetDataLayers(TArray<FActorDataLayer>& InDataLayers);                                                               // [0x66912d4] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayerAssets
	// void SetDataLayerAssets(TArray<UDataLayerAsset*>& InDataLayerAssets);                                                    // [0x6690b94] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.HasPreRoll
	// bool HasPreRoll();                                                                                                       // [0x6690234] Final|Native|Private|Const 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.GetPrerollState
	// EDataLayerRuntimeState GetPrerollState();                                                                                // [0x669019c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.GetPerformGCOnUnload
	// bool GetPerformGCOnUnload();                                                                                             // [0x6690184] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.GetFlushOnUnload
	// bool GetFlushOnUnload();                                                                                                 // [0x6690020] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.GetFlushOnActivated
	// bool GetFlushOnActivated();                                                                                              // [0x6690008] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.GetDesiredState
	// EDataLayerRuntimeState GetDesiredState();                                                                                // [0x668fff0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayers
	// TArray<FActorDataLayer> GetDataLayers();                                                                                 // [0x668ffd4] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayerAssets
	// TArray<UDataLayerAsset*> GetDataLayerAssets();                                                                           // [0x668ff5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneDoubleSection
/// Size: 0x0120 (0x0000F0 - 0x000210)
class UMovieSceneDoubleSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FMovieSceneDoubleChannel)                  DoubleCurve                                                 OFFSET(getStruct<T>, {0xF8, 280, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneEnumSection
/// Size: 0x0110 (0x0000F0 - 0x000200)
class UMovieSceneEnumSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FMovieSceneByteChannel)                    EnumCurve                                                   OFFSET(getStruct<T>, {0xF8, 264, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneEventSectionBase
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UMovieSceneEventSectionBase : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEventRepeaterSection
/// Size: 0x0030 (0x0000F0 - 0x000120)
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FMovieSceneEvent)                          Event                                                       OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneEventSection
/// Size: 0x0170 (0x0000F0 - 0x000260)
class UMovieSceneEventSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FNameCurve)                                Events                                                      OFFSET(getStruct<T>, {0xF0, 120, 0, 0})
	SMember(FMovieSceneEventSectionData)               EventData                                                   OFFSET(getStruct<T>, {0x168, 248, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneEventTriggerSection
/// Size: 0x0100 (0x0000F0 - 0x0001F0)
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FMovieSceneEventChannel)                   EventChannel                                                OFFSET(getStruct<T>, {0xF8, 248, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneFadeSection
/// Size: 0x0130 (0x0000F0 - 0x000220)
class UMovieSceneFadeSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FMovieSceneFloatChannel)                   FloatCurve                                                  OFFSET(getStruct<T>, {0xF8, 272, 0, 0})
	SMember(FLinearColor)                              FadeColor                                                   OFFSET(getStruct<T>, {0x208, 16, 0, 0})
	DMember(bool)                                      bFadeAudio                                                  OFFSET(get<bool>, {0x218, 1, 1, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatSection
/// Size: 0x0128 (0x0000F0 - 0x000218)
class UMovieSceneFloatSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	SMember(FMovieSceneFloatChannel)                   FloatCurve                                                  OFFSET(getStruct<T>, {0x100, 272, 0, 0})
	CMember(class UMovieSceneSectionChannelOverrideRegistry*) OverrideRegistry                                     OFFSET(get<T>, {0x210, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneIntegerSection
/// Size: 0x0110 (0x0000F0 - 0x000200)
class UMovieSceneIntegerSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FMovieSceneIntegerChannel)                 IntegerCurve                                                OFFSET(getStruct<T>, {0xF8, 264, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection
/// Size: 0x0020 (0x0000F0 - 0x000110)
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(ELevelVisibility)                          Visibility                                                  OFFSET(get<T>, {0xF8, 1, 0, 0})
	CMember(TArray<FName>)                             LevelNames                                                  OFFSET(get<T>, {0x100, 16, 0, 0})


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
	// void SetVisibility(ELevelVisibility InVisibility);                                                                       // [0x6692ad8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
	// void SetLevelNames(TArray<FName>& InLevelNames);                                                                         // [0x6692214] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
	// ELevelVisibility GetVisibility();                                                                                        // [0x35be8e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
	// TArray<FName> GetLevelNames();                                                                                           // [0x6690038] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneObjectPropertySection
/// Size: 0x0130 (0x0000F0 - 0x000220)
class UMovieSceneObjectPropertySection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FMovieSceneObjectPathChannel)              ObjectChannel                                               OFFSET(getStruct<T>, {0xF8, 296, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneParameterSectionExtender
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneParameterSectionExtender : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneParticleSection
/// Size: 0x0108 (0x0000F0 - 0x0001F8)
class UMovieSceneParticleSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	SMember(FMovieSceneParticleChannel)                ParticleKeys                                                OFFSET(getStruct<T>, {0xF0, 264, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScenePrimitiveMaterialSection
/// Size: 0x0130 (0x0000F0 - 0x000220)
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FMovieSceneObjectPathChannel)              MaterialChannel                                             OFFSET(getStruct<T>, {0xF8, 296, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSection
/// Size: 0x0260 (0x0000F0 - 0x000350)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FMovieSceneSkeletalAnimationParams)        Params                                                      OFFSET(getStruct<T>, {0xF8, 328, 0, 0})
	CMember(class UAnimSequence*)                      AnimSequence                                                OFFSET(get<T>, {0x240, 8, 0, 0})
	CMember(class UAnimSequenceBase*)                  Animation                                                   OFFSET(get<T>, {0x248, 8, 0, 0})
	DMember(float)                                     StartOffset                                                 OFFSET(get<float>, {0x250, 4, 0, 0})
	DMember(float)                                     EndOffset                                                   OFFSET(get<float>, {0x254, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x258, 4, 0, 0})
	DMember(bool)                                      bReverse                                                    OFFSET(get<bool>, {0x25C, 1, 1, 0})
	SMember(FName)                                     SlotName                                                    OFFSET(getStruct<T>, {0x260, 4, 0, 0})
	SMember(FVector)                                   StartLocationOffset                                         OFFSET(getStruct<T>, {0x268, 24, 0, 0})
	SMember(FRotator)                                  StartRotationOffset                                         OFFSET(getStruct<T>, {0x280, 24, 0, 0})
	DMember(bool)                                      bMatchWithPrevious                                          OFFSET(get<bool>, {0x298, 1, 0, 0})
	SMember(FName)                                     MatchedBoneName                                             OFFSET(getStruct<T>, {0x29C, 4, 0, 0})
	SMember(FVector)                                   MatchedLocationOffset                                       OFFSET(getStruct<T>, {0x2A0, 24, 0, 0})
	SMember(FRotator)                                  MatchedRotationOffset                                       OFFSET(getStruct<T>, {0x2B8, 24, 0, 0})
	DMember(bool)                                      bMatchTranslation                                           OFFSET(get<bool>, {0x2D0, 1, 0, 0})
	DMember(bool)                                      bMatchIncludeZHeight                                        OFFSET(get<bool>, {0x2D1, 1, 0, 0})
	DMember(bool)                                      bMatchRotationYaw                                           OFFSET(get<bool>, {0x2D2, 1, 0, 0})
	DMember(bool)                                      bMatchRotationPitch                                         OFFSET(get<bool>, {0x2D3, 1, 0, 0})
	DMember(bool)                                      bMatchRotationRoll                                          OFFSET(get<bool>, {0x2D4, 1, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneSlomoSection
/// Size: 0x0118 (0x0000F0 - 0x000208)
class UMovieSceneSlomoSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FMovieSceneFloatChannel)                   FloatCurve                                                  OFFSET(getStruct<T>, {0xF8, 272, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneStringSection
/// Size: 0x0118 (0x0000F0 - 0x000208)
class UMovieSceneStringSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FMovieSceneStringChannel)                  StringCurve                                                 OFFSET(getStruct<T>, {0xF8, 272, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatVectorSection
/// Size: 0x0450 (0x0000F0 - 0x000540)
class UMovieSceneFloatVectorSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	SMember(FMovieSceneFloatChannel)                   Curves                                                      OFFSET(getStruct<T>, {0xF8, 1088, 0, 0})
	DMember(int32_t)                                   ChannelsUsed                                                OFFSET(get<int32_t>, {0x538, 4, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneDoubleVectorSection
/// Size: 0x0470 (0x0000F0 - 0x000560)
class UMovieSceneDoubleVectorSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	SMember(FMovieSceneDoubleChannel)                  Curves                                                      OFFSET(getStruct<T>, {0xF8, 1120, 0, 0})
	DMember(int32_t)                                   ChannelsUsed                                                OFFSET(get<int32_t>, {0x558, 4, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneVisibilitySection
/// Size: 0x0008 (0x000200 - 0x000208)
class UMovieSceneVisibilitySection : public UMovieSceneBoolSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
};

/// Class /Script/MovieSceneTracks.BoolChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UBoolChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.ByteChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UByteChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.DoubleChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UDoubleChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.DoublePerlinNoiseChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UDoublePerlinNoiseChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.FloatChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.FloatPerlinNoiseChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UFloatPerlinNoiseChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.IntegerChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UIntegerChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePropertySystem
/// Size: 0x0018 (0x000040 - 0x000058)
class UMovieScenePropertySystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UMovieScenePropertyInstantiatorSystem*) InstantiatorSystem                                       OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneAudioSystem
/// Size: 0x00B0 (0x000040 - 0x0000F0)
class UMovieSceneAudioSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneBoolPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneBoolPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneBytePropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneBytePropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeInstantiatorSystem
/// Size: 0x0080 (0x000040 - 0x0000C0)
class UMovieSceneCameraShakeInstantiatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneCameraShakeEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneColorPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneColorPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentAttachmentSystem
/// Size: 0x0190 (0x000040 - 0x0001D0)
class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentMaterialSystem
/// Size: 0x0168 (0x000040 - 0x0001A8)
class UMovieSceneComponentMaterialSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentMobilitySystem
/// Size: 0x01F0 (0x000040 - 0x000230)
class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentTransformSystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneConstraintSystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UMovieSceneConstraintSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneCustomPrimitiveDataSystem
/// Size: 0x0190 (0x000040 - 0x0001D0)
class UMovieSceneCustomPrimitiveDataSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	CMember(class UMovieScenePiecewiseDoubleBlenderSystem*) DoubleBlenderSystem                                    OFFSET(get<T>, {0x1C8, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneDataLayerSystem
/// Size: 0x0090 (0x000040 - 0x0000D0)
class UMovieSceneDataLayerSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
/// Size: 0x0018 (0x000040 - 0x000058)
class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneDoublePropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneDoublePropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEnumPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneEnumPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEulerTransformPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEventSystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UMovieSceneEventSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePreSpawnEventSystem
/// Size: 0x0000 (0x000090 - 0x000090)
class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePostSpawnEventSystem
/// Size: 0x0000 (0x000090 - 0x000090)
class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePostEvalEventSystem
/// Size: 0x0000 (0x000090 - 0x000090)
class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneFadeSystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UMovieSceneFadeSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneHierarchicalBiasSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneInitialValueSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneInitialValueSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneIntegerPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneIntegerPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneLevelVisibilitySystem
/// Size: 0x0148 (0x000040 - 0x000188)
class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionSystem
/// Size: 0x0020 (0x000040 - 0x000060)
class UMovieSceneMaterialParameterCollectionSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialParameterInstantiatorSystem
/// Size: 0x0318 (0x000040 - 0x000358)
class UMovieSceneMaterialParameterInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	CMember(class UMovieScenePiecewiseDoubleBlenderSystem*) DoubleBlenderSystem                                    OFFSET(get<T>, {0x350, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialParameterEvaluationSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneMaterialParameterEvaluationSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
/// Size: 0x0058 (0x000040 - 0x000098)
class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneObjectPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneObjectPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
/// Size: 0x0028 (0x000068 - 0x000090)
class UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
/// Size: 0x0028 (0x000068 - 0x000090)
class UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseDoubleBlenderSystem
/// Size: 0x00C8 (0x000068 - 0x000130)
class UMovieScenePiecewiseDoubleBlenderSystem : public UMovieSceneBlenderSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem
/// Size: 0x0028 (0x000068 - 0x000090)
class UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
/// Size: 0x0048 (0x000068 - 0x0000B0)
class UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction
/// Size: 0x0050 (0x000030 - 0x000080)
class UMovieSceneAsyncAction_SequencePrediction : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMulticastInlineDelegate)                  Result                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  Failure                                                     OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(class UMovieSceneSequencePlayer*)          SequencePlayer                                              OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class USceneComponent*)                    SceneComponent                                              OFFSET(get<T>, {0x68, 8, 0, 0})


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtTime
	// class UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtTime(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, float TimeInSeconds); // [0x66ce41c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtFrame
	// class UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtFrame(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, FFrameTime FrameTime); // [0x66ce2a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtTime
	// class UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtTime(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, float TimeInSeconds); // [0x66ce13c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtFrame
	// class UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtFrame(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, FFrameTime FrameTime); // [0x66cdfc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MovieSceneTracks.MovieScenePredictionSystem
/// Size: 0x00B0 (0x000040 - 0x0000F0)
class UMovieScenePredictionSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<class UMovieSceneAsyncAction_SequencePrediction*>) PendingPredictions                           OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<class UMovieSceneAsyncAction_SequencePrediction*>) ProcessingPredictions                        OFFSET(get<T>, {0xE0, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScenePropertyInstantiatorSystem
/// Size: 0x0190 (0x000040 - 0x0001D0)
class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneQuaternionBlenderSystem
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UMovieSceneQuaternionBlenderSystem : public UMovieSceneBlenderSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSystem
/// Size: 0x00A0 (0x000040 - 0x0000E0)
class UMovieSceneSkeletalAnimationSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneSlomoSystem
/// Size: 0x0018 (0x000040 - 0x000058)
class UMovieSceneSlomoSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneStringPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneStringPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneTransformOriginInstantiatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneTransformOriginInstantiatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneTransformOriginSystem
/// Size: 0x0038 (0x000040 - 0x000078)
class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatVectorPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneFloatVectorPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneDoubleVectorPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneDoubleVectorPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneVisibilitySystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UMovieSceneVisibilitySystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/MovieSceneTracks.ObjectPathChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UObjectPathChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.StringChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UStringChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
/// Size: 0x0098 (0x000040 - 0x0000D8)
class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(class UWeightAndEasingEvaluatorSystem*)    EvaluatorSystem                                             OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneHierarchicalEasingFinalizationSystem
/// Size: 0x0008 (0x000040 - 0x000048)
class UMovieSceneHierarchicalEasingFinalizationSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UMovieSceneHierarchicalEasingInstantiatorSystem*) InstantiatorSystem                             OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.WeightAndEasingEvaluatorSystem
/// Size: 0x0018 (0x000040 - 0x000058)
class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraCutTrackInstance
/// Size: 0x0028 (0x000050 - 0x000078)
class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneCVarTrackInstance
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UMovieSceneCVarTrackInstance : public UMovieSceneTrackInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/MovieSceneTracks.MovieScene3DConstraintTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<class UMovieSceneSection*>)         ConstraintSections                                          OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScene3DAttachTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/MovieSceneTracks.MovieScene3DPathTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePropertyTrack
/// Size: 0x0028 (0x000098 - 0x0000C0)
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class UMovieSceneSection*)                 SectionToKey                                                OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FMovieScenePropertyBinding)                PropertyBinding                                             OFFSET(getStruct<T>, {0xA0, 12, 0, 0})
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UClass*)                             BlenderSystemClass                                          OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneActorReferenceTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneAudioTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<class UMovieSceneSection*>)         AudioSections                                               OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneBoolTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneByteTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(class UEnum*)                              Enum                                                        OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraCutTrack
/// Size: 0x0020 (0x000098 - 0x0000B8)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bCanBlend                                                   OFFSET(get<bool>, {0x98, 1, 0, 0})
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(bool)                                      bAutoArrangeSections                                        OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<class UMovieSceneSection*>)         CameraShakeSections                                         OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<class UMovieSceneSection*>)         CameraShakeSections                                         OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCinematicShotTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneColorTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bIsSlateColor                                               OFFSET(get<bool>, {0xC0, 1, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCustomPrimitiveDataTrack
/// Size: 0x0028 (0x000098 - 0x0000C0)
class UMovieSceneCustomPrimitiveDataTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(class UMovieSceneSection*)                 SectionToKey                                                OFFSET(get<T>, {0xB8, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCVarTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneCVarTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneDataLayerTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneDataLayerTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneDoubleTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneDoubleTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEnumTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(class UEnum*)                              Enum                                                        OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneEulerTransformTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEventTrack
/// Size: 0x0028 (0x000098 - 0x0000C0)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bFireEventsWhenForwards                                     OFFSET(get<bool>, {0xA8, 1, 1, 0})
	DMember(bool)                                      bFireEventsWhenBackwards                                    OFFSET(get<bool>, {0xA8, 1, 1, 1})
	CMember(EFireEventsAtPosition)                     EventPosition                                               OFFSET(get<T>, {0xAC, 1, 0, 0})
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneFadeTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneIntegerTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneLevelVisibilityTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(class UMovieSceneSection*)                 SectionToKey                                                OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(class UMaterialParameterCollection*)       MPC                                                         OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentMaterialTrack
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FComponentMaterialInfo)                    MaterialInfo                                                OFFSET(getStruct<T>, {0xC0, 12, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneObjectPropertyTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(class UClass*)                             PropertyClass                                               OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneParticleParameterTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneParticleTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<class UMovieSceneSection*>)         ParticleSections                                            OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScenePrimitiveMaterialTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FComponentMaterialInfo)                    MaterialInfo                                                OFFSET(getStruct<T>, {0xC0, 12, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationTrack
/// Size: 0x00A8 (0x000098 - 0x000140)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TArray<class UMovieSceneSection*>)         AnimationSections                                           OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(bool)                                      bUseLegacySectionIndexBlend                                 OFFSET(get<bool>, {0xA8, 1, 0, 0})
	SMember(FMovieSceneSkeletalAnimRootMotionTrackParams) RootMotionParams                                         OFFSET(getStruct<T>, {0xB0, 128, 0, 0})
	DMember(bool)                                      bBlendFirstChildOfRoot                                      OFFSET(get<bool>, {0x130, 1, 0, 0})
	CMember(ESwapRootBone)                             SwapRootBone                                                OFFSET(get<T>, {0x131, 1, 0, 0})


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneSkeletalAnimationTrack.SetSwapRootBone
	// void SetSwapRootBone(ESwapRootBone InValue);                                                                             // [0x66e0dc8] Final|RequiredAPI|Native|Public 
	// Function /Script/MovieSceneTracks.MovieSceneSkeletalAnimationTrack.GetSwapRootBone
	// ESwapRootBone GetSwapRootBone();                                                                                         // [0x66e0db0] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneSlomoTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneStringTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneTransformTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatVectorTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneFloatVectorTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(int32_t)                                   NumChannelsUsed                                             OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneDoubleVectorTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneDoubleVectorTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(int32_t)                                   NumChannelsUsed                                             OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneVisibilityTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneVisibilityTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Struct /Script/MovieSceneTracks.MovieScenePreAnimatedMaterialParameters
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieScenePreAnimatedMaterialParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UMaterialInterface*)                 PreviousMaterial                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       SoftPreviousMaterial                                        OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieSceneCameraShakeSourceTrigger : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UClass*)                             ShakeClass                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     PlayScale                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(ECameraShakePlaySpace)                     Playspace                                                   OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FRotator)                                  UserDefinedPlaySpace                                        OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
/// Size: 0x00A8 (0x000050 - 0x0000F8)
class FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FFrameNumber>)                      KeyTimes                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FMovieSceneCameraShakeSourceTrigger>) KeyValues                                                 OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  OFFSET(getStruct<T>, {0x70, 136, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneDoublePerlinNoiseChannel
/// Size: 0x0018 (0x000050 - 0x000068)
class FMovieSceneDoublePerlinNoiseChannel : public FMovieSceneChannel
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FPerlinNoiseParams)                        PerlinNoiseParams                                           OFFSET(getStruct<T>, {0x50, 24, 0, 0})
};

/// Struct /Script/MovieSceneTracks.PerlinNoiseParams
/// Size: 0x0018 (0x000000 - 0x000018)
class FPerlinNoiseParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(double)                                    Amplitude                                                   OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventPayloadVariable
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieSceneEventPayloadVariable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSoftObjectPath)                           ObjectValue                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventPtrs
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieSceneEventPtrs : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UFunction*)                          Function                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEvent
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieSceneEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FMovieSceneEventPtrs)                      Ptrs                                                        OFFSET(getStruct<T>, {0x0, 40, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventChannel
/// Size: 0x00A8 (0x000050 - 0x0000F8)
class FMovieSceneEventChannel : public FMovieSceneChannel
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FFrameNumber>)                      KeyTimes                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FMovieSceneEvent>)                  KeyValues                                                   OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  OFFSET(getStruct<T>, {0x70, 136, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneFloatPerlinNoiseChannel
/// Size: 0x0018 (0x000050 - 0x000068)
class FMovieSceneFloatPerlinNoiseChannel : public FMovieSceneChannel
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FPerlinNoiseParams)                        PerlinNoiseParams                                           OFFSET(getStruct<T>, {0x50, 24, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneStringChannel
/// Size: 0x00C0 (0x000050 - 0x000110)
class FMovieSceneStringChannel : public FMovieSceneChannel
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TArray<FFrameNumber>)                      Times                                                       OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FString>)                           Values                                                      OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   DefaultValue                                                OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bHasDefaultValue                                            OFFSET(get<bool>, {0x80, 1, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  OFFSET(getStruct<T>, {0x88, 136, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieScene3DPathSectionTemplate
/// Size: 0x0130 (0x000020 - 0x000150)
class FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FMovieSceneObjectBindingID)                PathBindingID                                               OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FMovieSceneFloatChannel)                   TimingCurve                                                 OFFSET(getStruct<T>, {0x38, 272, 0, 0})
	CMember(MovieScene3DPathSection_Axis)              FrontAxisEnum                                               OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(MovieScene3DPathSection_Axis)              UpAxisEnum                                                  OFFSET(get<T>, {0x149, 1, 0, 0})
	DMember(bool)                                      bFollow                                                     OFFSET(get<bool>, {0x14C, 1, 1, 0})
	DMember(bool)                                      bReverse                                                    OFFSET(get<bool>, {0x14C, 1, 1, 1})
	DMember(bool)                                      bForceUpright                                               OFFSET(get<bool>, {0x14C, 1, 1, 2})
};

/// Struct /Script/MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
/// Size: 0x0130 (0x000020 - 0x000150)
class FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FMovieScenePropertySectionData)            PropertyData                                                OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FMovieSceneActorReferenceData)             ActorReferenceData                                          OFFSET(getStruct<T>, {0x38, 280, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneActorReferenceData
/// Size: 0x00C8 (0x000050 - 0x000118)
class FMovieSceneActorReferenceData : public FMovieSceneChannel
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FFrameNumber>)                      KeyTimes                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FMovieSceneActorReferenceKey)              DefaultValue                                                OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	CMember(TArray<FMovieSceneActorReferenceKey>)      KeyValues                                                   OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  OFFSET(getStruct<T>, {0x90, 136, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneActorReferenceKey
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneActorReferenceKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FMovieSceneObjectBindingID)                Object                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FName)                                     ComponentName                                               OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneBaseCacheSectionTemplateParameters
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovieSceneBaseCacheSectionTemplateParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FFrameNumber)                              SectionStartTime                                            OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FFrameNumber)                              SectionEndTime                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventSectionTemplate
/// Size: 0x0100 (0x000020 - 0x000120)
class FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FMovieSceneEventSectionData)               EventData                                                   OFFSET(getStruct<T>, {0x20, 248, 0, 0})
	DMember(bool)                                      bFireEventsWhenForwards                                     OFFSET(get<bool>, {0x118, 1, 1, 0})
	DMember(bool)                                      bFireEventsWhenBackwards                                    OFFSET(get<bool>, {0x118, 1, 1, 1})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventSectionData
/// Size: 0x00A8 (0x000050 - 0x0000F8)
class FMovieSceneEventSectionData : public FMovieSceneChannel
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FFrameNumber>)                      Times                                                       OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FEventPayload>)                     KeyValues                                                   OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  OFFSET(getStruct<T>, {0x70, 136, 0, 0})
};

/// Struct /Script/MovieSceneTracks.EventPayload
/// Size: 0x0040 (0x000000 - 0x000040)
class FEventPayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     EventName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneEventParameters)                Parameters                                                  OFFSET(getStruct<T>, {0x8, 56, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventParameters
/// Size: 0x0038 (0x000000 - 0x000038)
class FMovieSceneEventParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/MovieSceneTracks.MovieSceneParameterSectionTemplate
/// Size: 0x0060 (0x000020 - 0x000080)
class FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FScalarParameterNameAndCurve>)      Scalars                                                     OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FBoolParameterNameAndCurve>)        Bools                                                       OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FVector2DParameterNameAndCurves>)   Vector2Ds                                                   OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FVectorParameterNameAndCurves>)     Vectors                                                     OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FColorParameterNameAndCurves>)      Colors                                                      OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FTransformParameterNameAndCurves>)  Transforms                                                  OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.TransformParameterNameAndCurves
/// Size: 0x0998 (0x000000 - 0x000998)
class FTransformParameterNameAndCurves : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2456;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Translation                                                 OFFSET(getStruct<T>, {0x8, 816, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Rotation                                                    OFFSET(getStruct<T>, {0x338, 816, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Scale                                                       OFFSET(getStruct<T>, {0x668, 816, 0, 0})
};

/// Struct /Script/MovieSceneTracks.ColorParameterNameAndCurves
/// Size: 0x0448 (0x000000 - 0x000448)
class FColorParameterNameAndCurves : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   RedCurve                                                    OFFSET(getStruct<T>, {0x8, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   GreenCurve                                                  OFFSET(getStruct<T>, {0x118, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   BlueCurve                                                   OFFSET(getStruct<T>, {0x228, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   AlphaCurve                                                  OFFSET(getStruct<T>, {0x338, 272, 0, 0})
};

/// Struct /Script/MovieSceneTracks.VectorParameterNameAndCurves
/// Size: 0x0338 (0x000000 - 0x000338)
class FVectorParameterNameAndCurves : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   XCurve                                                      OFFSET(getStruct<T>, {0x8, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   YCurve                                                      OFFSET(getStruct<T>, {0x118, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   ZCurve                                                      OFFSET(getStruct<T>, {0x228, 272, 0, 0})
};

/// Struct /Script/MovieSceneTracks.Vector2DParameterNameAndCurves
/// Size: 0x0228 (0x000000 - 0x000228)
class FVector2DParameterNameAndCurves : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   XCurve                                                      OFFSET(getStruct<T>, {0x8, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   YCurve                                                      OFFSET(getStruct<T>, {0x118, 272, 0, 0})
};

/// Struct /Script/MovieSceneTracks.BoolParameterNameAndCurve
/// Size: 0x0110 (0x000000 - 0x000110)
class FBoolParameterNameAndCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneBoolChannel)                    ParameterCurve                                              OFFSET(getStruct<T>, {0x8, 264, 0, 0})
};

/// Struct /Script/MovieSceneTracks.ScalarParameterNameAndCurve
/// Size: 0x0118 (0x000000 - 0x000118)
class FScalarParameterNameAndCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   ParameterCurve                                              OFFSET(getStruct<T>, {0x8, 272, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
/// Size: 0x0000 (0x000080 - 0x000080)
class FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Struct /Script/MovieSceneTracks.MovieSceneParticleSectionTemplate
/// Size: 0x0108 (0x000020 - 0x000128)
class FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FMovieSceneParticleChannel)                ParticleKeys                                                OFFSET(getStruct<T>, {0x20, 264, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneParticleChannel
/// Size: 0x0000 (0x000108 - 0x000108)
class FMovieSceneParticleChannel : public FMovieSceneByteChannel
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Struct /Script/MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
/// Size: 0x0108 (0x000038 - 0x000140)
class FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FMovieSceneBoolChannel)                    BoolCurve                                                   OFFSET(getStruct<T>, {0x38, 264, 0, 0})
};

/// Struct /Script/MovieSceneTracks.LevelVisibilityComponentData
/// Size: 0x0008 (0x000000 - 0x000008)
class FLevelVisibilityComponentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UMovieSceneLevelVisibilitySection*)  Section                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneDataLayerComponentData
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovieSceneDataLayerComponentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UMovieSceneDataLayerSection*)        Section                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MovieSceneTracks.ConstraintComponentData
/// Size: 0x0018 (0x000000 - 0x000018)
class FConstraintComponentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGuid)                                     ConstraintID                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationComponentData
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovieSceneSkeletalAnimationComponentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UMovieSceneSkeletalAnimationSection*) Section                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneAudioComponentData
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovieSceneAudioComponentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UMovieSceneAudioSection*)            Section                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeComponentData
/// Size: 0x0040 (0x000000 - 0x000040)
class FMovieSceneCameraShakeComponentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMovieSceneCameraShakeSectionData)         SectionData                                                 OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FFrameNumber)                              SectionStartTime                                            OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FFrameNumber)                              SectionEndTime                                              OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	SMember(FGuid)                                     SectionSignature                                            OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSectionData
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieSceneCameraShakeSectionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UClass*)                             ShakeClass                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     PlayScale                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(ECameraShakePlaySpace)                     Playspace                                                   OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FRotator)                                  UserDefinedPlaySpace                                        OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneCameraShakeInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UCameraShakeBase*)                   ShakeInstance                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGuid)                                     SectionSignature                                            OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bManagedByPreviewer                                         OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneAudioInputData
/// Size: 0x0030 (0x000000 - 0x000030)
class FMovieSceneAudioInputData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     FloatInputs                                                 OFFSET(getStruct<T>, {0x0, 36, 0, 0})
	SMember(FName)                                     StringInput                                                 OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	SMember(FName)                                     BoolInput                                                   OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     IntInput                                                    OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieScene3DLocationKeyStruct
/// Size: 0x0038 (0x000008 - 0x000040)
class FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FFrameNumber)                              Time                                                        OFFSET(getStruct<T>, {0x20, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieScene3DRotationKeyStruct
/// Size: 0x0038 (0x000008 - 0x000040)
class FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FFrameNumber)                              Time                                                        OFFSET(getStruct<T>, {0x20, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieScene3DScaleKeyStruct
/// Size: 0x0028 (0x000008 - 0x000030)
class FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector3f)                                 Scale                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FFrameNumber)                              Time                                                        OFFSET(getStruct<T>, {0x14, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieScene3DTransformKeyStruct
/// Size: 0x0058 (0x000008 - 0x000060)
class FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector3f)                                 Scale                                                       OFFSET(getStruct<T>, {0x38, 12, 0, 0})
	SMember(FFrameNumber)                              Time                                                        OFFSET(getStruct<T>, {0x44, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneTransformMask
/// Size: 0x0004 (0x000000 - 0x000004)
class FMovieSceneTransformMask : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Mask                                                        OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneBaseCacheParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneBaseCacheParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FFrameNumber)                              FirstLoopStartFrameOffset                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FFrameNumber)                              StartFrameOffset                                            OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FFrameNumber)                              EndFrameOffset                                              OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bReverse                                                    OFFSET(get<bool>, {0x18, 1, 1, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneColorKeyStruct
/// Size: 0x0030 (0x000008 - 0x000038)
class FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FFrameNumber)                              Time                                                        OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.ScalarMaterialParameterInfoAndCurve
/// Size: 0x0120 (0x000000 - 0x000120)
class FScalarMaterialParameterInfoAndCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FMaterialParameterInfo)                    ParameterInfo                                               OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FMovieSceneFloatChannel)                   ParameterCurve                                              OFFSET(getStruct<T>, {0x10, 272, 0, 0})
};

/// Struct /Script/MovieSceneTracks.ColorMaterialParameterInfoAndCurves
/// Size: 0x0450 (0x000000 - 0x000450)
class FColorMaterialParameterInfoAndCurves : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	SMember(FMaterialParameterInfo)                    ParameterInfo                                               OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FMovieSceneFloatChannel)                   RedCurve                                                    OFFSET(getStruct<T>, {0x10, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   GreenCurve                                                  OFFSET(getStruct<T>, {0x120, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   BlueCurve                                                   OFFSET(getStruct<T>, {0x230, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   AlphaCurve                                                  OFFSET(getStruct<T>, {0x340, 272, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneConsoleVariableCollection
/// Size: 0x0018 (0x000000 - 0x000018)
class FMovieSceneConsoleVariableCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TScriptInterface<Class>)                   Interface                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bOnlyIncludeChecked                                         OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneCVarOverrides
/// Size: 0x0050 (0x000000 - 0x000050)
class FMovieSceneCVarOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, FString>)                    ValuesByCVar                                                OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationParams
/// Size: 0x0148 (0x000000 - 0x000148)
class FMovieSceneSkeletalAnimationParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(class UAnimSequenceBase*)                  Animation                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FFrameNumber)                              FirstLoopStartFrameOffset                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FFrameNumber)                              StartFrameOffset                                            OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FFrameNumber)                              EndFrameOffset                                              OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bReverse                                                    OFFSET(get<bool>, {0x18, 1, 1, 0})
	SMember(FName)                                     SlotName                                                    OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	CMember(class UMirrorDataTable*)                   MirrorDataTable                                             OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Weight                                                      OFFSET(getStruct<T>, {0x28, 272, 0, 0})
	DMember(bool)                                      bSkipAnimNotifiers                                          OFFSET(get<bool>, {0x138, 1, 0, 0})
	DMember(bool)                                      bForceCustomMode                                            OFFSET(get<bool>, {0x139, 1, 0, 0})
	CMember(ESwapRootBone)                             SwapRootBone                                                OFFSET(get<T>, {0x13A, 1, 0, 0})
	DMember(float)                                     StartOffset                                                 OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     EndOffset                                                   OFFSET(get<float>, {0x140, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneFloatVectorKeyStructBase
/// Size: 0x0020 (0x000008 - 0x000028)
class FMovieSceneFloatVectorKeyStructBase : public FMovieSceneKeyStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FFrameNumber)                              Time                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector2fKeyStruct
/// Size: 0x0008 (0x000028 - 0x000030)
class FMovieSceneVector2fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector2f)                                 Vector                                                      OFFSET(getStruct<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector3fKeyStruct
/// Size: 0x0010 (0x000028 - 0x000038)
class FMovieSceneVector3fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector3f)                                 Vector                                                      OFFSET(getStruct<T>, {0x28, 12, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector4fKeyStruct
/// Size: 0x0018 (0x000028 - 0x000040)
class FMovieSceneVector4fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector4f)                                 Vector                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneDoubleVectorKeyStructBase
/// Size: 0x0020 (0x000008 - 0x000028)
class FMovieSceneDoubleVectorKeyStructBase : public FMovieSceneKeyStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FFrameNumber)                              Time                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector2DKeyStruct
/// Size: 0x0010 (0x000028 - 0x000038)
class FMovieSceneVector2DKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector2D)                                 Vector                                                      OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector3dKeyStruct
/// Size: 0x0018 (0x000028 - 0x000040)
class FMovieSceneVector3dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector3d)                                 Vector                                                      OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector4dKeyStruct
/// Size: 0x0028 (0x000028 - 0x000050)
class FMovieSceneVector4dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector4d)                                 Vector                                                      OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventTriggerData
/// Size: 0x0048 (0x000000 - 0x000048)
class FMovieSceneEventTriggerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FMovieSceneEventPtrs)                      Ptrs                                                        OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FGuid)                                     ObjectBindingID                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.ComponentMaterialInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FComponentMaterialInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     MaterialSlotName                                            OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaterialSlotIndex                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(EComponentMaterialType)                    MaterialType                                                OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
/// Size: 0x0080 (0x000000 - 0x000080)
class FMovieSceneSkeletalAnimRootMotionTrackParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Enum /Script/MovieSceneTracks.MovieScene3DPathSection_Axis
/// Size: 0x07
enum class MovieScene3DPathSection_Axis : uint8_t
{
	MovieScene3DPathSection_Axis__X                                                  = 0,
	MovieScene3DPathSection_Axis__Y                                                  = 1,
	MovieScene3DPathSection_Axis__Z                                                  = 2,
	MovieScene3DPathSection_Axis__NEG_X                                              = 3,
	MovieScene3DPathSection_Axis__NEG_Y                                              = 4,
	MovieScene3DPathSection_Axis__NEG_Z                                              = 5,
	MovieScene3DPathSection_Axis__MovieScene3DPathSection_MAX                        = 6
};

/// Enum /Script/MovieSceneTracks.ELevelVisibility
/// Size: 0x03
enum class ELevelVisibility : uint8_t
{
	ELevelVisibility__Visible                                                        = 0,
	ELevelVisibility__Hidden                                                         = 1,
	ELevelVisibility__ELevelVisibility_MAX                                           = 2
};

/// Enum /Script/MovieSceneTracks.EParticleKey
/// Size: 0x04
enum class EParticleKey : uint8_t
{
	EParticleKey__Activate                                                           = 0,
	EParticleKey__Deactivate                                                         = 1,
	EParticleKey__Trigger                                                            = 2,
	EParticleKey__EParticleKey_MAX                                                   = 3
};

/// Enum /Script/MovieSceneTracks.EFireEventsAtPosition
/// Size: 0x04
enum class EFireEventsAtPosition : uint8_t
{
	EFireEventsAtPosition__AtStartOfEvaluation                                       = 0,
	EFireEventsAtPosition__AtEndOfEvaluation                                         = 1,
	EFireEventsAtPosition__AfterSpawn                                                = 2,
	EFireEventsAtPosition__EFireEventsAtPosition_MAX                                 = 3
};

/// Enum /Script/MovieSceneTracks.EComponentMaterialType
/// Size: 0x06
enum class EComponentMaterialType : uint32_t
{
	EComponentMaterialType__Empty                                                    = 0,
	EComponentMaterialType__IndexedMaterial                                          = 1,
	EComponentMaterialType__OverlayMaterial                                          = 2,
	EComponentMaterialType__DecalMaterial                                            = 3,
	EComponentMaterialType__VolumetricCloudMaterial                                  = 4,
	EComponentMaterialType__EComponentMaterialType_MAX                               = 5
};

