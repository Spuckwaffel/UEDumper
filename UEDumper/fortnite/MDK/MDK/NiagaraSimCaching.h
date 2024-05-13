
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
/// dependency: Niagara

/// Class /Script/NiagaraSimCaching.MovieSceneNiagaraCacheSection
/// Size: 0x0090 (0x0000F8 - 0x000188)
class UMovieSceneNiagaraCacheSection : public UMovieSceneBaseCacheSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FMovieSceneNiagaraCacheParams)             Params                                                      OFFSET(getStruct<T>, {0xF8, 136, 0, 0})
	DMember(bool)                                      bCacheOutOfDate                                             OFFSET(get<bool>, {0x180, 1, 0, 0})
};

/// Class /Script/NiagaraSimCaching.MovieSceneNiagaraCacheTrack
/// Size: 0x0030 (0x000098 - 0x0000C8)
class UMovieSceneNiagaraCacheTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bIsRecording                                                OFFSET(get<bool>, {0xA8, 1, 0, 0})
	CMember(TArray<class UMovieSceneSection*>)         AnimationSections                                           OFFSET(get<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      bCacheRecordingEnabled                                      OFFSET(get<bool>, {0xC0, 1, 0, 0})
};

/// Struct /Script/NiagaraSimCaching.MovieSceneNiagaraCacheParams
/// Size: 0x0068 (0x000020 - 0x000088)
class FMovieSceneNiagaraCacheParams : public FMovieSceneBaseCacheParams
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FNiagaraSimCacheCreateParameters)          CacheParameters                                             OFFSET(getStruct<T>, {0x20, 88, 0, 0})
	CMember(class UNiagaraSimCache*)                   SimCache                                                    OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      bLockCacheToReadOnly                                        OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      bOverrideQualityLevel                                       OFFSET(get<bool>, {0x81, 1, 0, 0})
	CMember(EPerQualityLevels)                         RecordQualityLevel                                          OFFSET(get<T>, {0x82, 1, 0, 0})
	CMember(ENiagaraSimCacheSectionPlayMode)           CacheReplayPlayMode                                         OFFSET(get<T>, {0x83, 1, 0, 0})
	CMember(ENiagaraSimCacheSectionStretchMode)        SectionStretchMode                                          OFFSET(get<T>, {0x84, 1, 0, 0})
};

/// Struct /Script/NiagaraSimCaching.MovieSceneNiagaraSectionTemplateParameter
/// Size: 0x0098 (0x000000 - 0x000098)
class FMovieSceneNiagaraSectionTemplateParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMovieSceneFrameRange)                     SectionRange                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FMovieSceneNiagaraCacheParams)             Params                                                      OFFSET(getStruct<T>, {0x10, 136, 0, 0})
};

/// Struct /Script/NiagaraSimCaching.MovieSceneNiagaraCacheSectionTemplate
/// Size: 0x0010 (0x000010 - 0x000020)
class FMovieSceneNiagaraCacheSectionTemplate : public FMovieSceneTrackImplementation
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FMovieSceneNiagaraSectionTemplateParameter>) CacheSections                                      OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Enum /Script/NiagaraSimCaching.ENiagaraSimCacheSectionPlayMode
/// Size: 0x02
enum class ENiagaraSimCacheSectionPlayMode : uint8_t
{
	ENiagaraSimCacheSectionPlayMode__SimWithoutCache                                 = 0,
	ENiagaraSimCacheSectionPlayMode__DisplayCacheOnly                                = 1
};

/// Enum /Script/NiagaraSimCaching.ENiagaraSimCacheSectionStretchMode
/// Size: 0x02
enum class ENiagaraSimCacheSectionStretchMode : uint8_t
{
	ENiagaraSimCacheSectionStretchMode__Repeat                                       = 0,
	ENiagaraSimCacheSectionStretchMode__TimeDilate                                   = 1
};

