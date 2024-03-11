
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataRegistry
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: IrisCore
/// dependency: MovieScene
/// dependency: NetCore
/// dependency: Niagara
/// dependency: PhysicsCore

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUD
/// Size: 0x0000 (0x000380 - 0x000380)
class AAbilitySystemDebugHUD : public AHUD
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/GameplayAbilities.GameplayEffect
/// Size: 0x0A40 (0x000028 - 0x000A68)
class UGameplayEffect : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
	CMember(EGameplayEffectDurationType)               DurationPolicy                                              OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FGameplayEffectModifierMagnitude)          DurationMagnitude                                           OFFSET(getStruct<T>, {0x38, 472, 0, 0})
	SMember(FScalableFloat)                            Period                                                      OFFSET(getStruct<T>, {0x210, 40, 0, 0})
	DMember(bool)                                      bExecutePeriodicEffectOnApplication                         OFFSET(get<bool>, {0x238, 1, 0, 0})
	CMember(EGameplayEffectPeriodInhibitionRemovedPolicy) PeriodicInhibitionPolicy                                 OFFSET(get<T>, {0x239, 1, 0, 0})
	CMember(TArray<FGameplayModifierInfo>)             Modifiers                                                   OFFSET(get<T>, {0x240, 16, 0, 0})
	CMember(TArray<FGameplayEffectExecutionDefinition>) Executions                                                 OFFSET(get<T>, {0x250, 16, 0, 0})
	SMember(FScalableFloat)                            ChanceToApplyToTarget                                       OFFSET(getStruct<T>, {0x260, 40, 0, 0})
	CMember(TArray<class UClass*>)                     ApplicationRequirements                                     OFFSET(get<T>, {0x288, 16, 0, 0})
	CMember(TArray<FConditionalGameplayEffect>)        ConditionalGameplayEffects                                  OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(TArray<class UClass*>)                     OverflowEffects                                             OFFSET(get<T>, {0x2A8, 16, 0, 0})
	DMember(bool)                                      bDenyOverflowApplication                                    OFFSET(get<bool>, {0x2B8, 1, 0, 0})
	DMember(bool)                                      bClearStackOnOverflow                                       OFFSET(get<bool>, {0x2B9, 1, 0, 0})
	CMember(TArray<class UClass*>)                     PrematureExpirationEffectClasses                            OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(TArray<class UClass*>)                     RoutineExpirationEffectClasses                              OFFSET(get<T>, {0x2D0, 16, 0, 0})
	DMember(bool)                                      bRequireModifierSuccessToTriggerCues                        OFFSET(get<bool>, {0x2E0, 1, 0, 0})
	DMember(bool)                                      bSuppressStackingCues                                       OFFSET(get<bool>, {0x2E1, 1, 0, 0})
	CMember(TArray<FGameplayEffectCue>)                GameplayCues                                                OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(class UGameplayEffectUIData*)              UIData                                                      OFFSET(get<T>, {0x2F8, 8, 0, 0})
	SMember(FInheritedTagContainer)                    InheritableGameplayEffectTags                               OFFSET(getStruct<T>, {0x300, 96, 0, 0})
	SMember(FInheritedTagContainer)                    InheritableOwnedTagsContainer                               OFFSET(getStruct<T>, {0x360, 96, 0, 0})
	SMember(FInheritedTagContainer)                    InheritableBlockedAbilityTagsContainer                      OFFSET(getStruct<T>, {0x3C0, 96, 0, 0})
	SMember(FGameplayTagRequirements)                  OngoingTagRequirements                                      OFFSET(getStruct<T>, {0x420, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  ApplicationTagRequirements                                  OFFSET(getStruct<T>, {0x4A8, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  RemovalTagRequirements                                      OFFSET(getStruct<T>, {0x530, 136, 0, 0})
	SMember(FInheritedTagContainer)                    RemoveGameplayEffectsWithTags                               OFFSET(getStruct<T>, {0x5B8, 96, 0, 0})
	SMember(FGameplayTagRequirements)                  GrantedApplicationImmunityTags                              OFFSET(getStruct<T>, {0x618, 136, 0, 0})
	SMember(FGameplayEffectQuery)                      GrantedApplicationImmunityQuery                             OFFSET(getStruct<T>, {0x6A0, 408, 0, 0})
	SMember(FGameplayEffectQuery)                      RemoveGameplayEffectQuery                                   OFFSET(getStruct<T>, {0x840, 408, 0, 0})
	CMember(EGameplayEffectStackingType)               StackingType                                                OFFSET(get<T>, {0x9D9, 1, 0, 0})
	DMember(int32_t)                                   StackLimitCount                                             OFFSET(get<int32_t>, {0x9DC, 4, 0, 0})
	CMember(EGameplayEffectStackingDurationPolicy)     StackDurationRefreshPolicy                                  OFFSET(get<T>, {0x9E0, 1, 0, 0})
	CMember(EGameplayEffectStackingPeriodPolicy)       StackPeriodResetPolicy                                      OFFSET(get<T>, {0x9E1, 1, 0, 0})
	CMember(EGameplayEffectStackingExpirationPolicy)   StackExpirationPolicy                                       OFFSET(get<T>, {0x9E2, 1, 0, 0})
	CMember(TArray<FGameplayAbilitySpecDef>)           GrantedAbilities                                            OFFSET(get<T>, {0x9E8, 16, 0, 0})
	CMember(TArray<class UGameplayEffectComponent*>)   GEComponents                                                OFFSET(get<T>, {0xA58, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayEffectComponent
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayEffectComponent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayAbilities.AbilitiesGameplayEffectComponent
/// Size: 0x0010 (0x000028 - 0x000038)
class UAbilitiesGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FGameplayAbilitySpecConfig>)        GrantAbilityConfigs                                         OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityAsync
/// Size: 0x0008 (0x000030 - 0x000038)
class UAbilityAsync : public UCancellableAsyncAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync.EndAction
	// void EndAction();                                                                                                        // [0x3972ed4] Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagCountChanged
/// Size: 0x0020 (0x000038 - 0x000058)
class UAbilityAsync_WaitGameplayTagCountChanged : public UAbilityAsync
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMulticastInlineDelegate)                  TagCountChanged                                             OFFSET(getStruct<T>, {0x48, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagCountChanged.WaitGameplayTagCountChangedOnActor
	// class UAbilityAsync_WaitGameplayTagCountChanged* WaitGameplayTagCountChangedOnActor(class AActor* TargetActor, FGameplayTag tag); // [0x2ce3e78] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagCountChanged.AsyncWaitGameplayTagCountDelegate__DelegateSignature
	// void AsyncWaitGameplayTagCountDelegate__DelegateSignature(int32_t TagCount);                                             // [0x18a39e4] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilitySystemCheatManagerExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UAbilitySystemCheatManagerExtension : public UCheatManagerExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemCheatManagerExtension.EffectRemove
	// void EffectRemove(FString NameOrHandle);                                                                                 // [0x7464a90] Final|Exec|Native|Public|Const 
	// Function /Script/GameplayAbilities.AbilitySystemCheatManagerExtension.EffectListActive
	// void EffectListActive();                                                                                                 // [0x7464a7c] Final|Exec|Native|Public|Const 
	// Function /Script/GameplayAbilities.AbilitySystemCheatManagerExtension.EffectApply
	// void EffectApply(FString PartialName, float EffectLevel);                                                                // [0x74648d0] Final|Exec|Native|Public|Const 
	// Function /Script/GameplayAbilities.AbilitySystemCheatManagerExtension.AbilityListGranted
	// void AbilityListGranted();                                                                                               // [0x74638b8] Final|Exec|Native|Public|Const 
	// Function /Script/GameplayAbilities.AbilitySystemCheatManagerExtension.AbilityGrant
	// void AbilityGrant(FString AssetSearchString);                                                                            // [0x7463758] Final|Exec|Native|Public|Const 
	// Function /Script/GameplayAbilities.AbilitySystemCheatManagerExtension.AbilityCancel
	// void AbilityCancel(FString PartialName);                                                                                 // [0x74635f8] Final|Exec|Native|Public|Const 
	// Function /Script/GameplayAbilities.AbilitySystemCheatManagerExtension.AbilityActivate
	// void AbilityActivate(FString PartialName);                                                                               // [0x7463498] Final|Exec|Native|Public|Const 
};

/// Class /Script/GameplayAbilities.AbilityTask
/// Size: 0x0018 (0x000060 - 0x000078)
class UAbilityTask : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UGameplayAbility*)                   Ability                                                     OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TWeakObjectPtr<UAbilitySystemComponent*>)  AbilitySystemComponent                                      OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_PlayAnimAndWait
/// Size: 0x00B0 (0x000078 - 0x000128)
class UAbilityTask_PlayAnimAndWait : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FMulticastInlineDelegate)                  OnCompleted                                                 OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBlendOut                                                  OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBlendIn                                                   OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInterrupted                                               OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCancelled                                                 OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	CMember(class UAnimSequence*)                      AnimSequenceToPlay                                          OFFSET(get<T>, {0x100, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_PlayAnimAndWait.OnMontageInterrupted
	// void OnMontageInterrupted();                                                                                             // [0x7466c6c] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayAnimAndWait.OnMontageEnded
	// void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);                                                     // [0x7466ba4] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayAnimAndWait.OnMontageBlendingOut
	// void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);                                               // [0x7466adc] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayAnimAndWait.OnMontageBlendedIn
	// void OnMontageBlendedIn(class UAnimMontage* Montage);                                                                    // [0x7466a5c] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayAnimAndWait.CreatePlayAnimAndWaitProxy
	// class UAbilityTask_PlayAnimAndWait* CreatePlayAnimAndWaitProxy(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class UAnimSequence* AnimSequence, FName SlotName, float BlendInTime, float BlendOutTime, float InPlayRate, float StartTimeSeconds, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale); // [0x74645f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagCountChanged
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UAbilityTask_WaitGameplayTagCountChanged : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FMulticastInlineDelegate)                  TagCountChanged                                             OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(class UAbilitySystemComponent*)            OptionalExternalTarget                                      OFFSET(get<T>, {0x90, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagCountChanged.WaitGameplayTagCountChange
	// class UAbilityTask_WaitGameplayTagCountChanged* WaitGameplayTagCountChange(class UGameplayAbility* OwningAbility, FGameplayTag tag, class AActor* InOptionalExternalTarget); // [0x74678b0] Final|Native|Static|Protected|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AdditionalEffectsGameplayEffectComponent
/// Size: 0x0048 (0x000028 - 0x000070)
class UAdditionalEffectsGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bOnApplicationCopyDataFromOriginalSpec                      OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TArray<FConditionalGameplayEffect>)        OnApplicationGameplayEffects                                OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UClass*>)                     OnCompleteAlways                                            OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<class UClass*>)                     OnCompleteNormal                                            OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<class UClass*>)                     OnCompletePrematurely                                       OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AssetTagsGameplayEffectComponent
/// Size: 0x0060 (0x000028 - 0x000088)
class UAssetTagsGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FInheritedTagContainer)                    InheritableAssetTags                                        OFFSET(getStruct<T>, {0x28, 96, 0, 0})
};

/// Class /Script/GameplayAbilities.BlockAbilityTagsGameplayEffectComponent
/// Size: 0x0060 (0x000028 - 0x000088)
class UBlockAbilityTagsGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FInheritedTagContainer)                    InheritableBlockedAbilityTagsContainer                      OFFSET(getStruct<T>, {0x28, 96, 0, 0})
};

/// Class /Script/GameplayAbilities.ChanceToApplyGameplayEffectComponent
/// Size: 0x0028 (0x000028 - 0x000050)
class UChanceToApplyGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FScalableFloat)                            ChanceToApplyToTarget                                       OFFSET(getStruct<T>, {0x28, 40, 0, 0})
};

