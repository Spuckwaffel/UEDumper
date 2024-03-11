
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
/// dependency: MovieScene

/// Enum /Script/DaySequence.EDayNightCycleMode
/// Size: 0x06
enum class EDayNightCycleMode : uint8_t
{
	EDayNightCycleMode__Default                                                      = 0,
	EDayNightCycleMode__FixedTime                                                    = 1,
	EDayNightCycleMode__StartAtSpecifiedTime                                         = 2,
	EDayNightCycleMode__RandomFixedTime                                              = 3,
	EDayNightCycleMode__RandomStartTime                                              = 4,
	EDayNightCycleMode__EDayNightCycleMode_MAX                                       = 5
};

/// Enum /Script/DaySequence.EDaySequenceModifierBlendMode
/// Size: 0x03
enum class EDaySequenceModifierBlendMode : uint8_t
{
	EDaySequenceModifierBlendMode__None                                              = 0,
	EDaySequenceModifierBlendMode__Distance                                          = 1,
	EDaySequenceModifierBlendMode__EDaySequenceModifierBlendMode_MAX                 = 2
};

/// Class /Script/DaySequence.DaySequenceConditionTag
/// Size: 0x0020 (0x000028 - 0x000048)
class UDaySequenceConditionTag : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0000   (0x0048)  MISSED


	/// Functions
	// Function /Script/DaySequence.DaySequenceConditionTag.SetupBroadcastBindings
	// void SetupBroadcastBindings();                                                                                        // [0x15d82c4] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/DaySequence.DaySequenceConditionTag.GetConditionName
	// FString GetConditionName();                                                                                           // [0x67b0294] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DaySequence.DaySequenceConditionTag.Evaluate
	// bool Evaluate();                                                                                                      // [0x3bf4468] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/DaySequence.DaySequenceConditionTag.BroadcastOnConditionValueChanged
	// void BroadcastOnConditionValueChanged();                                                                              // [0x29048ec] Final|Native|Protected|BlueprintCallable|Const 
};

/// Class /Script/DaySequence.DaySequenceModifierEasingFunction
/// Size: 0x0048 (0x000028 - 0x000070)
class UDaySequenceModifierEasingFunction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0000   (0x0070)  MISSED
};

/// Class /Script/DaySequence.DaySequenceModifierComponent
/// Size: 0x01B0 (0x000220 - 0x0003D0)
class UDaySequenceModifierComponent : public USceneComponent
{ 
public:
	class UDaySequenceModifierEasingFunction*          EasingFunction;                                             // 0x0220   (0x0008)  
	class ADaySequenceActor*                           TargetActor;                                                // 0x0228   (0x0008)  
	TArray<FComponentReference>                        VolumeShapeComponents;                                      // 0x0230   (0x0010)  
	SDK_UNDEFINED(8,1961) /* TWeakObjectPtr<AActor*> */ __um(ExternalVolumeBlendTarget);                           // 0x0240   (0x0008)  
	class UDaySequence*                                UserDaySequence;                                            // 0x0248   (0x0008)  
	class UDaySequence*                                ProceduralDaySequence;                                      // 0x0250   (0x0008)  
	SDK_UNDEFINED(80,1962) /* TMap<FName, FDaySequenceModifierNamedSequence> */ __um(AdditionalNamedDaySequences); // 0x0258   (0x0050)  
	SDK_UNDEFINED(80,1963) /* TMap<FName, FDaySequenceModifierNamedSequence> */ __um(TransientCollectionSequences); // 0x02A8   (0x0050)  
	class UDaySequenceCollectionAsset*                 DaySequenceCollection;                                      // 0x02F8   (0x0008)  
	int32_t                                            Bias;                                                       // 0x0300   (0x0004)  
	float                                              DayNightCycleTime;                                          // 0x0304   (0x0004)  
	float                                              BlendAmount;                                                // 0x0308   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x030C   (0x0004)  MISSED
	float                                              CustomVolumeBlendWeight;                                    // 0x0310   (0x0004)  
	EDayNightCycleMode                                 DayNightCycle;                                              // 0x0314   (0x0001)  
	EDaySequenceModifierBlendMode                      BlendMode;                                                  // 0x0315   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0316   (0x0002)  MISSED
	SDK_UNDEFINED(16,1964) /* FMulticastInlineDelegate */ __um(OnPostReinitializeSubSequences);                    // 0x0318   (0x0010)  
	SDK_UNDEFINED(16,1965) /* FMulticastInlineDelegate */ __um(OnPostEnableModifier);                              // 0x0328   (0x0010)  
	SDK_UNDEFINED(16,1966) /* FMulticastInlineDelegate */ __um(OnVolumeBlendTargetOverlapBegin);                   // 0x0338   (0x0010)  
	SDK_UNDEFINED(16,1967) /* FMulticastInlineDelegate */ __um(OnVolumeBlendTargetOverlapEnd);                     // 0x0348   (0x0010)  
	bool                                               bIgnoreBias : 1;                                            // 0x0358:0 (0x0001)  
	bool                                               bUseVolume : 1;                                             // 0x0358:1 (0x0001)  
	bool                                               bIsComponentEnabled : 1;                                    // 0x0358:2 (0x0001)  
	bool                                               bIsEnabled : 1;                                             // 0x0358:3 (0x0001)  
	bool                                               bPreview : 1;                                               // 0x0358:4 (0x0001)  
	unsigned char                                      UnknownBit02 : 1;                                           // 0x0358:5 (0x0001)  MISSED
	bool                                               bUseCollection : 1;                                         // 0x0358:6 (0x0001)  
	unsigned char                                      UnknownData03_6[0x77];                                      // 0x0359   (0x0077)  MISSED


