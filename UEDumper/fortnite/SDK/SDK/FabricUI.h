
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModelViewViewModel
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/FabricUI.FabricInteractableViewModel
/// Size: 0x0038 (0x000068 - 0x0000A0)
class UFabricInteractableViewModel : public UMVVMViewModelBase
{ 
public:
	SDK_UNDEFINED(24,13610) /* FText */                __um(Label);                                                // 0x0068   (0x0018)  
	SDK_UNDEFINED(24,13611) /* FText */                __um(Value);                                                // 0x0080   (0x0018)  
	bool                                               bEnabled;                                                   // 0x0098   (0x0001)  
	bool                                               bVisible;                                                   // 0x0099   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x009A   (0x0006)  MISSED
};

/// Class /Script/FabricUI.FabricButtonBaseViewModel
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFabricButtonBaseViewModel : public UFabricInteractableViewModel
{ 
public:
	ECheckBoxState                                     ToggleState;                                                // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Class /Script/FabricUI.FabricCarouselViewModel
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFabricCarouselViewModel : public UFabricInteractableViewModel
{ 
public:
	bool                                               bPresetEnabled;                                             // 0x00A0   (0x0001)  
	bool                                               bShowBorder;                                                // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00A2   (0x0006)  MISSED
};

/// Class /Script/FabricUI.FabricGridStyle
/// Size: 0x0020 (0x000028 - 0x000048)
class UFabricGridStyle : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FMargin                                            Padding;                                                    // 0x0028   (0x0010)  
	SDK_UNDEFINED(1,13612) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                      // 0x0038   (0x0001)  
	SDK_UNDEFINED(1,13613) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                          // 0x0039   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x003A   (0x0002)  MISSED
	int32_t                                            RowSpan;                                                    // 0x003C   (0x0004)  
	int32_t                                            ColumnSpan;                                                 // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/FabricUI.FabricKnobViewModel
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFabricKnobViewModel : public UFabricInteractableViewModel
{ 
public:
	bool                                               bValueVisible;                                              // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Class /Script/FabricUI.FabricPageInfoViewModel
/// Size: 0x0008 (0x000068 - 0x000070)
class UFabricPageInfoViewModel : public UMVVMViewModelBase
{ 
public:
	bool                                               bHasContent;                                                // 0x0068   (0x0001)  
	bool                                               bActivePage;                                                // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x006A   (0x0006)  MISSED
};

/// Class /Script/FabricUI.FabricScreenWidget
/// Size: 0x0030 (0x0002E8 - 0x000318)
class UFabricScreenWidget : public UCommonUserWidget
{ 
public:
	class UInvalidationBox*                            InvalidationBox_RootBox;                                    // 0x02E8   (0x0008)  
	class UScaleBox*                                   ScaleBox_ScreenScale;                                       // 0x02F0   (0x0008)  
	class UGridPanel*                                  GridPanel_ScreenGrid;                                       // 0x02F8   (0x0008)  
	class USpacer*                                     Spacer_ElementSpacer;                                       // 0x0300   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0308   (0x0010)  MISSED


	/// Functions
	// Function /Script/FabricUI.FabricScreenWidget.SetScreenGridDimensions
	// void SetScreenGridDimensions(FVector2D& InNewDimensions);                                                             // [0xaba83e4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FabricUI.FabricScreenWidget.AttachFabricWidget
	// class UFabricWidget* AttachFabricWidget(class UClass*& FabricWidgetClass, FVector2D& GridPosition);                   // [0xaba8240] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/FabricUI.FabricWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFabricWidget : public UCommonUserWidget
{ 
public:
	class UClass*                                      GridStyle;                                                  // 0x02E8   (0x0008)  
	class UClass*                                      ViewModelClass;                                             // 0x02F0   (0x0008)  


	/// Functions
	// Function /Script/FabricUI.FabricWidget.GetFabricViewModel
	// class UFabricInteractableViewModel* GetFabricViewModel();                                                             // [0xaba8324] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/FabricUI.FabricWidgetComponent
/// Size: 0x0010 (0x000670 - 0x000680)
class UFabricWidgetComponent : public UWidgetComponent
{ 
public:
	bool                                               bShouldSuscribeToSignificanceSubsystem;                     // 0x0670   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0671   (0x000F)  MISSED


	/// Functions
	// Function /Script/FabricUI.FabricWidgetComponent.SetShouldSuscribeToSignificanceSubsystem
	// void SetShouldSuscribeToSignificanceSubsystem(bool ShouldSuscribe);                                                   // [0xaba8478] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricUI.FabricWidgetComponent.GetTickMode
	// ETickMode GetTickMode();                                                                                              // [0xaba834c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricUI.FabricWidgetTickControlSubsystem
/// Size: 0x0018 (0x000040 - 0x000058)
class UFabricWidgetTickControlSubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0040   (0x0018)  MISSED


	/// Functions
	// Function /Script/FabricUI.FabricWidgetTickControlSubsystem.UnregisterFabricWidgetComponent
	// void UnregisterFabricWidgetComponent(class UFabricWidgetComponent* WidgetComponent);                                  // [0xaba84f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricUI.FabricWidgetTickControlSubsystem.RegisterFabricWidgetComponent
	// void RegisterFabricWidgetComponent(class UFabricWidgetComponent* WidgetComponent);                                    // [0xaba8364] Final|Native|Public|BlueprintCallable 
};