/// Class /Script/GameplayAbilities.CustomCanApplyGameplayEffectComponent
/// Size: 0x0010 (0x000028 - 0x000038)
class UCustomCanApplyGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UClass*>)                     ApplicationRequirements                                     OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Static
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameplayCueNotify_Static : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayTag)                              GameplayCueTag                                              OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     GameplayCueName                                             OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	DMember(bool)                                      IsOverride                                                  OFFSET(get<bool>, {0x30, 1, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.WhileActive
	// bool WhileActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                            // [0x36b9c80] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnRemove
	// bool OnRemove(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x3937fc8] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnExecute
	// bool OnExecute(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                              // [0x1577960] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnActive
	// bool OnActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x336315c] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_UnitTest
/// Size: 0x0010 (0x000038 - 0x000048)
class UGameplayCueNotify_UnitTest : public UGameplayCueNotify_Static
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/GameplayAbilities.GameplayEffectUIData
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayEffectUIData : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayAbilities.GameplayEffectUIData_TextOnly
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Class /Script/GameplayAbilities.ImmunityGameplayEffectComponent
/// Size: 0x0010 (0x000028 - 0x000038)
class UImmunityGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FGameplayEffectQuery>)              ImmunityQueries                                             OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.RemoveOtherGameplayEffectComponent
/// Size: 0x0010 (0x000028 - 0x000038)
class URemoveOtherGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FGameplayEffectQuery>)              RemoveGameplayEffectQueries                                 OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.TargetTagRequirementsGameplayEffectComponent
/// Size: 0x0198 (0x000028 - 0x0001C0)
class UTargetTagRequirementsGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FGameplayTagRequirements)                  ApplicationTagRequirements                                  OFFSET(getStruct<T>, {0x28, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  OngoingTagRequirements                                      OFFSET(getStruct<T>, {0xB0, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  RemovalTagRequirements                                      OFFSET(getStruct<T>, {0x138, 136, 0, 0})
};

/// Class /Script/GameplayAbilities.TargetTagsGameplayEffectComponent
/// Size: 0x0060 (0x000028 - 0x000088)
class UTargetTagsGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FInheritedTagContainer)                    InheritableGrantedTagsContainer                             OFFSET(getStruct<T>, {0x28, 96, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged
/// Size: 0x0058 (0x000038 - 0x000090)
class UAbilityAsync_WaitAttributeChanged : public UAbilityAsync
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  Changed                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged.WaitForAttributeChanged
	// class UAbilityAsync_WaitAttributeChanged* WaitForAttributeChanged(class AActor* TargetActor, FGameplayAttribute Attribute, bool OnlyTriggerOnce); // [0x7466fec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged.AsyncWaitAttributeChangedDelegate__DelegateSignature
	// void AsyncWaitAttributeChangedDelegate__DelegateSignature(FGameplayAttribute Attribute, float NewValue, float OldValue); // [0x18a39e4] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
/// Size: 0x0150 (0x000038 - 0x000188)
class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FMulticastInlineDelegate)                  OnApplied                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor
	// class UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(class AActor* TargetActor, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect); // [0x7467290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature
	// void OnAppliedDelegate__DelegateSignature(class AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle); // [0x18a39e4] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent
/// Size: 0x0020 (0x000038 - 0x000058)
class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMulticastInlineDelegate)                  EventReceived                                               OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor
	// class UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(class AActor* TargetActor, FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact); // [0x2ce40b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature
	// void EventReceivedDelegate__DelegateSignature(FGameplayEventData Payload);                                               // [0x18a39e4] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTag
/// Size: 0x0018 (0x000038 - 0x000050)
class UAbilityAsync_WaitGameplayTag : public UAbilityAsync
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTag.AsyncWaitGameplayTagDelegate__DelegateSignature
	// void AsyncWaitGameplayTagDelegate__DelegateSignature();                                                                  // [0x18a39e4] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
/// Size: 0x0010 (0x000050 - 0x000060)
class UAbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMulticastInlineDelegate)                  Added                                                       OFFSET(getStruct<T>, {0x50, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor
	// class UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(class AActor* TargetActor, FGameplayTag tag, bool OnlyTriggerOnce); // [0x2ce438c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
/// Size: 0x0010 (0x000050 - 0x000060)
class UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMulticastInlineDelegate)                  Removed                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor
	// class UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(class AActor* TargetActor, FGameplayTag tag, bool OnlyTriggerOnce); // [0x2ce3be0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagQuery
/// Size: 0x00D0 (0x000038 - 0x000108)
class UAbilityAsync_WaitGameplayTagQuery : public UAbilityAsync
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FMulticastInlineDelegate)                  Triggered                                                   OFFSET(getStruct<T>, {0xF8, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagQuery.WaitGameplayTagQueryOnActor
	// class UAbilityAsync_WaitGameplayTagQuery* WaitGameplayTagQueryOnActor(class AActor* TargetActor, FGameplayTagQuery TagQuery, EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce); // [0x2ce38b4] Final|Native|Static|Protected|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayAbility
/// Size: 0x0390 (0x000028 - 0x0003B8)
class UGameplayAbility : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
	SMember(FGameplayTagContainer)                     AbilityTags                                                 OFFSET(getStruct<T>, {0xA8, 32, 0, 0})
	DMember(bool)                                      bReplicateInputDirectly                                     OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(bool)                                      RemoteInstanceEnded                                         OFFSET(get<bool>, {0xC9, 1, 0, 0})
	CMember(TEnumAsByte<EGameplayAbilityReplicationPolicy>) ReplicationPolicy                                      OFFSET(get<T>, {0xCE, 1, 0, 0})
	CMember(TEnumAsByte<EGameplayAbilityInstancingPolicy>) InstancingPolicy                                        OFFSET(get<T>, {0xCF, 1, 0, 0})
	DMember(bool)                                      bServerRespectsRemoteAbilityCancellation                    OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bRetriggerInstancedAbility                                  OFFSET(get<bool>, {0xD1, 1, 0, 0})
	SMember(FGameplayAbilityActivationInfo)            CurrentActivationInfo                                       OFFSET(getStruct<T>, {0xD8, 32, 0, 0})
	SMember(FGameplayEventData)                        CurrentEventData                                            OFFSET(getStruct<T>, {0xF8, 176, 0, 0})
	CMember(TEnumAsByte<EGameplayAbilityNetExecutionPolicy>) NetExecutionPolicy                                    OFFSET(get<T>, {0x1A8, 1, 0, 0})
	CMember(TEnumAsByte<EGameplayAbilityNetSecurityPolicy>) NetSecurityPolicy                                      OFFSET(get<T>, {0x1A9, 1, 0, 0})
	CMember(class UClass*)                             CostGameplayEffectClass                                     OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(TArray<FAbilityTriggerData>)               AbilityTriggers                                             OFFSET(get<T>, {0x1B8, 16, 0, 0})
	CMember(class UClass*)                             CooldownGameplayEffectClass                                 OFFSET(get<T>, {0x1C8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     CancelAbilitiesWithTag                                      OFFSET(getStruct<T>, {0x1D0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     BlockAbilitiesWithTag                                       OFFSET(getStruct<T>, {0x1F0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ActivationOwnedTags                                         OFFSET(getStruct<T>, {0x210, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ActivationRequiredTags                                      OFFSET(getStruct<T>, {0x230, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ActivationBlockedTags                                       OFFSET(getStruct<T>, {0x250, 32, 0, 0})
	SMember(FGameplayTagContainer)                     SourceRequiredTags                                          OFFSET(getStruct<T>, {0x270, 32, 0, 0})
	SMember(FGameplayTagContainer)                     SourceBlockedTags                                           OFFSET(getStruct<T>, {0x290, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TargetRequiredTags                                          OFFSET(getStruct<T>, {0x2B0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TargetBlockedTags                                           OFFSET(getStruct<T>, {0x2D0, 32, 0, 0})
	CMember(TArray<class UGameplayTask*>)              ActiveTasks                                                 OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(class UAnimMontage*)                       CurrentMontage                                              OFFSET(get<T>, {0x330, 8, 0, 0})
	DMember(bool)                                      bIsActive                                                   OFFSET(get<bool>, {0x398, 1, 0, 0})
	DMember(bool)                                      bIsAbilityEnding                                            OFFSET(get<bool>, {0x399, 1, 0, 0})
	DMember(bool)                                      bIsCancelable                                               OFFSET(get<bool>, {0x39A, 1, 0, 0})
	DMember(bool)                                      bIsBlockingOtherAbilities                                   OFFSET(get<bool>, {0x39B, 1, 0, 0})
	DMember(bool)                                      bMarkPendingKillOnAbilityEnd                                OFFSET(get<bool>, {0x3B0, 1, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
	// void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);                                                           // [0x7466f68] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.SetCanBeCanceled
	// void SetCanBeCanceled(bool bCanBeCanceled);                                                                              // [0x7466ee4] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.SendGameplayEvent
	// void SendGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload);                                               // [0x7466c80] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
	// void RemoveGrantedByEffect();                                                                                            // [0x68181e0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageStop
	// void MontageStop(float OverrideBlendOutTime);                                                                            // [0x74669dc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageSetNextSectionName
	// void MontageSetNextSectionName(FName FromSectionName, FName ToSectionName);                                              // [0x74668fc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageJumpToSection
	// void MontageJumpToSection(FName SectionName);                                                                            // [0x746685c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
	// FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(FName SocketName);            // [0x7466770] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
	// FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();                                            // [0x74666bc] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
	// FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level);                // [0x74665bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
	// bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload);                    // [0x18a39e4] Event|Protected|BlueprintEvent|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
	// void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag);                                                                  // [0x7466488] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_HasAuthority
	// bool K2_HasAuthority();                                                                                                  // [0x746646c] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
	// void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters);        // [0x7466298] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
	// void K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context);                           // [0x746603c] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_EndAbilityLocally
	// void K2_EndAbilityLocally();                                                                                             // [0x7466024] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_EndAbility
	// void K2_EndAbility();                                                                                                    // [0x746600c] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitExecute
	// void K2_CommitExecute();                                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
	// bool K2_CommitAbilityCost(bool BroadcastCommitEvent);                                                                    // [0x7465f74] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
	// bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);                                            // [0x7465e98] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbility
	// bool K2_CommitAbility();                                                                                                 // [0x66be23c] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
	// bool K2_CheckAbilityCost();                                                                                              // [0x7465e70] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
	// bool K2_CheckAbilityCooldown();                                                                                          // [0x7465e48] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CancelAbility
	// void K2_CancelAbility();                                                                                                 // [0x7465dec] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CanActivateAbility
	// bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayAbilitySpecHandle Handle, FGameplayTagContainer& RelevantTags); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
	// TArray<FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle EffectSpecHandle, FGameplayAbilityTargetDataHandle TargetData); // [0x7465b40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
	// FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(FGameplayEffectSpecHandle EffectSpecHandle);               // [0x74659c4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
	// void K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd); // [0x746570c] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_AddGameplayCue
	// void K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd);     // [0x74653e4] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.IsLocallyControlled
	// bool IsLocallyControlled();                                                                                              // [0x74653c0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
	// void InvalidateClientPredictionKey();                                                                                    // [0x746536c] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetSourceObject_BP
	// class UObject* GetSourceObject_BP(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo& ActorInfo);              // [0x74651cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
	// class USkeletalMeshComponent* GetOwningComponentFromActorInfo();                                                         // [0x7465194] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
	// class AActor* GetOwningActorFromActorInfo();                                                                             // [0x7465170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
	// FGameplayEffectContextHandle GetGrantedByEffectContext();                                                                // [0x7465134] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCurrentSourceObject
	// class UObject* GetCurrentSourceObject();                                                                                 // [0x7465110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCurrentMontage
	// class UAnimMontage* GetCurrentMontage();                                                                                 // [0x74650f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
	// float GetCooldownTimeRemaining();                                                                                        // [0x74650bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetContextFromOwner
	// FGameplayEffectContextHandle GetContextFromOwner(FGameplayAbilityTargetDataHandle OptionalTargetData);                   // [0x7464f30] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
	// class AActor* GetAvatarActorFromActorInfo();                                                                             // [0x7464f0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetActorInfo
	// FGameplayAbilityActorInfo GetActorInfo();                                                                                // [0x7464ed8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
	// class UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();                                                 // [0x7464eb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilityLevel_BP
	// int32_t GetAbilityLevel_BP(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo& ActorInfo);                     // [0x7464d14] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilityLevel
	// int32_t GetAbilityLevel();                                                                                               // [0x7464cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.EndTaskByInstanceName
	// void EndTaskByInstanceName(FName InstanceName);                                                                          // [0x7464c70] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.EndAbilityState
	// void EndAbilityState(FName OptionalStateNameToEnd);                                                                      // [0x7464bf0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
	// void ConfirmTaskByInstanceName(FName InstanceName, bool bEndTask);                                                       // [0x746452c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
	// void CancelTaskByInstanceName(FName InstanceName);                                                                       // [0x74644ac] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
	// void BP_RemoveGameplayEffectFromOwnerWithHandle(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);             // [0x746429c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
	// void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove);     // [0x7464068] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
	// void BP_RemoveGameplayEffectFromOwnerWithAssetTags(FGameplayTagContainer WithAssetTags, int32_t StacksToRemove);         // [0x7463e34] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
	// TArray<FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(FGameplayAbilityTargetDataHandle TargetData, class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // [0x74639f4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // [0x74638cc] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayAbilitySet
/// Size: 0x0010 (0x000030 - 0x000040)
class UGameplayAbilitySet : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FGameplayAbilityBindInfo>)          Abilities                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor
/// Size: 0x0150 (0x000290 - 0x0003E0)
class AGameplayAbilityTargetActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	DMember(bool)                                      ShouldProduceTargetDataOnServer                             OFFSET(get<bool>, {0x290, 1, 0, 0})
	SMember(FGameplayAbilityTargetingLocationInfo)     StartLocation                                               OFFSET(getStruct<T>, {0x2A0, 160, 0, 0})
	CMember(class APlayerController*)                  PrimaryPC                                                   OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UGameplayAbility*)                   OwningAbility                                               OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(bool)                                      bDestroyOnConfirmation                                      OFFSET(get<bool>, {0x380, 1, 0, 0})
	CMember(class AActor*)                             SourceActor                                                 OFFSET(get<T>, {0x388, 8, 0, 0})
	SMember(FWorldReticleParameters)                   ReticleParams                                               OFFSET(getStruct<T>, {0x390, 24, 0, 0})
	CMember(class UClass*)                             ReticleClass                                                OFFSET(get<T>, {0x3A8, 8, 0, 0})
	SMember(FGameplayTargetDataFilterHandle)           Filter                                                      OFFSET(getStruct<T>, {0x3B0, 16, 0, 0})
	DMember(bool)                                      bDebug                                                      OFFSET(get<bool>, {0x3C0, 1, 0, 0})
	CMember(class UAbilitySystemComponent*)            GenericDelegateBoundASC                                     OFFSET(get<T>, {0x3D8, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
	// void ConfirmTargeting();                                                                                                 // [0x3475290] Native|Public        
	// Function /Script/GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
	// void CancelTargeting();                                                                                                  // [0x21dbe0c] Native|Public        
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Trace
/// Size: 0x0020 (0x0003E0 - 0x000400)
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	DMember(float)                                     MaxRange                                                    OFFSET(get<float>, {0x3E0, 4, 0, 0})
	SMember(FCollisionProfileName)                     TraceProfile                                                OFFSET(getStruct<T>, {0x3E4, 4, 0, 0})
	DMember(bool)                                      bTraceAffectsAimPitch                                       OFFSET(get<bool>, {0x3E8, 1, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
/// Size: 0x0020 (0x000400 - 0x000420)
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	DMember(float)                                     CollisionRadius                                             OFFSET(get<float>, {0x3F8, 4, 0, 0})
	DMember(float)                                     CollisionHeight                                             OFFSET(get<float>, {0x3FC, 4, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
/// Size: 0x0010 (0x000420 - 0x000430)
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(class UClass*)                             PlacedActorClass                                            OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UMaterialInterface*)                 PlacedActorMaterial                                         OFFSET(get<T>, {0x420, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Radius
/// Size: 0x0010 (0x0003E0 - 0x0003F0)
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x3E0, 4, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
/// Size: 0x0000 (0x000400 - 0x000400)
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AGameplayAbilityWorldReticle : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FWorldReticleParameters)                   Parameters                                                  OFFSET(getStruct<T>, {0x290, 24, 0, 0})
	DMember(bool)                                      bFaceOwnerFlat                                              OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      bSnapToTargetedActor                                        OFFSET(get<bool>, {0x2A9, 1, 0, 0})
	DMember(bool)                                      bIsTargetValid                                              OFFSET(get<bool>, {0x2AA, 1, 0, 0})
	DMember(bool)                                      bIsTargetAnActor                                            OFFSET(get<bool>, {0x2AB, 1, 0, 0})
	CMember(class APlayerController*)                  PrimaryPC                                                   OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class AGameplayAbilityTargetActor*)        TargetingActor                                              OFFSET(get<T>, {0x2B8, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
	// void SetReticleMaterialParamVector(FName ParamName, FVector Value);                                                      // [0x18a39e4] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
	// void SetReticleMaterialParamFloat(FName ParamName, float Value);                                                         // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
	// void OnValidTargetChanged(bool bNewValue);                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
	// void OnTargetingAnActor(bool bNewValue);                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
	// void OnParametersInitialized();                                                                                          // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
	// void FaceTowardSource(bool bFaceIn2D);                                                                                   // [0x74af354] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
/// Size: 0x0018 (0x0002C0 - 0x0002D8)
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(class UCapsuleComponent*)                  CollisionComponent                                          OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(TArray<class UActorComponent*>)            VisualizationComponents                                     OFFSET(get<T>, {0x2C8, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbility_CharacterJump
/// Size: 0x0000 (0x0003B8 - 0x0003B8)
class UGameplayAbility_CharacterJump : public UGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
};

/// Class /Script/GameplayAbilities.GameplayAbility_Montage
/// Size: 0x0030 (0x0003B8 - 0x0003E8)
class UGameplayAbility_Montage : public UGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	CMember(class UAnimMontage*)                       MontageToPlay                                               OFFSET(get<T>, {0x3B8, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x3C0, 4, 0, 0})
	SMember(FName)                                     SectionName                                                 OFFSET(getStruct<T>, {0x3C4, 4, 0, 0})
	CMember(TArray<class UClass*>)                     GameplayEffectClassesWhileAnimating                         OFFSET(get<T>, {0x3C8, 16, 0, 0})
	CMember(TArray<class UGameplayEffect*>)            GameplayEffectsWhileAnimating                               OFFSET(get<T>, {0x3D8, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotion_Base
/// Size: 0x0040 (0x000078 - 0x0000B8)
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FName)                                     ForceName                                                   OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	CMember(ERootMotionFinishVelocityMode)             FinishVelocityMode                                          OFFSET(get<T>, {0x7C, 1, 0, 0})
	SMember(FVector)                                   FinishSetVelocity                                           OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	DMember(float)                                     FinishClampVelocity                                         OFFSET(get<float>, {0x98, 4, 0, 0})
	CMember(class UCharacterMovementComponent*)        MovementComponent                                           OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
/// Size: 0x0048 (0x0000B8 - 0x000100)
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FMulticastInlineDelegate)                  OnFinish                                                    OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FVector)                                   WorldDirection                                              OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(bool)                                      bIsAdditive                                                 OFFSET(get<bool>, {0xE8, 1, 0, 0})
	CMember(class UCurveFloat*)                        StrengthOverTime                                            OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(bool)                                      bEnableGravity                                              OFFSET(get<bool>, {0xF8, 1, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
	// class UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector WorldDirection, float Strength, float duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity); // [0x74a4ff4] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
/// Size: 0x0068 (0x0000B8 - 0x000120)
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FMulticastInlineDelegate)                  OnFinish                                                    OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLanded                                                    OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     MinimumLandedTriggerTime                                    OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(bool)                                      bFinishOnLanded                                             OFFSET(get<bool>, {0x100, 1, 0, 0})
	CMember(class UCurveVector*)                       PathOffsetCurve                                             OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class UCurveFloat*)                        TimeMappingCurve                                            OFFSET(get<T>, {0x110, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
	// void OnLandedCallback(FHitResult& Hit);                                                                                  // [0x74b857c] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
	// void Finish();                                                                                                           // [0x74afbdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
	// class UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator Rotation, float Distance, float Height, float duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve); // [0x74a589c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
/// Size: 0x00C8 (0x0000B8 - 0x000180)
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FMulticastInlineDelegate)                  OnFinished                                                  OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FVector)                                   StartLocation                                               OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	CMember(class AActor*)                             TargetActor                                                 OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(class USceneComponent*)                    TargetComponent                                             OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FVector)                                   TargetComponentRelativeLocation                             OFFSET(getStruct<T>, {0x110, 24, 0, 0})
	SMember(FVector)                                   TargetLocationOffset                                        OFFSET(getStruct<T>, {0x128, 24, 0, 0})
	CMember(ERootMotionMoveToActorTargetOffsetType)    OffsetAlignment                                             OFFSET(get<T>, {0x140, 1, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(bool)                                      bDisableDestinationReachedInterrupt                         OFFSET(get<bool>, {0x148, 1, 0, 0})
	DMember(float)                                     ReachedDestinationDistance                                  OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(bool)                                      bSetNewMovementMode                                         OFFSET(get<bool>, {0x150, 1, 0, 0})
	CMember(TEnumAsByte<EMovementMode>)                NewMovementMode                                             OFFSET(get<T>, {0x151, 1, 0, 0})
	DMember(bool)                                      bRestrictSpeedToExpected                                    OFFSET(get<bool>, {0x152, 1, 0, 0})
	CMember(class UCurveVector*)                       PathOffsetCurve                                             OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class UCurveFloat*)                        TimeMappingCurve                                            OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(class UCurveFloat*)                        TargetLerpSpeedHorizontalCurve                              OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(class UCurveFloat*)                        TargetLerpSpeedVerticalCurve                                OFFSET(get<T>, {0x170, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
	// void OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget);                                        // [0x74b89dc] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
	// void OnRep_TargetLocation();                                                                                             // [0x74b88e0] Final|Native|Protected 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
	// class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt, float ReachedDestinationDistance); // [0x74a8950] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToComponentForce
	// class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToComponentForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class USceneComponent* TargetComponent, FVector TargetComponentRelativeLocation, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt, float ReachedDestinationDistance); // [0x74a714c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
	// class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class AActor* TargetActor, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt, float ReachedDestinationDistance); // [0x74a6304] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
/// Size: 0x0068 (0x0000B8 - 0x000120)
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FMulticastInlineDelegate)                  OnTimedOut                                                  OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTimedOutAndDestinationReached                             OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FVector)                                   StartLocation                                               OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(bool)                                      bSetNewMovementMode                                         OFFSET(get<bool>, {0x10C, 1, 0, 0})
	CMember(TEnumAsByte<EMovementMode>)                NewMovementMode                                             OFFSET(get<T>, {0x10D, 1, 0, 0})
	DMember(bool)                                      bRestrictSpeedToExpected                                    OFFSET(get<bool>, {0x10E, 1, 0, 0})
	CMember(class UCurveVector*)                       PathOffsetCurve                                             OFFSET(get<T>, {0x110, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
	// class UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector TargetLocation, float duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // [0x74a8080] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
/// Size: 0x0070 (0x0000B8 - 0x000128)
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FMulticastInlineDelegate)                  OnFinish                                                    OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
	CMember(class AActor*)                             LocationActor                                               OFFSET(get<T>, {0xE0, 8, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(bool)                                      bIsPush                                                     OFFSET(get<bool>, {0xF4, 1, 0, 0})
	DMember(bool)                                      bIsAdditive                                                 OFFSET(get<bool>, {0xF5, 1, 0, 0})
	DMember(bool)                                      bNoZForce                                                   OFFSET(get<bool>, {0xF6, 1, 0, 0})
	CMember(class UCurveFloat*)                        StrengthDistanceFalloff                                     OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UCurveFloat*)                        StrengthOverTime                                            OFFSET(get<T>, {0x100, 8, 0, 0})
	DMember(bool)                                      bUseFixedWorldDirection                                     OFFSET(get<bool>, {0x108, 1, 0, 0})
	SMember(FRotator)                                  FixedWorldDirection                                         OFFSET(getStruct<T>, {0x110, 24, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
	// class UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, class AActor* LocationActor, float Strength, float duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, FRotator FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // [0x74a9a58] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_MoveToLocation
/// Size: 0x0068 (0x000078 - 0x0000E0)
class UAbilityTask_MoveToLocation : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FMulticastInlineDelegate)                  OnTargetLocationReached                                     OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FVector)                                   StartLocation                                               OFFSET(getStruct<T>, {0x90, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	DMember(float)                                     DurationOfMovement                                          OFFSET(get<float>, {0xC0, 4, 0, 0})
	CMember(class UCurveFloat*)                        LerpCurve                                                   OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UCurveVector*)                       LerpCurveVector                                             OFFSET(get<T>, {0xD8, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
	// class UAbilityTask_MoveToLocation* MoveToLocation(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, float duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve); // [0x74b5a48] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint
/// Size: 0x0018 (0x000078 - 0x000090)
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  OnSync                                                      OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
	// class UAbilityTask_NetworkSyncPoint* WaitNetSync(class UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType); // [0x74c4320] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
	// void OnSignalCallback();                                                                                                 // [0x74b8904] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait
/// Size: 0x0088 (0x000078 - 0x000100)
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FMulticastInlineDelegate)                  OnCompleted                                                 OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBlendOut                                                  OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInterrupted                                               OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCancelled                                                 OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(class UAnimMontage*)                       MontageToPlay                                               OFFSET(get<T>, {0xE0, 8, 0, 0})
	DMember(float)                                     Rate                                                        OFFSET(get<float>, {0xE8, 4, 0, 0})
	SMember(FName)                                     StartSection                                                OFFSET(getStruct<T>, {0xEC, 4, 0, 0})
	DMember(float)                                     AnimRootMotionTranslationScale                              OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     StartTimeSeconds                                            OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(bool)                                      bStopWhenAbilityEnds                                        OFFSET(get<bool>, {0xF8, 1, 0, 0})
	DMember(bool)                                      bAllowInterruptAfterBlendOut                                OFFSET(get<bool>, {0xF9, 1, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
	// void OnMontageInterrupted();                                                                                             // [0x74b7da0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
	// void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);                                                     // [0x7466ba4] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
	// void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);                                               // [0x74b8690] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnGameplayAbilityCancelled
	// void OnGameplayAbilityCancelled();                                                                                       // [0x74b7da0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
	// class UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds, bool bAllowInterruptAfterBlendOut); // [0x74ac6b4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_Repeat
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UAbilityTask_Repeat : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnPerformAction                                             OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinished                                                  OFFSET(getStruct<T>, {0x88, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_Repeat.RepeatAction
	// class UAbilityTask_Repeat* RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount); // [0x74b9698] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_SpawnActor
/// Size: 0x0048 (0x000078 - 0x0000C0)
class UAbilityTask_SpawnActor : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FMulticastInlineDelegate)                  Success                                                     OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DidNotSpawn                                                 OFFSET(getStruct<T>, {0x88, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
	// class UAbilityTask_SpawnActor* SpawnActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, class UClass* Class); // [0x74bca60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
	// void FinishSpawningActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, class AActor* SpawnedActor); // [0x74afbf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
	// bool BeginSpawningActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, class UClass* Class, class AActor*& SpawnedActor); // [0x74aad58] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_StartAbilityState
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UAbilityTask_StartAbilityState : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnStateEnded                                                OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStateInterrupted                                          OFFSET(getStruct<T>, {0x88, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
	// class UAbilityTask_StartAbilityState* StartAbilityState(class UGameplayAbility* OwningAbility, FName StateName, bool bEndCurrentState); // [0x74bcd00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_VisualizeTargeting
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FMulticastInlineDelegate)                  TimeElapsed                                                 OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
	// class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, FName TaskInstanceName, float duration); // [0x74be160] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
	// class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UGameplayAbility* OwningAbility, class UClass* Class, FName TaskInstanceName, float duration); // [0x74be000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
	// void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);        // [0x74afe80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
	// bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor*& SpawnedActor); // [0x74ab0e4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate
/// Size: 0x00F8 (0x000078 - 0x000170)
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FMulticastInlineDelegate)                  OnActivate                                                  OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
	// class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x74be9a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
	// class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x74bed78] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
	// class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(class UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x74be5a8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
	// void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);                                                        // [0x74b79dc] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit
/// Size: 0x0070 (0x000078 - 0x0000E8)
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnCommit                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
	// class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool TriggerOnce); // [0x74bf400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
	// class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(class UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTage, bool TriggerOnce); // [0x74bf0e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
	// void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);                                                          // [0x74b7a5c] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChange
/// Size: 0x0070 (0x000078 - 0x0000E8)
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnChange                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(class UAbilitySystemComponent*)            ExternalOwner                                               OFFSET(get<T>, {0xE0, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
	// class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, FGameplayAttribute InAttribute, FGameplayTag InWithTag, FGameplayTag InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner); // [0x74c0794] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
	// class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, FGameplayTag WithSrcTag, FGameplayTag WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner); // [0x74bf68c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
/// Size: 0x00C0 (0x000078 - 0x000138)
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FMulticastInlineDelegate)                  OnChange                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(class UAbilitySystemComponent*)            ExternalOwner                                               OFFSET(get<T>, {0x130, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
	// class UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, FGameplayAttribute AttributeNumerator, FGameplayAttribute AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner); // [0x74bfbb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
/// Size: 0x0070 (0x000078 - 0x0000E8)
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnChange                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(class UAbilitySystemComponent*)            ExternalOwner                                               OFFSET(get<T>, {0xE0, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
	// class UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner); // [0x74c0264] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitCancel
/// Size: 0x0018 (0x000078 - 0x000090)
class UAbilityTask_WaitCancel : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  OnCancel                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
	// class UAbilityTask_WaitCancel* WaitCancel(class UGameplayAbility* OwningAbility);                                        // [0x74be298] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
	// void OnLocalCancelCallback();                                                                                            // [0x74b8654] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
	// void OnCancelCallback();                                                                                                 // [0x74b7ce4] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirm
/// Size: 0x0020 (0x000078 - 0x000098)
class UAbilityTask_WaitConfirm : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnConfirm                                                   OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
	// class UAbilityTask_WaitConfirm* WaitConfirm(class UGameplayAbility* OwningAbility);                                      // [0x74be358] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
	// void OnConfirmCallback(class UGameplayAbility* InAbility);                                                               // [0x74b7d0c] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FMulticastInlineDelegate)                  OnConfirm                                                   OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCancel                                                    OFFSET(getStruct<T>, {0x88, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
	// class UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(class UGameplayAbility* OwningAbility);                          // [0x74be418] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
	// void OnLocalConfirmCallback();                                                                                           // [0x74b867c] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
	// void OnLocalCancelCallback();                                                                                            // [0x74b8668] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
	// void OnConfirmCallback();                                                                                                // [0x74b7d8c] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
	// void OnCancelCallback();                                                                                                 // [0x74b7cf8] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitDelay
/// Size: 0x0018 (0x000078 - 0x000090)
class UAbilityTask_WaitDelay : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  OnFinish                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
	// class UAbilityTask_WaitDelay* WaitDelay(class UGameplayAbility* OwningAbility, float Time);                              // [0x74be4d8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
/// Size: 0x01C8 (0x000078 - 0x000240)
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(class UAbilitySystemComponent*)            ExternalOwner                                               OFFSET(get<T>, {0x230, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
	// void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle); // [0x74b7adc] Final|Native|Public|HasOutParms 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
/// Size: 0x0020 (0x000240 - 0x000260)
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FMulticastInlineDelegate)                  OnApplied                                                   OFFSET(getStruct<T>, {0x240, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
	// class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x74c1914] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
	// class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x74c1204] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
/// Size: 0x0020 (0x000240 - 0x000260)
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FMulticastInlineDelegate)                  OnApplied                                                   OFFSET(getStruct<T>, {0x240, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
	// class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x74c26e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
	// class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle TargetFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects); // [0x74c1fd8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
/// Size: 0x0138 (0x000078 - 0x0001B0)
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FMulticastInlineDelegate)                  bLocked                                                     OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(class UAbilitySystemComponent*)            ExternalOwner                                               OFFSET(get<T>, {0x1A0, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
	// class UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // [0x74c2dac] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
/// Size: 0x0040 (0x000078 - 0x0000B8)
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FMulticastInlineDelegate)                  OnRemoved                                                   OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  InvalidHandle                                               OFFSET(getStruct<T>, {0x88, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
	// class UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle); // [0x74c0e74] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
	// void OnGameplayEffectRemoved(FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);                                   // [0x74b7db4] Final|Native|Public|HasOutParms 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnChange                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  InvalidHandle                                               OFFSET(getStruct<T>, {0x88, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
	// class UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle); // [0x74c0fdc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
	// void OnGameplayEffectStackChange(FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount);                // [0x74b7e84] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent
/// Size: 0x0030 (0x000078 - 0x0000A8)
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  EventReceived                                               OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(class UAbilitySystemComponent*)            OptionalExternalTarget                                      OFFSET(get<T>, {0x90, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
	// class UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(class UGameplayAbility* OwningAbility, FGameplayTag EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact); // [0x74c32a4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTag
/// Size: 0x0020 (0x000078 - 0x000098)
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class UAbilitySystemComponent*)            OptionalExternalTarget                                      OFFSET(get<T>, {0x80, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
	// void GameplayTagCallback(FGameplayTag tag, int32_t NewCount);                                                            // [0x74b03d4] Native|Public        
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  Added                                                       OFFSET(getStruct<T>, {0x98, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
	// class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, FGameplayTag tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // [0x74c369c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  Removed                                                     OFFSET(getStruct<T>, {0x98, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
	// class UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, FGameplayTag tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // [0x74c3df0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery
/// Size: 0x00E0 (0x000078 - 0x000158)
class UAbilityTask_WaitGameplayTagQuery : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FMulticastInlineDelegate)                  Triggered                                                   OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	CMember(class UAbilitySystemComponent*)            OptionalExternalTarget                                      OFFSET(get<T>, {0x148, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery.WaitGameplayTagQuery
	// class UAbilityTask_WaitGameplayTagQuery* WaitGameplayTagQuery(class UGameplayAbility* OwningAbility, FGameplayTagQuery TagQuery, class AActor* InOptionalExternalTarget, EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce); // [0x74c39bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery.UpdateTargetTags
	// void UpdateTargetTags(FGameplayTag tag, int32_t NewCount);                                                               // [0x74bddf4] Final|Native|Protected 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputPress
/// Size: 0x0020 (0x000078 - 0x000098)
class UAbilityTask_WaitInputPress : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnPress                                                     OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
	// class UAbilityTask_WaitInputPress* WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);      // [0x74c4110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
	// void OnPressCallback();                                                                                                  // [0x74b88a0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputRelease
/// Size: 0x0020 (0x000078 - 0x000098)
class UAbilityTask_WaitInputRelease : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnRelease                                                   OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
	// class UAbilityTask_WaitInputRelease* WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased); // [0x74c4218] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
	// void OnReleaseCallback();                                                                                                // [0x74b88b4] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange
/// Size: 0x0020 (0x000078 - 0x000098)
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnChange                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
	// void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x74b8758] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
	// class UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode); // [0x74ac944] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitOverlap
/// Size: 0x0010 (0x000078 - 0x000088)
class UAbilityTask_WaitOverlap : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMulticastInlineDelegate)                  OnOverlap                                                   OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
	// class UAbilityTask_WaitOverlap* WaitForOverlap(class UGameplayAbility* OwningAbility);                                   // [0x74c1144] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
	// void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0x74b8164] Final|Native|Public|HasOutParms|HasDefaults 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitTargetData
/// Size: 0x0040 (0x000078 - 0x0000B8)
class UAbilityTask_WaitTargetData : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FMulticastInlineDelegate)                  ValidData                                                   OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  Cancelled                                                   OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	CMember(class UClass*)                             TargetClass                                                 OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(class AGameplayAbilityTargetActor*)        TargetActor                                                 OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
	// class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor); // [0x74c4598] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
	// class UAbilityTask_WaitTargetData* WaitTargetData(class UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class); // [0x74c4424] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
	// void OnTargetDataReplicatedCancelledCallback();                                                                          // [0x203d8a4] Native|Public        
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
	// void OnTargetDataReplicatedCallback(FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag);                 // [0x74b8c74] Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
	// void OnTargetDataReadyCallback(FGameplayAbilityTargetDataHandle& Data);                                                  // [0x74b8bac] Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
	// void OnTargetDataCancelledCallback(FGameplayAbilityTargetDataHandle& Data);                                              // [0x74b8ae4] Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
	// void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);        // [0x74affcc] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
	// bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor*& SpawnedActor); // [0x74ab210] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitVelocityChange
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnVelocityChage                                             OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(class UMovementComponent*)                 CachedMovementComponent                                     OFFSET(get<T>, {0x88, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
	// class UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, FVector Direction, float MinimumMagnitude); // [0x74aca48] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilitySystemBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
	// bool TargetDataHasOrigin(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                                   // [0x74bd330] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
	// bool TargetDataHasHitResult(FGameplayAbilityTargetDataHandle& HitResult, int32_t Index);                                 // [0x74bd188] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
	// bool TargetDataHasEndPoint(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                                 // [0x74bcfe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
	// bool TargetDataHasActor(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                                    // [0x74bce38] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
	// FGameplayEffectSpecHandle SetStackCountToMax(FGameplayEffectSpecHandle SpecHandle);                                      // [0x74bc864] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
	// FGameplayEffectSpecHandle SetStackCount(FGameplayEffectSpecHandle SpecHandle, int32_t StackCount);                       // [0x74bc610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
	// FGameplayEffectSpecHandle SetDuration(FGameplayEffectSpecHandle SpecHandle, float duration);                             // [0x74bc3c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
	// void SendGameplayEventToActor(class AActor* Actor, FGameplayTag EventTag, FGameplayEventData Payload);                   // [0x2e085c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.RemoveLooseGameplayTags
	// bool RemoveLooseGameplayTags(class AActor* Actor, FGameplayTagContainer& GameplayTags, bool bShouldReplicate);           // [0x2e07fec] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
	// bool NotEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB);          // [0x74b771c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAbilitySpecHandle
	// bool NotEqual_GameplayAbilitySpecHandle(FGameplayAbilitySpecHandle& A, FGameplayAbilitySpecHandle& B);                   // [0x74b7634] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_ActiveGameplayEffectHandle
	// bool NotEqual_ActiveGameplayEffectHandle(FActiveGameplayEffectHandle& A, FActiveGameplayEffectHandle& B);                // [0x74b7544] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
	// FGameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel); // [0x74b58f4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters
	// FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, FGameplayEffectContextHandle EffectContext, FGameplayTag MatchedTagName, FGameplayTag OriginalTag, FGameplayTagContainer AggregatedSourceTags, FGameplayTagContainer AggregatedTargetTags, FVector Location, FVector Normal, class AActor* Instigator, class AActor* EffectCauser, class UObject* SourceObject, class UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, class USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy); // [0x21ddd54] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
	// FGameplayTargetDataFilterHandle MakeFilterHandle(FGameplayTargetDataFilter Filter, class AActor* FilterActor);           // [0x74b5694] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
	// bool IsValid(FGameplayAttribute Attribute);                                                                              // [0x74b5184] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
	// bool IsInstigatorLocallyControlledPlayer(FGameplayCueParameters Parameters);                                             // [0x74b5020] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
	// bool IsInstigatorLocallyControlled(FGameplayCueParameters Parameters);                                                   // [0x74b4ebc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
	// bool HasHitResult(FGameplayCueParameters Parameters);                                                                    // [0x74b4c24] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
	// FTransform GetTargetDataOrigin(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                             // [0x74b4a28] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
	// FTransform GetTargetDataEndPointTransform(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                  // [0x74b4844] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
	// FVector GetTargetDataEndPoint(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                              // [0x74b4688] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
	// FVector GetOrigin(FGameplayCueParameters Parameters);                                                                    // [0x74b4520] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
	// float GetModifiedAttributeMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayAttribute Attribute);                 // [0x74b4288] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
	// FTransform GetInstigatorTransform(FGameplayCueParameters Parameters);                                                    // [0x74b40fc] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
	// class AActor* GetInstigatorActor(FGameplayCueParameters Parameters);                                                     // [0x74b3fa4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
	// FHitResult GetHitResultFromTargetData(FGameplayAbilityTargetDataHandle& HitResult, int32_t Index);                       // [0x74b3d60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
	// FHitResult GetHitResult(FGameplayCueParameters Parameters);                                                              // [0x74b3b84] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectUIData
	// class UGameplayEffectUIData* GetGameplayEffectUIData(class UClass* EffectClass, class UClass* DataType);                 // [0x74b38a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectFromActiveEffectHandle
	// class UGameplayEffect* GetGameplayEffectFromActiveEffectHandle(FActiveGameplayEffectHandle& ActiveHandle);               // [0x74b3560] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
	// bool GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Location, FVector& Normal); // [0x74b2f40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
	// bool GetGameplayCueDirection(class AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Direction);          // [0x74b2cac] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayAbilityFromSpecHandle
	// class UGameplayAbility* GetGameplayAbilityFromSpecHandle(class UAbilitySystemComponent* AbilitySystem, FGameplayAbilitySpecHandle& AbilitySpecHandle, bool& bIsInstance); // [0x74b28a4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
	// float GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // [0x74b2640] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
	// float GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // [0x74b23dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
	// float GetFloatAttributeBase(class AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);       // [0x74b2178] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
	// float GetFloatAttribute(class AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);           // [0x74b1f14] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
	// FGameplayEffectContextHandle GetEffectContext(FGameplayEffectSpecHandle SpecHandle);                                     // [0x74b1d98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetDebugStringFromGameplayAttribute
	// FString GetDebugStringFromGameplayAttribute(FGameplayAttribute& Attribute);                                              // [0x74b1bc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
	// int32_t GetDataCountFromTargetData(FGameplayAbilityTargetDataHandle& TargetData);                                        // [0x74b1b00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
	// TArray<FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(FGameplayEffectSpecHandle SpecHandle);           // [0x74b18e4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData
	// TArray<AActor*> GetAllActorsFromTargetData(FGameplayAbilityTargetDataHandle& TargetData);                                // [0x74b16fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
	// TArray<AActor*> GetActorsFromTargetData(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                    // [0x74b1494] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
	// int32_t GetActorCount(FGameplayCueParameters Parameters);                                                                // [0x74b133c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
	// class AActor* GetActorByIndex(FGameplayCueParameters Parameters, int32_t Index);                                         // [0x74b10e8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
	// float GetActiveGameplayEffectTotalDuration(FActiveGameplayEffectHandle ActiveHandle);                                    // [0x74b0fb4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
	// float GetActiveGameplayEffectStartTime(FActiveGameplayEffectHandle ActiveHandle);                                        // [0x74b0e80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
	// int32_t GetActiveGameplayEffectStackLimitCount(FActiveGameplayEffectHandle ActiveHandle);                                // [0x74b0d4c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
	// int32_t GetActiveGameplayEffectStackCount(FActiveGameplayEffectHandle ActiveHandle);                                     // [0x74b0c18] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
	// float GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, FActiveGameplayEffectHandle ActiveHandle); // [0x74b0aac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
	// float GetActiveGameplayEffectExpectedEndTime(FActiveGameplayEffectHandle ActiveHandle);                                  // [0x74b0978] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
	// FString GetActiveGameplayEffectDebugString(FActiveGameplayEffectHandle ActiveHandle);                                    // [0x74b0830] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
	// class UAbilitySystemComponent* GetAbilitySystemComponent(class AActor* Actor);                                           // [0x2e08808] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
	// void ForwardGameplayCueToTarget(TScriptInterface<Class> TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x74b0094] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
	// FGameplayAbilityTargetDataHandle FilterTargetData(FGameplayAbilityTargetDataHandle& TargetDataHandle, FGameplayTargetDataFilterHandle ActorFilterClass); // [0x74af3d4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
	// float EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess); // [0x74aedd8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
	// float EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags, bool& bSuccess); // [0x74ae954] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
	// bool EqualEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB);        // [0x74ae694] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAbilitySpecHandle
	// bool EqualEqual_GameplayAbilitySpecHandle(FGameplayAbilitySpecHandle& A, FGameplayAbilitySpecHandle& B);                 // [0x74ae5ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_ActiveGameplayEffectHandle
	// bool EqualEqual_ActiveGameplayEffectHandle(FActiveGameplayEffectHandle& A, FActiveGameplayEffectHandle& B);              // [0x74ae4bc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
	// void EffectContextSetOrigin(FGameplayEffectContextHandle EffectContext, FVector Origin);                                 // [0x74ae254] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
	// bool EffectContextIsValid(FGameplayEffectContextHandle EffectContext);                                                   // [0x74ae0d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
	// bool EffectContextIsInstigatorLocallyControlled(FGameplayEffectContextHandle EffectContext);                             // [0x74adf44] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
	// bool EffectContextHasHitResult(FGameplayEffectContextHandle EffectContext);                                              // [0x74addb8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
	// class UObject* EffectContextGetSourceObject(FGameplayEffectContextHandle EffectContext);                                 // [0x74adc30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
	// class AActor* EffectContextGetOriginalInstigatorActor(FGameplayEffectContextHandle EffectContext);                       // [0x74adaa8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
	// FVector EffectContextGetOrigin(FGameplayEffectContextHandle EffectContext);                                              // [0x74ad918] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
	// class AActor* EffectContextGetInstigatorActor(FGameplayEffectContextHandle EffectContext);                               // [0x3eaf988] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
	// FHitResult EffectContextGetHitResult(FGameplayEffectContextHandle EffectContext);                                        // [0x74ad6cc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
	// class AActor* EffectContextGetEffectCauser(FGameplayEffectContextHandle EffectContext);                                  // [0x74ad544] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
	// void EffectContextAddHitResult(FGameplayEffectContextHandle EffectContext, FHitResult HitResult, bool bReset);           // [0x74ad1bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
	// bool DoesTargetDataContainActor(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, class AActor* Actor);       // [0x74acf34] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
	// bool DoesGameplayCueMeetTagRequirements(FGameplayCueParameters Parameters, FGameplayTagRequirements& SourceTagReqs, FGameplayTagRequirements& TargetTagReqs); // [0x74acca0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
	// FGameplayEffectSpecHandle CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone); // [0x74ac4c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters
	// void BreakGameplayCueParameters(FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, FGameplayEffectContextHandle& EffectContext, FGameplayTag& MatchedTagName, FGameplayTag& OriginalTag, FGameplayTagContainer& AggregatedSourceTags, FGameplayTagContainer& AggregatedTargetTags, FVector& Location, FVector& Normal, class AActor*& Instigator, class AActor*& EffectCauser, class UObject*& SourceObject, class UPhysicalMaterial*& PhysicalMaterial, int32_t& GameplayEffectLevel, int32_t& AbilityLevel, class USceneComponent*& TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy); // [0x1ebec30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
	// FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayTag DataTag, float Magnitude); // [0x1f423ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
	// FGameplayEffectSpecHandle AssignSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FName DataName, float Magnitude); // [0x74aa888] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
	// FGameplayAbilityTargetDataHandle AppendTargetDataHandle(FGameplayAbilityTargetDataHandle TargetHandle, FGameplayAbilityTargetDataHandle& HandleToAdd); // [0x74a4e08] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLooseGameplayTags
	// bool AddLooseGameplayTags(class AActor* Actor, FGameplayTagContainer& GameplayTags, bool bShouldReplicate);              // [0x2e081e4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
	// FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(FGameplayEffectSpecHandle SpecHandle, FGameplayEffectSpecHandle LinkedGameplayEffectSpec); // [0x74a4b70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
	// FGameplayEffectSpecHandle AddLinkedGameplayEffect(FGameplayEffectSpecHandle SpecHandle, class UClass* LinkedGameplayEffect); // [0x74a4900] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
	// FGameplayEffectSpecHandle AddGrantedTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags);   // [0x74a466c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
	// FGameplayEffectSpecHandle AddGrantedTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag);              // [0x74a4418] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
	// FGameplayEffectSpecHandle AddAssetTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags);     // [0x74a4184] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
	// FGameplayEffectSpecHandle AddAssetTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag);                // [0x74a3f30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(FGameplayAbilityTargetingLocationInfo& SourceLocation, FGameplayAbilityTargetingLocationInfo& TargetLocation); // [0x74a3e00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(FHitResult& HitResult);                                  // [0x74a3cec] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray<AActor*>& ActorArray, bool OneTargetPerHandle);  // [0x31b94d4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class AActor* Actor);                                        // [0x74a3c38] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GameplayAbilities.AbilitySystemComponent
/// Size: 0x1150 (0x000118 - 0x001268)
class UAbilitySystemComponent : public UGameplayTasksComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4712;

public:
	CMember(TArray<FAttributeDefaults>)                DefaultStartingData                                         OFFSET(get<T>, {0x128, 16, 0, 0})
	SMember(FName)                                     AffectedAnimInstanceTag                                     OFFSET(getStruct<T>, {0x138, 4, 0, 0})
	DMember(float)                                     OutgoingDuration                                            OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(float)                                     IncomingDuration                                            OFFSET(get<float>, {0x2EC, 4, 0, 0})
	CMember(TArray<FString>)                           ClientDebugStrings                                          OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(TArray<FString>)                           ServerDebugStrings                                          OFFSET(get<T>, {0x320, 16, 0, 0})
	DMember(bool)                                      UserAbilityActivationInhibited                              OFFSET(get<bool>, {0x390, 1, 0, 0})
	DMember(bool)                                      ReplicationProxyEnabled                                     OFFSET(get<bool>, {0x391, 1, 0, 0})
	DMember(bool)                                      bSuppressGrantAbility                                       OFFSET(get<bool>, {0x392, 1, 0, 0})
	DMember(bool)                                      bSuppressGameplayCues                                       OFFSET(get<bool>, {0x393, 1, 0, 0})
	CMember(TArray<class AGameplayAbilityTargetActor*>) SpawnedTargetActors                                        OFFSET(get<T>, {0x398, 16, 0, 0})
	CMember(class AActor*)                             OwnerActor                                                  OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class AActor*)                             AvatarActor                                                 OFFSET(get<T>, {0x3D8, 8, 0, 0})
	SMember(FGameplayAbilitySpecContainer)             ActivatableAbilities                                        OFFSET(getStruct<T>, {0x3F0, 288, 0, 0})
	CMember(TArray<class UGameplayAbility*>)           AllReplicatedInstancedAbilities                             OFFSET(get<T>, {0x540, 16, 0, 0})
	SMember(FGameplayAbilityRepAnimMontage)            RepAnimMontageInfo                                          OFFSET(getStruct<T>, {0x780, 64, 0, 0})
	DMember(bool)                                      bCachedIsNetSimulated                                       OFFSET(get<bool>, {0x7C0, 1, 0, 0})
	DMember(bool)                                      bPendingMontageRep                                          OFFSET(get<bool>, {0x7C1, 1, 0, 0})
	SMember(FGameplayAbilityLocalAnimMontage)          LocalAnimMontageInfo                                        OFFSET(getStruct<T>, {0x7C8, 48, 0, 0})
	SMember(FActiveGameplayEffectsContainer)           ActiveGameplayEffects                                       OFFSET(getStruct<T>, {0x898, 768, 0, 0})
	SMember(FActiveGameplayCueContainer)               ActiveGameplayCues                                          OFFSET(getStruct<T>, {0xB98, 296, 0, 0})
	SMember(FActiveGameplayCueContainer)               MinimalReplicationGameplayCues                              OFFSET(getStruct<T>, {0xCC0, 296, 0, 0})
	CMember(TArray<char>)                              BlockedAbilityBindings                                      OFFSET(get<T>, {0xF10, 16, 0, 0})
	SMember(FMinimalReplicationTagCountMap)            MinimalReplicationTags                                      OFFSET(getStruct<T>, {0x1048, 104, 0, 0})
	CMember(TArray<class UAttributeSet*>)              SpawnedAttributes                                           OFFSET(get<T>, {0x10B0, 16, 0, 0})
	SMember(FMinimalReplicationTagCountMap)            ReplicatedLooseTags                                         OFFSET(getStruct<T>, {0x10D0, 104, 0, 0})
	SMember(FReplicatedPredictionKeyMap)               ReplicatedPredictionKeyMap                                  OFFSET(getStruct<T>, {0x1140, 280, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitudes
	// void UpdateActiveGameplayEffectSetByCallerMagnitudes(FActiveGameplayEffectHandle ActiveHandle, TMap<FGameplayTag, float>& NewSetByCallerValues); // [0x74bdc10] BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitude
	// void UpdateActiveGameplayEffectSetByCallerMagnitude(FActiveGameplayEffectHandle ActiveHandle, FGameplayTag SetByCallerTag, float NewValue); // [0x74bd930] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
	// bool TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);                          // [0x74bd848] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbility
	// bool TryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool bAllowRemoteActivation);                      // [0x74bd62c] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
	// bool TryActivateAbilitiesByTag(FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);                // [0x74bd4d8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TargetConfirm
	// void TargetConfirm();                                                                                                    // [0x2b6b780] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TargetCancel
	// void TargetCancel();                                                                                                     // [0x3895310] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
	// void SetUserAbilityActivationInhibited(bool NewInhibit);                                                                 // [0x74bc9dc] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
	// void SetActiveGameplayEffectLevelUsingQuery(FGameplayEffectQuery Query, int32_t NewLevel);                               // [0x74bc160] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
	// void SetActiveGameplayEffectLevel(FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel);                           // [0x74bbf4c] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
	// void ServerTryActivateAbilityWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // [0x74bbab8] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
	// void ServerTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey); // [0x74bb774] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
	// void ServerSetReplicatedTargetDataCancelled(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // [0x74bb3f8] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
	// void ServerSetReplicatedTargetData(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey); // [0x74bae9c] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
	// void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload); // [0x74ba9c8] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
	// void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // [0x74ba60c] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
	// void ServerSetInputReleased(FGameplayAbilitySpecHandle AbilityHandle);                                                   // [0x74ba4c0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
	// void ServerSetInputPressed(FGameplayAbilitySpecHandle AbilityHandle);                                                    // [0x74ba374] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
	// void ServerPrintDebug_RequestWithStrings(TArray<FString> Strings);                                                       // [0x74ba2c0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
	// void ServerPrintDebug_Request();                                                                                         // [0x74ba274] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerEndAbility
	// void ServerEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey); // [0x74b9f00] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
	// void ServerCurrentMontageSetPlayRate(class UAnimSequenceBase* ClientAnimation, float InPlayRate);                        // [0x74b9e14] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
	// void ServerCurrentMontageSetNextSectionName(class UAnimSequenceBase* ClientAnimation, float ClientPosition, FName SectionName, FName NextSectionName); // [0x74b9ca0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
	// void ServerCurrentMontageJumpToSectionName(class UAnimSequenceBase* ClientAnimation, FName SectionName);                 // [0x74b9bb4] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
	// void ServerCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);     // [0x74b9954] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
	// void ServerAbilityRPCBatch(FServerAbilityRPCBatch BatchInfo);                                                            // [0x74b9790] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
	// void RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove); // [0x74b9578] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
	// bool RemoveActiveGameplayEffect(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);                             // [0x74b9354] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
	// int32_t RemoveActiveEffectsWithTags(FGameplayTagContainer Tags);                                                         // [0x74b91f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
	// int32_t RemoveActiveEffectsWithSourceTags(FGameplayTagContainer Tags);                                                   // [0x74b908c] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
	// int32_t RemoveActiveEffectsWithGrantedTags(FGameplayTagContainer Tags);                                                  // [0x3601058] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
	// int32_t RemoveActiveEffectsWithAppliedTags(FGameplayTagContainer Tags);                                                  // [0x74b8f28] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ReleaseInputID
	// void ReleaseInputID(int32_t InputID);                                                                                    // [0x74b8ea4] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.PressInputID
	// void PressInputID(int32_t InputID);                                                                                      // [0x74b8e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnSpawnedAttributesEndPlayed
	// void OnSpawnedAttributesEndPlayed(class AActor* InActor, TEnumAsByte<EEndPlayReason> EndPlayReason);                     // [0x74b8918] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_SpawnedAttributes
	// void OnRep_SpawnedAttributes(TArray<UAttributeSet*>& PreviousSpawnedAttributes);                                         // [0x2f3e5dc] Final|Native|Private|HasOutParms 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
	// void OnRep_ServerDebugString();                                                                                          // [0x29ce6e4] Native|Public        
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
	// void OnRep_ReplicatedAnimMontage();                                                                                      // [0x74b88c8] Native|Protected     
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
	// void OnRep_OwningActor();                                                                                                // [0x2be928c] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
	// void OnRep_ClientDebugString();                                                                                          // [0x695d014] Native|Public        
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
	// void OnRep_ActivateAbilities();                                                                                          // [0x212a95c] Native|Protected     
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnOwnerActorDestroyed
	// void OnOwnerActorDestroyed(class AActor* InActor);                                                                       // [0x327bc00] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnAvatarActorDestroyed
	// void OnAvatarActorDestroyed(class AActor* InActor);                                                                      // [0x30de4e4] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
	// void NetMulticast_InvokeGameplayCuesExecuted_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x74b71cc] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
	// void NetMulticast_InvokeGameplayCuesExecuted(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x74b6e48] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
	// void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x74b6ad0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
	// void NetMulticast_InvokeGameplayCueExecuted_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x31494e4] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
	// void NetMulticast_InvokeGameplayCueExecuted_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey);      // [0x31d9cbc] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
	// void NetMulticast_InvokeGameplayCueExecuted(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x74b6780] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
	// void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x74b6424] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
	// void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey); // [0x74b61d4] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
	// void NetMulticast_InvokeGameplayCueAdded_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters); // [0x379f130] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
	// void NetMulticast_InvokeGameplayCueAdded(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x74b5e84] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
	// FGameplayEffectSpecHandle MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, FGameplayEffectContextHandle Context); // [0x3951df0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.MakeEffectContext
	// FGameplayEffectContextHandle MakeEffectContext();                                                                        // [0x74b5654] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_InitStats
	// void K2_InitStats(class UClass* Attributes, class UDataTable* DataTable);                                                // [0x74b5568] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_GiveAbilityAndActivateOnce
	// FGameplayAbilitySpecHandle K2_GiveAbilityAndActivateOnce(class UClass* AbilityClass, int32_t Level, int32_t InputID);    // [0x74b5444] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_GiveAbility
	// FGameplayAbilitySpecHandle K2_GiveAbility(class UClass* AbilityClass, int32_t Level, int32_t InputID);                   // [0x74b5320] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
	// bool IsGameplayCueActive(FGameplayTag GameplayCueTag);                                                                   // [0x74b4d7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.InputConfirm
	// void InputConfirm();                                                                                                     // [0x1db5e78] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.InputCancel
	// void InputCancel();                                                                                                      // [0x30ad158] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
	// bool GetUserAbilityActivationInhibited();                                                                                // [0x74b4c0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayTagCount
	// int32_t GetGameplayTagCount(FGameplayTag GameplayTag);                                                                   // [0x74b3a48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
	// float GetGameplayEffectMagnitude(FActiveGameplayEffectHandle Handle, FGameplayAttribute Attribute);                      // [0x74b362c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount_IfLoaded
	// int32_t GetGameplayEffectCount_IfLoaded(TWeakObjectPtr<UClass*> SoftSourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // [0x74b33e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
	// int32_t GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // [0x74b32c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayAttributeValue
	// float GetGameplayAttributeValue(FGameplayAttribute Attribute, bool& bFound);                                             // [0x74b2a6c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAttributeSet
	// class UAttributeSet* GetAttributeSet(class UClass* AttributeSetClass);                                                   // [0x74b1a5c] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAllAttributes
	// void GetAllAttributes(TArray<FGameplayAttribute>& OutAttributes);                                                        // [0x74b17d8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAllAbilities
	// void GetAllAbilities(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles);                                             // [0x74b1660] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags
	// TArray<FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(FGameplayTagContainer Tags);                             // [0x74b06ac] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffects
	// TArray<FActiveGameplayEffectHandle> GetActiveEffects(FGameplayEffectQuery& Query);                                       // [0x74b05e4] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithTags
	// void FindAllAbilitiesWithTags(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, FGameplayTagContainer Tags, bool bExactMatch); // [0x74af944] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithInputID
	// void FindAllAbilitiesWithInputID(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, int32_t InputID);                // [0x74af7b0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesMatchingQuery
	// void FindAllAbilitiesMatchingQuery(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, FGameplayTagQuery Query);      // [0x74af5d8] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
	// void ClientTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate);                                             // [0x74ac38c] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
	// void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey); // [0x74ac120] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
	// void ClientPrintDebug_Response(TArray<FString> Strings, int32_t GameFlags);                                              // [0x74ac04c] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientEndAbility
	// void ClientEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo);           // [0x74abe24] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
	// void ClientCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);     // [0x74abbfc] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
	// void ClientActivateAbilitySucceedWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // [0x74ab8a4] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
	// void ClientActivateAbilitySucceed(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey);           // [0x74ab678] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
	// void ClientActivateAbilityFailed(FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey);                   // [0x74ab464] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClearAllAbilitiesWithInputID
	// void ClearAllAbilitiesWithInputID(int32_t InputID);                                                                      // [0x74ab3e4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClearAllAbilities
	// void ClearAllAbilities();                                                                                                // [0x74ab3d0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClearAbility
	// void ClearAbility(FGameplayAbilitySpecHandle& Handle);                                                                   // [0x74ab344] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, FGameplayEffectContextHandle Context); // [0x1f42bc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, FGameplayEffectContextHandle EffectContext); // [0x1f42e54] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent* Target); // [0x74aabb8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(FGameplayEffectSpecHandle& SpecHandle);                     // [0x30fc64c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
	// void AbilityConfirmOrCancel__DelegateSignature();                                                                        // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
	// void AbilityAbilityKey__DelegateSignature(int32_t InputID);                                                              // [0x18a39e4] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UAbilitySystemDebugHUDExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension_Tags
/// Size: 0x0058 (0x000028 - 0x000080)
class UAbilitySystemDebugHUDExtension_Tags : public UAbilitySystemDebugHUDExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension_Attributes
/// Size: 0x0058 (0x000028 - 0x000080)
class UAbilitySystemDebugHUDExtension_Attributes : public UAbilitySystemDebugHUDExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension_BlockedAbilityTags
/// Size: 0x0058 (0x000028 - 0x000080)
class UAbilitySystemDebugHUDExtension_BlockedAbilityTags : public UAbilitySystemDebugHUDExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/GameplayAbilities.AbilitySystemGlobals
/// Size: 0x0240 (0x000028 - 0x000268)
class UAbilitySystemGlobals : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FSoftClassPath)                            AbilitySystemGlobalsClassName                               OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      bUseDebugTargetFromHud                                      OFFSET(get<bool>, {0x68, 1, 0, 0})
	SMember(FGameplayTag)                              ActivateFailIsDeadTag                                       OFFSET(getStruct<T>, {0x6C, 4, 0, 0})
	SMember(FName)                                     ActivateFailIsDeadName                                      OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FGameplayTag)                              ActivateFailCooldownTag                                     OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     ActivateFailCooldownName                                    OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FGameplayTag)                              ActivateFailCostTag                                         OFFSET(getStruct<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     ActivateFailCostName                                        OFFSET(getStruct<T>, {0x80, 4, 0, 0})
	SMember(FGameplayTag)                              ActivateFailTagsBlockedTag                                  OFFSET(getStruct<T>, {0x84, 4, 0, 0})
	SMember(FName)                                     ActivateFailTagsBlockedName                                 OFFSET(getStruct<T>, {0x88, 4, 0, 0})
	SMember(FGameplayTag)                              ActivateFailTagsMissingTag                                  OFFSET(getStruct<T>, {0x8C, 4, 0, 0})
	SMember(FName)                                     ActivateFailTagsMissingName                                 OFFSET(getStruct<T>, {0x90, 4, 0, 0})
	SMember(FGameplayTag)                              ActivateFailNetworkingTag                                   OFFSET(getStruct<T>, {0x94, 4, 0, 0})
	SMember(FName)                                     ActivateFailNetworkingName                                  OFFSET(getStruct<T>, {0x98, 4, 0, 0})
	DMember(int32_t)                                   MinimalReplicationTagCountBits                              OFFSET(get<int32_t>, {0x9C, 4, 0, 0})
	SMember(FNetSerializeScriptStructCache)            TargetDataStructCache                                       OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FNetSerializeScriptStructCache)            EffectContextStructCache                                    OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      bAllowGameplayModEvaluationChannels                         OFFSET(get<bool>, {0xC0, 1, 0, 0})
	CMember(EGameplayModEvaluationChannel)             DefaultGameplayModEvaluationChannel                         OFFSET(get<T>, {0xC1, 1, 0, 0})
	SMember(FName)                                     GameplayModEvaluationChannelAliases                         OFFSET(getStruct<T>, {0xC4, 40, 0, 0})
	SMember(FSoftObjectPath)                           GlobalCurveTableName                                        OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	CMember(class UCurveTable*)                        GlobalCurveTable                                            OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FSoftObjectPath)                           GlobalAttributeMetaDataTableName                            OFFSET(getStruct<T>, {0x110, 24, 0, 0})
	CMember(class UDataTable*)                         GlobalAttributeMetaDataTable                                OFFSET(get<T>, {0x128, 8, 0, 0})
	SMember(FSoftObjectPath)                           GlobalAttributeSetDefaultsTableName                         OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   GlobalAttributeSetDefaultsTableNames                        OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TArray<class UCurveTable*>)                GlobalAttributeDefaultsTables                               OFFSET(get<T>, {0x158, 16, 0, 0})
	SMember(FSoftObjectPath)                           GlobalGameplayCueManagerClass                               OFFSET(getStruct<T>, {0x168, 24, 0, 0})
	SMember(FSoftObjectPath)                           GlobalGameplayCueManagerName                                OFFSET(getStruct<T>, {0x180, 24, 0, 0})
	CMember(TArray<FString>)                           GameplayCueNotifyPaths                                      OFFSET(get<T>, {0x198, 16, 0, 0})
	SMember(FSoftObjectPath)                           GameplayTagResponseTableName                                OFFSET(getStruct<T>, {0x1A8, 24, 0, 0})
	CMember(class UGameplayTagReponseTable*)           GameplayTagResponseTable                                    OFFSET(get<T>, {0x1C0, 8, 0, 0})
	DMember(bool)                                      PredictTargetGameplayEffects                                OFFSET(get<bool>, {0x1C9, 1, 0, 0})
	DMember(bool)                                      ReplicateActivationOwnedTags                                OFFSET(get<bool>, {0x1CA, 1, 0, 0})
	CMember(class UGameplayCueManager*)                GlobalGameplayCueManager                                    OFFSET(get<T>, {0x1D0, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilitySystemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAbilitySystemInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayAbilities.AbilitySystemReplicationProxyInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAbilitySystemReplicationProxyInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayAbilities.AttributeSet
/// Size: 0x0008 (0x000028 - 0x000030)
class UAttributeSet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/GameplayAbilities.AbilitySystemTestAttributeSet
/// Size: 0x0040 (0x000030 - 0x000070)
class UAbilitySystemTestAttributeSet : public UAttributeSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     MaxHealth                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Health                                                      OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Mana                                                        OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     MaxMana                                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Damage                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     SpellDamage                                                 OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     PhysicalDamage                                              OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     CritChance                                                  OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     CritMultiplier                                              OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     ArmorDamageReduction                                        OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     DodgeChance                                                 OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     LifeSteal                                                   OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     StackingAttribute1                                          OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     StackingAttribute2                                          OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     NoStackAttribute                                            OFFSET(get<float>, {0x6C, 4, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilitySystemTestPawn
/// Size: 0x0020 (0x000340 - 0x000360)
class AAbilitySystemTestPawn : public ADefaultPawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(class UAbilitySystemComponent*)            AbilitySystemComponent                                      OFFSET(get<T>, {0x358, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AnimNotify_GameplayCue
/// Size: 0x0008 (0x000038 - 0x000040)
class UAnimNotify_GameplayCue : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayCueTag)                           GameplayCue                                                 OFFSET(getStruct<T>, {0x38, 4, 0, 0})
};

/// Class /Script/GameplayAbilities.AnimNotify_GameplayCueState
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotify_GameplayCueState : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayCueTag)                           GameplayCue                                                 OFFSET(getStruct<T>, {0x30, 4, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilityBlueprint
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UGameplayAbilityBlueprint : public UBlueprint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/GameplayAbilities.GameplayCueFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCueFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueFunctionLibrary.RemoveGameplayCueOnActor
	// void RemoveGameplayCueOnActor(class AActor* Target, FGameplayTag GameplayCueTag, FGameplayCueParameters& Parameters);    // [0x27c0350] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayCueFunctionLibrary.MakeGameplayCueParametersFromHitResult
	// FGameplayCueParameters MakeGameplayCueParametersFromHitResult(FHitResult& HitResult);                                    // [0x35f4468] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.GameplayCueFunctionLibrary.ExecuteGameplayCueOnActor
	// void ExecuteGameplayCueOnActor(class AActor* Target, FGameplayTag GameplayCueTag, FGameplayCueParameters& Parameters);   // [0x2ffa05c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayCueFunctionLibrary.AddGameplayCueOnActor
	// void AddGameplayCueOnActor(class AActor* Target, FGameplayTag GameplayCueTag, FGameplayCueParameters& Parameters);       // [0x27c00a4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayCueInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCueInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
	// void ForwardGameplayCueToParent();                                                                                       // [0x3273a5c] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
	// void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters);               // [0x18a39e4] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameplayAbilities.GameplayCueManager
/// Size: 0x0290 (0x000030 - 0x0002C0)
class UGameplayCueManager : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FGameplayCueObjectLibrary)                 RuntimeGameplayCueObjectLibrary                             OFFSET(getStruct<T>, {0x48, 80, 0, 0})
	SMember(FGameplayCueObjectLibrary)                 EditorGameplayCueObjectLibrary                              OFFSET(getStruct<T>, {0x98, 80, 0, 0})
	CMember(TArray<class UClass*>)                     LoadedGameplayCueNotifyClasses                              OFFSET(get<T>, {0x260, 16, 0, 0})
	CMember(TArray<class UClass*>)                     GameplayCueClassesForPreallocation                          OFFSET(get<T>, {0x270, 16, 0, 0})
	CMember(TArray<FGameplayCuePendingExecute>)        PendingExecuteCues                                          OFFSET(get<T>, {0x280, 16, 0, 0})
	DMember(int32_t)                                   GameplayCueSendContextCount                                 OFFSET(get<int32_t>, {0x290, 4, 0, 0})
	CMember(TArray<FPreallocationInfo>)                PreallocationInfoList_Internal                              OFFSET(get<T>, {0x298, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Actor
/// Size: 0x0068 (0x000290 - 0x0002F8)
class AGameplayCueNotify_Actor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	DMember(bool)                                      bAutoDestroyOnRemove                                        OFFSET(get<bool>, {0x290, 1, 0, 0})
	DMember(float)                                     AutoDestroyDelay                                            OFFSET(get<float>, {0x294, 4, 0, 0})
	DMember(bool)                                      WarnIfTimelineIsStillRunning                                OFFSET(get<bool>, {0x298, 1, 0, 0})
	DMember(bool)                                      WarnIfLatentActionIsStillRunning                            OFFSET(get<bool>, {0x299, 1, 0, 0})
	SMember(FGameplayTag)                              GameplayCueTag                                              OFFSET(getStruct<T>, {0x29C, 4, 0, 0})
	SMember(FName)                                     GameplayCueName                                             OFFSET(getStruct<T>, {0x2A0, 4, 0, 0})
	DMember(bool)                                      bAutoAttachToOwner                                          OFFSET(get<bool>, {0x2A4, 1, 0, 0})
	DMember(bool)                                      IsOverride                                                  OFFSET(get<bool>, {0x2A5, 1, 0, 0})
	DMember(bool)                                      bUniqueInstancePerInstigator                                OFFSET(get<bool>, {0x2A6, 1, 0, 0})
	DMember(bool)                                      bUniqueInstancePerSourceObject                              OFFSET(get<bool>, {0x2A7, 1, 0, 0})
	DMember(bool)                                      bAllowMultipleOnActiveEvents                                OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      bAllowMultipleWhileActiveEvents                             OFFSET(get<bool>, {0x2A9, 1, 0, 0})
	DMember(int32_t)                                   NumPreallocatedInstances                                    OFFSET(get<int32_t>, {0x2AC, 4, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.WhileActive
	// bool WhileActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                            // [0x1577274] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnRemove
	// bool OnRemove(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x15798ec] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
	// void OnOwnerDestroyed(class AActor* DestroyedActor);                                                                     // [0x1579f60] Native|Public        
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnExecute
	// bool OnExecute(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                              // [0x2ec2518] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnActive
	// bool OnActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x1889128] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
	// void K2_EndGameplayCue();                                                                                                // [0x1f6c11c] Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Burst
/// Size: 0x0310 (0x000038 - 0x000348)
class UGameplayCueNotify_Burst : public UGameplayCueNotify_Static
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         DefaultSpawnCondition                                       OFFSET(getStruct<T>, {0x38, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          DefaultPlacementInfo                                        OFFSET(getStruct<T>, {0x70, 64, 0, 0})
	SMember(FGameplayCueNotify_BurstEffects)           BurstEffects                                                OFFSET(getStruct<T>, {0xB0, 664, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Burst.OnBurst
	// void OnBurst(class AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);    // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_BurstLatent
/// Size: 0x0368 (0x0002F8 - 0x000660)
class AGameplayCueNotify_BurstLatent : public AGameplayCueNotify_Actor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1632;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         DefaultSpawnCondition                                       OFFSET(getStruct<T>, {0x2F8, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          DefaultPlacementInfo                                        OFFSET(getStruct<T>, {0x330, 64, 0, 0})
	SMember(FGameplayCueNotify_BurstEffects)           BurstEffects                                                OFFSET(getStruct<T>, {0x370, 664, 0, 0})
	SMember(FGameplayCueNotify_SpawnResult)            BurstSpawnResults                                           OFFSET(getStruct<T>, {0x608, 88, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_BurstLatent.OnBurst
	// void OnBurst(class AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);    // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_HitImpact
/// Size: 0x0010 (0x000038 - 0x000048)
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class USoundBase*)                         sound                                                       OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UParticleSystem*)                    ParticleSystem                                              OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Looping
/// Size: 0x0B98 (0x0002F8 - 0x000E90)
class AGameplayCueNotify_Looping : public AGameplayCueNotify_Actor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3728;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         DefaultSpawnCondition                                       OFFSET(getStruct<T>, {0x2F8, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          DefaultPlacementInfo                                        OFFSET(getStruct<T>, {0x330, 64, 0, 0})
	SMember(FGameplayCueNotify_BurstEffects)           ApplicationEffects                                          OFFSET(getStruct<T>, {0x370, 664, 0, 0})
	SMember(FGameplayCueNotify_SpawnResult)            ApplicationSpawnResults                                     OFFSET(getStruct<T>, {0x608, 88, 0, 0})
	SMember(FGameplayCueNotify_LoopingEffects)         LoopingEffects                                              OFFSET(getStruct<T>, {0x660, 496, 0, 0})
	SMember(FGameplayCueNotify_SpawnResult)            LoopingSpawnResults                                         OFFSET(getStruct<T>, {0x850, 88, 0, 0})
	SMember(FGameplayCueNotify_BurstEffects)           RecurringEffects                                            OFFSET(getStruct<T>, {0x8A8, 664, 0, 0})
	SMember(FGameplayCueNotify_SpawnResult)            RecurringSpawnResults                                       OFFSET(getStruct<T>, {0xB40, 88, 0, 0})
	SMember(FGameplayCueNotify_BurstEffects)           RemovalEffects                                              OFFSET(getStruct<T>, {0xB98, 664, 0, 0})
	SMember(FGameplayCueNotify_SpawnResult)            RemovalSpawnResults                                         OFFSET(getStruct<T>, {0xE30, 88, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnRemoval
	// void OnRemoval(class AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);  // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnRecurring
	// void OnRecurring(class AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnLoopingStart
	// void OnLoopingStart(class AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnApplication
	// void OnApplication(class AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameplayAbilities.GameplayCueSet
/// Size: 0x0060 (0x000030 - 0x000090)
class UGameplayCueSet : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<FGameplayCueNotifyData>)            GameplayCueData                                             OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayCueTranslator
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCueTranslator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayAbilities.GameplayCueTranslator_Test
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayAbilities.GameplayEffectCalculation
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameplayEffectCalculation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FGameplayEffectAttributeCaptureDefinition>) RelevantAttributesToCapture                         OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayEffectCustomApplicationRequirement
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayEffectCustomApplicationRequirement : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
	// bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC); // [0x74f8768] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayEffectExecutionCalculation
/// Size: 0x0008 (0x000038 - 0x000040)
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bRequiresPassedInTags                                       OFFSET(get<bool>, {0x38, 1, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayEffectExecutionCalculation.Execute
	// void Execute(FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput); // [0x74f8974] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayModMagnitudeCalculation
/// Size: 0x0008 (0x000038 - 0x000040)
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bAllowNonNetAuthorityDependencyRegistration                 OFFSET(get<bool>, {0x38, 1, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.K2_GetCapturedAttributeMagnitude
	// float K2_GetCapturedAttributeMagnitude(FGameplayEffectSpec& EffectSpec, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags); // [0x74f9318] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetSpecTags
	// FGameplayTagContainer GetTargetSpecTags(FGameplayEffectSpec& EffectSpec);                                                // [0x74f924c] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetAggregatedTags
	// FGameplayTagContainer GetTargetAggregatedTags(FGameplayEffectSpec& EffectSpec);                                          // [0x74f911c] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetActorTags
	// FGameplayTagContainer GetTargetActorTags(FGameplayEffectSpec& EffectSpec);                                               // [0x74f9050] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceSpecTags
	// FGameplayTagContainer GetSourceSpecTags(FGameplayEffectSpec& EffectSpec);                                                // [0x74f8f84] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceAggregatedTags
	// FGameplayTagContainer GetSourceAggregatedTags(FGameplayEffectSpec& EffectSpec);                                          // [0x74f8e54] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceActorTags
	// FGameplayTagContainer GetSourceActorTags(FGameplayEffectSpec& EffectSpec);                                               // [0x74f8d8c] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByTag
	// float GetSetByCallerMagnitudeByTag(FGameplayEffectSpec& EffectSpec, FGameplayTag& tag);                                  // [0x74f8c34] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByName
	// float GetSetByCallerMagnitudeByName(FGameplayEffectSpec& EffectSpec, FName& MagnitudeName);                              // [0x74f8aa8] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
	// float CalculateBaseMagnitude(FGameplayEffectSpec& Spec);                                                                 // [0x74f869c] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayTagReponseTable
/// Size: 0x0200 (0x000030 - 0x000230)
class UGameplayTagReponseTable : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(TArray<FGameplayTagResponseTableEntry>)    Entries                                                     OFFSET(get<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
	// void TagResponseEvent(FGameplayTag tag, int32_t NewCount, class UAbilitySystemComponent* ASC, int32_t idx);              // [0x74f9678] Final|Native|Protected 
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueTriggerSection
/// Size: 0x00F8 (0x000108 - 0x000200)
class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FMovieSceneGameplayCueChannel)             Channel                                                     OFFSET(getStruct<T>, {0x108, 248, 0, 0})
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueSection
/// Size: 0x0088 (0x000108 - 0x000190)
class UMovieSceneGameplayCueSection : public UMovieSceneHookSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FMovieSceneGameplayCueKey)                 Cue                                                         OFFSET(getStruct<T>, {0x108, 136, 0, 0})
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0x98, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler
	// void SetSequencerTrackHandler(FDelegateProperty InGameplayCueTrackHandler);                                              // [0x74f95f8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.TickableAttributeSetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTickableAttributeSetInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffect
/// Size: 0x035C (0x00000C - 0x000368)
class FActiveGameplayEffect : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	SMember(FGameplayEffectSpec)                       Spec                                                        OFFSET(getStruct<T>, {0x18, 664, 0, 0})
	SMember(FPredictionKey)                            PredictionKey                                               OFFSET(getStruct<T>, {0x2B0, 24, 0, 0})
	CMember(TArray<FGameplayAbilitySpecHandle>)        GrantedAbilityHandles                                       OFFSET(get<T>, {0x2C8, 16, 0, 0})
	DMember(float)                                     StartServerWorldTime                                        OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(float)                                     CachedStartServerWorldTime                                  OFFSET(get<float>, {0x2DC, 4, 0, 0})
	DMember(float)                                     StartWorldTime                                              OFFSET(get<float>, {0x2E0, 4, 0, 0})
	DMember(bool)                                      bIsInhibited                                                OFFSET(get<bool>, {0x2E4, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FGameplayAbilitySpecHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Handle                                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.PredictionKey
/// Size: 0x0018 (0x000000 - 0x000018)
class FPredictionKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UPackageMap*)                        PredictiveConnection                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int16_t)                                   Current                                                     OFFSET(get<int16_t>, {0x8, 2, 0, 0})
	DMember(int16_t)                                   base                                                        OFFSET(get<int16_t>, {0xA, 2, 0, 0})
	DMember(bool)                                      bIsStale                                                    OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bIsServerInitiated                                          OFFSET(get<bool>, {0xD, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpec
/// Size: 0x0298 (0x000000 - 0x000298)
class FGameplayEffectSpec : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UGameplayEffect*)                    Def                                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FGameplayEffectModifiedAttribute>)  ModifiedAttributes                                          OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FGameplayEffectAttributeCaptureSpecContainer) CapturedRelevantAttributes                               OFFSET(getStruct<T>, {0x18, 40, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     Period                                                      OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     ChanceToApplyToTarget                                       OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FTagContainerAggregator)                   CapturedSourceTags                                          OFFSET(getStruct<T>, {0x60, 136, 0, 0})
	SMember(FTagContainerAggregator)                   CapturedTargetTags                                          OFFSET(getStruct<T>, {0xE8, 136, 0, 0})
	SMember(FGameplayTagContainer)                     DynamicGrantedTags                                          OFFSET(getStruct<T>, {0x170, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DynamicAssetTags                                            OFFSET(getStruct<T>, {0x190, 32, 0, 0})
	CMember(TArray<FModifierSpec>)                     Modifiers                                                   OFFSET(get<T>, {0x1B0, 16, 0, 0})
	DMember(int32_t)                                   StackCount                                                  OFFSET(get<int32_t>, {0x1C0, 4, 0, 0})
	DMember(bool)                                      bCompletedSourceAttributeCapture                            OFFSET(get<bool>, {0x1C4, 1, 1, 0})
	DMember(bool)                                      bCompletedTargetAttributeCapture                            OFFSET(get<bool>, {0x1C4, 1, 1, 1})
	DMember(bool)                                      bDurationLocked                                             OFFSET(get<bool>, {0x1C4, 1, 1, 2})
	CMember(TArray<FGameplayAbilitySpecDef>)           GrantedAbilitySpecs                                         OFFSET(get<T>, {0x1C8, 16, 0, 0})
	SMember(FGameplayEffectContextHandle)              EffectContext                                               OFFSET(getStruct<T>, {0x278, 24, 0, 0})
	DMember(float)                                     Level                                                       OFFSET(get<float>, {0x290, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextHandle
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayEffectContextHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecDef
/// Size: 0x0098 (0x000000 - 0x000098)
class FGameplayAbilitySpecDef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class UClass*)                             Ability                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FScalableFloat)                            LevelScalableFloat                                          OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	DMember(int32_t)                                   InputID                                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(EGameplayEffectGrantedAbilityRemovePolicy) RemovalPolicy                                               OFFSET(get<T>, {0x34, 1, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  SourceObject                                                OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FGameplayAbilitySpecHandle)                AssignedHandle                                              OFFSET(getStruct<T>, {0x90, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.ScalableFloat
/// Size: 0x0028 (0x000000 - 0x000028)
class FScalableFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FCurveTableRowHandle)                      Curve                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FDataRegistryType)                         RegistryType                                                OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.ModifierSpec
/// Size: 0x0004 (0x000000 - 0x000004)
class FModifierSpec : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     EvaluatedMagnitude                                          OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.TagContainerAggregator
/// Size: 0x0088 (0x000000 - 0x000088)
class FTagContainerAggregator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTagContainer)                     CapturedActorTags                                           OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     CapturedSpecTags                                            OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ScopedTags                                                  OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayEffectAttributeCaptureSpecContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FGameplayEffectAttributeCaptureSpec>) SourceAttributes                                          OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGameplayEffectAttributeCaptureSpec>) TargetAttributes                                          OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bHasNonSnapshottedAttributes                                OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpec
/// Size: 0x0050 (0x000000 - 0x000050)
class FGameplayEffectAttributeCaptureSpec : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayEffectAttributeCaptureDefinition) BackingDefinition                                           OFFSET(getStruct<T>, {0x0, 64, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureDefinition
/// Size: 0x0040 (0x000000 - 0x000040)
class FGameplayEffectAttributeCaptureDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayAttribute)                        AttributeToCapture                                          OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	CMember(EGameplayEffectAttributeCaptureSource)     AttributeSource                                             OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(bool)                                      bSnapshot                                                   OFFSET(get<bool>, {0x39, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAttribute
/// Size: 0x0038 (0x000000 - 0x000038)
class FGameplayAttribute : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   AttributeName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(class UStruct*)                            AttributeOwner                                              OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifiedAttribute
/// Size: 0x0040 (0x000000 - 0x000040)
class FGameplayEffectModifiedAttribute : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayAttribute)                        Attribute                                                   OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	DMember(float)                                     TotalMagnitude                                              OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectHandle
/// Size: 0x0008 (0x000000 - 0x000008)
class FActiveGameplayEffectHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Handle                                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bPassedFiltersAndWasExecuted                                OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecHandle
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayEffectSpecHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.GameplayCueParameters
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FGameplayCueParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     NormalizedMagnitude                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RawMagnitude                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FGameplayEffectContextHandle)              EffectContext                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FGameplayTag)                              MatchedTagName                                              OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FGameplayTag)                              OriginalTag                                                 OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	SMember(FGameplayTagContainer)                     AggregatedSourceTags                                        OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AggregatedTargetTags                                        OFFSET(getStruct<T>, {0x48, 32, 0, 0})
	SMember(FVector_NetQuantize10)                     Location                                                    OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	SMember(FVector_NetQuantizeNormal)                 Normal                                                      OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   Instigator                                                  OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   EffectCauser                                                OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  SourceObject                                                OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TWeakObjectPtr<UPhysicalMaterial*>)        PhysicalMaterial                                            OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(int32_t)                                   GameplayEffectLevel                                         OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	DMember(int32_t)                                   AbilityLevel                                                OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	CMember(TWeakObjectPtr<USceneComponent*>)          TargetAttachComponent                                       OFFSET(get<T>, {0xC0, 8, 0, 0})
	DMember(bool)                                      bReplicateLocationWhenUsingMinimalRepProxy                  OFFSET(get<bool>, {0xC8, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectRemovalInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayEffectRemovalInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bPrematureRemoval                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   StackCount                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FGameplayEffectContextHandle)              EffectContext                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEventData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FGameplayEventData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FGameplayTag)                              EventTag                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class AActor*)                             Instigator                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class AActor*)                             Target                                                      OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UObject*)                            OptionalObject                                              OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class UObject*)                            OptionalObject2                                             OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FGameplayEffectContextHandle)              ContextHandle                                               OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FGameplayTagContainer)                     InstigatorTags                                              OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TargetTags                                                  OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	DMember(float)                                     EventMagnitude                                              OFFSET(get<float>, {0x80, 4, 0, 0})
	SMember(FGameplayAbilityTargetDataHandle)          TargetData                                                  OFFSET(getStruct<T>, {0x88, 40, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetDataHandle
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayAbilityTargetDataHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GameplayAbilities.GameplayTagRequirements
/// Size: 0x0088 (0x000000 - 0x000088)
class FGameplayTagRequirements : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTagContainer)                     RequireTags                                                 OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     IgnoreTags                                                  OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FGameplayTagQuery)                         TagQuery                                                    OFFSET(getStruct<T>, {0x40, 72, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilterHandle
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayTargetDataFilterHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActivationInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayAbilityActivationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TEnumAsByte<EGameplayAbilityActivationMode>) ActivationMode                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bCanBeEndedByOtherInstance                                  OFFSET(get<bool>, {0x1, 1, 1, 0})
	SMember(FPredictionKey)                            PredictionKeyWhenActivated                                  OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectQuery
/// Size: 0x0198 (0x000000 - 0x000198)
class FGameplayEffectQuery : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FDelegateProperty)                         CustomMatchDelegate_BP                                      OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FGameplayTagQuery)                         OwningTagQuery                                              OFFSET(getStruct<T>, {0x20, 72, 0, 0})
	SMember(FGameplayTagQuery)                         EffectTagQuery                                              OFFSET(getStruct<T>, {0x68, 72, 0, 0})
	SMember(FGameplayTagQuery)                         SourceTagQuery                                              OFFSET(getStruct<T>, {0xB0, 72, 0, 0})
	SMember(FGameplayTagQuery)                         SourceAggregateTagQuery                                     OFFSET(getStruct<T>, {0xF8, 72, 0, 0})
	SMember(FGameplayAttribute)                        ModifyingAttribute                                          OFFSET(getStruct<T>, {0x140, 56, 0, 0})
	CMember(class UObject*)                            EffectSource                                                OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(class UClass*)                             EffectDefinition                                            OFFSET(get<T>, {0x180, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecForRPC
/// Size: 0x0078 (0x000000 - 0x000078)
class FGameplayEffectSpecForRPC : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UGameplayEffect*)                    Def                                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FGameplayEffectModifiedAttribute>)  ModifiedAttributes                                          OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FGameplayEffectContextHandle)              EffectContext                                               OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FGameplayTagContainer)                     AggregatedSourceTags                                        OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AggregatedTargetTags                                        OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	DMember(float)                                     Level                                                       OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     AbilityLevel                                                OFFSET(get<float>, {0x74, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.ServerAbilityRPCBatch
/// Size: 0x0050 (0x000000 - 0x000050)
class FServerAbilityRPCBatch : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayAbilitySpecHandle)                AbilitySpecHandle                                           OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FPredictionKey)                            PredictionKey                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FGameplayAbilityTargetDataHandle)          TargetData                                                  OFFSET(getStruct<T>, {0x20, 40, 0, 0})
	DMember(bool)                                      InputPressed                                                OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      Ended                                                       OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(bool)                                      Started                                                     OFFSET(get<bool>, {0x4A, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyMap
/// Size: 0x0010 (0x000108 - 0x000118)
class FReplicatedPredictionKeyMap : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FReplicatedPredictionKeyItem>)      PredictionKeys                                              OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyItem
/// Size: 0x001C (0x00000C - 0x000028)
class FReplicatedPredictionKeyItem : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FPredictionKey)                            PredictionKey                                               OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMap
/// Size: 0x0068 (0x000000 - 0x000068)
class FMinimalReplicationTagCountMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(class UAbilitySystemComponent*)            Owner                                                       OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCueContainer
/// Size: 0x0020 (0x000108 - 0x000128)
class FActiveGameplayCueContainer : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(TArray<FActiveGameplayCue>)                GameplayCues                                                OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(class UAbilitySystemComponent*)            Owner                                                       OFFSET(get<T>, {0x120, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCue
/// Size: 0x00F4 (0x00000C - 0x000100)
class FActiveGameplayCue : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FGameplayTag)                              GameplayCueTag                                              OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FPredictionKey)                            PredictionKey                                               OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FGameplayCueParameters)                    Parameters                                                  OFFSET(getStruct<T>, {0x28, 208, 0, 0})
	DMember(bool)                                      bPredictivelyRemoved                                        OFFSET(get<bool>, {0xF8, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectsContainer
/// Size: 0x01F8 (0x000108 - 0x000300)
class FActiveGameplayEffectsContainer : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(TArray<FActiveGameplayEffect>)             GameplayEffects_Internal                                    OFFSET(get<T>, {0x130, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityLocalAnimMontage
/// Size: 0x0030 (0x000000 - 0x000030)
class FGameplayAbilityLocalAnimMontage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UAnimMontage*)                       AnimMontage                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(char)                                      PlayInstanceId                                              OFFSET(get<char>, {0x8, 1, 0, 0})
	SMember(FPredictionKey)                            PredictionKey                                               OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	CMember(TWeakObjectPtr<UGameplayAbility*>)         AnimatingAbility                                            OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityRepAnimMontage
/// Size: 0x0040 (0x000000 - 0x000040)
class FGameplayAbilityRepAnimMontage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UAnimSequenceBase*)                  Animation                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     SlotName                                                    OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Position                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     BlendOutTime                                                OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(char)                                      NextSectionID                                               OFFSET(get<char>, {0x1C, 1, 0, 0})
	DMember(char)                                      PlayInstanceId                                              OFFSET(get<char>, {0x1D, 1, 0, 0})
	DMember(bool)                                      bRepPosition                                                OFFSET(get<bool>, {0x1E, 1, 1, 0})
	DMember(bool)                                      IsStopped                                                   OFFSET(get<bool>, {0x1E, 1, 1, 1})
	DMember(bool)                                      SkipPositionCorrection                                      OFFSET(get<bool>, {0x1E, 1, 1, 2})
	DMember(bool)                                      bSkipPlayRate                                               OFFSET(get<bool>, {0x1E, 1, 1, 3})
	SMember(FPredictionKey)                            PredictionKey                                               OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(char)                                      SectionIdToPlay                                             OFFSET(get<char>, {0x38, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecContainer
/// Size: 0x0018 (0x000108 - 0x000120)
class FGameplayAbilitySpecContainer : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FGameplayAbilitySpec>)              Items                                                       OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(class UAbilitySystemComponent*)            Owner                                                       OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpec
/// Size: 0x00EC (0x00000C - 0x0000F8)
class FGameplayAbilitySpec : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FGameplayAbilitySpecHandle)                Handle                                                      OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	CMember(class UGameplayAbility*)                   Ability                                                     OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   InputID                                                     OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  SourceObject                                                OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(char)                                      ActiveCount                                                 OFFSET(get<char>, {0x28, 1, 0, 0})
	DMember(bool)                                      InputPressed                                                OFFSET(get<bool>, {0x29, 1, 1, 0})
	DMember(bool)                                      RemoveAfterActivation                                       OFFSET(get<bool>, {0x29, 1, 1, 1})
	DMember(bool)                                      PendingRemove                                               OFFSET(get<bool>, {0x29, 1, 1, 2})
	DMember(bool)                                      bActivateOnce                                               OFFSET(get<bool>, {0x29, 1, 1, 3})
	SMember(FGameplayAbilityActivationInfo)            ActivationInfo                                              OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DynamicAbilityTags                                          OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	CMember(TArray<class UGameplayAbility*>)           NonReplicatedInstances                                      OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<class UGameplayAbility*>)           ReplicatedInstances                                         OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FActiveGameplayEffectHandle)               GameplayEffectHandle                                        OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.AttributeDefaults
/// Size: 0x0010 (0x000000 - 0x000010)
class FAttributeDefaults : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UClass*)                             Attributes                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UDataTable*)                         DefaultStartingTable                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueTag
/// Size: 0x0004 (0x000000 - 0x000004)
class FGameplayCueTag : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FGameplayTag)                              GameplayCueTag                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecConfig
/// Size: 0x0038 (0x000000 - 0x000038)
class FGameplayAbilitySpecConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UClass*)                             Ability                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FScalableFloat)                            LevelScalableFloat                                          OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	DMember(int32_t)                                   InputID                                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(EGameplayEffectGrantedAbilityRemovePolicy) RemovalPolicy                                               OFFSET(get<T>, {0x34, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetingLocationInfoNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FGameplayAbilityTargetingLocationInfoNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.GameplayCuePendingExecute
/// Size: 0x0188 (0x000000 - 0x000188)
class FGameplayCuePendingExecute : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FPredictionKey)                            PredictionKey                                               OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	CMember(EGameplayCuePayloadType)                   PayloadType                                                 OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(class UAbilitySystemComponent*)            OwningComponent                                             OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FGameplayEffectSpecForRPC)                 FromSpec                                                    OFFSET(getStruct<T>, {0x40, 120, 0, 0})
	SMember(FGameplayCueParameters)                    CueParameters                                               OFFSET(getStruct<T>, {0xB8, 208, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotifyActorArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayCueNotifyActorArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class AGameplayCueNotify_Actor*>)   Actors                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.PreallocationInfo
/// Size: 0x0068 (0x000000 - 0x000068)
class FPreallocationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TMap<UClass*, FGameplayCueNotifyActorArray>) PreallocatedInstances                                     OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<class UClass*>)                     ClassesNeedingPreallocation                                 OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxyForNetSerializer
/// Size: 0x0020 (0x000000 - 0x000020)
class FMinimalGameplayCueReplicationProxyForNetSerializer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FGameplayTag>)                      Tags                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVector_NetQuantize>)               Locations                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMapForNetSerializer
/// Size: 0x0010 (0x000000 - 0x000010)
class FMinimalReplicationTagCountMapForNetSerializer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FGameplayTag>)                      Tags                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.AbilityTriggerData
/// Size: 0x0008 (0x000000 - 0x000008)
class FAbilityTriggerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              TriggerTag                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<EGameplayAbilityTriggerSource>) TriggerSource                                              OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityBindInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayAbilityBindInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TEnumAsByte<EGameplayAbilityInputBinds>)   Command                                                     OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UClass*)                             GameplayAbilityClass                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilter
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayTargetDataFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class AActor*)                             SelfActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UClass*)                             RequiredActorClass                                          OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TEnumAsByte<ETargetDataFilterSelf>)        SelfFilter                                                  OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bReverseFilter                                              OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.WorldReticleParameters
/// Size: 0x0018 (0x000000 - 0x000018)
class FWorldReticleParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   AOEScale                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/GameplayAbilities.NetSerializeScriptStructCache
/// Size: 0x0010 (0x000000 - 0x000010)
class FNetSerializeScriptStructCache : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UScriptStruct*>)              ScriptStructs                                               OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAttributeData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayAttributeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     BaseValue                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CurrentValue                                                OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.AttributeMetaData
/// Size: 0x0028 (0x000008 - 0x000030)
class FAttributeMetaData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     BaseValue                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinValue                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxValue                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FString)                                   DerivedAttributeInfo                                        OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bCanStack                                                   OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData
/// Size: 0x0008 (0x000000 - 0x000008)
class FGameplayAbilityTargetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetingLocationInfo
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FGameplayAbilityTargetingLocationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TEnumAsByte<EGameplayAbilityTargetingLocationType>) LocationType                                       OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FTransform)                                LiteralTransform                                            OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	CMember(class AActor*)                             SourceActor                                                 OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UMeshComponent*)                     SourceComponent                                             OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class UGameplayAbility*)                   SourceAbility                                               OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FName)                                     SourceSocketName                                            OFFSET(getStruct<T>, {0x98, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_LocationInfo
/// Size: 0x0148 (0x000008 - 0x000150)
class FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FGameplayAbilityTargetingLocationInfo)     SourceLocation                                              OFFSET(getStruct<T>, {0x10, 160, 0, 0})
	SMember(FGameplayAbilityTargetingLocationInfo)     TargetLocation                                              OFFSET(getStruct<T>, {0xB0, 160, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_ActorArray
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FGameplayAbilityTargetingLocationInfo)     SourceLocation                                              OFFSET(getStruct<T>, {0x10, 160, 0, 0})
	CMember(TArray<TWeakObjectPtr<AActor*>>)           TargetActorArray                                            OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
/// Size: 0x00F0 (0x000008 - 0x0000F8)
class FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FHitResult)                                HitResult                                                   OFFSET(getStruct<T>, {0x8, 232, 0, 0})
	DMember(bool)                                      bHitReplaced                                                OFFSET(get<bool>, {0xF0, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActorInfo
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameplayAbilityActorInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<AActor*>)                   OwnerActor                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   AvatarActor                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TWeakObjectPtr<APlayerController*>)        PlayerController                                            OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TWeakObjectPtr<UAbilitySystemComponent*>)  AbilitySystemComponent                                      OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   SkeletalMeshComponent                                       OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TWeakObjectPtr<UAnimInstance*>)            AnimInstance                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TWeakObjectPtr<UMovementComponent*>)       MovementComponent                                           OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FName)                                     AffectedAnimInstanceTag                                     OFFSET(getStruct<T>, {0x40, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.AbilityEndedData
/// Size: 0x0010 (0x000000 - 0x000010)
class FAbilityEndedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UGameplayAbility*)                   AbilityThatEnded                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayAbilitySpecHandle)                AbilitySpecHandle                                           OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bReplicateEndAbility                                        OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bWasCancelled                                               OFFSET(get<bool>, {0xD, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.AbilityTaskDebugMessage
/// Size: 0x0018 (0x000000 - 0x000018)
class FAbilityTaskDebugMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UGameplayTask*)                      FromTask                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   Message                                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
/// Size: 0x0008 (0x000000 - 0x000008)
class FGameplayAbilitySpecHandleAndPredictionKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayAbilitySpecHandle)                AbilityHandle                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   PredictionKeyAtCreation                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxy
/// Size: 0x02D0 (0x000000 - 0x0002D0)
class FMinimalGameplayCueReplicationProxy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UAbilitySystemComponent*)            Owner                                                       OFFSET(get<T>, {0x2C0, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueObjectLibrary
/// Size: 0x0050 (0x000000 - 0x000050)
class FGameplayCueObjectLibrary : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FString>)                           Paths                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(class UObjectLibrary*)                     ActorObjectLibrary                                          OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UObjectLibrary*)                     StaticObjectLibrary                                         OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UGameplayCueSet*)                    CueSet                                                      OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bShouldSyncScan                                             OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(bool)                                      bShouldAsyncLoad                                            OFFSET(get<bool>, {0x4D, 1, 0, 0})
	DMember(bool)                                      bShouldSyncLoad                                             OFFSET(get<bool>, {0x4E, 1, 0, 0})
	DMember(bool)                                      bHasBeenInitialized                                         OFFSET(get<bool>, {0x4F, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SpawnCondition
/// Size: 0x0038 (0x000000 - 0x000038)
class FGameplayCueNotify_SpawnCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EGameplayCueNotify_LocallyControlledSource) LocallyControlledSource                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EGameplayCueNotify_LocallyControlledPolicy) LocallyControlledPolicy                                    OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     ChanceToPlay                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TArray<TEnumAsByte<EPhysicalSurface>>)     AllowedSurfaceTypes                                         OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<TEnumAsByte<EPhysicalSurface>>)     RejectedSurfaceTypes                                        OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_PlacementInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FGameplayCueNotify_PlacementInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EGameplayCueNotify_AttachPolicy)           AttachPolicy                                                OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(EAttachmentRule)                           AttachmentRule                                              OFFSET(get<T>, {0x5, 1, 0, 0})
	DMember(bool)                                      bOverrideRotation                                           OFFSET(get<bool>, {0x8, 1, 1, 0})
	DMember(bool)                                      bOverrideScale                                              OFFSET(get<bool>, {0x8, 1, 1, 1})
	SMember(FRotator)                                  RotationOverride                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   ScaleOverride                                               OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SpawnResult
/// Size: 0x0058 (0x000000 - 0x000058)
class FGameplayCueNotify_SpawnResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<class UFXSystemComponent*>)         FxSystemComponents                                          OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<class UAudioComponent*>)            AudioComponents                                             OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<class UCameraShakeBase*>)           CameraShakes                                                OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<TScriptInterface<Class>>)           CameraLensEffects                                           OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(class UForceFeedbackComponent*)            ForceFeedbackComponent                                      OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class APlayerController*)                  ForceFeedbackTargetPC                                       OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UDecalComponent*)                    DecalComponent                                              OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_ParticleInfo
/// Size: 0x0088 (0x000000 - 0x000088)
class FGameplayCueNotify_ParticleInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         SpawnConditionOverride                                      OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          PlacementInfoOverride                                       OFFSET(getStruct<T>, {0x38, 64, 0, 0})
	CMember(class UNiagaraSystem*)                     NiagaraSystem                                               OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      bOverrideSpawnCondition                                     OFFSET(get<bool>, {0x80, 1, 1, 0})
	DMember(bool)                                      bOverridePlacementInfo                                      OFFSET(get<bool>, {0x80, 1, 1, 1})
	DMember(bool)                                      bCastShadow                                                 OFFSET(get<bool>, {0x80, 1, 1, 2})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SoundParameterInterfaceInfo
/// Size: 0x0004 (0x000000 - 0x000004)
class FGameplayCueNotify_SoundParameterInterfaceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     StopTriggerName                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SoundInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FGameplayCueNotify_SoundInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         SpawnConditionOverride                                      OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          PlacementInfoOverride                                       OFFSET(getStruct<T>, {0x38, 64, 0, 0})
	CMember(class USoundBase*)                         sound                                                       OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class USoundBase*)                         SoundCue                                                    OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(float)                                     LoopingFadeOutDuration                                      OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     LoopingFadeVolumeLevel                                      OFFSET(get<float>, {0x8C, 4, 0, 0})
	SMember(FGameplayCueNotify_SoundParameterInterfaceInfo) SoundParameterInterfaceInfo                            OFFSET(getStruct<T>, {0x90, 4, 0, 0})
	DMember(bool)                                      bOverrideSpawnCondition                                     OFFSET(get<bool>, {0x94, 1, 1, 0})
	DMember(bool)                                      bOverridePlacementInfo                                      OFFSET(get<bool>, {0x94, 1, 1, 1})
	DMember(bool)                                      bUseSoundParameterInterface                                 OFFSET(get<bool>, {0x94, 1, 1, 2})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_CameraShakeInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FGameplayCueNotify_CameraShakeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         SpawnConditionOverride                                      OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          PlacementInfoOverride                                       OFFSET(getStruct<T>, {0x38, 64, 0, 0})
	CMember(class UClass*)                             CameraShake                                                 OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(float)                                     ShakeScale                                                  OFFSET(get<float>, {0x80, 4, 0, 0})
	CMember(EGameplayCueNotify_EffectPlaySpace)        Playspace                                                   OFFSET(get<T>, {0x84, 1, 0, 0})
	DMember(bool)                                      bOverrideSpawnCondition                                     OFFSET(get<bool>, {0x88, 1, 1, 0})
	DMember(bool)                                      bOverridePlacementInfo                                      OFFSET(get<bool>, {0x88, 1, 1, 1})
	DMember(bool)                                      bPlayInWorld                                                OFFSET(get<bool>, {0x88, 1, 1, 2})
	DMember(float)                                     WorldInnerRadius                                            OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     WorldOuterRadius                                            OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     WorldFalloffExponent                                        OFFSET(get<float>, {0x94, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_CameraLensEffectInfo
/// Size: 0x0090 (0x000000 - 0x000090)
class FGameplayCueNotify_CameraLensEffectInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         SpawnConditionOverride                                      OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          PlacementInfoOverride                                       OFFSET(getStruct<T>, {0x38, 64, 0, 0})
	CMember(class UClass*)                             CameraLensEffect                                            OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      bOverrideSpawnCondition                                     OFFSET(get<bool>, {0x80, 1, 1, 0})
	DMember(bool)                                      bOverridePlacementInfo                                      OFFSET(get<bool>, {0x80, 1, 1, 1})
	DMember(bool)                                      bPlayInWorld                                                OFFSET(get<bool>, {0x80, 1, 1, 2})
	DMember(float)                                     WorldInnerRadius                                            OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     WorldOuterRadius                                            OFFSET(get<float>, {0x88, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_ForceFeedbackInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FGameplayCueNotify_ForceFeedbackInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         SpawnConditionOverride                                      OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          PlacementInfoOverride                                       OFFSET(getStruct<T>, {0x38, 64, 0, 0})
	CMember(class UForceFeedbackEffect*)               ForceFeedbackEffect                                         OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FName)                                     ForceFeedbackTag                                            OFFSET(getStruct<T>, {0x80, 4, 0, 0})
	DMember(bool)                                      bIsLooping                                                  OFFSET(get<bool>, {0x84, 1, 1, 0})
	DMember(bool)                                      bOverrideSpawnCondition                                     OFFSET(get<bool>, {0x84, 1, 1, 1})
	DMember(bool)                                      bOverridePlacementInfo                                      OFFSET(get<bool>, {0x84, 1, 1, 2})
	DMember(bool)                                      bPlayInWorld                                                OFFSET(get<bool>, {0x84, 1, 1, 3})
	DMember(float)                                     WorldIntensity                                              OFFSET(get<float>, {0x88, 4, 0, 0})
	CMember(class UForceFeedbackAttenuation*)          WorldAttenuation                                            OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_InputDevicePropertyInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayCueNotify_InputDevicePropertyInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UClass*>)                     DeviceProperties                                            OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_DecalInfo
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FGameplayCueNotify_DecalInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         SpawnConditionOverride                                      OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          PlacementInfoOverride                                       OFFSET(getStruct<T>, {0x38, 64, 0, 0})
	CMember(class UMaterialInterface*)                 DecalMaterial                                               OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FVector)                                   DecalSize                                                   OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	DMember(bool)                                      bOverrideSpawnCondition                                     OFFSET(get<bool>, {0x98, 1, 1, 0})
	DMember(bool)                                      bOverridePlacementInfo                                      OFFSET(get<bool>, {0x98, 1, 1, 1})
	DMember(bool)                                      bOverrideFadeOut                                            OFFSET(get<bool>, {0x98, 1, 1, 2})
	DMember(float)                                     FadeOutStartDelay                                           OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     FadeOutDuration                                             OFFSET(get<float>, {0xA0, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_BurstEffects
/// Size: 0x0298 (0x000000 - 0x000298)
class FGameplayCueNotify_BurstEffects : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(TArray<FGameplayCueNotify_ParticleInfo>)   BurstParticles                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGameplayCueNotify_SoundInfo>)      BurstSounds                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FGameplayCueNotify_CameraShakeInfo)        BurstCameraShake                                            OFFSET(getStruct<T>, {0x20, 152, 0, 0})
	SMember(FGameplayCueNotify_CameraLensEffectInfo)   BurstCameraLensEffect                                       OFFSET(getStruct<T>, {0xB8, 144, 0, 0})
	SMember(FGameplayCueNotify_ForceFeedbackInfo)      BurstForceFeedback                                          OFFSET(getStruct<T>, {0x148, 152, 0, 0})
	SMember(FGameplayCueNotify_InputDevicePropertyInfo) BurstDevicePropertyEffect                                  OFFSET(getStruct<T>, {0x1E0, 16, 0, 0})
	SMember(FGameplayCueNotify_DecalInfo)              BurstDecal                                                  OFFSET(getStruct<T>, {0x1F0, 168, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_LoopingEffects
/// Size: 0x01F0 (0x000000 - 0x0001F0)
class FGameplayCueNotify_LoopingEffects : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(TArray<FGameplayCueNotify_ParticleInfo>)   LoopingParticles                                            OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGameplayCueNotify_SoundInfo>)      LoopingSounds                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FGameplayCueNotify_CameraShakeInfo)        LoopingCameraShake                                          OFFSET(getStruct<T>, {0x20, 152, 0, 0})
	SMember(FGameplayCueNotify_CameraLensEffectInfo)   LoopingCameraLensEffect                                     OFFSET(getStruct<T>, {0xB8, 144, 0, 0})
	SMember(FGameplayCueNotify_ForceFeedbackInfo)      LoopingForceFeedback                                        OFFSET(getStruct<T>, {0x148, 152, 0, 0})
	SMember(FGameplayCueNotify_InputDevicePropertyInfo) LoopingInputDevicePropertyEffect                           OFFSET(getStruct<T>, {0x1E0, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotifyData
/// Size: 0x0030 (0x000000 - 0x000030)
class FGameplayCueNotifyData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              GameplayCueTag                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FSoftObjectPath)                           GameplayCueNotifyObj                                        OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(class UClass*)                             LoadedGameplayCueClass                                      OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNodeIndex
/// Size: 0x0004 (0x000000 - 0x000004)
class FGameplayCueTranslatorNodeIndex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationLink
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayCueTranslationLink : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UGameplayCueTranslator*)             RulesCDO                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNode
/// Size: 0x0070 (0x000000 - 0x000070)
class FGameplayCueTranslatorNode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FGameplayCueTranslationLink>)       Links                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGameplayCueTranslatorNodeIndex)           CachedIndex                                                 OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FGameplayTag)                              CachedGameplayTag                                           OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     CachedGameplayTagName                                       OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationManager
/// Size: 0x0080 (0x000000 - 0x000080)
class FGameplayCueTranslationManager : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FGameplayCueTranslatorNode>)        TranslationLUT                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FName, FGameplayCueTranslatorNodeIndex>) TranslationNameToIndexMap                                OFFSET(get<T>, {0x10, 80, 0, 0})
	CMember(class UGameplayTagsManager*)               TagManager                                                  OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.AttributeBasedFloat
/// Size: 0x0110 (0x000000 - 0x000110)
class FAttributeBasedFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FScalableFloat)                            Coefficient                                                 OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            PreMultiplyAdditiveValue                                    OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            PostMultiplyAdditiveValue                                   OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FGameplayEffectAttributeCaptureDefinition) BackingAttribute                                            OFFSET(getStruct<T>, {0x78, 64, 0, 0})
	SMember(FCurveTableRowHandle)                      AttributeCurve                                              OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	CMember(EAttributeBasedFloatCalculationType)       AttributeCalculationType                                    OFFSET(get<T>, {0xC8, 1, 0, 0})
	CMember(EGameplayModEvaluationChannel)             FinalChannel                                                OFFSET(get<T>, {0xC9, 1, 0, 0})
	SMember(FGameplayTagContainer)                     SourceTagFilter                                             OFFSET(getStruct<T>, {0xD0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TargetTagFilter                                             OFFSET(getStruct<T>, {0xF0, 32, 0, 0})
};

/// Struct /Script/GameplayAbilities.CustomCalculationBasedFloat
/// Size: 0x0090 (0x000000 - 0x000090)
class FCustomCalculationBasedFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UClass*)                             CalculationClassMagnitude                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FScalableFloat)                            Coefficient                                                 OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	SMember(FScalableFloat)                            PreMultiplyAdditiveValue                                    OFFSET(getStruct<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            PostMultiplyAdditiveValue                                   OFFSET(getStruct<T>, {0x58, 40, 0, 0})
	SMember(FCurveTableRowHandle)                      FinalLookupCurve                                            OFFSET(getStruct<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.SetByCallerFloat
/// Size: 0x0008 (0x000000 - 0x000008)
class FSetByCallerFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     DataName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              DataTag                                                     OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifierMagnitude
/// Size: 0x01D8 (0x000000 - 0x0001D8)
class FGameplayEffectModifierMagnitude : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(EGameplayEffectMagnitudeCalculation)       MagnitudeCalculationType                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FScalableFloat)                            ScalableFloatMagnitude                                      OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	SMember(FAttributeBasedFloat)                      AttributeBasedMagnitude                                     OFFSET(getStruct<T>, {0x30, 272, 0, 0})
	SMember(FCustomCalculationBasedFloat)              CustomMagnitude                                             OFFSET(getStruct<T>, {0x140, 144, 0, 0})
	SMember(FSetByCallerFloat)                         SetByCallerMagnitude                                        OFFSET(getStruct<T>, {0x1D0, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
/// Size: 0x0338 (0x000000 - 0x000338)
class FGameplayEffectExecutionScopedModifierInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FGameplayEffectAttributeCaptureDefinition) CapturedAttribute                                           OFFSET(getStruct<T>, {0x0, 64, 0, 0})
	SMember(FGameplayTag)                              TransientAggregatorIdentifier                               OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	CMember(EGameplayEffectScopedModifierAggregatorType) AggregatorType                                            OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(TEnumAsByte<EGameplayModOp>)               ModifierOp                                                  OFFSET(get<T>, {0x45, 1, 0, 0})
	SMember(FGameplayEffectModifierMagnitude)          ModifierMagnitude                                           OFFSET(getStruct<T>, {0x48, 472, 0, 0})
	SMember(FGameplayModEvaluationChannelSettings)     EvaluationChannelSettings                                   OFFSET(getStruct<T>, {0x220, 1, 0, 0})
	SMember(FGameplayTagRequirements)                  SourceTags                                                  OFFSET(getStruct<T>, {0x228, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  TargetTags                                                  OFFSET(getStruct<T>, {0x2B0, 136, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayModEvaluationChannelSettings
/// Size: 0x0001 (0x000000 - 0x000001)
class FGameplayModEvaluationChannelSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(EGameplayModEvaluationChannel)             Channel                                                     OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.ConditionalGameplayEffect
/// Size: 0x0028 (0x000000 - 0x000028)
class FConditionalGameplayEffect : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UClass*)                             EffectClass                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     RequiredSourceTags                                          OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionDefinition
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameplayEffectExecutionDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UClass*)                             CalculationClass                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     PassedInTags                                                OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	CMember(TArray<FGameplayEffectExecutionScopedModifierInfo>) CalculationModifiers                               OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FConditionalGameplayEffect>)        ConditionalGameplayEffects                                  OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayModifierInfo
/// Size: 0x0330 (0x000000 - 0x000330)
class FGameplayModifierInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FGameplayAttribute)                        Attribute                                                   OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	CMember(TEnumAsByte<EGameplayModOp>)               ModifierOp                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FGameplayEffectModifierMagnitude)          ModifierMagnitude                                           OFFSET(getStruct<T>, {0x40, 472, 0, 0})
	SMember(FGameplayModEvaluationChannelSettings)     EvaluationChannelSettings                                   OFFSET(getStruct<T>, {0x218, 1, 0, 0})
	SMember(FGameplayTagRequirements)                  SourceTags                                                  OFFSET(getStruct<T>, {0x220, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  TargetTags                                                  OFFSET(getStruct<T>, {0x2A8, 136, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectCue
/// Size: 0x0060 (0x000000 - 0x000060)
class FGameplayEffectCue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayAttribute)                        MagnitudeAttribute                                          OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	DMember(float)                                     MinLevel                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     MaxLevel                                                    OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayCueTags                                             OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/GameplayAbilities.InheritedTagContainer
/// Size: 0x0060 (0x000000 - 0x000060)
class FInheritedTagContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTagContainer)                     CombinedTags                                                OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     Added                                                       OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FGameplayTagContainer)                     Removed                                                     OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectQuery
/// Size: 0x0088 (0x000000 - 0x000088)
class FActiveGameplayEffectQuery : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectVersion
/// Size: 0x0001 (0x000000 - 0x000001)
class FGameplayEffectVersion : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionParameters
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FGameplayEffectCustomExecutionParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionOutput
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayEffectCustomExecutionOutput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FGameplayModifierEvaluatedData>)    OutputModifiers                                             OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bTriggerConditionalGameplayEffects                          OFFSET(get<bool>, {0x10, 1, 1, 0})
	DMember(bool)                                      bHandledStackCountManually                                  OFFSET(get<bool>, {0x10, 1, 1, 1})
	DMember(bool)                                      bHandledGameplayCuesManually                                OFFSET(get<bool>, {0x10, 1, 1, 2})
};

/// Struct /Script/GameplayAbilities.GameplayModifierEvaluatedData
/// Size: 0x0050 (0x000000 - 0x000050)
class FGameplayModifierEvaluatedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayAttribute)                        Attribute                                                   OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	CMember(TEnumAsByte<EGameplayModOp>)               ModifierOp                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FActiveGameplayEffectHandle)               Handle                                                      OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      IsValid                                                     OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectContext
/// Size: 0x0080 (0x000000 - 0x000080)
class FGameplayEffectContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Instigator                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   EffectCauser                                                OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TWeakObjectPtr<UGameplayAbility*>)         AbilityCDO                                                  OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TWeakObjectPtr<UGameplayAbility*>)         AbilityInstanceNotReplicated                                OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(int32_t)                                   AbilityLevel                                                OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  SourceObject                                                OFFSET(get<T>, {0x2C, 8, 0, 0})
	CMember(TWeakObjectPtr<UAbilitySystemComponent*>)  InstigatorAbilitySystemComponent                            OFFSET(get<T>, {0x34, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<AActor*>>)           Actors                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FVector)                                   WorldOrigin                                                 OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	DMember(bool)                                      bHasWorldOrigin                                             OFFSET(get<bool>, {0x78, 1, 1, 0})
	DMember(bool)                                      bReplicateSourceObject                                      OFFSET(get<bool>, {0x78, 1, 1, 1})
	DMember(bool)                                      bReplicateInstigator                                        OFFSET(get<bool>, {0x78, 1, 1, 2})
	DMember(bool)                                      bReplicateEffectCauser                                      OFFSET(get<bool>, {0x78, 1, 1, 3})
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMapping
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameplayTagBlueprintPropertyMapping : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTag)                              TagToMap                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FGuid)                                     PropertyGuid                                                OFFSET(getStruct<T>, {0x2C, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMap
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayTagBlueprintPropertyMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FGameplayTagBlueprintPropertyMapping>) PropertyMappings                                         OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayTagReponsePair
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayTagReponsePair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UClass*)                             ResponseGameplayEffect                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<class UClass*>)                     ResponseGameplayEffects                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   SoftCountCap                                                OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayTagResponseTableEntry
/// Size: 0x0050 (0x000000 - 0x000050)
class FGameplayTagResponseTableEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagReponsePair)                   Positive                                                    OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FGameplayTagReponsePair)                   Negative                                                    OFFSET(getStruct<T>, {0x28, 40, 0, 0})
};

