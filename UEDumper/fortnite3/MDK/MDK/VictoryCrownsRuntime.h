
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModelViewViewModel
/// dependency: ModularGameplay

/// Class /Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear
/// Size: 0x00B8 (0x0009B0 - 0x000A68)
class AFortGameplayCueNotify_CrownWear : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
	SMember(FScalableFloat)                            IntroFXVisualVolume                                         OFFSET(getStruct<T>, {0x9B0, 40, 0, 0})
	SMember(FScalableFloat)                            IntroFXTimelineRate                                         OFFSET(getStruct<T>, {0x9D8, 40, 0, 0})
	SMember(FScalableFloat)                            IntroFXUpdatePrecision                                      OFFSET(getStruct<T>, {0xA00, 40, 0, 0})
	CMember(TArray<FScalableFloat>)                    IntroFXUpdateFrequencies                                    OFFSET(get<T>, {0xA28, 16, 0, 0})
	CMember(class UCurveVector*)                       IntroFXCurve                                                OFFSET(get<T>, {0xA38, 8, 0, 0})
	CMember(class UTimelineComponent*)                 IntroFXTimeline                                             OFFSET(get<T>, {0xA40, 8, 0, 0})
	CMember(class UFXSystemComponent*)                 CrownParticleComponent                                      OFFSET(get<T>, {0xA48, 8, 0, 0})


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear.RemoveCrownWear
	// void RemoveCrownWear();                                                                                                  // [0x2d73880] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear.OnIntroFXTimelineTick
	// void OnIntroFXTimelineTick(FVector CurveValue);                                                                          // [0x1755e3c] Final|Native|Protected|HasDefaults 
	// Function /Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear.ApplyCrownWear
	// void ApplyCrownWear(TArray<UFXSystemComponent*>& ParticleComponents);                                                    // [0x2f664bc] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/VictoryCrownsRuntime.FortVictoryCrownViewModel
/// Size: 0x0010 (0x000068 - 0x000078)
class UFortVictoryCrownViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   BestowedCount                                               OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(bool)                                      bHasWonCrownInMatch                                         OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(bool)                                      bHasWonRoyalRoyale                                          OFFSET(get<bool>, {0x6D, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortControllerComponent_VictoryCrowns*>) BoundVictoryCrownsComponent                   OFFSET(get<T>, {0x70, 8, 0, 0})


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortVictoryCrownViewModel.HandleOnHasWonRoyalRoyale
	// void HandleOnHasWonRoyalRoyale();                                                                                        // [0xbf223e4] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortVictoryCrownViewModel.HandleOnHasWonCrownInMatch
	// void HandleOnHasWonCrownInMatch();                                                                                       // [0xbf223d0] Final|Native|Private 
};

