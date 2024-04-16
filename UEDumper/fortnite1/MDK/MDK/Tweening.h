
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Tweening.TweenSplineInfo
/// Size: 0x0010 (0x000028 - 0x000038)
class UTweenSplineInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<USplineComponent*>)         Spline                                                      OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(ETweenSplineAlignmentOption)               Alignment                                                   OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(bool)                                      bIgnorePitch                                                OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bIgnoreYaw                                                  OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bIgnoreRoll                                                 OFFSET(get<bool>, {0x33, 1, 0, 0})
};

/// Class /Script/Tweening.ActorTweening
/// Size: 0x0000 (0x000028 - 0x000028)
class UActorTweening : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Tweening.ActorTweening.BP_TransformAlongSplineTo
	// void BP_TransformAlongSplineTo(int32_t& OutTweenId, class UObject* ContextObject, class AActor*& Target, class USplineComponent* Spline, ETweenSplineAlignmentOption Alignment, bool bIgnorePitch, bool bIgnoreYaw, bool bIgnoreRoll, FTweenOptionalFloat FromOptions, float ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, class UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // [0xa534c00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Tweening.TweenMaterialParameterInfo
/// Size: 0x0008 (0x000028 - 0x000030)
class UTweenMaterialParameterInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Class /Script/Tweening.MaterialTweening
/// Size: 0x0000 (0x000028 - 0x000028)
class UMaterialTweening : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Tweening.MaterialTweening.BP_ScalarParamTo
	// void BP_ScalarParamTo(int32_t& OutTweenId, class UObject* ContextObject, class UMaterialInstanceDynamic*& Target, FName ParameterName, FTweenOptionalFloat FromOptions, float ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, class UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // [0xa534068] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Tweening.MaterialTweening.BP_ColorParamTo
	// void BP_ColorParamTo(int32_t& OutTweenId, class UObject* ContextObject, class UMaterialInstanceDynamic*& Target, FName ParameterName, FTweenOptionalLinearColor FromOptions, FLinearColor ToValue, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, class UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // [0xa532a34] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Tweening.TweenManager
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UTweenManager : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TMap<int32_t, UObject*>)                   TweenContexts                                               OFFSET(get<T>, {0x38, 80, 0, 0})


	/// Functions
	// Function /Script/Tweening.TweenManager.StopTweens
	// void StopTweens(TArray<int32_t> InTweenIds);                                                                             // [0xa5387ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.StopTween
	// bool StopTween(int32_t InTweenId);                                                                                       // [0xa538720] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.SetTweenTiming
	// bool SetTweenTiming(int32_t InTweenId, float InDuration, float InDelayAtBeginning, float InDelayAtEnd);                  // [0xa5384d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Tweening.TweenManager.ResetTweens
	// void ResetTweens(TArray<int32_t> InTweenIds, ETweenResetDestination InDestination);                                      // [0xa53833c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.ResetTween
	// bool ResetTween(int32_t InTweenId, ETweenResetDestination InDestination);                                                // [0xa5381ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.PlayTweenWithLooping
	// bool PlayTweenWithLooping(int32_t InTweenId, ETweenLoopType InLoopType, int32_t InLoopCount, ETweenPlayDirection InPlayDirection); // [0xa537e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.PlayTweens
	// void PlayTweens(TArray<int32_t> InTweenIds, ETweenPlayDirection InPlayDirection);                                        // [0xa538058] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.PlayTween
	// bool PlayTween(int32_t InTweenId, ETweenPlayDirection InPlayDirection);                                                  // [0xa537cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.KillTweens
	// void KillTweens(TArray<int32_t> InTweenIds);                                                                             // [0xa537af4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.KillTween
	// bool KillTween(int32_t InTweenId);                                                                                       // [0xa537a28] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.HasTween
	// bool HasTween(int32_t InTweenId);                                                                                        // [0xa53795c] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Tweening.TweenSequence