/// Struct /Script/GameplayAbilities.MovieSceneGameplayCueKey
/// Size: 0x0088 (0x000000 - 0x000088)
class FMovieSceneGameplayCueKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayCueTag)                           Cue                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FName)                                     AttachSocketName                                            OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	DMember(float)                                     NormalizedMagnitude                                         OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FMovieSceneObjectBindingID)                Instigator                                                  OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FMovieSceneObjectBindingID)                EffectCauser                                                OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	CMember(class UPhysicalMaterial*)                  PhysicalMaterial                                            OFFSET(get<T>, {0x70, 8, 0, 0})
	DMember(int32_t)                                   GameplayEffectLevel                                         OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   AbilityLevel                                                OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bAttachToBinding                                            OFFSET(get<bool>, {0x80, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.MovieSceneGameplayCueChannel
/// Size: 0x00A8 (0x000050 - 0x0000F8)
class FMovieSceneGameplayCueChannel : public FMovieSceneChannel
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FFrameNumber>)                      KeyTimes                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FMovieSceneGameplayCueKey>)         KeyValues                                                   OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityRepAnimMontageNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FGameplayAbilityRepAnimMontageNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextHandleNetSerializerConfig
/// Size: 0x0000 (0x000028 - 0x000028)
class FGameplayEffectContextHandleNetSerializerConfig : public FPolymorphicStructNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FGameplayEffectContextNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxyNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FMinimalGameplayCueReplicationProxyNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMapNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FMinimalReplicationTagCountMapNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.PredictionKeyNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FPredictionKeyNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Enum /Script/GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
/// Size: 0x04
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately              = 0,
	EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd                    = 1,
	EGameplayEffectGrantedAbilityRemovePolicy__DoNothing                             = 2,
	EGameplayEffectGrantedAbilityRemovePolicy__EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectAttributeCaptureSource
/// Size: 0x03
enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
	EGameplayEffectAttributeCaptureSource__Source                                    = 0,
	EGameplayEffectAttributeCaptureSource__Target                                    = 1,
	EGameplayEffectAttributeCaptureSource__EGameplayEffectAttributeCaptureSource_MAX = 2
};

/// Enum /Script/GameplayAbilities.EGameplayCueEvent
/// Size: 0x05
enum class EGameplayCueEvent : uint8_t
{
	EGameplayCueEvent__OnActive                                                      = 0,
	EGameplayCueEvent__WhileActive                                                   = 1,
	EGameplayCueEvent__Executed                                                      = 2,
	EGameplayCueEvent__Removed                                                       = 3,
	EGameplayCueEvent__EGameplayCueEvent_MAX                                         = 4
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityActivationMode
/// Size: 0x06
enum class EGameplayAbilityActivationMode : uint8_t
{
	EGameplayAbilityActivationMode__Authority                                        = 0,
	EGameplayAbilityActivationMode__NonAuthority                                     = 1,
	EGameplayAbilityActivationMode__Predicting                                       = 2,
	EGameplayAbilityActivationMode__Confirmed                                        = 3,
	EGameplayAbilityActivationMode__Rejected                                         = 4,
	EGameplayAbilityActivationMode__EGameplayAbilityActivationMode_MAX               = 5
};

/// Enum /Script/GameplayAbilities.EAbilityGenericReplicatedEvent
/// Size: 0x13
enum class EAbilityGenericReplicatedEvent : uint8_t
{
	EAbilityGenericReplicatedEvent__GenericConfirm                                   = 0,
	EAbilityGenericReplicatedEvent__GenericCancel                                    = 1,
	EAbilityGenericReplicatedEvent__InputPressed                                     = 2,
	EAbilityGenericReplicatedEvent__InputReleased                                    = 3,
	EAbilityGenericReplicatedEvent__GenericSignalFromClient                          = 4,
	EAbilityGenericReplicatedEvent__GenericSignalFromServer                          = 5,
	EAbilityGenericReplicatedEvent__GameCustom1                                      = 6,
	EAbilityGenericReplicatedEvent__GameCustom2                                      = 7,
	EAbilityGenericReplicatedEvent__GameCustom3                                      = 8,
	EAbilityGenericReplicatedEvent__GameCustom4                                      = 9,
	EAbilityGenericReplicatedEvent__GameCustom5                                      = 10,
	EAbilityGenericReplicatedEvent__GameCustom6                                      = 11,
	EAbilityGenericReplicatedEvent__MAX                                              = 12
};

/// Enum /Script/GameplayAbilities.EGameplayCuePayloadType
/// Size: 0x03
enum class EGameplayCuePayloadType : uint8_t
{
	EGameplayCuePayloadType__CueParameters                                           = 0,
	EGameplayCuePayloadType__FromSpec                                                = 1,
	EGameplayCuePayloadType__EGameplayCuePayloadType_MAX                             = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityInputBinds
/// Size: 0x10
enum class EGameplayAbilityInputBinds : uint8_t
{
	EGameplayAbilityInputBinds__Ability1                                             = 0,
	EGameplayAbilityInputBinds__Ability2                                             = 1,
	EGameplayAbilityInputBinds__Ability3                                             = 2,
	EGameplayAbilityInputBinds__Ability4                                             = 3,
	EGameplayAbilityInputBinds__Ability5                                             = 4,
	EGameplayAbilityInputBinds__Ability6                                             = 5,
	EGameplayAbilityInputBinds__Ability7                                             = 6,
	EGameplayAbilityInputBinds__Ability8                                             = 7,
	EGameplayAbilityInputBinds__Ability9                                             = 8,
	EGameplayAbilityInputBinds__EGameplayAbilityInputBinds_MAX                       = 9
};

/// Enum /Script/GameplayAbilities.ETargetDataFilterSelf
/// Size: 0x04
enum class ETargetDataFilterSelf : uint8_t
{
	ETargetDataFilterSelf__TDFS_Any                                                  = 0,
	ETargetDataFilterSelf__TDFS_NoSelf                                               = 1,
	ETargetDataFilterSelf__TDFS_NoOthers                                             = 2,
	ETargetDataFilterSelf__TDFS_MAX                                                  = 3
};

/// Enum /Script/GameplayAbilities.EAbilityTaskWaitState
/// Size: 0x04
enum class EAbilityTaskWaitState : uint8_t
{
	EAbilityTaskWaitState__WaitingOnGame                                             = 1,
	EAbilityTaskWaitState__WaitingOnUser                                             = 2,
	EAbilityTaskWaitState__WaitingOnAvatar                                           = 4,
	EAbilityTaskWaitState__EAbilityTaskWaitState_MAX                                 = 5
};

/// Enum /Script/GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
/// Size: 0x04
enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
{
	ERootMotionMoveToActorTargetOffsetType__AlignFromTargetToSource                  = 0,
	ERootMotionMoveToActorTargetOffsetType__AlignToTargetForward                     = 1,
	ERootMotionMoveToActorTargetOffsetType__AlignToWorldSpace                        = 2,
	ERootMotionMoveToActorTargetOffsetType__ERootMotionMoveToActorTargetOffsetType_MAX = 3
};

/// Enum /Script/GameplayAbilities.EAbilityTaskNetSyncType
/// Size: 0x04
enum class EAbilityTaskNetSyncType : uint8_t
{
	EAbilityTaskNetSyncType__BothWait                                                = 0,
	EAbilityTaskNetSyncType__OnlyServerWait                                          = 1,
	EAbilityTaskNetSyncType__OnlyClientWait                                          = 2,
	EAbilityTaskNetSyncType__EAbilityTaskNetSyncType_MAX                             = 3
};

/// Enum /Script/GameplayAbilities.EWaitAttributeChangeComparison
/// Size: 0x08
enum class EWaitAttributeChangeComparison : uint8_t
{
	EWaitAttributeChangeComparison__None                                             = 0,
	EWaitAttributeChangeComparison__GreaterThan                                      = 1,
	EWaitAttributeChangeComparison__LessThan                                         = 2,
	EWaitAttributeChangeComparison__GreaterThanOrEqualTo                             = 3,
	EWaitAttributeChangeComparison__LessThanOrEqualTo                                = 4,
	EWaitAttributeChangeComparison__NotEqualTo                                       = 5,
	EWaitAttributeChangeComparison__ExactlyEqualTo                                   = 6,
	EWaitAttributeChangeComparison__MAX                                              = 7
};

/// Enum /Script/GameplayAbilities.EWaitGameplayTagQueryTriggerCondition
/// Size: 0x03
enum class EWaitGameplayTagQueryTriggerCondition : uint8_t
{
	EWaitGameplayTagQueryTriggerCondition__WhenTrue                                  = 0,
	EWaitGameplayTagQueryTriggerCondition__WhenFalse                                 = 1,
	EWaitGameplayTagQueryTriggerCondition__EWaitGameplayTagQueryTriggerCondition_MAX = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectReplicationMode
/// Size: 0x04
enum class EGameplayEffectReplicationMode : uint8_t
{
	EGameplayEffectReplicationMode__Minimal                                          = 0,
	EGameplayEffectReplicationMode__Mixed                                            = 1,
	EGameplayEffectReplicationMode__Full                                             = 2,
	EGameplayEffectReplicationMode__EGameplayEffectReplicationMode_MAX               = 3
};

/// Enum /Script/GameplayAbilities.ERepAnimPositionMethod
/// Size: 0x03
enum class ERepAnimPositionMethod : uint8_t
{
	ERepAnimPositionMethod__Position                                                 = 0,
	ERepAnimPositionMethod__CurrentSectionId                                         = 1,
	ERepAnimPositionMethod__ERepAnimPositionMethod_MAX                               = 2
};

/// Enum /Script/GameplayAbilities.EGameplayTargetingConfirmation
/// Size: 0x05
enum class EGameplayTargetingConfirmation : uint8_t
{
	EGameplayTargetingConfirmation__Instant                                          = 0,
	EGameplayTargetingConfirmation__UserConfirmed                                    = 1,
	EGameplayTargetingConfirmation__Custom                                           = 2,
	EGameplayTargetingConfirmation__CustomMulti                                      = 3,
	EGameplayTargetingConfirmation__EGameplayTargetingConfirmation_MAX               = 4
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityTargetingLocationType
/// Size: 0x04
enum class EGameplayAbilityTargetingLocationType : uint8_t
{
	EGameplayAbilityTargetingLocationType__LiteralTransform                          = 0,
	EGameplayAbilityTargetingLocationType__ActorTransform                            = 1,
	EGameplayAbilityTargetingLocationType__SocketTransform                           = 2,
	EGameplayAbilityTargetingLocationType__EGameplayAbilityTargetingLocationType_MAX = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityInstancingPolicy
/// Size: 0x04
enum class EGameplayAbilityInstancingPolicy : uint8_t
{
	EGameplayAbilityInstancingPolicy__NonInstanced                                   = 0,
	EGameplayAbilityInstancingPolicy__InstancedPerActor                              = 1,
	EGameplayAbilityInstancingPolicy__InstancedPerExecution                          = 2,
	EGameplayAbilityInstancingPolicy__EGameplayAbilityInstancingPolicy_MAX           = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityNetExecutionPolicy
/// Size: 0x05
enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
	EGameplayAbilityNetExecutionPolicy__LocalPredicted                               = 0,
	EGameplayAbilityNetExecutionPolicy__LocalOnly                                    = 1,
	EGameplayAbilityNetExecutionPolicy__ServerInitiated                              = 2,
	EGameplayAbilityNetExecutionPolicy__ServerOnly                                   = 3,
	EGameplayAbilityNetExecutionPolicy__EGameplayAbilityNetExecutionPolicy_MAX       = 4
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityNetSecurityPolicy
/// Size: 0x05
enum class EGameplayAbilityNetSecurityPolicy : uint8_t
{
	EGameplayAbilityNetSecurityPolicy__ClientOrServer                                = 0,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyExecution                           = 1,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyTermination                         = 2,
	EGameplayAbilityNetSecurityPolicy__ServerOnly                                    = 3,
	EGameplayAbilityNetSecurityPolicy__EGameplayAbilityNetSecurityPolicy_MAX         = 4
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityReplicationPolicy
/// Size: 0x03
enum class EGameplayAbilityReplicationPolicy : uint8_t
{
	EGameplayAbilityReplicationPolicy__ReplicateNo                                   = 0,
	EGameplayAbilityReplicationPolicy__ReplicateYes                                  = 1,
	EGameplayAbilityReplicationPolicy__EGameplayAbilityReplicationPolicy_MAX         = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityTriggerSource
/// Size: 0x04
enum class EGameplayAbilityTriggerSource : uint8_t
{
	EGameplayAbilityTriggerSource__GameplayEvent                                     = 0,
	EGameplayAbilityTriggerSource__OwnedTagAdded                                     = 1,
	EGameplayAbilityTriggerSource__OwnedTagPresent                                   = 2,
	EGameplayAbilityTriggerSource__EGameplayAbilityTriggerSource_MAX                 = 3
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_EffectPlaySpace
/// Size: 0x03
enum class EGameplayCueNotify_EffectPlaySpace : uint8_t
{
	EGameplayCueNotify_EffectPlaySpace__WorldSpace                                   = 0,
	EGameplayCueNotify_EffectPlaySpace__CameraSpace                                  = 1,
	EGameplayCueNotify_EffectPlaySpace__EGameplayCueNotify_MAX                       = 2
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_LocallyControlledSource
/// Size: 0x03
enum class EGameplayCueNotify_LocallyControlledSource : uint8_t
{
	EGameplayCueNotify_LocallyControlledSource__InstigatorActor                      = 0,
	EGameplayCueNotify_LocallyControlledSource__TargetActor                          = 1,
	EGameplayCueNotify_LocallyControlledSource__EGameplayCueNotify_MAX               = 2
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_LocallyControlledPolicy
/// Size: 0x04
enum class EGameplayCueNotify_LocallyControlledPolicy : uint8_t
{
	EGameplayCueNotify_LocallyControlledPolicy__Always                               = 0,
	EGameplayCueNotify_LocallyControlledPolicy__LocalOnly                            = 1,
	EGameplayCueNotify_LocallyControlledPolicy__NotLocal                             = 2,
	EGameplayCueNotify_LocallyControlledPolicy__EGameplayCueNotify_MAX               = 3
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_AttachPolicy
/// Size: 0x03
enum class EGameplayCueNotify_AttachPolicy : uint8_t
{
	EGameplayCueNotify_AttachPolicy__DoNotAttach                                     = 0,
	EGameplayCueNotify_AttachPolicy__AttachToTarget                                  = 1,
	EGameplayCueNotify_AttachPolicy__EGameplayCueNotify_MAX                          = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectMagnitudeCalculation
/// Size: 0x05
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
	EGameplayEffectMagnitudeCalculation__ScalableFloat                               = 0,
	EGameplayEffectMagnitudeCalculation__AttributeBased                              = 1,
	EGameplayEffectMagnitudeCalculation__CustomCalculationClass                      = 2,
	EGameplayEffectMagnitudeCalculation__SetByCaller                                 = 3,
	EGameplayEffectMagnitudeCalculation__EGameplayEffectMagnitudeCalculation_MAX     = 4
};

/// Enum /Script/GameplayAbilities.EAttributeBasedFloatCalculationType
/// Size: 0x05
enum class EAttributeBasedFloatCalculationType : uint8_t
{
	EAttributeBasedFloatCalculationType__AttributeMagnitude                          = 0,
	EAttributeBasedFloatCalculationType__AttributeBaseValue                          = 1,
	EAttributeBasedFloatCalculationType__AttributeBonusMagnitude                     = 2,
	EAttributeBasedFloatCalculationType__AttributeMagnitudeEvaluatedUpToChannel      = 3,
	EAttributeBasedFloatCalculationType__EAttributeBasedFloatCalculationType_MAX     = 4
};

/// Enum /Script/GameplayAbilities.EGameplayEffectVersion
/// Size: 0x05
enum class EGameplayEffectVersion : uint8_t
{
	EGameplayEffectVersion__Monolithic                                               = 0,
	EGameplayEffectVersion__Modular53                                                = 1,
	EGameplayEffectVersion__AbilitiesComponent53                                     = 2,
	EGameplayEffectVersion__Current                                                  = 2,
	EGameplayEffectVersion__EGameplayEffectVersion_MAX                               = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
/// Size: 0x03
enum class EGameplayEffectScopedModifierAggregatorType : uint8_t
{
	EGameplayEffectScopedModifierAggregatorType__CapturedAttributeBacked             = 0,
	EGameplayEffectScopedModifierAggregatorType__Transient                           = 1,
	EGameplayEffectScopedModifierAggregatorType__EGameplayEffectScopedModifierAggregatorType_MAX = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectDurationType
/// Size: 0x04
enum class EGameplayEffectDurationType : uint8_t
{
	EGameplayEffectDurationType__Instant                                             = 0,
	EGameplayEffectDurationType__Infinite                                            = 1,
	EGameplayEffectDurationType__HasDuration                                         = 2,
	EGameplayEffectDurationType__EGameplayEffectDurationType_MAX                     = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingDurationPolicy
/// Size: 0x03
enum class EGameplayEffectStackingDurationPolicy : uint8_t
{
	EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication            = 0,
	EGameplayEffectStackingDurationPolicy__NeverRefresh                              = 1,
	EGameplayEffectStackingDurationPolicy__EGameplayEffectStackingDurationPolicy_MAX = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingPeriodPolicy
/// Size: 0x03
enum class EGameplayEffectStackingPeriodPolicy : uint8_t
{
	EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication                = 0,
	EGameplayEffectStackingPeriodPolicy__NeverReset                                  = 1,
	EGameplayEffectStackingPeriodPolicy__EGameplayEffectStackingPeriodPolicy_MAX     = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingExpirationPolicy
/// Size: 0x04
enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{
	EGameplayEffectStackingExpirationPolicy__ClearEntireStack                        = 0,
	EGameplayEffectStackingExpirationPolicy__RemoveSingleStackAndRefreshDuration     = 1,
	EGameplayEffectStackingExpirationPolicy__RefreshDuration                         = 2,
	EGameplayEffectStackingExpirationPolicy__EGameplayEffectStackingExpirationPolicy_MAX = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
/// Size: 0x04
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
{
	EGameplayEffectPeriodInhibitionRemovedPolicy__NeverReset                         = 0,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ResetPeriod                        = 1,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ExecuteAndResetPeriod              = 2,
	EGameplayEffectPeriodInhibitionRemovedPolicy__EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3
};

/// Enum /Script/GameplayAbilities.EGameplayModEvaluationChannel
/// Size: 0x12
enum class EGameplayModEvaluationChannel : uint8_t
{
	EGameplayModEvaluationChannel__Channel0                                          = 0,
	EGameplayModEvaluationChannel__Channel1                                          = 1,
	EGameplayModEvaluationChannel__Channel2                                          = 2,
	EGameplayModEvaluationChannel__Channel3                                          = 3,
	EGameplayModEvaluationChannel__Channel4                                          = 4,
	EGameplayModEvaluationChannel__Channel5                                          = 5,
	EGameplayModEvaluationChannel__Channel6                                          = 6,
	EGameplayModEvaluationChannel__Channel7                                          = 7,
	EGameplayModEvaluationChannel__Channel8                                          = 8,
	EGameplayModEvaluationChannel__Channel9                                          = 9,
	EGameplayModEvaluationChannel__Channel_MAX                                       = 10,
	EGameplayModEvaluationChannel__EGameplayModEvaluationChannel_MAX                 = 11
};

/// Enum /Script/GameplayAbilities.EGameplayModOp
/// Size: 0x05
enum class EGameplayModOp : uint8_t
{
	EGameplayModOp__Additive                                                         = 0,
	EGameplayModOp__Multiplicitive                                                   = 1,
	EGameplayModOp__Division                                                         = 2,
	EGameplayModOp__Override                                                         = 3,
	EGameplayModOp__Max                                                              = 4
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingType
/// Size: 0x04
enum class EGameplayEffectStackingType : uint8_t
{
	EGameplayEffectStackingType__None                                                = 0,
	EGameplayEffectStackingType__AggregateBySource                                   = 1,
	EGameplayEffectStackingType__AggregateByTarget                                   = 2,
	EGameplayEffectStackingType__EGameplayEffectStackingType_MAX                     = 3
};

/// Enum /Script/GameplayAbilities.EGameplayTagEventType
/// Size: 0x03
enum class EGameplayTagEventType : uint8_t
{
	EGameplayTagEventType__NewOrRemoved                                              = 0,
	EGameplayTagEventType__AnyCountChange                                            = 1,
	EGameplayTagEventType__EGameplayTagEventType_MAX                                 = 2
};

