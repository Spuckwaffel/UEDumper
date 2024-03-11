
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: ElectraDataChannelRuntime
/// dependency: Engine

/// Class /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UCreativeDataChannelAnalytics : public UObject
{ 
public:
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelEvent
/// Size: 0x000C (0x000000 - 0x00000C)
struct FCreativeDataChannelEvent
{ 
	FName                                              EventName;                                                  // 0x0000   (0x0004)  
	FName                                              Parameters;                                                 // 0x0004   (0x0004)  
	FName                                              TriggerCondition;                                           // 0x0008   (0x0004)  
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelEvents
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCreativeDataChannelEvents
{ 
	TArray<FCreativeDataChannelEvent>                  Events;                                                     // 0x0000   (0x0010)  
};

/// Class /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget
/// Size: 0x0050 (0x000308 - 0x000358)
class ACreativeDataChannelTarget : public AElectraDataChannelTarget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0308   (0x0008)  MISSED
	int8_t                                             VersionByte;                                                // 0x0310   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0311   (0x0007)  MISSED
	FCreativeDataChannelEvents                         Events;                                                     // 0x0318   (0x0010)  
	SDK_UNDEFINED(16,12621) /* FMulticastInlineDelegate */ __um(OnEventsRep);                                      // 0x0328   (0x0010)  
	FCreativeDataChannelEvents                         EventsCache;                                                // 0x0338   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0348   (0x0010)  MISSED


	/// Functions
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.TestCreativeDataChannelTarget
	// void TestCreativeDataChannelTarget(FCreativeDataChannelEvents TestEvents);                                            // [0xaba5cb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.OnRep_Events
	// void OnRep_Events();                                                                                                  // [0x36203b0] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.FireEvent
	// void FireEvent(FName EventName);                                                                                      // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCInt
/// Size: 0x0004 (0x000000 - 0x000004)
struct FCDCInt
{ 
	int32_t                                            Data;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCLargeInt
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCDCLargeInt
{ 
	int64_t                                            Data;                                                       // 0x0000   (0x0008)  
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCFloatArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCDCFloatArray
{ 
	TArray<float>                                      Data;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCStringFloatArrayMap
/// Size: 0x0050 (0x000000 - 0x000050)
struct FCDCStringFloatArrayMap
{ 
	SDK_UNDEFINED(80,12622) /* TMap<FString, FVector> */ __um(Data);                                               // 0x0000   (0x0050)  
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCStringStringMap
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FCDCStringStringMap
{ 
	SDK_UNDEFINED(80,12623) /* TMap<FString, FString> */ __um(Data);                                               // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,12624) /* TMap<FString, int32_t> */ __um(ExtraData);                                          // 0x0050   (0x0050)  
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCStringFloatMap
/// Size: 0x0050 (0x000000 - 0x000050)
struct FCDCStringFloatMap
{ 
	SDK_UNDEFINED(80,12625) /* TMap<FString, float> */ __um(Data);                                                 // 0x0000   (0x0050)  
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCString
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCDCString
{ 
	SDK_UNDEFINED(16,12626) /* FString */              __um(Data);                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCStringArray
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCDCStringArray
{ 
	SDK_UNDEFINED(16,12627) /* TArray<FString> */      __um(Data);                                                 // 0x0000   (0x0010)  
	int32_t                                            ExtraData;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetFN
/// Size: 0x02B8 (0x000308 - 0x0005C0)
class ACreativeDataChannelTargetFN : public AElectraDataChannelTarget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0308   (0x0008)  MISSED
	int32_t                                            VersionByte;                                                // 0x0310   (0x0004)  
	FCDCInt                                            VersionByteTracker;                                         // 0x0314   (0x0004)  
	SDK_UNDEFINED(16,12628) /* FMulticastInlineDelegate */ __um(VersionByteEvent);                                 // 0x0318   (0x0010)  
	SDK_UNDEFINED(16,12629) /* FString */              __um(LeaderBoard);                                          // 0x0328   (0x0010)  
	int64_t                                            StormCircleSize;                                            // 0x0338   (0x0008)  
	FCDCLargeInt                                       StormCircleSizeTracker;                                     // 0x0340   (0x0008)  
	SDK_UNDEFINED(16,12630) /* FMulticastInlineDelegate */ __um(StormCircleSizeEvent);                             // 0x0348   (0x0010)  
	TArray<float>                                      StormCircleLocation;                                        // 0x0358   (0x0010)  
	FCDCFloatArray                                     StormCircleLocationTracker;                                 // 0x0368   (0x0010)  
	SDK_UNDEFINED(16,12631) /* FMulticastInlineDelegate */ __um(StormCircleLocationEvent);                         // 0x0378   (0x0010)  
	SDK_UNDEFINED(16,12632) /* FString */              __um(PlayerLocation);                                       // 0x0388   (0x0010)  
	FCDCStringFloatArrayMap                            PlayerLocationTracker;                                      // 0x0398   (0x0050)  
	SDK_UNDEFINED(16,12633) /* FMulticastInlineDelegate */ __um(PlayerLocationEvent);                              // 0x03E8   (0x0010)  
	SDK_UNDEFINED(16,12634) /* FString */              __um(ArenaPointLeaderBoard);                                // 0x03F8   (0x0010)  
	FCDCStringStringMap                                ArenaPointLeaderBoardTracker;                               // 0x0408   (0x00A0)  
	SDK_UNDEFINED(16,12635) /* FMulticastInlineDelegate */ __um(ArenaPointLeaderBoardEvent);                       // 0x04A8   (0x0010)  
	SDK_UNDEFINED(16,12636) /* FString */              __um(CashCupDataAllTimeEarners);                            // 0x04B8   (0x0010)  
	FCDCStringFloatMap                                 CashCupDataAllTimeEanersTracker;                            // 0x04C8   (0x0050)  
	SDK_UNDEFINED(16,12637) /* FMulticastInlineDelegate */ __um(CashCupDataAllTimeEarnersEvent);                   // 0x0518   (0x0010)  
	SDK_UNDEFINED(16,12638) /* FString */              __um(MythicBossEliminatedPlayer);                           // 0x0528   (0x0010)  
	FCDCString                                         MythicBossEliminatedPlayerTracker;                          // 0x0538   (0x0010)  
	SDK_UNDEFINED(16,12639) /* FMulticastInlineDelegate */ __um(MythicBossEliminatedPlayerEvent);                  // 0x0548   (0x0010)  
	SDK_UNDEFINED(16,12640) /* FString */              __um(MythicWeaponPlayer);                                   // 0x0558   (0x0010)  
	FCDCString                                         MythicWeaponPlayerTracker;                                  // 0x0568   (0x0010)  
	SDK_UNDEFINED(16,12641) /* FMulticastInlineDelegate */ __um(MythicWeaponPlayerEvent);                          // 0x0578   (0x0010)  
	SDK_UNDEFINED(16,12642) /* FString */              __um(PlayerInfo);                                           // 0x0588   (0x0010)  
	FCDCStringArray                                    PlayerInfoTracker;                                          // 0x0598   (0x0018)  
	SDK_UNDEFINED(16,12643) /* FMulticastInlineDelegate */ __um(PlayerInfoEvent);                                  // 0x05B0   (0x0010)  
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCStringIntMap
/// Size: 0x0050 (0x000000 - 0x000050)
struct FCDCStringIntMap
{ 
	SDK_UNDEFINED(80,12644) /* TMap<FString, int32_t> */ __um(Data);                                               // 0x0000   (0x0050)  
};

/// Class /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL
/// Size: 0x04C0 (0x000308 - 0x0007C8)
class ACreativeDataChannelTargetRL : public AElectraDataChannelTarget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0308   (0x0008)  MISSED
	int32_t                                            VersionByte;                                                // 0x0310   (0x0004)  
	FCDCInt                                            VersionByteTracker;                                         // 0x0314   (0x0004)  
	SDK_UNDEFINED(16,12645) /* FMulticastInlineDelegate */ __um(VersionByteEvent);                                 // 0x0318   (0x0010)  
	int32_t                                            ScoreTeam;                                                  // 0x0328   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x032C   (0x0004)  MISSED
	FCDCString                                         ScoreTeamTracker;                                           // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,12646) /* FMulticastInlineDelegate */ __um(ScoreTeamEvent);                                   // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,12647) /* FString */              __um(ScoreTotal);                                           // 0x0350   (0x0010)  
	FCDCStringIntMap                                   ScoreTotalTracker;                                          // 0x0360   (0x0050)  
	SDK_UNDEFINED(16,12648) /* FMulticastInlineDelegate */ __um(ScoreTotalEvent);                                  // 0x03B0   (0x0010)  
	int64_t                                            ScoreboardTimeLeft;                                         // 0x03C0   (0x0008)  
	FCDCLargeInt                                       ScoreboardTimeLeftTracker;                                  // 0x03C8   (0x0008)  
	SDK_UNDEFINED(16,12649) /* FMulticastInlineDelegate */ __um(ScoreboardTimeLeftEvent);                          // 0x03D0   (0x0010)  
	SDK_UNDEFINED(16,12650) /* FString */              __um(ScoreboardBestOf);                                     // 0x03E0   (0x0010)  
	FCDCStringIntMap                                   ScoreboardBestOfTracker;                                    // 0x03F0   (0x0050)  
	SDK_UNDEFINED(16,12651) /* FMulticastInlineDelegate */ __um(ScoreboardBestOfEvent);                            // 0x0440   (0x0010)  
	int32_t                                            OverTime;                                                   // 0x0450   (0x0004)  
	FCDCInt                                            OvertimeTracker;                                            // 0x0454   (0x0004)  
	SDK_UNDEFINED(16,12652) /* FMulticastInlineDelegate */ __um(OvertimeEvent);                                    // 0x0458   (0x0010)  
	SDK_UNDEFINED(16,12653) /* FString */              __um(TeamNames);                                            // 0x0468   (0x0010)  
	FCDCStringArray                                    TeamNamesTracker;                                           // 0x0478   (0x0018)  
	SDK_UNDEFINED(16,12654) /* FMulticastInlineDelegate */ __um(TeamNamesEvent);                                   // 0x0490   (0x0010)  
	SDK_UNDEFINED(16,12655) /* FString */              __um(PlayerNames);                                          // 0x04A0   (0x0010)  
	FCDCStringArray                                    PlayerNamesTracker;                                         // 0x04B0   (0x0018)  
	SDK_UNDEFINED(16,12656) /* FMulticastInlineDelegate */ __um(PlayerNamesEvent);                                 // 0x04C8   (0x0010)  
	SDK_UNDEFINED(16,12657) /* FString */              __um(PlayerBoost);                                          // 0x04D8   (0x0010)  
	FCDCStringIntMap                                   PlayerBoostTracker;                                         // 0x04E8   (0x0050)  
	SDK_UNDEFINED(16,12658) /* FMulticastInlineDelegate */ __um(PlayerBoostEvent);                                 // 0x0538   (0x0010)  
	SDK_UNDEFINED(16,12659) /* FString */              __um(PlayerBoostCollected);                                 // 0x0548   (0x0010)  
	FCDCStringStringMap                                PlayerBoostCollectedTracker;                                // 0x0558   (0x00A0)  
	SDK_UNDEFINED(16,12660) /* FMulticastInlineDelegate */ __um(PlayerBoostCollectedEvent);                        // 0x05F8   (0x0010)  
	SDK_UNDEFINED(16,12661) /* FString */              __um(PlayerCoords);                                         // 0x0608   (0x0010)  
	FCDCStringFloatArrayMap                            PlayerCoordsTracker;                                        // 0x0618   (0x0050)  
	SDK_UNDEFINED(16,12662) /* FMulticastInlineDelegate */ __um(PlayerCoordsEvent);                                // 0x0668   (0x0010)  
	SDK_UNDEFINED(16,12663) /* FString */              __um(BallCoords);                                           // 0x0678   (0x0010)  
	FCDCFloatArray                                     BallCoordsTracker;                                          // 0x0688   (0x0010)  
	SDK_UNDEFINED(16,12664) /* FMulticastInlineDelegate */ __um(BallCoordsEvent);                                  // 0x0698   (0x0010)  
	SDK_UNDEFINED(16,12665) /* FString */              __um(MediaStart);                                           // 0x06A8   (0x0010)  
	FCDCStringStringMap                                MediaStartTracker;                                          // 0x06B8   (0x00A0)  
	SDK_UNDEFINED(16,12666) /* FMulticastInlineDelegate */ __um(MediaStartEvent);                                  // 0x0758   (0x0010)  
	int32_t                                            MediaStop;                                                  // 0x0768   (0x0004)  
	FCDCInt                                            MediaStopTracker;                                           // 0x076C   (0x0004)  
	SDK_UNDEFINED(16,12667) /* FMulticastInlineDelegate */ __um(MediaStopEvent);                                   // 0x0770   (0x0010)  
	int32_t                                            SeriesState;                                                // 0x0780   (0x0004)  
	FCDCInt                                            SeriesStateTracker;                                         // 0x0784   (0x0004)  
	SDK_UNDEFINED(16,12668) /* FMulticastInlineDelegate */ __um(SeriesStateEvent);                                 // 0x0788   (0x0010)  
	int32_t                                            MatchState;                                                 // 0x0798   (0x0004)  
	FCDCInt                                            MatchStateTracker;                                          // 0x079C   (0x0004)  
	SDK_UNDEFINED(16,12669) /* FMulticastInlineDelegate */ __um(MatchStateEvent);                                  // 0x07A0   (0x0010)  
	int32_t                                            FinaleState;                                                // 0x07B0   (0x0004)  
	FCDCInt                                            FinaleStateTracker;                                         // 0x07B4   (0x0004)  
	SDK_UNDEFINED(16,12670) /* FMulticastInlineDelegate */ __um(FinaleStateEvent);                                 // 0x07B8   (0x0010)  


	/// Functions
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.ReportServerStateStreamError
	// void ReportServerStateStreamError(FString Error, FString UID, FString URL);                                           // [0xaba5a34] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_VersionByte
	// void OnRep_VersionByte();                                                                                             // [0xaba59fc] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_TeamNames
	// void OnRep_TeamNames();                                                                                               // [0xaba5994] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_SeriesState
	// void OnRep_SeriesState();                                                                                             // [0xaba595c] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreTotal
	// void OnRep_ScoreTotal();                                                                                              // [0xaba58f8] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreTeam
	// void OnRep_ScoreTeam();                                                                                               // [0xaba58e4] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreboardTimeLeft
	// void OnRep_ScoreboardTimeLeft();                                                                                      // [0xaba5920] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreboardBestOf
	// void OnRep_ScoreboardBestOf();                                                                                        // [0xaba590c] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerNames
	// void OnRep_PlayerNames();                                                                                             // [0xaba58d0] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerCoords
	// void OnRep_PlayerCoords();                                                                                            // [0xaba58bc] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerBoostCollected
	// void OnRep_PlayerBoostCollected();                                                                                    // [0xaba58a8] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerBoost
	// void OnRep_PlayerBoost();                                                                                             // [0xaba5894] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_Overtime
	// void OnRep_Overtime();                                                                                                // [0xaba585c] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MediaStop
	// void OnRep_MediaStop();                                                                                               // [0xaba5824] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MediaStart
	// void OnRep_MediaStart();                                                                                              // [0xaba5810] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MatchState
	// void OnRep_MatchState();                                                                                              // [0xaba57d8] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_FinaleState
	// void OnRep_FinaleState();                                                                                             // [0xaba57a0] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_BallCoords
	// void OnRep_BallCoords();                                                                                              // [0xaba578c] Final|Native|Public  
};