/// Class /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns
/// Size: 0x01C8 (0x0000A8 - 0x000270)
class UFortControllerComponent_VictoryCrowns : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FMulticastInlineDelegate)                  OnVictoryCrownStatusChanged                                 OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHasWonCrownInMatch                                        OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHasWonRoyalRoyale                                         OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortWorldItemDefinition*>) CrownInventoryItemClass                                     OFFSET(get<T>, {0x110, 32, 0, 0})
	DMember(bool)                                      bWonCrownInMatch                                            OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(bool)                                      bWonRoyalRoyale                                             OFFSET(get<bool>, {0x131, 1, 0, 0})
	CMember(class UFortVictoryCrownAccountItemDefinition*) VictoryCrownAccountItemDefinition                       OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortMontageItemDefinitionBase*>) RoyalRoyaleEmoteItemDefinition                        OFFSET(get<T>, {0x140, 32, 0, 0})
	CMember(class UDataTable*)                         VictoryCrownPlaylistData                                    OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FGameplayTagContainer)                     SourceTagsForRoyalRoyale                                    OFFSET(getStruct<T>, {0x168, 32, 0, 0})
	SMember(FVictoryCrownAccountData)                  VictoryCrownAccountData                                     OFFSET(getStruct<T>, {0x188, 16, 0, 0})
	SMember(FScalableFloat)                            InitialGrantDelay                                           OFFSET(getStruct<T>, {0x198, 40, 0, 0})
	DMember(bool)                                      bKillFeedBroadcastReady                                     OFFSET(get<bool>, {0x268, 1, 0, 0})


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonRoyalRoyale
	// void OnRep_WonRoyalRoyale();                                                                                             // [0xbf22660] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonCrownInMatch
	// void OnRep_WonCrownInMatch();                                                                                            // [0xbf2262c] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_VictoryCrownAccountData
	// void OnRep_VictoryCrownAccountData();                                                                                    // [0xbf22610] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnEnterAircraft
	// void OnEnterAircraft(class AController* EnteringController);                                                             // [0xbf22594] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnAthenaProfileInitialized
	// void OnAthenaProfileInitialized();                                                                                       // [0x35e6228] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.IsCrownInPlayerInventory
	// bool IsCrownInPlayerInventory();                                                                                         // [0xbf22570] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonRoyalRoyale
	// bool HasWonRoyalRoyale();                                                                                                // [0x66e0db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonCrownInMatch
	// bool HasWonCrownInMatch();                                                                                               // [0xaaf7fb8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandlePawnChanged
	// void HandlePawnChanged(class APawn* OldPawn, class APawn* NewPawn);                                                      // [0xbf223f8] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleExitAircraft
	// void HandleExitAircraft(class AController* ExitingController);                                                           // [0xbf22344] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleEnterAircraft
	// void HandleEnterAircraft();                                                                                              // [0xbf22330] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetVictoryCrownsBestowedCount
	// int32_t GetVictoryCrownsBestowedCount();                                                                                 // [0x77bf814] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetRoyalRoyaleAchievedCount
	// int32_t GetRoyalRoyaleAchievedCount();                                                                                   // [0x77beef8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetCrownInPlayerInventory
	// class UFortWorldItem* GetCrownInPlayerInventory();                                                                       // [0xbf22124] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.DebugForceSetRoyalRoyaleAchievedCount
	// void DebugForceSetRoyalRoyaleAchievedCount(int32_t NewRoyalRoyaleCount);                                                 // [0x6b56e20] Final|Exec|Native|Public 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.CacheAccountItemData
	// void CacheAccountItemData();                                                                                             // [0x35e6228] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthoritySquadHasSeenCrownItem
	// bool AuthoritySquadHasSeenCrownItem(class UFortItem* CrownItem, bool bDropped);                                          // [0xbf22060] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadHeldCrownItem
	// bool AuthorityHasSquadHeldCrownItem(class UFortItem* CrownItem);                                                         // [0xbf21fd0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadDroppedCrownItem
	// bool AuthorityHasSquadDroppedCrownItem(class UFortItem* CrownItem);                                                      // [0xbf21f40] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasHeldCrownItem
	// bool AuthorityHasHeldCrownItem(class UFortItem* CrownItem);                                                              // [0xbf21eb0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasDroppedCrownItem
	// bool AuthorityHasDroppedCrownItem(class UFortItem* CrownItem);                                                           // [0xbf21e20] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UFortGameStateComponent_VictoryCrowns : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TArray<class AFortPlayerStateAthena*>)     CrownBearerPlayerStates                                     OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FText)                                     KillFeedFormat_Dropped                                      OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FText)                                     KillFeedFormat_PickedUp                                     OFFSET(getStruct<T>, {0xC0, 16, 0, 0})


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.OnRep_CrownBearerPlayerStates
	// void OnRep_CrownBearerPlayerStates();                                                                                    // [0x365b5d8] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.IsCrownBearer
	// bool IsCrownBearer(class AFortPlayerStateAthena* FortPSA);                                                               // [0x3601378] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.HandleCrownStatusChanged
	// void HandleCrownStatusChanged(class AFortPlayerControllerAthena* FortPlayerControllerAthena, class UFortItem* CrownItem); // [0xbf22148] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.ClientKillFeedMessage
	// void ClientKillFeedMessage(class AFortPlayerStateAthena* FortPSA, bool bAdded);                                          // [0x36dfa64] Net|NetReliableNative|Event|NetMulticast|Public 
};

/// Class /Script/VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UFortPawnComponent_VictoryCrownsFrontEnd : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class UDataTable*)                         VictoryCrownPlaylistData                                    OFFSET(get<T>, {0xA8, 8, 0, 0})
	DMember(bool)                                      bInitializeSuccess                                          OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bSelectedPlaylistSupportCrown                               OFFSET(get<bool>, {0xB1, 1, 0, 0})
	CMember(class UFortSocialParty*)                   PersistentParty                                             OFFSET(get<T>, {0xB8, 8, 0, 0})


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd.PlaylistChanged
	// void PlaylistChanged();                                                                                                  // [0x1340978] Event|Protected|BlueprintEvent 
};

/// Class /Script/VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFortPlayerStateComponent_VictoryCrowns : public UFortPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(bool)                                      bHasWonRoyalRoyale                                          OFFSET(get<bool>, {0xA0, 1, 0, 0})


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns.GetWonRoyalRoyale
	// bool GetWonRoyalRoyale();                                                                                                // [0x89a9d74] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/VictoryCrownsRuntime.VictoryCrownPlaylistData
/// Size: 0x0008 (0x000008 - 0x000010)
class FVictoryCrownPlaylistData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   MaxRankingForCrownAward                                     OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