/// Size: 0x0068 (0x000028 - 0x000090)
class UTweenSequence : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<FTweenSequenceEntry>)               SequenceEntries                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(class UTweenManager*)                      TweenManager                                                OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<FTimerHandle>)                      TimerHandles                                                OFFSET(get<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/Tweening.TweenSequence.Stop
	// void Stop();                                                                                                             // [0xa53870c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenSequence.Play
	// void Play(ETweenPlayDirection InPlayDirection);                                                                          // [0xa537c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenSequence.BP_JoinTween
	// void BP_JoinTween(int32_t& TweenId, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, class UTweenSequence*& OutSequence); // [0xa533768] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Tweening.TweenSequence.BP_JoinSequence
	// void BP_JoinSequence(class UTweenSequence*& SequenceToAppend, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, class UTweenSequence*& OutSequence); // [0xa5334ec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Tweening.TweenSequence.BP_AppendTween
	// void BP_AppendTween(int32_t& TweenId, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, class UTweenSequence*& OutSequence); // [0xa532854] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Tweening.TweenSequence.BP_AppendSequence
	// void BP_AppendSequence(class UTweenSequence*& SequenceToAppend, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, class UTweenSequence*& OutSequence); // [0xa5325d8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Tweening.WidgetTweening
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetTweening : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Tweening.WidgetTweening.BP_TranslationTo
	// void BP_TranslationTo(int32_t& OutTweenId, class UObject* ContextObject, class UWidget* Target, FTweenOptionalVector2D FromOptions, FVector2D ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, class UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // [0xa537210] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Tweening.WidgetTweening.BP_TransformShearTo
	// void BP_TransformShearTo(int32_t& OutTweenId, class UObject* ContextObject, class UWidget* Target, FTweenOptionalVector2D FromOptions, FVector2D ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, class UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // [0xa536ac4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Tweening.WidgetTweening.BP_TransformScaleTo
	// void BP_TransformScaleTo(int32_t& OutTweenId, class UObject* ContextObject, class UWidget* Target, FTweenOptionalVector2D FromOptions, FVector2D ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, class UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // [0xa536378] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Tweening.WidgetTweening.BP_TransformPivotTo
	// void BP_TransformPivotTo(int32_t& OutTweenId, class UObject* ContextObject, class UWidget* Target, FTweenOptionalVector2D FromOptions, FVector2D ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, class UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // [0xa535c2c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Tweening.WidgetTweening.BP_TransformAngleTo
	// void BP_TransformAngleTo(int32_t& OutTweenId, class UObject* ContextObject, class UWidget* Target, FTweenOptionalFloat FromOptions, float ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, class UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // [0xa53550c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Tweening.WidgetTweening.BP_OpacityTo
	// void BP_OpacityTo(int32_t& OutTweenId, class UObject* ContextObject, class UWidget* Target, FTweenOptionalFloat FromOptions, float ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, class UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // [0xa533948] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Tweening.TweenOptionalFloat
/// Size: 0x0008 (0x000000 - 0x000008)
class FTweenOptionalFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bUseSpecificValue                                           OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/Tweening.TweenOptionalVector2D
/// Size: 0x0018 (0x000000 - 0x000018)
class FTweenOptionalVector2D : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector2D)                                 Value                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bUseSpecificValue                                           OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/Tweening.TweenOptionalVector
/// Size: 0x0020 (0x000000 - 0x000020)
class FTweenOptionalVector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      bUseSpecificValue                                           OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/Tweening.TweenOptionalVector4
/// Size: 0x0030 (0x000000 - 0x000030)
class FTweenOptionalVector4 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector4)                                  Value                                                       OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(bool)                                      bUseSpecificValue                                           OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/Tweening.TweenOptionalLinearColor
/// Size: 0x0014 (0x000000 - 0x000014)
class FTweenOptionalLinearColor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FLinearColor)                              Value                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bUseSpecificValue                                           OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/Tweening.TweenOptionalRotator
/// Size: 0x0020 (0x000000 - 0x000020)
class FTweenOptionalRotator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRotator)                                  Value                                                       OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      bUseSpecificValue                                           OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/Tweening.TweenDelayOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FTweenDelayOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     DelayAtBeginning                                            OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DelayAtEnd                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(ETweenInitializationPoint)                 InitializationPoint                                         OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/Tweening.TweenLoopOptions
/// Size: 0x0008 (0x000000 - 0x000008)
class FTweenLoopOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(ETweenLoopType)                            LoopType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   LoopCount                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Tweening.TweenSequenceEntry
/// Size: 0x0020 (0x000000 - 0x000020)
class FTweenSequenceEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UTweenSequence*)                     EntrySequence                                               OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Enum /Script/Tweening.ETweenSplineAlignmentOption
/// Size: 0x04
enum class ETweenSplineAlignmentOption : uint8_t
{
	ETweenSplineAlignmentOption__NoAlignment                                         = 0,
	ETweenSplineAlignmentOption__AlignWithSpline                                     = 1,
	ETweenSplineAlignmentOption__AlignWithTween                                      = 2,
	ETweenSplineAlignmentOption__ETweenSplineAlignmentOption_MAX                     = 3
};

