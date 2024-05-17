
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
/// Size: 0x0030 (0x000330 - 0x000360)
class UBadNetworkIndicator : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x330, 1, 0, 0})
	DMember(float)                                     MinimumDisplayTime                                          OFFSET(get<float>, {0x334, 4, 0, 0})
	DMember(float)                                     UpdateTime                                                  OFFSET(get<float>, {0x338, 4, 0, 0})
	DMember(float)                                     InitialDelay                                                OFFSET(get<float>, {0x33C, 4, 0, 0})


	/// Functions
	// Function /Script/NetUI.BadNetworkIndicator.UpdateDisplay
	// void UpdateDisplay();                                                                                                    // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/NetUI.BadNetworkIndicator.ShouldDisplay
	// bool ShouldDisplay();                                                                                                    // [0xd1c5e2c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.HasSeverePing
	// bool HasSeverePing();                                                                                                    // [0xd1c5e08] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.HasSeverePacketLoss
	// bool HasSeverePacketLoss();                                                                                              // [0xd1c5de4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.HasBadPing
	// bool HasBadPing();                                                                                                       // [0xd1c5dc0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.HasBadPacketLoss
	// bool HasBadPacketLoss();                                                                                                 // [0xd1c5d9c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.GetPing
	// float GetPing();                                                                                                         // [0xd1c5d74] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.GetPacketLoss
	// float GetPacketLoss();                                                                                                   // [0xd1c5d4c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/NetUI.NetDebugWidget
/// Size: 0x00B0 (0x0002C8 - 0x000378)
class UNetDebugWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	CMember(class UCommonTextBlock*)                   PingUI                                                      OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   PacketInRateUI                                              OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   PacketOutRateUI                                             OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   PacketInLossUI                                              OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   PacketOutLossUI                                             OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   UpBandwidthUI                                               OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   DownBandwidthUI                                             OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/NetUI.NetDebugWidget.StopTimer
	// void StopTimer();                                                                                                        // [0xd1c5e64] Final|Native|Protected|BlueprintCallable 
	// Function /Script/NetUI.NetDebugWidget.StartTimer
	// void StartTimer();                                                                                                       // [0xd1c5e50] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/NetUI.NetGraph
/// Size: 0x0038 (0x0002C8 - 0x000300)
class UNetGraph : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	SMember(FColor)                                    BackgroundColor                                             OFFSET(getStruct<T>, {0x2C8, 4, 0, 0})
	SMember(FColor)                                    PingLineColor                                               OFFSET(getStruct<T>, {0x2CC, 4, 0, 0})
	SMember(FColor)                                    QueuedBunchesLineColor                                      OFFSET(getStruct<T>, {0x2D0, 4, 0, 0})
	SMember(FColor)                                    PacketLossLineColor                                         OFFSET(getStruct<T>, {0x2D4, 4, 0, 0})
	SMember(FVector2D)                                 DesiredSize                                                 OFFSET(getStruct<T>, {0x2D8, 16, 0, 0})
	DMember(float)                                     MaxPingToGraph                                              OFFSET(get<float>, {0x2E8, 4, 0, 0})
};

