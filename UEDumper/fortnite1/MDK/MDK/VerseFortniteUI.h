
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: LocalizableMessage
/// dependency: ModelViewViewModel
/// dependency: UIFramework
/// dependency: UMG
/// dependency: VerseFortnite

/// Class /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseFortniteUIAllowedConversionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.MultiplyIntegers
	// int64_t MultiplyIntegers(int64_t A, int64_t B, bool bInvertB);                                                           // [0xcdb35dc] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.MultiplyIntDouble
	// double MultiplyIntDouble(int64_t A, bool bInvertA, double B, bool bInvertB);                                             // [0xcdb3354] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.MultiplyDoubles
	// double MultiplyDoubles(double A, bool bInvertA, double B, bool bInvertB);                                                // [0xcdb3108] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.MakeTransform
	// FWidgetTransform MakeTransform(FVector2D Translation, FVector2D Scale, FVector2D Shear, double Angle);                   // [0xcdb2eb0] Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.MakeImageBrushFromTexture
	// FSlateBrush MakeImageBrushFromTexture(class UTexture2D* Image, FVector2D ImageSize, FLinearColor LinearColor, TEnumAsByte<ESlateBrushTileType> TileType); // [0xcdb2c44] Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.MakeImageBrushFromMaterial
	// FSlateBrush MakeImageBrushFromMaterial(class UMaterialInterface* Material, FVector2D ImageSize, FLinearColor TintColor); // [0xcdb2a48] Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.InvertBool
	// bool InvertBool(bool bValue);                                                                                            // [0xcdb298c] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_SlateColorToLinearColor
	// FLinearColor Conv_SlateColorToLinearColor(FSlateColor& Value);                                                           // [0xcdb2538] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_LinearColorToSlateColor
	// FSlateColor Conv_LinearColorToSlateColor(FLinearColor Value);                                                            // [0xcdb247c] Final|Native|Static|Private|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_IntToText
	// FText Conv_IntToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int64_t MinimumIntegralDigits, int64_t MaximumIntegralDigits); // [0xcdb1f28] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_IntegerToBoolSimple
	// bool Conv_IntegerToBoolSimple(int64_t Value);                                                                            // [0xcdb23c4] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_IntegerToBoolInterval
	// bool Conv_IntegerToBoolInterval(int64_t Value, int64_t InclusiveLowerBound, int64_t InclusiveUpperBound);                // [0xcdb2204] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_DoubleToText
	// FText Conv_DoubleToText(double Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits); // [0xcdb1ad0] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_DoubleToBoolSimple
	// bool Conv_DoubleToBoolSimple(double Value);                                                                              // [0xcdb19fc] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_DoubleToBoolInterval
	// bool Conv_DoubleToBoolInterval(double Value, double InclusiveLowerBound, double InclusiveUpperBound);                    // [0xcdb1828] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.Conv_BoolToSlateVisibility
	// ESlateVisibility Conv_BoolToSlateVisibility(bool bIsVisible, ESlateVisibility TrueVisibility, ESlateVisibility FalseVisibility); // [0x3c26a6c] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.AddIntegers
	// int64_t AddIntegers(int64_t A, bool bNegateA, int64_t B, bool bNegateB);                                                 // [0xcdb15e0] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.AddIntDouble
	// double AddIntDouble(int64_t A, bool bNegateA, double B, bool bNegateB);                                                  // [0xcdb1388] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary.AddDoubles
	// double AddDoubles(double A, bool bNegateA, double B, bool bNegateB);                                                     // [0xcdb1124] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIConversionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseFortniteUIConversionLibrary : public UVerseFortniteUIAllowedConversionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortnitePlayspaceHUDController
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UVerseFortnitePlayspaceHUDController : public UVerseFortnitePlayspaceExtensionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FHUDElementVisibilityRepData)              VisibilityData                                              OFFSET(getStruct<T>, {0x38, 136, 0, 0})
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIOverlaySlot
/// Size: 0x0018 (0x000058 - 0x000070)
class UVerseFortniteUIOverlaySlot : public UOverlaySlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIOverlay
/// Size: 0x0018 (0x000198 - 0x0001B0)
class UVerseFortniteUIOverlay : public UOverlay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUINamedSlot
/// Size: 0x0010 (0x000198 - 0x0001A8)
class UVerseFortniteUINamedSlot : public UNamedSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIActivableWidgetBase
/// Size: 0x0030 (0x000408 - 0x000438)
class UVerseFortniteUIActivableWidgetBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	CMember(class UVerseFortniteUINamedSlot*)          MainSlot                                                    OFFSET(get<T>, {0x408, 8, 0, 0})
	SMember(FDataTableRowHandle)                       MainMenuInputRowHandle                                      OFFSET(getStruct<T>, {0x418, 16, 0, 0})
	CMember(TArray<FGameplayTagContainer>)             HudToDeactivateOnInitialization                             OFFSET(get<T>, {0x428, 16, 0, 0})
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIPresenter
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UVerseFortniteUIPresenter : public UUIFrameworkGameViewportPresenter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FVerseFortniteUIPresenterElement>)  Pending                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FVerseFortniteUIPresenterElement>)  Created                                                     OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(class UVerseFortniteUIOverlay*)            PlayerGameViewport                                          OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UVerseFortniteUIOverlay*)            ContentGameViewport                                         OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UVerseFortniteUIActivableWidgetBase*) PopupContainer                                             OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   WidgetForDynamicUI                                          OFFSET(get<T>, {0x78, 32, 0, 0})
	CMember(TWeakObjectPtr<UCommonInputActionDomain*>) ActionDomainForDynamicUI                                    OFFSET(get<T>, {0x98, 32, 0, 0})
};