/// Enum /Script/Tweening.ETweenPlayDirection
/// Size: 0x03
enum class ETweenPlayDirection : uint8_t
{
	ETweenPlayDirection__Forward                                                     = 0,
	ETweenPlayDirection__Backward                                                    = 1,
	ETweenPlayDirection__ETweenPlayDirection_MAX                                     = 2
};

/// Enum /Script/Tweening.ETweenInitializationPoint
/// Size: 0x03
enum class ETweenInitializationPoint : uint8_t
{
	ETweenInitializationPoint__AfterDelay                                            = 0,
	ETweenInitializationPoint__OnPlay                                                = 1,
	ETweenInitializationPoint__ETweenInitializationPoint_MAX                         = 2
};

/// Enum /Script/Tweening.ETweenLoopType
/// Size: 0x04
enum class ETweenLoopType : uint8_t
{
	ETweenLoopType__None                                                             = 0,
	ETweenLoopType__Repeat                                                           = 1,
	ETweenLoopType__PingPong                                                         = 2,
	ETweenLoopType__ETweenLoopType_MAX                                               = 3
};

/// Enum /Script/Tweening.ETweenResetDestination
/// Size: 0x03
enum class ETweenResetDestination : uint8_t
{
	ETweenResetDestination__Beginning                                                = 0,
	ETweenResetDestination__End                                                      = 1,
	ETweenResetDestination__ETweenResetDestination_MAX                               = 2
};

/// Enum /Script/Tweening.ETweenBuiltInEasing
/// Size: 0x32
enum class ETweenBuiltInEasing : uint8_t
{
	ETweenBuiltInEasing__Linear                                                      = 0,
	ETweenBuiltInEasing__SinIn                                                       = 1,
	ETweenBuiltInEasing__SinOut                                                      = 2,
	ETweenBuiltInEasing__SinInOut                                                    = 3,
	ETweenBuiltInEasing__QuadIn                                                      = 4,
	ETweenBuiltInEasing__QuadOut                                                     = 5,
	ETweenBuiltInEasing__QuadInOut                                                   = 6,
	ETweenBuiltInEasing__CubicIn                                                     = 7,
	ETweenBuiltInEasing__CubicOut                                                    = 8,
	ETweenBuiltInEasing__CubicInOut                                                  = 9,
	ETweenBuiltInEasing__QuartIn                                                     = 10,
	ETweenBuiltInEasing__QuartOut                                                    = 11,
	ETweenBuiltInEasing__QuartInOut                                                  = 12,
	ETweenBuiltInEasing__QuintIn                                                     = 13,
	ETweenBuiltInEasing__QuintOut                                                    = 14,
	ETweenBuiltInEasing__QuintInOut                                                  = 15,
	ETweenBuiltInEasing__ExpoIn                                                      = 16,
	ETweenBuiltInEasing__ExpoOut                                                     = 17,
	ETweenBuiltInEasing__ExpoInOut                                                   = 18,
	ETweenBuiltInEasing__CircIn                                                      = 19,
	ETweenBuiltInEasing__CircOut                                                     = 20,
	ETweenBuiltInEasing__CircInOut                                                   = 21,
	ETweenBuiltInEasing__BackIn                                                      = 22,
	ETweenBuiltInEasing__BackOut                                                     = 23,
	ETweenBuiltInEasing__BackInOut                                                   = 24,
	ETweenBuiltInEasing__ElasticIn                                                   = 25,
	ETweenBuiltInEasing__ElasticOut                                                  = 26,
	ETweenBuiltInEasing__ElasticInOut                                                = 27,
	ETweenBuiltInEasing__BounceIn                                                    = 28,
	ETweenBuiltInEasing__BounceOut                                                   = 29,
	ETweenBuiltInEasing__BounceInOut                                                 = 30,
	ETweenBuiltInEasing__ETweenBuiltInEasing_MAX                                     = 31
};