	/// Functions
	// Function /Script/DaySequence.DaySequenceModifierComponent.UnbindFromDaySequenceActor
	// void UnbindFromDaySequenceActor();                                                                                    // [0x2901594] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.SetVolumeCollisionEnabled
	// void SetVolumeCollisionEnabled(TEnumAsByte<ECollisionEnabled> InCollisionType);                                       // [0x1f2a750] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/DaySequence.DaySequenceModifierComponent.SetUserDaySequence
	// void SetUserDaySequence(class UDaySequence* InDaySequence);                                                           // [0x8116e64] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.SetCustomVolumeBlendWeight
	// void SetCustomVolumeBlendWeight(float Weight);                                                                        // [0x33bde8c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.ResetOverrides
	// void ResetOverrides();                                                                                                // [0x8116a04] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.OnVolumeOverlapEnd
	// void OnVolumeOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2de2ad0] Final|Native|Private 
	// Function /Script/DaySequence.DaySequenceModifierComponent.OnVolumeOverlapBegin
	// void OnVolumeOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2de27d0] Final|Native|Private|HasOutParms 
	// Function /Script/DaySequence.DaySequenceModifierComponent.MuteNamedSequence
	// void MuteNamedSequence(FName SequenceKey, bool bState);                                                               // [0x81167d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.IsNamedSequenceMuted
	// bool IsNamedSequenceMuted(FName SequenceKey);                                                                         // [0x8116700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceModifierComponent.IsBlendTargetInAnyVolume
	// bool IsBlendTargetInAnyVolume();                                                                                      // [0x1f2a990] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.GetCurrentBlendWeight
	// float GetCurrentBlendWeight();                                                                                        // [0x1f2a70c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceModifierComponent.EnableModifier
	// void EnableModifier();                                                                                                // [0x2901da8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.EnableDistanceVolumeBlends
	// void EnableDistanceVolumeBlends(class AActor* InActor);                                                               // [0x3617910] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.EnableComponent
	// void EnableComponent();                                                                                               // [0x3b0144c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.DisableModifier
	// void DisableModifier();                                                                                               // [0x2902144] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.DisableComponent
	// void DisableComponent();                                                                                              // [0x8115c70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.BindToDaySequenceActor
	// void BindToDaySequenceActor(class ADaySequenceActor* DaySequenceActor);                                               // [0x2901e70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddVisibilityOverride
	// void AddVisibilityOverride(class UObject* Object, bool bValue);                                                       // [0x8115a64] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddVectorOverride
	// void AddVectorOverride(class UObject* Object, FName PropertyName, FVector Value);                                     // [0x81158b4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddTransformOverride
	// void AddTransformOverride(class UObject* Object, FTransform Value);                                                   // [0x81156b0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddStaticTimeOfDayOverride
	// void AddStaticTimeOfDayOverride(class ADaySequenceActor* Actor, float Hours);                                         // [0x81155ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddScalarOverride
	// void AddScalarOverride(class UObject* Object, FName PropertyName, double Value);                                      // [0x81154f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddScalarMaterialParameterOverride
	// void AddScalarMaterialParameterOverride(class UObject* Object, int32_t MaterialIndex, FName ParameterName, float Value); // [0x81153b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddMaterialOverride
	// void AddMaterialOverride(class UObject* Object, int32_t MaterialIndex, class UMaterialInterface* Value);              // [0x81152bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddColorOverride
	// void AddColorOverride(class UObject* Object, FName PropertyName, FLinearColor Value);                                 // [0x8115118] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddColorMaterialParameterOverride
	// void AddColorMaterialParameterOverride(class UObject* Object, int32_t MaterialIndex, FName ParameterName, FLinearColor Value); // [0x8114f38] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceModifierComponent.AddBoolOverride
	// void AddBoolOverride(class UObject* Object, FName PropertyName, bool bValue);                                         // [0x8114e3c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/DaySequence.DaySequenceBindingReferences
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FDaySequenceBindingReferences
{ 
	SDK_UNDEFINED(80,1968) /* TMap<FGuid, FDaySequenceBindingReferenceArray> */ __um(BindingIdToReferences);       // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,1969) /* TSet<FGuid> */           __um(AnimSequenceInstances);                                // 0x0050   (0x0050)  
};

/// Class /Script/DaySequence.DaySequence
/// Size: 0x00C8 (0x000068 - 0x000130)
class UDaySequence : public UMovieSceneSequence
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0068   (0x0008)  MISSED
	class UMovieScene*                                 MovieScene;                                                 // 0x0070   (0x0008)  
	FDaySequenceBindingReferences                      BindingReferences;                                          // 0x0078   (0x00A0)  
	class UClass*                                      DirectorClass;                                              // 0x0118   (0x0008)  
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0120   (0x0010)  
};

