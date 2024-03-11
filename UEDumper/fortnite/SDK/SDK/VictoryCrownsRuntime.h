
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:
	FScalableFloat                                     IntroFXVisualVolume;                                        // 0x09B0   (0x0028)  
	FScalableFloat                                     IntroFXTimelineRate;                                        // 0x09D8   (0x0028)  
	FScalableFloat                                     IntroFXUpdatePrecision;                                     // 0x0A00   (0x0028)  
	TArray<FScalableFloat>                             IntroFXUpdateFrequencies;                                   // 0x0A28   (0x0010)  
	class UCurveVector*                                IntroFXCurve;                                               // 0x0A38   (0x0008)  
	class UTimelineComponent*                          IntroFXTimeline;                                            // 0x0A40   (0x0008)  
	class UFXSystemComponent*                          CrownParticleComponent;                                     // 0x0A48   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0A50   (0x0018)  MISSED


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear.RemoveCrownWear
	// void RemoveCrownWear();                                                                                               // [0x2c9b9e4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear.OnIntroFXTimelineTick
	// void OnIntroFXTimelineTick(FVector CurveValue);                                                                       // [0x16dad28] Final|Native|Protected|HasDefaults 
	// Function /Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear.ApplyCrownWear
	// void ApplyCrownWear(TArray<UFXSystemComponent*>& ParticleComponents);                                                 // [0x2faccac] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/VictoryCrownsRuntime.FortVictoryCrownViewModel
/// Size: 0x0010 (0x000068 - 0x000078)
class UFortVictoryCrownViewModel : public UMVVMViewModelBase
{ 
public:
	int32_t                                            BestowedCount;                                              // 0x0068   (0x0004)  
	bool                                               bHasWonCrownInMatch;                                        // 0x006C   (0x0001)  
	bool                                               bHasWonRoyalRoyale;                                         // 0x006D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x006E   (0x0002)  MISSED
	SDK_UNDEFINED(8,12305) /* TWeakObjectPtr<UFortControllerComponent_VictoryCrowns*> */ __um(BoundVictoryCrownsComponent); // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortVictoryCrownViewModel.HandleOnHasWonRoyalRoyale
	// void HandleOnHasWonRoyalRoyale();                                                                                     // [0xab1aaf0] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortVictoryCrownViewModel.HandleOnHasWonCrownInMatch
	// void HandleOnHasWonCrownInMatch();                                                                                    // [0xab1aadc] Final|Native|Private 
};

