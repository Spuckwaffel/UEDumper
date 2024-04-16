
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: UMG

/// Class /Script/LatencyUI.LatencyGraph
/// Size: 0x0048 (0x0002C8 - 0x000310)
class ULatencyGraph : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FColor)                                    TotalLatencyLineColor                                       OFFSET(getStruct<T>, {0x2C8, 4, 0, 0})
	SMember(FColor)                                    GameLatencyLineColor                                        OFFSET(getStruct<T>, {0x2CC, 4, 0, 0})
	SMember(FColor)                                    RenderLatencyLineColor                                      OFFSET(getStruct<T>, {0x2D0, 4, 0, 0})
	SMember(FColor)                                    DriverLatencyLineColor                                      OFFSET(getStruct<T>, {0x2D4, 4, 0, 0})
	SMember(FColor)                                    OSWorkQueueLatencyLineColor                                 OFFSET(getStruct<T>, {0x2D8, 4, 0, 0})
	SMember(FColor)                                    GPURenderLatencyLineColor                                   OFFSET(getStruct<T>, {0x2DC, 4, 0, 0})
	SMember(FColor)                                    BackgroundColor                                             OFFSET(getStruct<T>, {0x2E0, 4, 0, 0})
	DMember(float)                                     MaxLatencyToGraph                                           OFFSET(get<float>, {0x2E4, 4, 0, 0})
	SMember(FVector2D)                                 DesiredSize                                                 OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
};

/// Class /Script/LatencyUI.LatencyWidget
/// Size: 0x00C0 (0x0002C8 - 0x000388)
class ULatencyWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(class UCommonTextBlock*)                   TotalLatencyUI                                              OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   GameLatencyUI                                               OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   RenderLatencyUI                                             OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   OSWorkLatencyUI                                             OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   DriverLatencyUI                                             OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   GPURenderLatencyUI                                          OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   TweakLatencyUI                                              OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/LatencyUI.LatencyWidget.StopTimer
	// void StopTimer();                                                                                                        // [0xcd8706c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/LatencyUI.LatencyWidget.StartTimer
	// void StartTimer();                                                                                                       // [0xcd87054] Final|Native|Protected|BlueprintCallable 
};