/// Class /Script/DaySequence.DaySequenceActor
/// Size: 0x01F0 (0x000290 - 0x000480)
class ADaySequenceActor : public AInfo
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0290   (0x0010)  MISSED
	class UCurveFloat*                                 DayInterpCurve;                                             // 0x02A0   (0x0008)  
	SDK_UNDEFINED(80,1970) /* TMap<FName, FDaySequenceAssetData> */ __um(DaySequences);                            // 0x02A8   (0x0050)  
	SDK_UNDEFINED(80,1971) /* TMap<FName, FDaySequenceAssetData> */ __um(TransientCollectionSequences);            // 0x02F8   (0x0050)  
	class UDaySequenceCollectionAsset*                 DaySequenceCollection;                                      // 0x0348   (0x0008)  
	int32_t                                            Bias;                                                       // 0x0350   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0354   (0x0004)  MISSED
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                           // 0x0358   (0x0008)  
	bool                                               bReplicatePlayback : 1;                                     // 0x0360:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x7];                                       // 0x0361   (0x0007)  MISSED
	class UDaySequencePlayer*                          SequencePlayer;                                             // 0x0368   (0x0008)  
	class UDaySequence*                                RootSequence;                                               // 0x0370   (0x0008)  
	bool                                               bRunDayCycle;                                               // 0x0378   (0x0001)  
	bool                                               bUseInterpCurve;                                            // 0x0379   (0x0001)  
	bool                                               bUseCollection;                                             // 0x037A   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x037B   (0x0001)  MISSED
	FTimecode                                          DayLength;                                                  // 0x037C   (0x0014)  
	FTimecode                                          TimePerCycle;                                               // 0x0390   (0x0014)  
	FTimecode                                          InitialTimeOfDay;                                           // 0x03A4   (0x0014)  
	unsigned char                                      UnknownData04_5[0x78];                                      // 0x03B8   (0x0078)  MISSED
	SDK_UNDEFINED(80,1972) /* TMap<UClass*, UDaySequenceConditionTag*> */ __um(TrackConditionMap);                 // 0x0430   (0x0050)  


	/// Functions
	// Function /Script/DaySequence.DaySequenceActor.SetTimeOfDayPreview
	// void SetTimeOfDayPreview(float InHours);                                                                              // [0x67d85bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.SetTimeOfDay
	// bool SetTimeOfDay(float InHours);                                                                                     // [0x8116dd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.SetStaticTimeOfDay
	// void SetStaticTimeOfDay(float InHours);                                                                               // [0x8116d54] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.SetReplicatePlayback
	// void SetReplicatePlayback(bool ReplicatePlayback);                                                                    // [0x8116cc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.SetDaySequence
	// void SetDaySequence(FName SequenceName, class UDaySequence* InDaySequence);                                           // [0x8116ad8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.SetBias
	// void SetBias(FName SequenceKey, int32_t Bias);                                                                        // [0x8116a18] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.RemoveStaticTimeOfDay
	// void RemoveStaticTimeOfDay(bool bResumeFromStaticTime);                                                               // [0x8116984] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.Play
	// void Play();                                                                                                          // [0x8116970] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.Pause
	// void Pause();                                                                                                         // [0x811695c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.MuteSequence
	// void MuteSequence(FName SequenceKey, bool bState);                                                                    // [0x8116898] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.Multicast_SetTimePerCycle
	// void Multicast_SetTimePerCycle(float InHours);                                                                        // [0x6414280] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/DaySequence.DaySequenceActor.IsPlaying
	// bool IsPlaying();                                                                                                     // [0x81167b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.IsPaused
	// bool IsPaused();                                                                                                      // [0x811678c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.IsMuteSequence
	// bool IsMuteSequence(FName SequenceKey);                                                                               // [0x8116674] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.HasStaticTimeOfDay
	// bool HasStaticTimeOfDay();                                                                                            // [0x8116604] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetTimePerCycle
	// float GetTimePerCycle();                                                                                              // [0x81165dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetTimeOfDayPreview
	// float GetTimeOfDayPreview();                                                                                          // [0x81165c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetTimeOfDay
	// float GetTimeOfDay();                                                                                                 // [0x81165a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetStaticTimeOfDay
	// float GetStaticTimeOfDay();                                                                                           // [0x8116578] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetSequencePlayer
	// class UDaySequencePlayer* GetSequencePlayer();                                                                        // [0x8116554] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetInitialTimeOfDay
	// float GetInitialTimeOfDay();                                                                                          // [0x8116484] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetFirstDaySequence
	// class UDaySequence* GetFirstDaySequence();                                                                            // [0x8116460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetDaySequence
	// class UDaySequence* GetDaySequence(FName SequenceName);                                                               // [0x8116368] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetDayLength
	// float GetDayLength();                                                                                                 // [0x8116340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceActor.GetBias
	// int32_t GetBias(FName SequenceKey);                                                                                   // [0x8115cac] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceActor.ContainsDaySequence
	// bool ContainsDaySequence(class UDaySequence* InDaySequence);                                                          // [0x8115b2c] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/DaySequence.DaySequenceConditionSet
