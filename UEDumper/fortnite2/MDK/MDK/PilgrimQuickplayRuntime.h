
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonConversationRuntime
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayEventRouter
/// dependency: GameplayStateMachine
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: PilgrimCoreRuntime
/// dependency: PilgrimQPSharedRuntime
/// dependency: PlayspaceSystem
/// dependency: ReplicationGraph
/// dependency: SparksCameraDirectorRuntime
/// dependency: SparksCoreRuntime
/// dependency: SparksCosmeticsRuntime
/// dependency: SparksMusicPlayspaceRuntime

/// Class /Script/PilgrimQuickplayRuntime.PilgrimConversationRequirement_NotUsingTouch
/// Size: 0x0000 (0x000058 - 0x000058)
class UPilgrimConversationRequirement_NotUsingTouch : public UConversationRequirementNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimGreenRoomLayoutSwitcher
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UPilgrimGreenRoomLayoutSwitcher : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(int32_t)                                   CurrentLayout                                               OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	CMember(class UEnum*)                              LayoutEnumType                                              OFFSET(get<T>, {0xA8, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimGreenRoomLayoutSwitcher.SetLayout
	// void SetLayout(int32_t NewLayout);                                                                                       // [0xbc22ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimGreenRoomLayoutSwitcher.OnRep_CurrentLayout
	// void OnRep_CurrentLayout();                                                                                              // [0xbc20e40] Final|Native|Private 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimGreenRoomLayoutSwitcher.OnLayoutChanged
	// void OnLayoutChanged(int32_t NewLayout);                                                                                 // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimGreenRoomLayoutSwitcher.CycleLayout
	// void CycleLayout();                                                                                                      // [0xbc1fa20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimLeaderboardScoreReporter
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimLeaderboardScoreReporter : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimPawnComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPilgrimPawnComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bInteractionEffectsEnabled                                  OFFSET(get<bool>, {0xA8, 1, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPawnComponent.SetInteractionEffectsEnabled
	// void SetInteractionEffectsEnabled(bool bEnable);                                                                         // [0xbc22b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPawnComponent.GetInteractionEffectsEnabled
	// bool GetInteractionEffectsEnabled();                                                                                     // [0xb0c7ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector
/// Size: 0x0108 (0x0000F8 - 0x000200)
class UPilgrimPlayspaceComponent_IntroDirector : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(TArray<class UFortMontageItemDefinitionBase*>) GuitarSpotlights                                        OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<class UFortMontageItemDefinitionBase*>) DrumSpotlights                                          OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TArray<class UFortMontageItemDefinitionBase*>) BassSpotlights                                          OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(TArray<class UFortMontageItemDefinitionBase*>) MicSpotlights                                           OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TArray<class UFortMontageItemDefinitionBase*>) KeytarSpotlights                                        OFFSET(get<T>, {0x138, 16, 0, 0})
	DMember(int32_t)                                   SpotlightIndexLock                                          OFFSET(get<int32_t>, {0x1F0, 4, 0, 0})
	DMember(bool)                                      bAllowFloatingPawnFixForThisMode                            OFFSET(get<bool>, {0x1F4, 1, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.StartPlayerIntro
	// void StartPlayerIntro(class APlayerState* PlayerState);                                                                  // [0xbc235dc] Final|Native|Private|BlueprintCallable|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.RequestNextMontageForInstrument
	// void RequestNextMontageForInstrument(ESparksInstrumentType InstrumentType, class AFortPlayerPawn* PlayerPawn, int32_t PlayerIndex); // [0xbc21174] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.OnSpotlightMontageLoaded
	// void OnSpotlightMontageLoaded(int32_t PlayerIndex, class UAnimMontage* LoadedMontage);                                   // [0xbc210ac] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.IsForcePawnLocationAfterIntroEnabled
	// bool IsForcePawnLocationAfterIntroEnabled();                                                                             // [0xbc20cc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.HasSpotlightMontageLoadFinished
	// bool HasSpotlightMontageLoadFinished(int32_t PlayerIndex);                                                               // [0xbc20c38] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.GetForcePawnLocationAfterIntroDelaySeconds
	// float GetForcePawnLocationAfterIntroDelaySeconds();                                                                      // [0xbc1fca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.GetFloatingPawnFixIntervalSeconds
	// float GetFloatingPawnFixIntervalSeconds();                                                                               // [0xbc1fc70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.EnqueueSpotlightMontages
	// bool EnqueueSpotlightMontages(ESparksInstrumentType InstrumentType);                                                     // [0xbc1fad8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.EnableFloatingPawnFix
	// bool EnableFloatingPawnFix();                                                                                            // [0xbc1fa70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.DebugShowSpotlightTool_Impl
	// void DebugShowSpotlightTool_Impl(bool bShow);                                                                            // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector.ClearSpotlightMontageHandles
	// void ClearSpotlightMontageHandles();                                                                                     // [0xbc1f944] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_ServerExpiration
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UPilgrimPlayspaceComponent_ServerExpiration : public UPlayspaceComponent_ServerExpiration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent
/// Size: 0x0078 (0x0000B0 - 0x000128)
class UPilgrimQuickplayBandStateComponent : public UPilgrimCoreBandStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FMulticastInlineDelegate)                  OnSongReplayingChanged                                      OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(class UPilgrimPremadeSetlist*)             SetlistVoteWinner                                           OFFSET(get<T>, {0xC0, 8, 0, 0})
	DMember(int32_t)                                   CurrentSetlistIndex                                         OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bIsReplayingPreviousSong                                    OFFSET(get<bool>, {0xCC, 1, 0, 0})
	CMember(TMap<int32_t, FPilgrimQuickplaySongResultData>) SetlistResultMap                                       OFFSET(get<T>, {0xD0, 80, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.SongReplayingChanged__DelegateSignature
	// void SongReplayingChanged__DelegateSignature(bool bIsReplaying);                                                         // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.ServerResetSetlistIndex
	// void ServerResetSetlistIndex();                                                                                          // [0xbc226e8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.ServerAdvanceSetlistIndex
	// void ServerAdvanceSetlistIndex();                                                                                        // [0xbc226d4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.OnRep_SetlistVoteWinner
	// void OnRep_SetlistVoteWinner(class UPilgrimPremadeSetlist* PrevSetlist);                                                 // [0xbc20fac] Final|Native|Private 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.OnRep_IsReplayingPreviousSong
	// void OnRep_IsReplayingPreviousSong();                                                                                    // [0xbc20ef8] Final|Native|Private 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.OnRep_CurrentSetlistIndex
	// void OnRep_CurrentSetlistIndex(int32_t PrevSetlistIndex);                                                                // [0xbc20e58] Final|Native|Private 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.IsReplayingPreviousSong
	// bool IsReplayingPreviousSong();                                                                                          // [0xbc20d2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.GetVotersForSetlist
	// TArray<APlayerState*> GetVotersForSetlist(class UPilgrimPremadeSetlist* Setlist);                                        // [0xbc20b94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.GetVoteCountForSetlist
	// int32_t GetVoteCountForSetlist(class UPilgrimPremadeSetlist* Setlist);                                                   // [0xbc20af8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.GetSetlistVoteWinner
	// class UPilgrimPremadeSetlist* GetSetlistVoteWinner();                                                                    // [0x6dee2dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.GetPlayersInBandByController
	// TArray<APlayerState*> GetPlayersInBandByController(class APlayerController* Controller);                                 // [0xbc200d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.GetPlayersInBand
	// TArray<APlayerState*> GetPlayersInBand(char Team);                                                                       // [0xbc2002c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.GetCurrentSetlistLength
	// int32_t GetCurrentSetlistLength();                                                                                       // [0xbc1fc4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.GetCurrentSetlistIndex
	// int32_t GetCurrentSetlistIndex();                                                                                        // [0x38a2724] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.GetCurrentSetlist
	// TScriptInterface<Class> GetCurrentSetlist();                                                                             // [0xbc1fc18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.GetBandState
	// class UPilgrimQuickplayBandStateComponent* GetBandState(class AActor* ContextActor);                                     // [0xbc1fb64] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent.AreAllPlayersReady
	// bool AreAllPlayersReady();                                                                                               // [0xbc1f8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayCameraDataSource
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UPilgrimQuickplayCameraDataSource : public USparksCameraPluginDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bCutOnMeasuresInsteadOfBeats                                OFFSET(get<bool>, {0xB0, 1, 0, 0})
	CMember(TWeakObjectPtr<UPilgrimGame*>)             PilgrimGame                                                 OFFSET(get<T>, {0xB4, 8, 0, 0})
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayDeveloperSettings
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class UPilgrimQuickplayDeveloperSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(bool)                                      OverrideGamestateSettings                                   OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      SongGameplay_SkipToGreenRoom                                OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(float)                                     SongResults_TransitionTimeInSeconds                         OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      SongResults_OverrideSongData                                OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FPilgrimQuickplaySongResultData)           SongResults_SongData                                        OFFSET(getStruct<T>, {0x40, 104, 0, 0})
	DMember(bool)                                      SongResults_OverrideSetlistResultData                       OFFSET(get<bool>, {0xA8, 1, 0, 0})
	CMember(TArray<FPilgrimQuickplaySetlistResultData>) SongResults_SetlistResultsData                             OFFSET(get<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      Gameplay_ShowSongStats                                      OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(bool)                                      SongResults_SetlistChallengeOverrideConsole                 OFFSET(get<bool>, {0xC1, 1, 0, 0})
	DMember(bool)                                      SongResults_SetlistChallengeDebug                           OFFSET(get<bool>, {0xC2, 1, 0, 0})
	DMember(bool)                                      SongResults_SetlistChallengeFilenameAbsolute                OFFSET(get<bool>, {0xC3, 1, 0, 0})
	SMember(FString)                                   SongResults_SetlistChallengeJSONDumpFilename                OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	DMember(bool)                                      SongResults_SetlistChallengeIncludeHistogramData            OFFSET(get<bool>, {0xD8, 1, 0, 0})
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayEmoteBPFL
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimQuickplayEmoteBPFL : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayEmoteBPFL.GetEmoteActionBinding
	// void GetEmoteActionBinding(FString EmoteTemplateID, FEmoteActionBinding& OutCreatedEmote);                               // [0xb88970c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerSpawningComponent
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class UPilgrimQuickplayPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FGameplayTagContainer)                     PregameSpawnTags                                            OFFSET(getStruct<T>, {0xB0, 32, 0, 0})
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent
/// Size: 0x00C8 (0x0000C0 - 0x000188)
class UPilgrimQuickplayPlayerStateComponent : public UPilgrimCorePlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(class UPilgrimSongMetadata*)               SongVote                                                    OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UPilgrimPremadeSetlist*)             SetlistVote                                                 OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(TMap<int32_t, FPilgrimPersonalBestHistoryRpl>) SetlistHighscoreMap                                     OFFSET(get<T>, {0xD0, 80, 0, 0})
	CMember(TMap<int32_t, UPilgrimQuickplaySetlistResultProxyInstance*>) SetlistResultMap                          OFFSET(get<T>, {0x120, 80, 0, 0})
	DMember(float)                                     CloseupCameraTime                                           OFFSET(get<float>, {0x170, 4, 0, 0})
	CMember(TArray<TScriptInterface<Class>>)           GrantedQuests                                               OFFSET(get<T>, {0x178, 16, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SetSongVote
	// void SetSongVote(class UPilgrimSongMetadata* PlayerChosenSong);                                                          // [0xbc2355c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SetSongResultData
	// void SetSongResultData(FPilgrimQuickplaySongResultData& NewSongResultData);                                              // [0xbc234b8] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SetSetlistVote
	// void SetSetlistVote(class UPilgrimPremadeSetlist* PlayerChosenSetlist);                                                  // [0xbc23438] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SetReachedNewHighscore
	// void SetReachedNewHighscore(int32_t TotalScore, int32_t DeltaScore, EPilgrimPersonalBestType BestType);                  // [0xbc23340] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SetPerformanceData
	// void SetPerformanceData(FPilgrimQuickplayPlayerPerformanceData& NewPerformanceData);                                     // [0xbc22c20] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SetHighscore
	// void SetHighscore(FPilgrimPersonalBestResultRpl& Highscore, int32_t SetlistIndex, bool bLoaded);                         // [0xbc22894] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SetCloseupCameraTime
	// void SetCloseupCameraTime(float TotalTime);                                                                              // [0xbc22814] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.ServerSetHighscore
	// void ServerSetHighscore(FPilgrimPersonalBestResultRpl Highscore, int32_t SetlistIndex, bool bLoaded);                    // [0xbc226fc] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.Server_ResetDefaultQuests
	// void Server_ResetDefaultQuests();                                                                                        // [0xa50170c] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.Server_GrantDefaultQuests
	// void Server_GrantDefaultQuests();                                                                                        // [0x2e40598] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SendToServerPerformanceData
	// void SendToServerPerformanceData(FPilgrimQuickplayPlayerPerformanceData NewPerformanceData);                             // [0xbc21fcc] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SendToServerAllIntrosFinished
	// void SendToServerAllIntrosFinished(class UPilgrimQuickplayState_Intro* IntroState);                                      // [0xbb99840] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SendToClientsSongResultData
	// void SendToClientsSongResultData(int32_t SetlistIndex, FPilgrimQuickplaySongResultData NewPerformanceData);              // [0xbc21ee4] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SendToClientsResetSetlistResultData
	// void SendToClientsResetSetlistResultData();                                                                              // [0x78df2d0] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SendToClientsPerformanceData
	// void SendToClientsPerformanceData(int32_t SetlistIndex, FPilgrimQuickplayPlayerPerformanceData NewPerformanceData);      // [0xbc217a8] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.SendHighscoreToServer
	// void SendHighscoreToServer(FPilgrimPersonalBestResult& Highscore, int32_t SetlistIndex, bool bLoaded);                   // [0xbc214f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.ResetSetlistResultData
	// void ResetSetlistResultData();                                                                                           // [0xbc214e4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.OnRep_SongVote
	// void OnRep_SongVote(class UPilgrimSongMetadata* PrevSongVote);                                                           // [0xbc2102c] Final|Native|Private 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.OnRep_SetlistVote
	// void OnRep_SetlistVote(class UPilgrimPremadeSetlist* PrevSetlistVote);                                                   // [0xbc20f2c] Final|Native|Private 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.MulticastBroadcastNewHighscore
	// void MulticastBroadcastNewHighscore(int32_t TotalScore, int32_t DeltaScore, EPilgrimPersonalBestType BestType);          // [0xbc20d44] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetSongVote
	// class UPilgrimSongMetadata* GetSongVote(class APlayerState* PlayerState);                                                // [0xbc20a64] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetSongResultData
	// FPilgrimQuickplaySongResultData GetSongResultData();                                                                     // [0xbc20a38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetSetlistResultProxies
	// void GetSetlistResultProxies(TArray<UPilgrimQuickplaySetlistResultProxyInstance*>& SetlistProxy);                        // [0xbc20348] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetSetlistResultDataByIndex
	// FPilgrimQuickplaySetlistResultData GetSetlistResultDataByIndex(int32_t SetlistIndex);                                    // [0xbc20294] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetReachedNewHighscore
	// bool GetReachedNewHighscore(EPilgrimPersonalBestType BestType, int32_t SetlistIndex);                                    // [0xbc201d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetPilgrimQuickplayPlayerStateComponent
	// class UPilgrimQuickplayPlayerStateComponent* GetPilgrimQuickplayPlayerStateComponent(class APlayerState* PlayerState);   // [0xbc1ffa0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetPerformanceData
	// FPilgrimQuickplayPlayerPerformanceData GetPerformanceData();                                                             // [0xbc1ff74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetMainStateMachine
	// class UGameplayStateMachine* GetMainStateMachine();                                                                      // [0xbc1ff50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetHighscoreResult
	// bool GetHighscoreResult(FPilgrimPersonalBestResultRpl& OutResult, int32_t SetlistIndex, bool bLoaded);                   // [0xbc1fcd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetCurrentSongVote
	// class UPilgrimSongMetadata* GetCurrentSongVote();                                                                        // [0x6dee2dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetCurrentSetlistVote
	// class UPilgrimPremadeSetlist* GetCurrentSetlistVote();                                                                   // [0x979eba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetCloseupCameraTime
	// float GetCloseupCameraTime();                                                                                            // [0x6884f44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.GetBandState
	// class UPilgrimQuickplayBandStateComponent* GetBandState();                                                               // [0xbc1fbf4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.ClientMatchRecorded
	// void ClientMatchRecorded(int32_t SetlistIndex, bool bIsSoloMatch);                                                       // [0xbc1f958] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent.BroadcastEvent_SongResultDataChanged
	// void BroadcastEvent_SongResultDataChanged(int32_t SetlistIndex);                                                         // [0xbc1f8c4] Final|Native|Private 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace
/// Size: 0x0030 (0x000830 - 0x000860)
class APilgrimQuickplayPlayspace : public APilgrimPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2144;

public:
	CMember(class UPilgrimStandinDirector*)            StandinDirector                                             OFFSET(get<T>, {0x830, 8, 0, 0})
	CMember(class UClass*)                             PilgrimQuickplayStateMachineClass                           OFFSET(get<T>, {0x838, 8, 0, 0})
	CMember(class UGameplayStateMachineManager*)       StateMachineManager                                         OFFSET(get<T>, {0x840, 8, 0, 0})
	CMember(class UGameplayStateMachine*)              MainStateMachine                                            OFFSET(get<T>, {0x848, 8, 0, 0})
	CMember(class UPilgrimQuickplayBandStateComponent*) BandState                                                  OFFSET(get<T>, {0x850, 8, 0, 0})
	CMember(class UPilgrimQuickplayCameraDataSource*)  CameraDataSource                                            OFFSET(get<T>, {0x858, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace.HandleDirectorStopEvent
	// void HandleDirectorStopEvent(FSparksCommonStopCameraDirectorEvent& Payload);                                             // [0x228deb8] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace.HandleDirectorStartEvent
	// void HandleDirectorStartEvent(FSparksCommonStartCameraDirectorEvent& Payload);                                           // [0x228deb8] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace.HandleDirectorResetEvent
	// void HandleDirectorResetEvent(FSparksCommonResetCameraDirectorEvent& Payload);                                           // [0x228deb8] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace.GetPilgrimQuickplayStateMachine
	// class UPilgrimQuickplayStateMachine* GetPilgrimQuickplayStateMachine();                                                  // [0xbc24638] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace.GetIsSinglePlayerGame
	// bool GetIsSinglePlayerGame();                                                                                            // [0xbc245c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace.GetActivePilgrimStateId
	// EPilgrimQuickplayState GetActivePilgrimStateId();                                                                        // [0xbc24458] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace.GetActivePilgrimQuickplayState
	// class UPilgrimQuickplayStateBase* GetActivePilgrimQuickplayState();                                                      // [0xbc24418] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace.ForceActiveCameraDirector
	// void ForceActiveCameraDirector();                                                                                        // [0xbc24404] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspaceComponent_PlayerManager
/// Size: 0x0010 (0x0000F8 - 0x000108)
class UPilgrimQuickplayPlayspaceComponent_PlayerManager : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspaceComponent_PlayerManager.BP_OnAppResumed
	// void BP_OnAppResumed(float ElapsedTimeSeconds);                                                                          // [0x228deb8] Event|Protected|BlueprintEvent 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySetlistResultProxyInstance
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UPilgrimQuickplaySetlistResultProxyInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FPilgrimQuickplaySetlistResultData)        ResultData                                                  OFFSET(getStruct<T>, {0x28, 184, 0, 0})
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBase
/// Size: 0x0060 (0x000078 - 0x0000D8)
class UPilgrimQuickplayStateBase : public UGameplayState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(class UFortAbilitySet*)                    AbilitySetForState                                          OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TMap<TWeakObjectPtr<APlayerState*>, FFortAbilitySetHandle>) GrantedAbilitySets                         OFFSET(get<T>, {0x80, 80, 0, 0})
	CMember(class UFortInputMappingContext*)           InputMappingContext                                         OFFSET(get<T>, {0xD0, 8, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBase.MarkStateDone
	// bool MarkStateDone();                                                                                                    // [0x9a3f558] Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBase.GetPilgrimStateMachine
	// class UPilgrimQuickplayStateMachine* GetPilgrimStateMachine();                                                           // [0xbc24724] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBase.GetPilgrimStateId
	// EPilgrimQuickplayState GetPilgrimStateId();                                                                              // [0x6bf3b9c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBase.GetPilgrimPlayspace
	// class APilgrimQuickplayPlayspace* GetPilgrimPlayspace();                                                                 // [0xbc24614] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBase.GetEventRouter
	// class UGameplayEventRouterComponent* GetEventRouter();                                                                   // [0xbc2457c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBPFL
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimQuickplayStateBPFL : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBPFL.GetStateTag
	// FGameplayTag GetStateTag(EPilgrimQuickplayState& State);                                                                 // [0xbc247e4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBPFL.GetPilgrimState
	// EPilgrimQuickplayState GetPilgrimState(FGameplayTag& tag);                                                               // [0xbc2465c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine
/// Size: 0x0010 (0x0000C8 - 0x0000D8)
class UPilgrimQuickplayStateMachine : public UGameplayStateMachine
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TArray<class UFortQuestItemDefinition*>)   GrantedQuests                                               OFFSET(get<T>, {0xC8, 16, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine.TeleportAllPlayers
	// void TeleportAllPlayers(FGameplayTagContainer& TeleportTagRequirements);                                                 // [0xbc24e58] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine.PrepareStageForPlayer
	// void PrepareStageForPlayer(class AFortPlayerPawn* Pawn, FVector& TeleportLocation, FRotator& TeleportRotation);          // [0x228deb8] BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine.GetPlayerPawnsInPlayspace
	// void GetPlayerPawnsInPlayspace(TArray<AFortPlayerPawn*>& PlayerPawns);                                                   // [0xbc24748] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine.GetEventRouter
	// class UGameplayEventRouterComponent* GetEventRouter();                                                                   // [0xbc245a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine.GetDailyQuests
	// void GetDailyQuests(TArray<UFortQuestItemDefinition*>& OutDailyQuests);                                                  // [0xbc244e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine.GetActivePilgrimStateObject
	// class UPilgrimQuickplayStateBase* GetActivePilgrimStateObject();                                                         // [0xbc244bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine.GetActivePilgrimStateId
	// EPilgrimQuickplayState GetActivePilgrimStateId();                                                                        // [0xbc24498] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine.CleanUpStageForPlayer
	// void CleanUpStageForPlayer(class AFortPlayerPawn* Pawn);                                                                 // [0x228deb8] BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Intro
/// Size: 0x00A0 (0x0000D8 - 0x000178)
class UPilgrimQuickplayState_Intro : public UPilgrimQuickplayStateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FGameplayTagContainer)                     TeleportTagRequirements                                     OFFSET(getStruct<T>, {0xD8, 32, 0, 0})
	DMember(float)                                     CameraWaitTime                                              OFFSET(get<float>, {0xF8, 4, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Intro.UpdateCameraWaitTime
	// void UpdateCameraWaitTime(float NewWaitTime);                                                                            // [0xbc24f10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Loading
/// Size: 0x0008 (0x0000D8 - 0x0000E0)
class UPilgrimQuickplayState_Loading : public UPilgrimQuickplayStateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Outro
/// Size: 0x0010 (0x0000D8 - 0x0000E8)
class UPilgrimQuickplayState_Outro : public UPilgrimQuickplayStateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(float)                                     StateTTL                                                    OFFSET(get<float>, {0xD8, 4, 0, 0})
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Pregame
/// Size: 0x0068 (0x0000D8 - 0x000140)
class UPilgrimQuickplayState_Pregame : public UPilgrimQuickplayStateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TArray<class UClass*>)                     EffectsToApplyOnTransition                                  OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FGameplayTagContainer)                     TeleportTagRequirements                                     OFFSET(getStruct<T>, {0xE8, 32, 0, 0})
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_PreIntro
/// Size: 0x0010 (0x0000D8 - 0x0000E8)
class UPilgrimQuickplayState_PreIntro : public UPilgrimQuickplayStateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(float)                                     StateTTLSeconds                                             OFFSET(get<float>, {0xD8, 4, 0, 0})
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SetResults
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UPilgrimQuickplayState_SetResults : public UPilgrimQuickplayStateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongGameplay
/// Size: 0x0048 (0x0000D8 - 0x000120)
class UPilgrimQuickplayState_SongGameplay : public UPilgrimQuickplayStateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FGameplayTagContainer)                     StageTeleportTagRequirements                                OFFSET(getStruct<T>, {0xD8, 32, 0, 0})
	CMember(class UClass*)                             PilgrimMusicBattleInstanceClass                             OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(bool)                                      bHaveTriggeredMBIFinished                                   OFFSET(get<bool>, {0x100, 1, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongGameplay.OnMusicBattleStoppedEarly
	// void OnMusicBattleStoppedEarly(EMusicBattleEndReason EndReason);                                                         // [0xbc24908] Final|Native|Protected 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongGameplay.OnMusicBattleFinished
	// void OnMusicBattleFinished(EMusicBattleEndReason EndReason);                                                             // [0xbc24888] Final|Native|Protected 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongGameplay.GetPilgrimMusicBattleInstances
	// TArray<APilgrimMusicBattleInstance*> GetPilgrimMusicBattleInstances();                                                   // [0xbc245e8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongGameplay.BuildSongResultData
	// void BuildSongResultData();                                                                                              // [0xbc243f0] Final|Native|Protected 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults
/// Size: 0x0128 (0x0000D8 - 0x000200)
class UPilgrimQuickplayState_SongResults : public UPilgrimQuickplayStateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(double)                                    ServerEndTime                                               OFFSET(get<double>, {0xD8, 8, 0, 0})
	SMember(FScalableFloat)                            WaitTimeWithMoreSongs                                       OFFSET(getStruct<T>, {0xE0, 40, 0, 0})
	SMember(FScalableFloat)                            WaitTimeWithNoMoreSongs                                     OFFSET(getStruct<T>, {0x108, 40, 0, 0})
	SMember(FScalableFloat)                            WaitTimeAllPlayersReady                                     OFFSET(getStruct<T>, {0x130, 40, 0, 0})
	SMember(FTimerHandle)                              WaitTimerHandle                                             OFFSET(getStruct<T>, {0x158, 8, 0, 0})
	CMember(TSet<TWeakObjectPtr<AFortPlayerStateAthena*>>) PlayerList                                              OFFSET(get<T>, {0x160, 80, 0, 0})
	CMember(TSet<TWeakObjectPtr<AFortPlayerStateAthena*>>) ReadyPlayers                                            OFFSET(get<T>, {0x1B0, 80, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults.ServerSetEndTime
	// void ServerSetEndTime(float ServerWorldEndTimeSeconds);                                                                  // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults.ServerRecievedPlayPreviousSongFromClient
	// void ServerRecievedPlayPreviousSongFromClient(class UPilgrimPlayerControllerComponent* ControllerComponent, EPilgrimStateMachineMessage StateMachineMessage); // [0xbc24b78] Final|Native|Protected 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults.OnRep_ServerEndTime
	// void OnRep_ServerEndTime();                                                                                              // [0xbc24a40] Final|Native|Protected 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults.OnPlayerDisconnected
	// void OnPlayerDisconnected(class AFortPlayerStateAthena* PlayerState, bool bIsDisconnected);                              // [0xbc24988] Final|Native|Protected 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults.HandleTimerFinished
	// void HandleTimerFinished();                                                                                              // [0x6ab830c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults.GoToNextState
	// void GoToNextState();                                                                                                    // [0xbc24874] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults.ClientUpdateStateEndTime
	// void ClientUpdateStateEndTime(float ServerWorldEndTimeSeconds);                                                          // [0x228deb8] Event|Protected|BlueprintEvent 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySuspendHandleComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UPilgrimQuickplaySuspendHandleComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySuspendHandleComponent.ServerSyncHeartbeatMessageReceived
	// void ServerSyncHeartbeatMessageReceived(class UPilgrimPlayerControllerComponent* PilgrimPC);                             // [0xbc24dd8] Final|Native|Protected 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySuspendHandleComponent.ServerOnTimedInputReceived
	// void ServerOnTimedInputReceived(class UPilgrimPlayerControllerComponent* PilgrimPC, FPilgrimTimedInput& TimedInput);     // [0xbc24a9c] Final|Native|Protected|HasOutParms 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimStandinDirector
/// Size: 0x0090 (0x0000F8 - 0x000188)
class UPilgrimStandinDirector : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(TMap<ESparksInstrumentType, UFortWeaponItemDefinition*>) InstrumentToWeaponMap                         OFFSET(get<T>, {0xF8, 80, 0, 0})
	CMember(class UClass*)                             AISpawnerData                                               OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(TArray<FPrimaryAssetId>)                   Emotes                                                      OFFSET(get<T>, {0x150, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<AFortPlayerPawnAthena*>>) SpawnedStandinPawns                                    OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<AFortPlayerStateAthena*>>) SpawnedStandinStates                                  OFFSET(get<T>, {0x170, 16, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimStandinDirector.TeleportSpawnedStandins
	// void TeleportSpawnedStandins(TArray<AFortPlayerStart*>& Destinations);                                                   // [0xbc492c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimStandinDirector.SetupListeners
	// void SetupListeners(class UGameplayEventRouterComponent* EventRouter);                                                   // [0xbc491c4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimStandinDirector.GetStandinStates
	// TArray<AFortPlayerStateAthena*> GetStandinStates();                                                                      // [0xbc49184] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimStandinDirector.GetStandinPawns
	// TArray<AFortPlayerPawnAthena*> GetStandinPawns();                                                                        // [0xbc49148] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimQuickplayRuntime.PilgrimStandinPawnComponent
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UPilgrimStandinPawnComponent : public UPilgrimPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FGameplayTag)                              SpawninEffect                                               OFFSET(getStruct<T>, {0xB0, 4, 0, 0})


	/// Functions
	// Function /Script/PilgrimQuickplayRuntime.PilgrimStandinPawnComponent.StartInstrumentAnimation
	// void StartInstrumentAnimation(class APlayerState* PlayerState, class ASparksMusicPlayspace* Playspace);                  // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimQuickplayRuntime.PilgrimStandinPawnComponent.SetupListeners
	// void SetupListeners(class UGameplayEventRouterComponent* EventRouter);                                                   // [0xbc49244] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/PilgrimQuickplayRuntime.BandReplicationGraphNode
/// Size: 0x0010 (0x000050 - 0x000060)
class UBandReplicationGraphNode : public UFortReplicationGraphNode_Custom
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySongResultData
/// Size: 0x0068 (0x000000 - 0x000068)
class FPilgrimQuickplaySongResultData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FText)                                     SongName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGameplayTagContainer)                     SongTags                                                    OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FName)                                     SongShortName                                               OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	CMember(TArray<FPilgrimQuickplaySongResultBandData>) BandData                                                  OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FPilgrimQuickplaySongResultPlayerData>) PlayerData                                              OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(char)                                      Team                                                        OFFSET(get<char>, {0x58, 1, 0, 0})
	DMember(int32_t)                                   LocalPlayerBandDataIndex                                    OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   LocalPlayerDataIndex                                        OFFSET(get<int32_t>, {0x60, 4, 0, 0})
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySongResultPlayerData
/// Size: 0x0080 (0x000000 - 0x000080)
class FPilgrimQuickplaySongResultPlayerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   PlayerName                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FUniqueNetIdRepl)                          PlayerAccountId                                             OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	CMember(EPilgrimTrackType)                         InstrumentType                                              OFFSET(get<T>, {0x40, 1, 0, 0})
	SMember(FGameplayTagContainer)                     InstrumentTags                                              OFFSET(getStruct<T>, {0x48, 32, 0, 0})
	DMember(int32_t)                                   PlayerStars                                                 OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   PlayerScore                                                 OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	CMember(EPilgrimSongDifficulty)                    PlayerDifficulty                                            OFFSET(get<T>, {0x70, 1, 0, 0})
	DMember(int32_t)                                   SongTrackDifficulty                                         OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(bool)                                      Team                                                        OFFSET(get<bool>, {0x78, 1, 1, 0})
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySongResultBandData
/// Size: 0x001C (0x000000 - 0x00001C)
class FPilgrimQuickplaySongResultBandData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(char)                                      Team                                                        OFFSET(get<char>, {0x0, 1, 0, 0})
	DMember(char)                                      NumTeamMembers                                              OFFSET(get<char>, {0x1, 1, 0, 0})
	DMember(int32_t)                                   BandScore                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   BandModifierBonus                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   BandInstrumentVarietyBonus                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   BandStars                                                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   BaseBandScore                                               OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   BandOverdriveBonus                                          OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimEvent_Intro_PlayerChanged
/// Size: 0x0008 (0x000000 - 0x000008)
class FPilgrimEvent_Intro_PlayerChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class APlayerState*)                       PlayerState                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimEvent_QuickplayScoring_SongResultPlayerData
/// Size: 0x0078 (0x000000 - 0x000078)
class FPilgrimEvent_QuickplayScoring_SongResultPlayerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class AFortPlayerPawn*)                    ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   SetlistIndex                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FPilgrimQuickplaySongResultData)           SongResultData                                              OFFSET(getStruct<T>, {0x10, 104, 0, 0})
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimEvent_QuickplayScoring_PerformanceDataReceived
/// Size: 0x0058 (0x000000 - 0x000058)
class FPilgrimEvent_QuickplayScoring_PerformanceDataReceived : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class AFortPlayerPawn*)                    ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   SetlistIndex                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FPilgrimQuickplayPlayerPerformanceData)    PerformanceData                                             OFFSET(getStruct<T>, {0x10, 72, 0, 0})
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerPerformanceData
/// Size: 0x0048 (0x000000 - 0x000048)
class FPilgrimQuickplayPlayerPerformanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     Accuracy                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     AverageOffset                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     StandardDeviation                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      FullCombo                                                   OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(int32_t)                                   NotesHit                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   NotesPassed                                                 OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   NotesMissed                                                 OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   TotalNotes                                                  OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   LongestStreak                                               OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(float)                                     TimeInOverdriveMs                                           OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(TArray<FPilgrimHistogramSample>)           HistogramSamples                                            OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<int32_t>)                           AccuracyTierCounts                                          OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimHistogramSample
/// Size: 0x0008 (0x000000 - 0x000008)
class FPilgrimHistogramSample : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   OffsetMs                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   NumSamples                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimEvent_QuickplayScoring_NewHighScoreReceived
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_QuickplayScoring_NewHighScoreReceived : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerPawn*)                    ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   SetlistIndex                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimEvent_QuickplayScoring_MatchRecorded
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_QuickplayScoring_MatchRecorded : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerPawn*)                    ForPlayer                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   SetlistIndex                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bIsSoloMatch                                                OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySetlistResultData
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FPilgrimQuickplaySetlistResultData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(int32_t)                                   SetlistIndex                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FPilgrimQuickplaySongResultData)           SongResultData                                              OFFSET(getStruct<T>, {0x8, 104, 0, 0})
	SMember(FPilgrimQuickplayPlayerPerformanceData)    PerformanceData                                             OFFSET(getStruct<T>, {0x70, 72, 0, 0})
};

/// Enum /Script/PilgrimQuickplayRuntime.EPilgrimPreloaderSongPosition
/// Size: 0x02
enum class EPilgrimPreloaderSongPosition : uint8_t
{
	EPilgrimPreloaderSongPosition__Current                                           = 0,
	EPilgrimPreloaderSongPosition__Next                                              = 1
};

