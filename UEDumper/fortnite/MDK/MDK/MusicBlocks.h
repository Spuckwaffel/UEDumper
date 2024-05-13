
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModularGameplay
/// dependency: NetCore
/// dependency: PlayspaceSystem

/// Class /Script/MusicBlocks.MusicSequencerHitComponent
/// Size: 0x0140 (0x0000A0 - 0x0001E0)
class UMusicSequencerHitComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FMusicSequencerHitArray)                   MusicSequencerEventList                                     OFFSET(getStruct<T>, {0xA0, 288, 0, 0})
	CMember(TArray<class USoundBase*>)                 LoadedSoundsList                                            OFFSET(get<T>, {0x1C0, 16, 0, 0})
	CMember(TArray<class UClass*>)                     SoundPreloadClassList                                       OFFSET(get<T>, {0x1D0, 16, 0, 0})


	/// Functions
	// Function /Script/MusicBlocks.MusicSequencerHitComponent.ReplicateMusicSequencerHit
	// bool ReplicateMusicSequencerHit(class UObject* WorldContextObject, TScriptInterface<Class> HitInterface, class AController* Instigator); // [0xbe23dd4] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/MusicBlocks.MusicSequencerHitComponent.RegisterMusicSequencerActor
	// bool RegisterMusicSequencerActor(class UObject* WorldContextObject, TScriptInterface<Class> Actor);                      // [0xbe23c64] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/MusicBlocks.MusicSequencerHitComponent.ProcessSequenceHitEvent
	// bool ProcessSequenceHitEvent(FMusicSequencerHitEntry& Event);                                                            // [0xbe23b7c] Final|Native|Protected|HasOutParms 
	// Function /Script/MusicBlocks.MusicSequencerHitComponent.OnSequenceHitEventExpired
	// void OnSequenceHitEventExpired(FMusicSequencerHitHandle ExpiredHandle);                                                  // [0xbe23afc] Final|Native|Protected 
	// Function /Script/MusicBlocks.MusicSequencerHitComponent.AddSequenceHitEvent
	// bool AddSequenceHitEvent(TScriptInterface<Class> HitInterface, class AController* Instigator);                           // [0xbe238d0] Final|Native|Protected 
	// Function /Script/MusicBlocks.MusicSequencerHitComponent.AddMusicSequencerActor
	// bool AddMusicSequencerActor(TScriptInterface<Class> HitInterface);                                                       // [0xbe23798] Final|Native|Protected 
};

/// Class /Script/MusicBlocks.MusicSequencerHitActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AMusicSequencerHitActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UMusicSequencerHitComponent*)        MusicSequencerHitComponent                                  OFFSET(get<T>, {0x290, 8, 0, 0})


	/// Functions
	// Function /Script/MusicBlocks.MusicSequencerHitActor.GetMusicSequencerHitComponent
	// class UMusicSequencerHitComponent* GetMusicSequencerHitComponent();                                                      // [0x65cbbc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MusicBlocks.MusicSequencerHitAdderComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UMusicSequencerHitAdderComponent : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UClass*)                             MusicSequencerHitActorClass                                 OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<AMusicSequencerHitActor*>)  MusicSequencerHitActor                                      OFFSET(get<T>, {0xA8, 8, 0, 0})


	/// Functions
	// Function /Script/MusicBlocks.MusicSequencerHitAdderComponent.GetMusicSequencerHitActor
	// class AMusicSequencerHitActor* GetMusicSequencerHitActor();                                                              // [0xbe23ad8] Final|Native|Public|Const 
};

/// Struct /Script/MusicBlocks.MusicSequencerHitHandle
/// Size: 0x0008 (0x000000 - 0x000008)
class FMusicSequencerHitHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint64_t)                                  Handle                                                      OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/MusicBlocks.MusicSequencerHitEntry
/// Size: 0x0054 (0x00000C - 0x000060)
class FMusicSequencerHitEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMusicSequencerHitHandle)                  Handle                                                      OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(float)                                     ServerWorldTimeStart                                        OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(class UClass*)                             ActorClass                                                  OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TWeakObjectPtr<APlayerState*>)             InstigatorPlayerState                                       OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FVector_NetQuantize)                       SoundLocation                                               OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	DMember(int32_t)                                   SoundIndex                                                  OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	SMember(FTimerHandle)                              TimerHandle                                                 OFFSET(getStruct<T>, {0x58, 8, 0, 0})
};

/// Struct /Script/MusicBlocks.MusicSequencerHitArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FMusicSequencerHitArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FMusicSequencerHitEntry>)           Items                                                       OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TWeakObjectPtr<UMusicSequencerHitComponent*>) OwningComponent                                          OFFSET(get<T>, {0x118, 8, 0, 0})
};