/// Class /Script/VerseFortniteUI.VerseFortniteWidgetViewmodel
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseFortniteWidgetViewmodel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base
/// Size: 0x0058 (0x0000C8 - 0x000120)
class UVerseFortniteUIFrameworkButton_Base : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FLocalizableMessage)                       Message                                                     OFFSET(getStruct<T>, {0xD8, 48, 0, 0})


	/// Functions
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.ServerClick
	// void ServerClick(class APlayerController* PlayerController);                                                             // [0x6643a2c] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.OnRep_Message
	// void OnRep_Message();                                                                                                    // [0xcdb37d0] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.GetText
	// FText GetText();                                                                                                         // [0x7c39fcc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Loud
/// Size: 0x0000 (0x000120 - 0x000120)
class UVerseFortniteUIFrameworkButton_Loud : public UVerseFortniteUIFrameworkButton_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Regular
/// Size: 0x0000 (0x000120 - 0x000120)
class UVerseFortniteUIFrameworkButton_Regular : public UVerseFortniteUIFrameworkButton_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Quiet
/// Size: 0x0000 (0x000120 - 0x000120)
class UVerseFortniteUIFrameworkButton_Quiet : public UVerseFortniteUIFrameworkButton_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base
/// Size: 0x0018 (0x000120 - 0x000138)
class UVerseFortniteUIFrameworkText_Base : public UUIFrameworkTextBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:


	/// Functions
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base.ServerTextCommitted
	// void ServerTextCommitted(class APlayerController* PlayerController, FText NewText);                                      // [0xcdb38d8] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base.ExecuteServerTextCommitted
	// void ExecuteServerTextCommitted(FText& InText, TEnumAsByte<ETextCommit> InCommitMethod);                                 // [0xcdb25e4] Final|Native|Public|HasOutParms 
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkTextBlock
/// Size: 0x0000 (0x000138 - 0x000138)
class UVerseFortniteUIFrameworkTextBlock : public UUIFrameworkTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkEditableText
/// Size: 0x0000 (0x000138 - 0x000138)
class UVerseFortniteUIFrameworkEditableText : public UVerseFortniteUIFrameworkText_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkEditableTextBox
/// Size: 0x0000 (0x000138 - 0x000138)
class UVerseFortniteUIFrameworkEditableTextBox : public UVerseFortniteUIFrameworkText_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider
/// Size: 0x0040 (0x0000C8 - 0x000108)
class UVerseFortniteUIFrameworkSlider : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FVerseFortniteUIFrameworkSliderValue)      Value                                                       OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	DMember(float)                                     MinValue                                                    OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     MaxValue                                                    OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     StepSize                                                    OFFSET(get<float>, {0xDC, 4, 0, 0})


	/// Functions
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetValue
	// bool SetValue(float InValue);                                                                                            // [0xcdb3ecc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetStepSize
	// void SetStepSize(float InMinValue);                                                                                      // [0xcdb3e00] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetMinValue
	// void SetMinValue(float InMinValue);                                                                                      // [0xcdb3d3c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetMaxValue
	// void SetMaxValue(float InMaxValue);                                                                                      // [0xcdb3c78] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.ServerValueChanged
	// void ServerValueChanged(class APlayerController* PlayerController, float InNewValue, int32_t InClientID, int32_t InServerID); // [0xcdb3a3c] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_Value
	// void OnRep_Value();                                                                                                      // [0xcdb385c] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_StepSize
	// void OnRep_StepSize();                                                                                                   // [0xcdb3834] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_MinValue
	// void OnRep_MinValue();                                                                                                   // [0xcdb380c] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_MaxValue
	// void OnRep_MaxValue();                                                                                                   // [0xcdb37a8] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.HandleValueChanged
	// void HandleValueChanged(float NewValue);                                                                                 // [0xcdb28c8] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetValue
	// float GetValue();                                                                                                        // [0x364f680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetStepSize
	// float GetStepSize();                                                                                                     // [0xa3d3df8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetMinValue
	// float GetMinValue();                                                                                                     // [0xa12f030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetMaxValue
	// float GetMaxValue();                                                                                                     // [0x6cdc7ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.ExecuteServerValueChanged
	// void ExecuteServerValueChanged(float InNewValue, int32_t InClientID, int32_t InServerID);                                // [0xcdb2710] Final|Native|Public  
};

/// Struct /Script/VerseFortniteUI.VerseFortniteUIPresenterElement
/// Size: 0x0020 (0x000000 - 0x000020)
class FVerseFortniteUIPresenterElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UVerseFortniteUINamedSlot*)          SlotWidget                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UWidget*)                            UMGWidget                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/VerseFortniteUI.VerseFortniteUIFrameworkSliderValue
/// Size: 0x000C (0x000000 - 0x00000C)
class FVerseFortniteUIFrameworkSliderValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ClientId                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ServerId                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

