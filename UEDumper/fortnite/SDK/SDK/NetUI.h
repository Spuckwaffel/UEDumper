
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/NetUI.BadNetworkIndicator
/// Size: 0x0030 (0x000328 - 0x000358)
class UBadNetworkIndicator : public UFortHUDElementWidget
{ 
public:
	bool                                               bEnabled;                                                   // 0x0328   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0329   (0x0003)  MISSED
	float                                              MinimumDisplayTime;                                         // 0x032C   (0x0004)  
	float                                              UpdateTime;                                                 // 0x0330   (0x0004)  
	float                                              InitialDelay;                                               // 0x0334   (0x0004)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0338   (0x0020)  MISSED


	/// Functions
	// Function /Script/NetUI.BadNetworkIndicator.UpdateDisplay
	// void UpdateDisplay();                                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/NetUI.BadNetworkIndicator.ShouldDisplay
	// bool ShouldDisplay();                                                                                                 // [0xb88b01c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.HasSeverePing
	// bool HasSeverePing();                                                                                                 // [0xb88aff8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.HasSeverePacketLoss
	// bool HasSeverePacketLoss();                                                                                           // [0xb88afd4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.HasBadPing
	// bool HasBadPing();                                                                                                    // [0xb88afb0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.HasBadPacketLoss
	// bool HasBadPacketLoss();                                                                                              // [0xb88af8c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.GetPing
	// float GetPing();                                                                                                      // [0xb88af64] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.GetPacketLoss
	// float GetPacketLoss();                                                                                                // [0xb88af3c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/NetUI.NetDebugWidget
/// Size: 0x00E8 (0x0002C0 - 0x0003A8)
class UNetDebugWidget : public UUserWidget
{ 
public:
	class UCommonTextBlock*                            PingUI;                                                     // 0x02C0   (0x0008)  
	class UCommonTextBlock*                            PacketInRateUI;                                             // 0x02C8   (0x0008)  
	class UCommonTextBlock*                            PacketOutRateUI;                                            // 0x02D0   (0x0008)  
	class UCommonTextBlock*                            PacketInLossUI;                                             // 0x02D8   (0x0008)  
	class UCommonTextBlock*                            PacketOutLossUI;                                            // 0x02E0   (0x0008)  
	class UCommonTextBlock*                            UpBandwidthUI;                                              // 0x02E8   (0x0008)  
	class UCommonTextBlock*                            DownBandwidthUI;                                            // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0xB0];                                      // 0x02F8   (0x00B0)  MISSED


	/// Functions
	// Function /Script/NetUI.NetDebugWidget.StopTimer
	// void StopTimer();                                                                                                     // [0x3eb99e4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/NetUI.NetDebugWidget.StartTimer
	// void StartTimer();                                                                                                    // [0xb88b040] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/NetUI.NetGraph
/// Size: 0x0038 (0x0002C0 - 0x0002F8)
class UNetGraph : public UUserWidget
{ 
public:
	FColor                                             BackgroundColor;                                            // 0x02C0   (0x0004)  
	FColor                                             PingLineColor;                                              // 0x02C4   (0x0004)  
	FColor                                             QueuedBunchesLineColor;                                     // 0x02C8   (0x0004)  
	FColor                                             PacketLossLineColor;                                        // 0x02CC   (0x0004)  
	FVector2D                                          DesiredSize;                                                // 0x02D0   (0x0010)  
	float                                              MaxPingToGraph;                                             // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x02E4   (0x0014)  MISSED
};

