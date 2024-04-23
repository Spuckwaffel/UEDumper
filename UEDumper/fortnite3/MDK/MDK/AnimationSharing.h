
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AnimationSharing.AnimationSharingStateProcessor
/// Size: 0x0020 (0x000028 - 0x000048)
class UAnimationSharingStateProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UEnum*>)                    AnimationStateEnum                                          OFFSET(get<T>, {0x28, 32, 0, 0})


	/// Functions
	// Function /Script/AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
	// void ProcessActorState(int32_t& OutState, class AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // [0x8731598] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
	// class UEnum* GetAnimationStateEnum();                                                                                    // [0x8731494] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/AnimationSharing.AnimSharingStateInstance
/// Size: 0x0020 (0x000370 - 0x000390)
class UAnimSharingStateInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	CMember(class UAnimSequence*)                      AnimationToPlay                                             OFFSET(get<T>, {0x368, 8, 0, 0})
	DMember(float)                                     PermutationTimeOffset                                       OFFSET(get<float>, {0x370, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x374, 4, 0, 0})
	DMember(bool)                                      bStateBool                                                  OFFSET(get<bool>, {0x378, 1, 0, 0})
	CMember(class UAnimSharingInstance*)               Instance                                                    OFFSET(get<T>, {0x380, 8, 0, 0})


	/// Functions
	// Function /Script/AnimationSharing.AnimSharingStateInstance.GetInstancedActors
	// void GetInstancedActors(TArray<AActor*>& Actors);                                                                        // [0x87314bc] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/AnimationSharing.AnimSharingTransitionInstance
/// Size: 0x0010 (0x000370 - 0x000380)
class UAnimSharingTransitionInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   FromComponent                                               OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   ToComponent                                                 OFFSET(get<T>, {0x370, 8, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0x378, 4, 0, 0})
	DMember(bool)                                      bBlendBool                                                  OFFSET(get<bool>, {0x37C, 1, 0, 0})
};

/// Class /Script/AnimationSharing.AnimSharingAdditiveInstance
/// Size: 0x0010 (0x000370 - 0x000380)
class UAnimSharingAdditiveInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   BaseComponent                                               OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(TWeakObjectPtr<UAnimSequence*>)            AdditiveAnimation                                           OFFSET(get<T>, {0x370, 8, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x378, 4, 0, 0})
	DMember(bool)                                      bStateBool                                                  OFFSET(get<bool>, {0x37C, 1, 0, 0})
};

/// Class /Script/AnimationSharing.AnimSharingInstance
/// Size: 0x00F8 (0x000028 - 0x000120)
class UAnimSharingInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<class AActor*>)                     RegisteredActors                                            OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(class UAnimationSharingStateProcessor*)    StateProcessor                                              OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TArray<class UAnimSequence*>)              UsedAnimationSequences                                      OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(class UEnum*)                              StateEnum                                                   OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class AActor*)                             SharingActor                                                OFFSET(get<T>, {0xF0, 8, 0, 0})
};

/// Class /Script/AnimationSharing.AnimationSharingManager
/// Size: 0x0060 (0x000028 - 0x000088)
class UAnimationSharingManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<class USkeleton*>)                  Skeletons                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<class UAnimSharingInstance*>)       PerSkeletonData                                             OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
	// void RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton);                               // [0x87317fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
	// class UAnimationSharingManager* GetAnimationSharingManager(class UObject* WorldContextObject);                           // [0x8731414] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
	// bool CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup);              // [0x8731334] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
	// bool AnimationSharingEnabled();                                                                                          // [0x8731318] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AnimationSharing.AnimationSharingSetup
/// Size: 0x0020 (0x000028 - 0x000048)
class UAnimationSharingSetup : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FPerSkeletonAnimationSharingSetup>) SkeletonSetups                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FAnimationSharingScalability)              ScalabilitySettings                                         OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/AnimationSharing.AnimationSetup
/// Size: 0x0018 (0x000000 - 0x000018)
class FAnimationSetup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UAnimSequence*)                      AnimSequence                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UClass*)                             AnimBlueprint                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FPerPlatformInt)                           NumRandomizedInstances                                      OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FPerPlatformBool)                          Enabled                                                     OFFSET(getStruct<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/AnimationSharing.AnimationStateEntry
/// Size: 0x0030 (0x000000 - 0x000030)
class FAnimationStateEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(char)                                      State                                                       OFFSET(get<char>, {0x0, 1, 0, 0})
	CMember(TArray<FAnimationSetup>)                   AnimationSetups                                             OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bOnDemand                                                   OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bAdditive                                                   OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bReturnToPreviousState                                      OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bSetNextState                                               OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(char)                                      NextState                                                   OFFSET(get<char>, {0x22, 1, 0, 0})
	SMember(FPerPlatformInt)                           MaximumNumberOfConcurrentInstances                          OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	DMember(float)                                     WiggleTimePercentage                                        OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bRequiresCurves                                             OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Struct /Script/AnimationSharing.PerSkeletonAnimationSharingSetup
/// Size: 0x0038 (0x000000 - 0x000038)
class FPerSkeletonAnimationSharingSetup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class USkeleton*)                          Skeleton                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USkeletalMesh*)                      SkeletalMesh                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UClass*)                             BlendAnimBlueprint                                          OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UClass*)                             AdditiveAnimBlueprint                                       OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class UClass*)                             StateProcessorClass                                         OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(TArray<FAnimationStateEntry>)              AnimationStates                                             OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/AnimationSharing.AnimationSharingScalability
/// Size: 0x0010 (0x000000 - 0x000010)
class FAnimationSharingScalability : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FPerPlatformBool)                          UseBlendTransitions                                         OFFSET(getStruct<T>, {0x0, 1, 0, 0})
	SMember(FPerPlatformFloat)                         BlendSignificanceValue                                      OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FPerPlatformInt)                           MaximumNumberConcurrentBlends                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FPerPlatformFloat)                         TickSignificanceValue                                       OFFSET(getStruct<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/AnimationSharing.TickAnimationSharingFunction
/// Size: 0x0008 (0x000028 - 0x000030)
class FTickAnimationSharingFunction : public FTickFunction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