/// Class /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns
/// Size: 0x01C8 (0x0000A8 - 0x000270)
class UFortControllerComponent_VictoryCrowns : public UFortControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A8   (0x0008)  MISSED
	SDK_UNDEFINED(16,12306) /* FMulticastInlineDelegate */ __um(OnVictoryCrownStatusChanged);                      // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,12307) /* FMulticastInlineDelegate */ __um(OnHasWonCrownInMatch);                             // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,12308) /* FMulticastInlineDelegate */ __um(OnHasWonRoyalRoyale);                              // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x00E0   (0x0030)  MISSED
	SDK_UNDEFINED(32,12309) /* TWeakObjectPtr<UFortWorldItemDefinition*> */ __um(CrownInventoryItemClass);         // 0x0110   (0x0020)  
	bool                                               bWonCrownInMatch;                                           // 0x0130   (0x0001)  
	bool                                               bWonRoyalRoyale;                                            // 0x0131   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0132   (0x0006)  MISSED
	class UFortVictoryCrownAccountItemDefinition*      VictoryCrownAccountItemDefinition;                          // 0x0138   (0x0008)  
	SDK_UNDEFINED(32,12310) /* TWeakObjectPtr<UFortMontageItemDefinitionBase*> */ __um(RoyalRoyaleEmoteItemDefinition); // 0x0140   (0x0020)  
	class UDataTable*                                  VictoryCrownPlaylistData;                                   // 0x0160   (0x0008)  
	FGameplayTagContainer                              SourceTagsForRoyalRoyale;                                   // 0x0168   (0x0020)  
	FVictoryCrownAccountData                           VictoryCrownAccountData;                                    // 0x0188   (0x0010)  
	FScalableFloat                                     InitialGrantDelay;                                          // 0x0198   (0x0028)  
	unsigned char                                      UnknownData03_5[0xA8];                                      // 0x01C0   (0x00A8)  MISSED
	bool                                               bKillFeedBroadcastReady;                                    // 0x0268   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0269   (0x0007)  MISSED


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonRoyalRoyale
	// void OnRep_WonRoyalRoyale();                                                                                          // [0xab1ad6c] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonCrownInMatch
	// void OnRep_WonCrownInMatch();                                                                                         // [0xab1ad38] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_VictoryCrownAccountData
	// void OnRep_VictoryCrownAccountData();                                                                                 // [0xab1ad1c] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnEnterAircraft
	// void OnEnterAircraft(class AController* EnteringController);                                                          // [0xab1aca0] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnAthenaProfileInitialized
	// void OnAthenaProfileInitialized();                                                                                    // [0x36203b0] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.IsCrownInPlayerInventory
	// bool IsCrownInPlayerInventory();                                                                                      // [0xab1ac7c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonRoyalRoyale
	// bool HasWonRoyalRoyale();                                                                                             // [0x660df28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonCrownInMatch
	// bool HasWonCrownInMatch();                                                                                            // [0x9c05ffc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandlePawnChanged
	// void HandlePawnChanged(class APawn* OldPawn, class APawn* NewPawn);                                                   // [0xab1ab04] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleExitAircraft
	// void HandleExitAircraft(class AController* ExitingController);                                                        // [0xab1aa50] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleEnterAircraft
	// void HandleEnterAircraft();                                                                                           // [0xab1aa3c] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetVictoryCrownsBestowedCount
	// int32_t GetVictoryCrownsBestowedCount();                                                                              // [0xab1a83c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetRoyalRoyaleAchievedCount
	// int32_t GetRoyalRoyaleAchievedCount();                                                                                // [0x726f124] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetCrownInPlayerInventory
	// class UFortWorldItem* GetCrownInPlayerInventory();                                                                    // [0xab1a818] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.DebugForceSetRoyalRoyaleAchievedCount
	// void DebugForceSetRoyalRoyaleAchievedCount(int32_t NewRoyalRoyaleCount);                                              // [0x69e33bc] Final|Exec|Native|Public 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.CacheAccountItemData
	// void CacheAccountItemData();                                                                                          // [0x36203b0] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthoritySquadHasSeenCrownItem
	// bool AuthoritySquadHasSeenCrownItem(class UFortItem* CrownItem, bool bDropped);                                       // [0xab1a754] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadHeldCrownItem
	// bool AuthorityHasSquadHeldCrownItem(class UFortItem* CrownItem);                                                      // [0xab1a6c4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadDroppedCrownItem
	// bool AuthorityHasSquadDroppedCrownItem(class UFortItem* CrownItem);                                                   // [0xab1a634] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasHeldCrownItem
	// bool AuthorityHasHeldCrownItem(class UFortItem* CrownItem);                                                           // [0xab1a5a4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasDroppedCrownItem
	// bool AuthorityHasDroppedCrownItem(class UFortItem* CrownItem);                                                        // [0xab1a514] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UFortGameStateComponent_VictoryCrowns : public UFortGameStateComponent
{ 
public:
	TArray<class AFortPlayerStateAthena*>              CrownBearerPlayerStates;                                    // 0x00A0   (0x0010)  
	SDK_UNDEFINED(24,12311) /* FText */                __um(KillFeedFormat_Dropped);                               // 0x00B0   (0x0018)  
	SDK_UNDEFINED(24,12312) /* FText */                __um(KillFeedFormat_PickedUp);                              // 0x00C8   (0x0018)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00E0   (0x0018)  MISSED


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.OnRep_CrownBearerPlayerStates
	// void OnRep_CrownBearerPlayerStates();                                                                                 // [0x3630d04] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.IsCrownBearer
	// bool IsCrownBearer(class AFortPlayerStateAthena* FortPSA);                                                            // [0x3679fe4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.HandleCrownStatusChanged
	// void HandleCrownStatusChanged(class AFortPlayerControllerAthena* FortPlayerControllerAthena, class UFortItem* CrownItem); // [0xab1a854] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.ClientKillFeedMessage
	// void ClientKillFeedMessage(class AFortPlayerStateAthena* FortPSA, bool bAdded);                                       // [0x142d848] Net|NetReliableNative|Event|NetMulticast|Public 
};

/// Class /Script/VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UFortPawnComponent_VictoryCrownsFrontEnd : public UFortPawnComponent
{ 
public:
	class UDataTable*                                  VictoryCrownPlaylistData;                                   // 0x00A8   (0x0008)  
	bool                                               bInitializeSuccess;                                         // 0x00B0   (0x0001)  
	bool                                               bSelectedPlaylistSupportCrown;                              // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00B2   (0x0006)  MISSED
	class UFortSocialParty*                            PersistentParty;                                            // 0x00B8   (0x0008)  


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd.PlaylistChanged
	// void PlaylistChanged();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFortPlayerStateComponent_VictoryCrowns : public UFortPlayerStateComponent
{ 
public:
	bool                                               bHasWonRoyalRoyale;                                         // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns.GetWonRoyalRoyale
	// bool GetWonRoyalRoyale();                                                                                             // [0x81ea0ec] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/VictoryCrownsRuntime.VictoryCrownPlaylistData
/// Size: 0x0008 (0x000008 - 0x000010)
struct FVictoryCrownPlaylistData : FTableRowBase
{ 
	int32_t                                            MaxRankingForCrownAward;                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

