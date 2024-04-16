
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x0078 (0x000068 - 0x0000E0)
class UTemplateSequence : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class UMovieScene*)                        MovieScene                                                  OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   BoundActorClass                                             OFFSET(get<T>, {0x70, 32, 0, 0})
	CMember(TMap<FGuid, FName>)                        BoundActorComponents                                        OFFSET(get<T>, {0x90, 80, 0, 0})
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UCameraAnimationSequence : public UTemplateSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/TemplateSequence.CameraAnimationSequenceCameraStandIn
/// Size: 0x0818 (0x000028 - 0x000840)
class UCameraAnimationSequenceCameraStandIn : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2112;

public:
	DMember(float)                                     FieldOfView                                                 OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bConstrainAspectRatio                                       OFFSET(get<bool>, {0x2C, 1, 1, 0})
	DMember(float)                                     AspectRatio                                                 OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FPostProcessSettings)                      PostProcessSettings                                         OFFSET(getStruct<T>, {0x40, 1776, 0, 0})
	DMember(float)                                     PostProcessBlendWeight                                      OFFSET(get<float>, {0x730, 4, 0, 0})
	SMember(FCameraFilmbackSettings)                   Filmback                                                    OFFSET(getStruct<T>, {0x734, 12, 0, 0})
	SMember(FCameraLensSettings)                       LensSettings                                                OFFSET(getStruct<T>, {0x740, 28, 0, 0})
	SMember(FCameraFocusSettings)                      FocusSettings                                               OFFSET(getStruct<T>, {0x760, 88, 0, 0})
	DMember(float)                                     CurrentFocalLength                                          OFFSET(get<float>, {0x7B8, 4, 0, 0})
	DMember(float)                                     CurrentAperture                                             OFFSET(get<float>, {0x7BC, 4, 0, 0})
	DMember(float)                                     CurrentFocusDistance                                        OFFSET(get<float>, {0x7C0, 4, 0, 0})
};

/// Class /Script/TemplateSequence.CameraAnimationSequencePlayer
/// Size: 0x0300 (0x000028 - 0x000328)
class UCameraAnimationSequencePlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(class UObject*)                            BoundObjectOverride                                         OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UMovieSceneSequence*)                Sequence                                                    OFFSET(get<T>, {0x290, 8, 0, 0})
	SMember(FMovieSceneRootEvaluationTemplateInstance) RootTemplateInstance                                        OFFSET(getStruct<T>, {0x298, 32, 0, 0})
};

/// Class /Script/TemplateSequence.CameraAnimationSpawnableSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UCameraAnimationSpawnableSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/TemplateSequence.CameraAnimationBoundObjectInstantiator
/// Size: 0x0000 (0x000040 - 0x000040)
class UCameraAnimationBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/TemplateSequence.CameraAnimationEntitySystemLinker
/// Size: 0x0000 (0x000750 - 0x000750)
class UCameraAnimationEntitySystemLinker : public UMovieSceneEntitySystemLinker
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
};

/// Class /Script/TemplateSequence.CameraAnimationSequenceSubsystem
/// Size: 0x0018 (0x000030 - 0x000048)
class UCameraAnimationSequenceSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UMovieSceneEntitySystemLinker*)      Linker                                                      OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0010 (0x000138 - 0x000148)
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(TArray<FTemplateSectionPropertyScale>)     PropertyScales                                              OFFSET(get<T>, {0x138, 16, 0, 0})
};

/// Class /Script/TemplateSequence.SequenceCameraShakePattern
/// Size: 0x0050 (0x000028 - 0x000078)
class USequenceCameraShakePattern : public UCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UCameraAnimationSequence*)           Sequence                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     BlendInTime                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     BlendOutTime                                                OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     RandomSegmentDuration                                       OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bRandomSegment                                              OFFSET(get<bool>, {0x44, 1, 0, 0})
	CMember(class UCameraAnimationSequencePlayer*)     Player                                                      OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UCameraAnimationSequenceCameraStandIn*) CameraStandIn                                            OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/TemplateSequence.TemplateSequenceSystem
/// Size: 0x0070 (0x000040 - 0x0000B0)
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
/// Size: 0x0058 (0x000040 - 0x000098)
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x0060 (0x000290 - 0x0002F0)
class ATemplateSequenceActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FMovieSceneSequencePlaybackSettings)       PlaybackSettings                                            OFFSET(getStruct<T>, {0x298, 40, 0, 0})
	CMember(class UTemplateSequencePlayer*)            SequencePlayer                                              OFFSET(get<T>, {0x2C0, 8, 0, 0})
	SMember(FSoftObjectPath)                           TemplateSequence                                            OFFSET(getStruct<T>, {0x2C8, 24, 0, 0})
	SMember(FTemplateSequenceBindingOverrideData)      BindingOverride                                             OFFSET(getStruct<T>, {0x2E0, 12, 0, 0})


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence
	// void SetSequence(class UTemplateSequence* InSequence);                                                                   // [0x8076838] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding
	// void SetBinding(class AActor* Actor, bool bOverridesDefault);                                                            // [0x8076620] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence
	// class UTemplateSequence* LoadSequence();                                                                                 // [0x80765fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	// class UTemplateSequencePlayer* GetSequencePlayer();                                                                      // [0x80765b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence
	// class UTemplateSequence* GetSequence();                                                                                  // [0x807658c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x0008 (0x000460 - 0x000468)
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
	// class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor); // [0x8075d30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TemplateSequence.SequenceCameraShakeTestUtil
/// Size: 0x0000 (0x000028 - 0x000028)
class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache
	// bool GetPostProcessBlendCache(class APlayerController* PlayerController, int32_t PPIndex, FPostProcessSettings& OutPPSettings, float& OutPPBlendWeight); // [0x8076300] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV
	// FMinimalViewInfo GetLastFrameCameraCachePOV(class APlayerController* PlayerController);                                  // [0x80761e8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV
	// FMinimalViewInfo GetCameraCachePOV(class APlayerController* PlayerController);                                           // [0x80760d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Struct /Script/TemplateSequence.TemplateSectionPropertyScale
/// Size: 0x0130 (0x000000 - 0x000130)
class FTemplateSectionPropertyScale : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FGuid)                                     ObjectBinding                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FMovieScenePropertyBinding)                PropertyBinding                                             OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	CMember(ETemplateSectionPropertyScaleType)         PropertyScaleType                                           OFFSET(get<T>, {0x1C, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   FloatChannel                                                OFFSET(getStruct<T>, {0x20, 272, 0, 0})
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (0x000000 - 0x00000C)
class FTemplateSequenceBindingOverrideData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<UObject*>)                  Object                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bOverridesDefault                                           OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Enum /Script/TemplateSequence.ETemplateSectionPropertyScaleType
/// Size: 0x04
enum class ETemplateSectionPropertyScaleType : uint32_t
{
	ETemplateSectionPropertyScaleType__FloatProperty                                 = 0,
	ETemplateSectionPropertyScaleType__TransformPropertyLocationOnly                 = 1,
	ETemplateSectionPropertyScaleType__TransformPropertyRotationOnly                 = 2,
	ETemplateSectionPropertyScaleType__ETemplateSectionPropertyScaleType_MAX         = 3
};

