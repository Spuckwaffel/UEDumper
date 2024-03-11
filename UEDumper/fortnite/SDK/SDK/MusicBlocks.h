
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModularGameplay
/// dependency: NetCore
/// dependency: PlayspaceSystem

/// Struct /Script/MusicBlocks.MusicSequencerHitHandle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMusicSequencerHitHandle
{ 
	uint64_t                                           Handle;                                                     // 0x0000   (0x0008)  
};

/// Struct /Script/MusicBlocks.MusicSequencerHitEntry
/// Size: 0x0054 (0x00000C - 0x000060)
struct FMusicSequencerHitEntry : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	FMusicSequencerHitHandle                           Handle;                                                     // 0x0010   (0x0008)  
	float                                              ServerWorldTimeStart;                                       // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	class UClass*                                      ActorClass;                                                 // 0x0020   (0x0008)  
	SDK_UNDEFINED(8,15090) /* TWeakObjectPtr<AActor*> */ __um(Actor);                                              // 0x0028   (0x0008)  
	SDK_UNDEFINED(8,15091) /* TWeakObjectPtr<APlayerState*> */ __um(InstigatorPlayerState);                        // 0x0030   (0x0008)  
	FVector_NetQuantize                                SoundLocation;                                              // 0x0038   (0x0018)  
	int32_t                                            SoundIndex;                                                 // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	FTimerHandle                                       TimerHandle;                                                // 0x0058   (0x0008)  
};

/// Struct /Script/MusicBlocks.MusicSequencerHitArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FMusicSequencerHitArray : FFastArraySerializer
{ 
	TArray<FMusicSequencerHitEntry>                    Items;                                                      // 0x0108   (0x0010)  
	SDK_UNDEFINED(8,15092) /* TWeakObjectPtr<UMusicSequencerHitComponent*> */ __um(OwningComponent);               // 0x0118   (0x0008)  
};

/// Class /Script/MusicBlocks.MusicSequencerHitComponent
/// Size: 0x0140 (0x0000A0 - 0x0001E0)
class UMusicSequencerHitComponent : public UActorComponent
{ 
public:
	FMusicSequencerHitArray                            MusicSequencerEventList;                                    // 0x00A0   (0x0120)  
	TArray<class USoundBase*>                          LoadedSoundsList;                                           // 0x01C0   (0x0010)  
	TArray<class UClass*>                              SoundPreloadClassList;                                      // 0x01D0   (0x0010)  


	/// Functions
	// Function /Script/MusicBlocks.MusicSequencerHitComponent.ReplicateMusicSequencerHit
	// bool ReplicateMusicSequencerHit(class UObject* WorldContextObject, TScriptInterface<Class> HitInterface, class AController* Instigator); // [0xaa43d40] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/MusicBlocks.MusicSequencerHitComponent.RegisterMusicSequencerActor
	// bool RegisterMusicSequencerActor(class UObject* WorldContextObject, TScriptInterface<Class> Actor);                   // [0xaa43bbc] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/MusicBlocks.MusicSequencerHitComponent.ProcessSequenceHitEvent
	// bool ProcessSequenceHitEvent(FMusicSequencerHitEntry& Event);                                                         // [0xaa43ad4] Final|Native|Protected|HasOutParms 
	// Function /Script/MusicBlocks.MusicSequencerHitComponent.OnSequenceHitEventExpired
	// void OnSequenceHitEventExpired(FMusicSequencerHitHandle ExpiredHandle);                                               // [0xaa439a4] Final|Native|Protected 
	// Function /Script/MusicBlocks.MusicSequencerHitComponent.AddSequenceHitEvent
	// bool AddSequenceHitEvent(TScriptInterface<Class> HitInterface, class AController* Instigator);                        // [0xaa43750] Final|Native|Protected 
	// Function /Script/MusicBlocks.MusicSequencerHitComponent.AddMusicSequencerActor
	// bool AddMusicSequencerActor(TScriptInterface<Class> HitInterface);                                                    // [0xaa43600] Final|Native|Protected 
};

/// Class /Script/MusicBlocks.MusicSequencerHitActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AMusicSequencerHitActor : public AActor
{ 
public:
	class UMusicSequencerHitComponent*                 MusicSequencerHitComponent;                                 // 0x0290   (0x0008)  


	/// Functions
	// Function /Script/MusicBlocks.MusicSequencerHitActor.GetMusicSequencerHitComponent
	// class UMusicSequencerHitComponent* GetMusicSequencerHitComponent();                                                   // [0x6473e98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MusicBlocks.MusicSequencerHitAdderComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UMusicSequencerHitAdderComponent : public UPlayspaceComponent
{ 
public:
	class UClass*                                      MusicSequencerHitActorClass;                                // 0x00A0   (0x0008)  
	SDK_UNDEFINED(8,15093) /* TWeakObjectPtr<AMusicSequencerHitActor*> */ __um(MusicSequencerHitActor);            // 0x00A8   (0x0008)  


	/// Functions
	// Function /Script/MusicBlocks.MusicSequencerHitAdderComponent.GetMusicSequencerHitActor
	// class AMusicSequencerHitActor* GetMusicSequencerHitActor();                                                           // [0xaa43980] Final|Native|Public|Const 
};

