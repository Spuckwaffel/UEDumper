
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: UMG

/// Class /Script/LatencyUI.LatencyGraph
/// Size: 0x0048 (0x0002C0 - 0x000308)
class ULatencyGraph : public UUserWidget
{ 
public:
	FColor                                             TotalLatencyLineColor;                                      // 0x02C0   (0x0004)  
	FColor                                             GameLatencyLineColor;                                       // 0x02C4   (0x0004)  
	FColor                                             RenderLatencyLineColor;                                     // 0x02C8   (0x0004)  
	FColor                                             DriverLatencyLineColor;                                     // 0x02CC   (0x0004)  
	FColor                                             OSWorkQueueLatencyLineColor;                                // 0x02D0   (0x0004)  
	FColor                                             GPURenderLatencyLineColor;                                  // 0x02D4   (0x0004)  
	FColor                                             BackgroundColor;                                            // 0x02D8   (0x0004)  
	float                                              MaxLatencyToGraph;                                          // 0x02DC   (0x0004)  
	FVector2D                                          DesiredSize;                                                // 0x02E0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x02F0   (0x0018)  MISSED
};

/// Class /Script/LatencyUI.LatencyWidget
/// Size: 0x00F8 (0x0002C0 - 0x0003B8)
class ULatencyWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02C0   (0x0008)  MISSED
	class UCommonTextBlock*                            TotalLatencyUI;                                             // 0x02C8   (0x0008)  
	class UCommonTextBlock*                            GameLatencyUI;                                              // 0x02D0   (0x0008)  
	class UCommonTextBlock*                            RenderLatencyUI;                                            // 0x02D8   (0x0008)  
	class UCommonTextBlock*                            OSWorkLatencyUI;                                            // 0x02E0   (0x0008)  
	class UCommonTextBlock*                            DriverLatencyUI;                                            // 0x02E8   (0x0008)  
	class UCommonTextBlock*                            GPURenderLatencyUI;                                         // 0x02F0   (0x0008)  
	class UCommonTextBlock*                            TweakLatencyUI;                                             // 0x02F8   (0x0008)  
	unsigned char                                      UnknownData01_6[0xB8];                                      // 0x0300   (0x00B8)  MISSED


	/// Functions
	// Function /Script/LatencyUI.LatencyWidget.StopTimer
	// void StopTimer();                                                                                                     // [0xba05594] Final|Native|Protected|BlueprintCallable 
	// Function /Script/LatencyUI.LatencyWidget.StartTimer
	// void StartTimer();                                                                                                    // [0xba0557c] Final|Native|Protected|BlueprintCallable 
};