/// Size: 0x0050 (0x000000 - 0x000050)
struct FDaySequenceConditionSet
{ 
	SDK_UNDEFINED(80,1973) /* TMap<UClass*, bool> */   __um(Conditions);                                           // 0x0000   (0x0050)  
};

/// Struct /Script/DaySequence.DaySequenceCollectionEntry
/// Size: 0x0060 (0x000000 - 0x000060)
struct FDaySequenceCollectionEntry
{ 
	class UDaySequence*                                Sequence;                                                   // 0x0000   (0x0008)  
	int32_t                                            BiasOffset;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FDaySequenceConditionSet                           Conditions;                                                 // 0x0010   (0x0050)  
};

/// Class /Script/DaySequence.DaySequenceCollectionAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UDaySequenceCollectionAsset : public UDataAsset
{ 
public:
	TArray<FDaySequenceCollectionEntry>                DaySequences;                                               // 0x0030   (0x0010)  
};

/// Class /Script/DaySequence.DaySequenceDirector
/// Size: 0x0010 (0x000028 - 0x000038)
class UDaySequenceDirector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UDaySequencePlayer*                          Player;                                                     // 0x0028   (0x0008)  
	int32_t                                            SubSequenceID;                                              // 0x0030   (0x0004)  
	int32_t                                            MovieScenePlayerIndex;                                      // 0x0034   (0x0004)  


	/// Functions
	// Function /Script/DaySequence.DaySequenceDirector.OnCreated
	// void OnCreated();                                                                                                     // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DaySequence.DaySequenceDirector.GetSequence
	// class UMovieSceneSequence* GetSequence();                                                                             // [0x81164dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceDirector.GetRootSequenceTime
	// FQualifiedFrameTime GetRootSequenceTime();                                                                            // [0x81164ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceDirector.GetCurrentTime
	// FQualifiedFrameTime GetCurrentTime();                                                                                 // [0x8116310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DaySequence.DaySequenceDirector.GetBoundObjects
	// TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);                                           // [0x811618c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceDirector.GetBoundObject
	// class UObject* GetBoundObject(FMovieSceneObjectBindingID ObjectBinding);                                              // [0x8116024] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceDirector.GetBoundActors
	// TArray<AActor*> GetBoundActors(FMovieSceneObjectBindingID ObjectBinding);                                             // [0x8115ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DaySequence.DaySequenceDirector.GetBoundActor
	// class AActor* GetBoundActor(FMovieSceneObjectBindingID ObjectBinding);                                                // [0x8115d38] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DaySequence.DaySequencePlayer
