
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

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

/// Class /Script/Tweening.TweenSplineInfo
/// Size: 0x0010 (0x000028 - 0x000038)
class UTweenSplineInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(8,15646) /* TWeakObjectPtr<USplineComponent*> */ __um(Spline);                                   // 0x0028   (0x0008)  
	ETweenSplineAlignmentOption                        Alignment;                                                  // 0x0030   (0x0001)  
	bool                                               bIgnorePitch;                                               // 0x0031   (0x0001)  
	bool                                               bIgnoreYaw;                                                 // 0x0032   (0x0001)  
	bool                                               bIgnoreRoll;                                                // 0x0033   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/Tweening.ActorTweening
/// Size: 0x0000 (0x000028 - 0x000028)
class UActorTweening : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Tweening.ActorTweening.BP_TransformAlongSplineTo
	// void BP_TransformAlongSplineTo(int32_t& OutTweenId, class UObject* ContextObject, class AActor*& Target, class USplineComponent* Spline, ETweenSplineAlignmentOption Alignment, bool bIgnorePitch, bool bIgnoreYaw, bool bIgnoreRoll, FTweenOptionalFloat FromOptions, float ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, class UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // [0x9948848] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Tweening.TweenMaterialParameterInfo
/// Size: 0x0008 (0x000028 - 0x000030)
class UTweenMaterialParameterInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              ParameterName;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/Tweening.MaterialTweening
/// Size: 0x0000 (0x000028 - 0x000028)
class UMaterialTweening : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Tweening.MaterialTweening.BP_ScalarParamTo
	// void BP_ScalarParamTo(int32_t& OutTweenId, class UObject* ContextObject, class UMaterialInstanceDynamic*& Target, FName ParameterName, FTweenOptionalFloat FromOptions, float ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, class UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // [0x9947d5c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Tweening.MaterialTweening.BP_ColorParamTo
	// void BP_ColorParamTo(int32_t& OutTweenId, class UObject* ContextObject, class UMaterialInstanceDynamic*& Target, FName ParameterName, FTweenOptionalLinearColor FromOptions, FLinearColor ToValue, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, class UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // [0x9946440] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Tweening.TweenManager
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UTweenManager : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(80,15647) /* TMap<int32_t, UObject*> */ __um(TweenContexts);                                     // 0x0038   (0x0050)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0088   (0x0060)  MISSED


	/// Functions
	// Function /Script/Tweening.TweenManager.StopTweens
	// void StopTweens(TArray<int32_t> InTweenIds);                                                                          // [0x994d494] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.StopTween
	// bool StopTween(int32_t InTweenId);                                                                                    // [0x994d408] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.SetTweenTiming
	// bool SetTweenTiming(int32_t InTweenId, float InDuration, float InDelayAtBeginning, float InDelayAtEnd);               // [0x994d2b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Tweening.TweenManager.ResetTweens
	// void ResetTweens(TArray<int32_t> InTweenIds, ETweenResetDestination InDestination);                                   // [0x994d1a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.ResetTween
	// bool ResetTween(int32_t InTweenId, ETweenResetDestination InDestination);                                             // [0x994d0e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.PlayTweenWithLooping
	// bool PlayTweenWithLooping(int32_t InTweenId, ETweenLoopType InLoopType, int32_t InLoopCount, ETweenPlayDirection InPlayDirection); // [0x994ce98] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.PlayTweens
	// void PlayTweens(TArray<int32_t> InTweenIds, ETweenPlayDirection InPlayDirection);                                     // [0x994cfd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.PlayTween
	// bool PlayTween(int32_t InTweenId, ETweenPlayDirection InPlayDirection);                                               // [0x994cdd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.KillTweens
	// void KillTweens(TArray<int32_t> InTweenIds);                                                                          // [0x994cc7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.KillTween
	// bool KillTween(int32_t InTweenId);                                                                                    // [0x994cbf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenManager.HasTween
	// bool HasTween(int32_t InTweenId);                                                                                     // [0x994cb64] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/Tweening.TweenSequenceEntry
/// Size: 0x0020 (0x000000 - 0x000020)
struct FTweenSequenceEntry
{ 
	class UTweenSequence*                              EntrySequence;                                              // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0008   (0x0018)  MISSED
};

