
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/NetUI.BadNetworkIndicator
/// Size: 0x0030 (0x000328 - 0x000358)
class UBadNetworkIndicator : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x328, 1, 0, 0})
	DMember(float)                                     MinimumDisplayTime                                          OFFSET(get<float>, {0x32C, 4, 0, 0})
	DMember(float)                                     UpdateTime                                                  OFFSET(get<float>, {0x330, 4, 0, 0})
	DMember(float)                                     InitialDelay                                                OFFSET(get<float>, {0x334, 4, 0, 0})


	/// Functions
	// Function /Script/NetUI.BadNetworkIndicator.UpdateDisplay
	// void UpdateDisplay();                                                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NetUI.BadNetworkIndicator.ShouldDisplay
	// bool ShouldDisplay();                                                                                                    // [0xb88b01c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.HasSeverePing
	// bool HasSeverePing();                                                                                                    // [0xb88aff8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.HasSeverePacketLoss
	// bool HasSeverePacketLoss();                                                                                              // [0xb88afd4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.HasBadPing
	// bool HasBadPing();                                                                                                       // [0xb88afb0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.HasBadPacketLoss
	// bool HasBadPacketLoss();                                                                                                 // [0xb88af8c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.GetPing
	// float GetPing();                                                                                                         // [0xb88af64] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.GetPacketLoss
	// float GetPacketLoss();                                                                                                   // [0xb88af3c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/NetUI.NetDebugWidget
/// Size: 0x00E8 (0x0002C0 - 0x0003A8)
class UNetDebugWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	CMember(class UCommonTextBlock*)                   PingUI                                                      OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   PacketInRateUI                                              OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   PacketOutRateUI                                             OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   PacketInLossUI                                              OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   PacketOutLossUI                                             OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   UpBandwidthUI                                               OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   DownBandwidthUI                                             OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/NetUI.NetDebugWidget.StopTimer
	// void StopTimer();                                                                                                        // [0x3eb99e4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/NetUI.NetDebugWidget.StartTimer
	// void StartTimer();                                                                                                       // [0xb88b040] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/NetUI.NetGraph
/// Size: 0x0038 (0x0002C0 - 0x0002F8)
class UNetGraph : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FColor)                                    BackgroundColor                                             OFFSET(getStruct<T>, {0x2C0, 4, 0, 0})
	SMember(FColor)                                    PingLineColor                                               OFFSET(getStruct<T>, {0x2C4, 4, 0, 0})
	SMember(FColor)                                    QueuedBunchesLineColor                                      OFFSET(getStruct<T>, {0x2C8, 4, 0, 0})
	SMember(FColor)                                    PacketLossLineColor                                         OFFSET(getStruct<T>, {0x2CC, 4, 0, 0})
	SMember(FVector2D)                                 DesiredSize                                                 OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	DMember(float)                                     MaxPingToGraph                                              OFFSET(get<float>, {0x2E0, 4, 0, 0})
};

