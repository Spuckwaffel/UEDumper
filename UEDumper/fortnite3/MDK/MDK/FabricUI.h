
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModelViewViewModel
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/FabricUI.FabricInteractableViewModel
/// Size: 0x0028 (0x000068 - 0x000090)
class UFabricInteractableViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FText)                                     Label                                                       OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FText)                                     Value                                                       OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x89, 1, 0, 0})
};

/// Class /Script/FabricUI.FabricButtonBaseViewModel
/// Size: 0x0008 (0x000090 - 0x000098)
class UFabricButtonBaseViewModel : public UFabricInteractableViewModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(ECheckBoxState)                            ToggleState                                                 OFFSET(get<T>, {0x90, 1, 0, 0})
};

/// Class /Script/FabricUI.FabricCarouselViewModel
/// Size: 0x0008 (0x000090 - 0x000098)
class UFabricCarouselViewModel : public UFabricInteractableViewModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(bool)                                      bPresetEnabled                                              OFFSET(get<bool>, {0x90, 1, 0, 0})
	DMember(bool)                                      bShowBorder                                                 OFFSET(get<bool>, {0x91, 1, 0, 0})
};

/// Class /Script/FabricUI.FabricGridStyle
/// Size: 0x0020 (0x000028 - 0x000048)
class UFabricGridStyle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x39, 1, 0, 0})
	DMember(int32_t)                                   RowSpan                                                     OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   ColumnSpan                                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Class /Script/FabricUI.FabricKnobViewModel
/// Size: 0x0008 (0x000090 - 0x000098)
class UFabricKnobViewModel : public UFabricInteractableViewModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(bool)                                      bValueVisible                                               OFFSET(get<bool>, {0x90, 1, 0, 0})
};

/// Class /Script/FabricUI.FabricPageInfoViewModel
/// Size: 0x0008 (0x000068 - 0x000070)
class UFabricPageInfoViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bHasContent                                                 OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bActivePage                                                 OFFSET(get<bool>, {0x69, 1, 0, 0})
};

/// Class /Script/FabricUI.FabricScreenWidget
/// Size: 0x0030 (0x0002F0 - 0x000320)
class UFabricScreenWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(class UInvalidationBox*)                   InvalidationBox_RootBox                                     OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UScaleBox*)                          ScaleBox_ScreenScale                                        OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UGridPanel*)                         GridPanel_ScreenGrid                                        OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class USpacer*)                            Spacer_ElementSpacer                                        OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Script/FabricUI.FabricScreenWidget.SetScreenGridDimensions
	// void SetScreenGridDimensions(FVector2D& InNewDimensions);                                                                // [0xc642468] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FabricUI.FabricScreenWidget.AttachFabricWidget
	// class UFabricWidget* AttachFabricWidget(class UClass*& FabricWidgetClass, FVector2D& GridPosition);                      // [0xc6422c4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/FabricUI.FabricWidget
/// Size: 0x0010 (0x0002F0 - 0x000300)
class UFabricWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(class UClass*)                             GridStyle                                                   OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UClass*)                             ViewModelClass                                              OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/FabricUI.FabricWidget.GetFabricViewModel
	// class UFabricInteractableViewModel* GetFabricViewModel();                                                                // [0xc6423a8] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/FabricUI.FabricWidgetComponent
/// Size: 0x0010 (0x000670 - 0x000680)
class UFabricWidgetComponent : public UWidgetComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1664;

public:
	DMember(bool)                                      bShouldSuscribeToSignificanceSubsystem                      OFFSET(get<bool>, {0x670, 1, 0, 0})


	/// Functions
	// Function /Script/FabricUI.FabricWidgetComponent.SetShouldSuscribeToSignificanceSubsystem
	// void SetShouldSuscribeToSignificanceSubsystem(bool ShouldSuscribe);                                                      // [0xc6424fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricUI.FabricWidgetComponent.GetTickMode
	// ETickMode GetTickMode();                                                                                                 // [0xc6423d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricUI.FabricWidgetTickControlSubsystem
/// Size: 0x0018 (0x000040 - 0x000058)
class UFabricWidgetTickControlSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/FabricUI.FabricWidgetTickControlSubsystem.UnregisterFabricWidgetComponent
	// void UnregisterFabricWidgetComponent(class UFabricWidgetComponent* WidgetComponent);                                     // [0xc64257c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricUI.FabricWidgetTickControlSubsystem.RegisterFabricWidgetComponent
	// void RegisterFabricWidgetComponent(class UFabricWidgetComponent* WidgetComponent);                                       // [0xc6423e8] Final|Native|Public|BlueprintCallable 
};