/// Class /Script/Tweening.TweenSequence
/// Size: 0x0068 (0x000028 - 0x000090)
class UTweenSequence : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FTweenSequenceEntry>                        SequenceEntries;                                            // 0x0028   (0x0010)  
	class UTweenManager*                               TweenManager;                                               // 0x0038   (0x0008)  
	TArray<FTimerHandle>                               TimerHandles;                                               // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x0050   (0x0040)  MISSED


	/// Functions
	// Function /Script/Tweening.TweenSequence.Stop
	// void Stop();                                                                                                          // [0x994d3f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenSequence.Play
	// void Play(ETweenPlayDirection InPlayDirection);                                                                       // [0x994cd58] Final|Native|Public|BlueprintCallable 
	// Function /Script/Tweening.TweenSequence.BP_JoinTween
	// void BP_JoinTween(int32_t& TweenId, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, class UTweenSequence*& OutSequence); // [0x99470f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Tweening.TweenSequence.BP_JoinSequence
	// void BP_JoinSequence(class UTweenSequence*& SequenceToAppend, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, class UTweenSequence*& OutSequence); // [0x9946e8c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Tweening.TweenSequence.BP_AppendTween
	// void BP_AppendTween(int32_t& TweenId, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, class UTweenSequence*& OutSequence); // [0x994629c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Tweening.TweenSequence.BP_AppendSequence
	// void BP_AppendSequence(class UTweenSequence*& SequenceToAppend, float AdditionalDelayAtBeginning, float AdditionalDelayAtEnd, class UTweenSequence*& OutSequence); // [0x9946030] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Tweening.WidgetTweening
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetTweening : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Tweening.WidgetTweening.BP_TranslationTo
	// void BP_TranslationTo(int32_t& OutTweenId, class UObject* ContextObject, class UWidget* Target, FTweenOptionalVector2D FromOptions, FVector2D ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, class UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // [0x994c074] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Tweening.WidgetTweening.BP_TransformShearTo
	// void BP_TransformShearTo(int32_t& OutTweenId, class UObject* ContextObject, class UWidget* Target, FTweenOptionalVector2D FromOptions, FVector2D ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, class UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // [0x994b584] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Tweening.WidgetTweening.BP_TransformScaleTo
	// void BP_TransformScaleTo(int32_t& OutTweenId, class UObject* ContextObject, class UWidget* Target, FTweenOptionalVector2D FromOptions, FVector2D ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, class UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // [0x994aa94] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Tweening.WidgetTweening.BP_TransformPivotTo
	// void BP_TransformPivotTo(int32_t& OutTweenId, class UObject* ContextObject, class UWidget* Target, FTweenOptionalVector2D FromOptions, FVector2D ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, class UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // [0x9949fa4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Tweening.WidgetTweening.BP_TransformAngleTo
	// void BP_TransformAngleTo(int32_t& OutTweenId, class UObject* ContextObject, class UWidget* Target, FTweenOptionalFloat FromOptions, float ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, class UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // [0x99494e4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Tweening.WidgetTweening.BP_OpacityTo
	// void BP_OpacityTo(int32_t& OutTweenId, class UObject* ContextObject, class UWidget* Target, FTweenOptionalFloat FromOptions, float ToValue, bool bIsRelative, float duration, FTweenDelayOptions DelayOptions, ETweenBuiltInEasing EasingFunction, class UCurveFloat* EasingCurve, FTweenLoopOptions LoopOptions, bool bAutoPlay, bool bAutoKill); // [0x994729c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Tweening.TweenOptionalFloat
/// Size: 0x0008 (0x000000 - 0x000008)
struct FTweenOptionalFloat
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	bool                                               bUseSpecificValue;                                          // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/Tweening.TweenOptionalVector2D
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTweenOptionalVector2D
{ 
	FVector2D                                          Value;                                                      // 0x0000   (0x0010)  
	bool                                               bUseSpecificValue;                                          // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/Tweening.TweenOptionalVector
/// Size: 0x0020 (0x000000 - 0x000020)
struct FTweenOptionalVector
{ 
	FVector                                            Value;                                                      // 0x0000   (0x0018)  
	bool                                               bUseSpecificValue;                                          // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/Tweening.TweenOptionalVector4
/// Size: 0x0030 (0x000000 - 0x000030)
struct FTweenOptionalVector4
{ 
	FVector4                                           Value;                                                      // 0x0000   (0x0020)  
	bool                                               bUseSpecificValue;                                          // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0021   (0x000F)  MISSED
};

/// Struct /Script/Tweening.TweenOptionalLinearColor
/// Size: 0x0014 (0x000000 - 0x000014)
struct FTweenOptionalLinearColor
{ 
	FLinearColor                                       Value;                                                      // 0x0000   (0x0010)  
	bool                                               bUseSpecificValue;                                          // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/Tweening.TweenOptionalRotator
/// Size: 0x0020 (0x000000 - 0x000020)
struct FTweenOptionalRotator
{ 
	FRotator                                           Value;                                                      // 0x0000   (0x0018)  
	bool                                               bUseSpecificValue;                                          // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/Tweening.TweenDelayOptions
/// Size: 0x000C (0x000000 - 0x00000C)
struct FTweenDelayOptions
{ 
	float                                              DelayAtBeginning;                                           // 0x0000   (0x0004)  
	float                                              DelayAtEnd;                                                 // 0x0004   (0x0004)  
	ETweenInitializationPoint                          InitializationPoint;                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/Tweening.TweenLoopOptions
/// Size: 0x0008 (0x000000 - 0x000008)
struct FTweenLoopOptions
{ 
	ETweenLoopType                                     LoopType;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            LoopCount;                                                  // 0x0004   (0x0004)  
};

