
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: MovieSceneTracks

/// Class /Script/ChaosCaching.ChaosCacheCollection
/// Size: 0x0010 (0x000028 - 0x000038)
class UChaosCacheCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UChaosCache*>)                Caches                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ChaosCaching.ChaosCacheManager
/// Size: 0x00B0 (0x000290 - 0x000340)
class AChaosCacheManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(class UChaosCacheCollection*)              CacheCollection                                             OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(ECacheMode)                                CacheMode                                                   OFFSET(get<T>, {0x298, 1, 0, 0})
	CMember(EStartMode)                                StartMode                                                   OFFSET(get<T>, {0x299, 1, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x29C, 4, 0, 0})
	CMember(TArray<FObservedComponent>)                ObservedComponents                                          OFFSET(get<T>, {0x2A8, 16, 0, 0})


	/// Functions
	// Function /Script/ChaosCaching.ChaosCacheManager.TriggerComponentByCache
	// void TriggerComponentByCache(FName InCacheName);                                                                         // [0xb0aaf68] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/ChaosCaching.ChaosCacheManager.TriggerComponent
	// void TriggerComponent(class UPrimitiveComponent* InComponent);                                                           // [0xb0aaea8] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/ChaosCaching.ChaosCacheManager.TriggerAll
	// void TriggerAll();                                                                                                       // [0xb0aae20] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/ChaosCaching.ChaosCacheManager.SetStartTime
	// void SetStartTime(float InStartTime);                                                                                    // [0xb0aad5c] Final|RequiredAPI|Native|Public 
	// Function /Script/ChaosCaching.ChaosCacheManager.SetCurrentTime
	// void SetCurrentTime(float CurrentTime);                                                                                  // [0xb0aad5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCaching.ChaosCacheManager.SetCacheCollection
	// void SetCacheCollection(class UChaosCacheCollection* InCacheCollection);                                                 // [0xb0aac9c] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/ChaosCaching.ChaosCacheManager.ResetSingleTransform
	// void ResetSingleTransform(int32_t InIndex);                                                                              // [0xb0aab84] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCaching.ChaosCacheManager.ResetAllComponentTransforms
	// void ResetAllComponentTransforms();                                                                                      // [0xb0aab70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCaching.ChaosCacheManager.EnablePlaybackByCache
	// void EnablePlaybackByCache(FName InCacheName, bool bEnable);                                                             // [0xb0aa9fc] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/ChaosCaching.ChaosCacheManager.EnablePlayback
	// void EnablePlayback(int32_t Index, bool bEnable);                                                                        // [0xb0aa8a0] Final|RequiredAPI|Native|Protected|BlueprintCallable 
};

/// Class /Script/ChaosCaching.ChaosCachePlayer
/// Size: 0x0000 (0x000340 - 0x000340)
class AChaosCachePlayer : public AChaosCacheManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
};

/// Class /Script/ChaosCaching.ChaosCache
/// Size: 0x0338 (0x000028 - 0x000360)
class UChaosCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	DMember(float)                                     RecordedDuration                                            OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(uint32_t)                                  NumRecordedFrames                                           OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
	CMember(TArray<int32_t>)                           TrackToParticle                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FPerParticleCacheData>)             ParticleTracks                                              OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<int32_t>)                           ChannelCurveToParticle                                      OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TMap<FName, FRichCurves>)                  ChannelsTracks                                              OFFSET(get<T>, {0x60, 80, 0, 0})
	CMember(TMap<FName, FCompressedRichCurves>)        CompressedChannelsTracks                                    OFFSET(get<T>, {0xB0, 80, 0, 0})
	CMember(TMap<FName, FRichCurve>)                   CurveData                                                   OFFSET(get<T>, {0x100, 80, 0, 0})
	CMember(TMap<FName, FParticleTransformTrack>)      NamedTransformTracks                                        OFFSET(get<T>, {0x150, 80, 0, 0})
	DMember(bool)                                      bCompressChannels                                           OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	DMember(float)                                     ChannelsCompressionErrorThreshold                           OFFSET(get<float>, {0x1A4, 4, 0, 0})
	DMember(float)                                     ChannelsCompressionSampleRate                               OFFSET(get<float>, {0x1A8, 4, 0, 0})
	CMember(TMap<FName, FCacheEventTrack>)             EventTracks                                                 OFFSET(get<T>, {0x1B0, 80, 0, 0})
	SMember(FCacheSpawnableTemplate)                   Spawnable                                                   OFFSET(getStruct<T>, {0x200, 208, 0, 0})
	SMember(FGuid)                                     AdapterGuid                                                 OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x2E0, 4, 0, 0})
};

/// Class /Script/ChaosCaching.MovieSceneChaosCacheSection
/// Size: 0x0028 (0x0000F8 - 0x000120)
class UMovieSceneChaosCacheSection : public UMovieSceneBaseCacheSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FMovieSceneChaosCacheParams)               Params                                                      OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
};