/// Size: 0x0008 (0x000460 - 0x000468)
class UDaySequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0460   (0x0008)  MISSED
};

/// Class /Script/DaySequence.DaySequenceProjectSettings
/// Size: 0x0030 (0x000030 - 0x000060)
class UDaySequenceProjectSettings : public UDeveloperSettings
{ 
public:
	bool                                               bDefaultLockEngineToDisplayRate;                            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	SDK_UNDEFINED(16,1974) /* FString */               __um(DefaultDisplayRate);                                   // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1975) /* FString */               __um(DefaultTickResolution);                                // 0x0048   (0x0010)  
	EUpdateClockSource                                 DefaultClockSource;                                         // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Class /Script/DaySequence.DaySequenceProvider
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ADaySequenceProvider : public AActor
{ 
public:
	TArray<class UDaySequence*>                        DaySequenceAssets;                                          // 0x0290   (0x0010)  
};

/// Class /Script/DaySequence.DaySequenceSubsystem
/// Size: 0x0030 (0x000030 - 0x000060)
class UDaySequenceSubsystem : public UWorldSubsystem
{ 
public:
	SDK_UNDEFINED(16,1976) /* FMulticastInlineDelegate */ __um(OnDaySequenceActorSet);                             // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/DaySequence.DaySequenceSubsystem.SetDaySequenceActor
	// void SetDaySequenceActor(class ADaySequenceActor* InActor);                                                           // [0x8116b9c] Final|Native|Public  
	// Function /Script/DaySequence.DaySequenceSubsystem.GetDaySequenceActor
	// class ADaySequenceActor* GetDaySequenceActor();                                                                       // [0x811643c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DaySequence.DaySequenceTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UDaySequenceTrack : public UMovieSceneSubTrack
{ 
public:
};

/// Class /Script/DaySequence.EnvironmentLightingActor
/// Size: 0x0030 (0x0002A0 - 0x0002D0)
class AEnvironmentLightingActor : public ADaySequenceProvider
{ 
public:
	class USkyAtmosphereComponent*                     SkyAtmosphereComponent;                                     // 0x02A0   (0x0008)  
	class USkyLightComponent*                          SkyLightComponent;                                          // 0x02A8   (0x0008)  
	class USceneComponent*                             SunRootComponent;                                           // 0x02B0   (0x0008)  
	class UDirectionalLightComponent*                  SunComponent;                                               // 0x02B8   (0x0008)  
	class UExponentialHeightFogComponent*              ExponentialHeightFogComponent;                              // 0x02C0   (0x0008)  
	class UVolumetricCloudComponent*                   VolumetricCloudComponent;                                   // 0x02C8   (0x0008)  
};

/// Struct /Script/DaySequence.DaySequenceModifierNamedSequence
/// Size: 0x0060 (0x000000 - 0x000060)
struct FDaySequenceModifierNamedSequence
{ 
	class UDaySequence*                                Sequence;                                                   // 0x0000   (0x0008)  
	int32_t                                            BiasOffset;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FDaySequenceConditionSet                           Conditions;                                                 // 0x0010   (0x0050)  
};

/// Struct /Script/DaySequence.DaySequenceAssetData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FDaySequenceAssetData
{ 
	class UDaySequence*                                Sequence;                                                   // 0x0000   (0x0008)  
	int32_t                                            Bias;                                                       // 0x0008   (0x0004)  
	bool                                               bMuted;                                                     // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FDaySequenceConditionSet                           Conditions;                                                 // 0x0010   (0x0050)  
};

/// Struct /Script/DaySequence.DaySequenceBindingReference
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDaySequenceBindingReference
{ 
	SDK_UNDEFINED(32,1977) /* TWeakObjectPtr<UObject*> */ __um(ExternalObjectPath);                                // 0x0000   (0x0020)  
	SDK_UNDEFINED(16,1978) /* FString */               __um(ObjectPath);                                           // 0x0020   (0x0010)  
};

/// Struct /Script/DaySequence.DaySequenceBindingReferenceArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDaySequenceBindingReferenceArray
{ 
	TArray<FDaySequenceBindingReference>               References;                                                 // 0x0000   (0x0010)  
};