/// Class /Script/ChaosCaching.MovieSceneChaosCacheTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneChaosCacheTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<class UMovieSceneSection*>)         AnimationSections                                           OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Struct /Script/ChaosCaching.CacheEventBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FCacheEventBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ChaosCaching.EnableStateEvent
/// Size: 0x0008 (0x000008 - 0x000010)
class FEnableStateEvent : public FCacheEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bEnable                                                     OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/ChaosCaching.BreakingEvent
/// Size: 0x0088 (0x000008 - 0x000090)
class FBreakingEvent : public FCacheEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FVector)                                   BoundingBoxMin                                              OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FVector)                                   BoundingBoxMax                                              OFFSET(getStruct<T>, {0x78, 24, 0, 0})
};

/// Struct /Script/ChaosCaching.CollisionEvent
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FCollisionEvent : public FCacheEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   AccumulatedImpulse                                          OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   Velocity1                                                   OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FVector)                                   Velocity2                                                   OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	SMember(FVector)                                   DeltaVelocity1                                              OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	SMember(FVector)                                   DeltaVelocity2                                              OFFSET(getStruct<T>, {0x98, 24, 0, 0})
	SMember(FVector)                                   AngularVelocity1                                            OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	SMember(FVector)                                   AngularVelocity2                                            OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
	DMember(float)                                     Mass1                                                       OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     Mass2                                                       OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(float)                                     PenetrationDepth                                            OFFSET(get<float>, {0xE8, 4, 0, 0})
};

/// Struct /Script/ChaosCaching.TrailingEvent
/// Size: 0x0080 (0x000008 - 0x000088)
class FTrailingEvent : public FCacheEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   BoundingBoxMin                                              OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FVector)                                   BoundingBoxMax                                              OFFSET(getStruct<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/ChaosCaching.CacheEventTrack
/// Size: 0x0038 (0x000000 - 0x000038)
class FCacheEventTrack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UScriptStruct*)                      Struct                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<float>)                             TimeStamps                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ChaosCaching.ObservedComponent
/// Size: 0x0180 (0x000000 - 0x000180)
class FObservedComponent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FName)                                     CacheName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FComponentReference)                       ComponentRef                                                OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	SMember(FSoftComponentReference)                   SoftComponentRef                                            OFFSET(getStruct<T>, {0x30, 64, 0, 0})
	DMember(bool)                                      bIsSimulating                                               OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bPlaybackEnabled                                            OFFSET(get<bool>, {0x71, 1, 0, 0})
	SMember(FDirectoryPath)                            USDCacheDirectory                                           OFFSET(getStruct<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/ChaosCaching.ParticleTransformTrack
/// Size: 0x0048 (0x000000 - 0x000048)
class FParticleTransformTrack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FRawAnimSequenceTrack)                     RawTransformTrack                                           OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(float)                                     BeginOffset                                                 OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(bool)                                      bDeactivateOnEnd                                            OFFSET(get<bool>, {0x34, 1, 0, 0})
	CMember(TArray<float>)                             KeyTimestamps                                               OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/ChaosCaching.PerParticleCacheData
/// Size: 0x0098 (0x000000 - 0x000098)
class FPerParticleCacheData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FParticleTransformTrack)                   TransformData                                               OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	CMember(TMap<FName, FRichCurve>)                   CurveData                                                   OFFSET(get<T>, {0x48, 80, 0, 0})
};

/// Struct /Script/ChaosCaching.CacheSpawnableTemplate
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FCacheSpawnableTemplate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UObject*)                            DuplicatedTemplate                                          OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                ComponentTransform                                          OFFSET(getStruct<T>, {0x70, 96, 0, 0})
};

/// Struct /Script/ChaosCaching.RichCurves
/// Size: 0x0010 (0x000000 - 0x000010)
class FRichCurves : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRichCurve>)                        RichCurves                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ChaosCaching.CompressedRichCurves
/// Size: 0x0010 (0x000000 - 0x000010)
class FCompressedRichCurves : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FCompressedRichCurve>)              CompressedRichCurves                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ChaosCaching.MovieSceneChaosCacheParams
/// Size: 0x0008 (0x000020 - 0x000028)
class FMovieSceneChaosCacheParams : public FMovieSceneBaseCacheParams
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UChaosCacheCollection*)              CacheCollection                                             OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/ChaosCaching.MovieSceneChaosCacheSectionTemplateParameters
/// Size: 0x0028 (0x000008 - 0x000030)
class FMovieSceneChaosCacheSectionTemplateParameters : public FMovieSceneBaseCacheSectionTemplateParameters
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FMovieSceneChaosCacheParams)               ChaosCacheParams                                            OFFSET(getStruct<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/ChaosCaching.MovieSceneChaosCacheSectionTemplate
/// Size: 0x0030 (0x000020 - 0x000050)
class FMovieSceneChaosCacheSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FMovieSceneChaosCacheSectionTemplateParameters) Params                                                 OFFSET(getStruct<T>, {0x20, 48, 0, 0})
};

/// Enum /Script/ChaosCaching.ECacheMode
/// Size: 0x04
enum class ECacheMode : uint8_t
{
	ECacheMode__None                                                                 = 0,
	ECacheMode__Play                                                                 = 1,
	ECacheMode__Record                                                               = 2,
	ECacheMode__ECacheMode_MAX                                                       = 3
};

/// Enum /Script/ChaosCaching.EStartMode
/// Size: 0x03
enum class EStartMode : uint8_t
{
	EStartMode__Timed                                                                = 0,
	EStartMode__Triggered                                                            = 1,
	EStartMode__EStartMode_MAX                                                       = 2
};

