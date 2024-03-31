
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore

/// Struct /Engine/Transient.ChaosDestructionEvent_SWC
/// Size: 0x0044 (0x000000 - 0x000044)
class FChaosDestructionEvent_SWC : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 68;

public:
	SMember(FVector3f)                                 Position                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector3f)                                 Normal                                                      OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector3f)                                 Velocity                                                    OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector3f)                                 AngularVelocity                                             OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	DMember(float)                                     ExtentMin                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     ExtentMax                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   ParticleID                                                  OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   Type                                                        OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_3309118d87a6f0ec
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_3309118d87a6f0ec : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_f84662b1ee2a5432
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_f84662b1ee2a5432 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_6afc3d4718ec0081
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_6afc3d4718ec0081 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_f0b740913ff94591
/// Size: 0x0014 (0x000000 - 0x000014)
class FPropertyBag_f0b740913ff94591 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_c3d8a27e503ed845
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_c3d8a27e503ed845 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_46af665fc368c8e6
/// Size: 0x0168 (0x000000 - 0x000168)
class FPropertyBag_46af665fc368c8e6 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	DMember(float)                                     WidgetStyle_BarThickness                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetStyle_TopShadowBrush_DrawAs                           OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetStyle_BottomShadowBrush_DrawAs                        OFFSET(get<T>, {0x5, 1, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetStyle_LeftShadowBrush_DrawAs                          OFFSET(get<T>, {0x6, 1, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetStyle_RightShadowBrush_DrawAs                         OFFSET(get<T>, {0x7, 1, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetBarStyle_HorizontalBackgroundImage_DrawAs             OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(class UObject*)                            WidgetBarStyle_VerticalBackgroundImage_ResourceObject       OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FDeprecateSlateVector2D)                   WidgetBarStyle_VerticalBackgroundImage_ImageSize            OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetBarStyle_VerticalBackgroundImage_DrawAs               OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FMargin)                                   WidgetBarStyle_VerticalBackgroundImage_Margin               OFFSET(getStruct<T>, {0x24, 16, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetBarStyle_VerticalTopSlotImage_DrawAs                  OFFSET(get<T>, {0x34, 1, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetBarStyle_HorizontalTopSlotImage_DrawAs                OFFSET(get<T>, {0x35, 1, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetBarStyle_VerticalBottomSlotImage_DrawAs               OFFSET(get<T>, {0x36, 1, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetBarStyle_HorizontalBottomSlotImage_DrawAs             OFFSET(get<T>, {0x37, 1, 0, 0})
	CMember(class UObject*)                            WidgetBarStyle_NormalThumbImage_ResourceObject              OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FDeprecateSlateVector2D)                   WidgetBarStyle_NormalThumbImage_ImageSize                   OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	SMember(FSlateColor)                               WidgetBarStyle_NormalThumbImage_TintColor                   OFFSET(getStruct<T>, {0x48, 20, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetBarStyle_NormalThumbImage_DrawAs                      OFFSET(get<T>, {0x5C, 1, 0, 0})
	SMember(FVector4)                                  WidgetBarStyle_NormalThumbImage_OutlineSettings_CornerRadii OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	DMember(float)                                     WidgetBarStyle_NormalThumbImage_OutlineSettings_Width       OFFSET(get<float>, {0x80, 4, 0, 0})
	SMember(FLinearColor)                              WidgetBarStyle_NormalThumbImage_OutlineSettings_Color_SpecifiedColor OFFSET(getStruct<T>, {0x84, 16, 0, 0})
	CMember(ESlateBrushRoundingType)                   WidgetBarStyle_NormalThumbImage_OutlineSettings_RoundingType OFFSET(get<T>, {0x94, 1, 0, 0})
	CMember(class UObject*)                            WidgetBarStyle_HoveredThumbImage_ResourceObject             OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FDeprecateSlateVector2D)                   WidgetBarStyle_HoveredThumbImage_ImageSize                  OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
	SMember(FSlateColor)                               WidgetBarStyle_HoveredThumbImage_TintColor                  OFFSET(getStruct<T>, {0xA8, 20, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetBarStyle_HoveredThumbImage_DrawAs                     OFFSET(get<T>, {0xBC, 1, 0, 0})
	SMember(FVector4)                                  WidgetBarStyle_HoveredThumbImage_OutlineSettings_CornerRadii OFFSET(getStruct<T>, {0xC0, 32, 0, 0})
	SMember(FLinearColor)                              WidgetBarStyle_HoveredThumbImage_OutlineSettings_Color_SpecifiedColor OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	DMember(float)                                     WidgetBarStyle_HoveredThumbImage_OutlineSettings_Width      OFFSET(get<float>, {0xF0, 4, 0, 0})
	CMember(ESlateBrushRoundingType)                   WidgetBarStyle_HoveredThumbImage_OutlineSettings_RoundingType OFFSET(get<T>, {0xF4, 1, 0, 0})
	CMember(class UObject*)                            WidgetBarStyle_DraggedThumbImage_ResourceObject             OFFSET(get<T>, {0xF8, 8, 0, 0})
	SMember(FDeprecateSlateVector2D)                   WidgetBarStyle_DraggedThumbImage_ImageSize                  OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FLinearColor)                              WidgetBarStyle_DraggedThumbImage_TintColor_SpecifiedColor   OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetBarStyle_DraggedThumbImage_DrawAs                     OFFSET(get<T>, {0x118, 1, 0, 0})
	SMember(FVector4)                                  WidgetBarStyle_DraggedThumbImage_OutlineSettings_CornerRadii OFFSET(getStruct<T>, {0x120, 32, 0, 0})
	SMember(FLinearColor)                              WidgetBarStyle_DraggedThumbImage_OutlineSettings_Color_SpecifiedColor OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	DMember(float)                                     WidgetBarStyle_DraggedThumbImage_OutlineSettings_Width      OFFSET(get<float>, {0x150, 4, 0, 0})
	CMember(ESlateBrushRoundingType)                   WidgetBarStyle_DraggedThumbImage_OutlineSettings_RoundingType OFFSET(get<T>, {0x154, 1, 0, 0})
	SMember(FVector2D)                                 ScrollbarThickness                                          OFFSET(getStruct<T>, {0x158, 16, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_6172c7863c3dd210
/// Size: 0x015C (0x000000 - 0x00015C)
class FPropertyBag_6172c7863c3dd210 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 348;

public:
	CMember(ESlateBrushDrawType)                       ScrollBarStyle_HorizontalBackgroundImage_DrawAs             OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UObject*)                            ScrollBarStyle_VerticalBackgroundImage_ResourceObject       OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FDeprecateSlateVector2D)                   ScrollBarStyle_VerticalBackgroundImage_ImageSize            OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(ESlateBrushDrawType)                       ScrollBarStyle_VerticalBackgroundImage_DrawAs               OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FMargin)                                   ScrollBarStyle_VerticalBackgroundImage_Margin               OFFSET(getStruct<T>, {0x1C, 16, 0, 0})
	CMember(ESlateBrushDrawType)                       ScrollBarStyle_VerticalTopSlotImage_DrawAs                  OFFSET(get<T>, {0x2C, 1, 0, 0})
	CMember(ESlateBrushDrawType)                       ScrollBarStyle_HorizontalTopSlotImage_DrawAs                OFFSET(get<T>, {0x2D, 1, 0, 0})
	CMember(ESlateBrushDrawType)                       ScrollBarStyle_VerticalBottomSlotImage_DrawAs               OFFSET(get<T>, {0x2E, 1, 0, 0})
	CMember(ESlateBrushDrawType)                       ScrollBarStyle_HorizontalBottomSlotImage_DrawAs             OFFSET(get<T>, {0x2F, 1, 0, 0})
	CMember(class UObject*)                            ScrollBarStyle_NormalThumbImage_ResourceObject              OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FDeprecateSlateVector2D)                   ScrollBarStyle_NormalThumbImage_ImageSize                   OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FLinearColor)                              ScrollBarStyle_NormalThumbImage_TintColor_SpecifiedColor    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(ESlateBrushDrawType)                       ScrollBarStyle_NormalThumbImage_DrawAs                      OFFSET(get<T>, {0x50, 1, 0, 0})
	SMember(FVector4)                                  ScrollBarStyle_NormalThumbImage_OutlineSettings_CornerRadii OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	SMember(FLinearColor)                              ScrollBarStyle_NormalThumbImage_OutlineSettings_Color_SpecifiedColor OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	DMember(float)                                     ScrollBarStyle_NormalThumbImage_OutlineSettings_Width       OFFSET(get<float>, {0x90, 4, 0, 0})
	CMember(ESlateBrushRoundingType)                   ScrollBarStyle_NormalThumbImage_OutlineSettings_RoundingType OFFSET(get<T>, {0x94, 1, 0, 0})
	CMember(class UObject*)                            ScrollBarStyle_HoveredThumbImage_ResourceObject             OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FDeprecateSlateVector2D)                   ScrollBarStyle_HoveredThumbImage_ImageSize                  OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
	SMember(FLinearColor)                              ScrollBarStyle_HoveredThumbImage_TintColor_SpecifiedColor   OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(ESlateBrushDrawType)                       ScrollBarStyle_HoveredThumbImage_DrawAs                     OFFSET(get<T>, {0xB8, 1, 0, 0})
	SMember(FVector4)                                  ScrollBarStyle_HoveredThumbImage_OutlineSettings_CornerRadii OFFSET(getStruct<T>, {0xC0, 32, 0, 0})
	SMember(FLinearColor)                              ScrollBarStyle_HoveredThumbImage_OutlineSettings_Color_SpecifiedColor OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	DMember(float)                                     ScrollBarStyle_HoveredThumbImage_OutlineSettings_Width      OFFSET(get<float>, {0xF0, 4, 0, 0})
	CMember(ESlateBrushRoundingType)                   ScrollBarStyle_HoveredThumbImage_OutlineSettings_RoundingType OFFSET(get<T>, {0xF4, 1, 0, 0})
	CMember(class UObject*)                            ScrollBarStyle_DraggedThumbImage_ResourceObject             OFFSET(get<T>, {0xF8, 8, 0, 0})
	SMember(FDeprecateSlateVector2D)                   ScrollBarStyle_DraggedThumbImage_ImageSize                  OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FLinearColor)                              ScrollBarStyle_DraggedThumbImage_TintColor_SpecifiedColor   OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	CMember(ESlateBrushDrawType)                       ScrollBarStyle_DraggedThumbImage_DrawAs                     OFFSET(get<T>, {0x118, 1, 0, 0})
	SMember(FVector4)                                  ScrollBarStyle_DraggedThumbImage_OutlineSettings_CornerRadii OFFSET(getStruct<T>, {0x120, 32, 0, 0})
	SMember(FLinearColor)                              ScrollBarStyle_DraggedThumbImage_OutlineSettings_Color_SpecifiedColor OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	DMember(float)                                     ScrollBarStyle_DraggedThumbImage_OutlineSettings_Width      OFFSET(get<float>, {0x150, 4, 0, 0})
	CMember(ESlateBrushRoundingType)                   ScrollBarStyle_DraggedThumbImage_OutlineSettings_RoundingType OFFSET(get<T>, {0x154, 1, 0, 0})
	DMember(float)                                     ScrollBarStyle_Thickness                                    OFFSET(get<float>, {0x158, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_28377a4527d09c29
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_28377a4527d09c29 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_eb21255768d8685e
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_eb21255768d8685e : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_4112c2ed4a89020
/// Size: 0x001C (0x000000 - 0x00001C)
class FPropertyBag_4112c2ed4a89020 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(class UObject*)                            Font_FontObject                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(ETextTransformPolicy)                      TextTransformPolicy                                         OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Font_SkewAmount                                             OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_3542a7481c99704e
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_3542a7481c99704e : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_d9e19fc50be6ba34
/// Size: 0x000C (0x000000 - 0x00000C)
class FPropertyBag_d9e19fc50be6ba34 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_6447039cd77243a8
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_6447039cd77243a8 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_d751825b3d37502b
/// Size: 0x0009 (0x000000 - 0x000009)
class FPropertyBag_d751825b3d37502b : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(ETextTransformPolicy)                      TextTransformPolicy                                         OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_f5d02365169c15ce
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_f5d02365169c15ce : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_c0ab73a50044884d
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_c0ab73a50044884d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_eb425be269619abb
/// Size: 0x0014 (0x000000 - 0x000014)
class FPropertyBag_eb425be269619abb : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(class UObject*)                            Font_FontObject                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Font_SkewAmount                                             OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_341393f92b541299
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_341393f92b541299 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_320266dfb085b69a
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_320266dfb085b69a : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UObject*)                            Font_FontMaterial                                           OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_937aaa2f5960df19
/// Size: 0x0064 (0x000000 - 0x000064)
class FPropertyBag_937aaa2f5960df19 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 100;

public:
	SMember(FSlateColor)                               Color_Idle                                                  OFFSET(getStruct<T>, {0x0, 20, 0, 0})
	SMember(FSlateColor)                               Color_Hovered                                               OFFSET(getStruct<T>, {0x14, 20, 0, 0})
	SMember(FSlateColor)                               Color_Focused                                               OFFSET(getStruct<T>, {0x28, 20, 0, 0})
	SMember(FSlateColor)                               Color_Pressed                                               OFFSET(getStruct<T>, {0x3C, 20, 0, 0})
	SMember(FSlateColor)                               Color_Disabled                                              OFFSET(getStruct<T>, {0x50, 20, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_7a790f6d03d34f98
/// Size: 0x0058 (0x000000 - 0x000058)
class FPropertyBag_7a790f6d03d34f98 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x0, 88, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_94c42db38d4b0318
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_94c42db38d4b0318 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         MatchMakingSucceededSound                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_bed29ee889c204f4
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_bed29ee889c204f4 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     SecondsPriorToTransSound                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(class USoundBase*)                         TransitionSound                                             OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_ac47ee378e95988d
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_ac47ee378e95988d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         MTXOfferTileIntroWhoosh                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ShopRowWhooshIn                                             OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_2424e8de0968c95
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_2424e8de0968c95 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         ShopRowWhooshIn                                             OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_1e146e342ff67b97
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_1e146e342ff67b97 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         LockerCategoryWhooshSound                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_a2b8a94c0fdff921
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyBag_a2b8a94c0fdff921 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class USoundBase*)                         BannerAppearSound                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         BannerAwaySound                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         IntroSound                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundBase*)                         OutroSound                                                  OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_3123f4e9fec1b2eb
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_3123f4e9fec1b2eb : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         ShopIntroWhooshSound                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ContentWhoosh_RetractSound                                  OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_3622fcb16891cabc
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_3622fcb16891cabc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         ErrorWindowAppearSound                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ErrorWindowAwaySound                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_5330c7d10ed80ede
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_5330c7d10ed80ede : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_ffc90ed638c9bc18
/// Size: 0x0028 (0x000000 - 0x000028)
class FPropertyBag_ffc90ed638c9bc18 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class USoundBase*)                         HoveredSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         HoldPressedSound                                            OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         HoldSound                                                   OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundBase*)                         HoldReleasedSound                                           OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class USoundBase*)                         HoldCompletedSound                                          OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_6e4e44cb262a9b98
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_6e4e44cb262a9b98 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_409a564b4f7d8e42
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyBag_409a564b4f7d8e42 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class USoundBase*)                         HoldPressedSound                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         HoldSound                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         HoldReleasedSound                                           OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundBase*)                         HoldCompletedSound                                          OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_56bcd875cc0a377b
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyBag_56bcd875cc0a377b : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class USoundBase*)                         ContextButtonHoverSound                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ContextButtonClickedSound                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         BlockOutlineHoverSound                                      OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_873bc3ab982ff91f
/// Size: 0x0048 (0x000000 - 0x000048)
class FPropertyBag_873bc3ab982ff91f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         HoveredSound                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	CMember(class USoundBase*)                         ActivityBrowserTileHoverSound                               OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_1c38904a3a5e043f
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_1c38904a3a5e043f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         HoveredSound                                                OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_4115530af2ce0c8a
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_4115530af2ce0c8a : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class USoundBase*)                         HoveredSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         HoldPressedSound                                            OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundBase*)                         HoldSound                                                   OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class USoundBase*)                         HoldReleasedSound                                           OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class USoundBase*)                         HoldCompletedSound                                          OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_52a6567b502737f1
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_52a6567b502737f1 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         ListEntryHoveredSound                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_f53d87f16aafb287
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_f53d87f16aafb287 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_2b808b1a17b40622
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyBag_2b808b1a17b40622 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class USoundBase*)                         Press_Sound                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         HoldSound                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         ReleaseSound                                                OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundBase*)                         CompleteSound                                               OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_8df24bc9b9bccd62
/// Size: 0x021C (0x000000 - 0x00021C)
class FPropertyBag_8df24bc9b9bccd62 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 540;

public:
	SMember(FSlateFontInfo)                            LargePrimaryFont                                            OFFSET(getStruct<T>, {0x0, 88, 0, 0})
	SMember(FSlateFontInfo)                            LargeSecondaryFont                                          OFFSET(getStruct<T>, {0x58, 88, 0, 0})
	SMember(FSlateFontInfo)                            MediumPrimaryFont                                           OFFSET(getStruct<T>, {0xB0, 88, 0, 0})
	SMember(FSlateFontInfo)                            MeduimSecondaryFont                                         OFFSET(getStruct<T>, {0x108, 88, 0, 0})
	SMember(FSlateFontInfo)                            SmallPrimaryFont                                            OFFSET(getStruct<T>, {0x160, 88, 0, 0})
	SMember(FSlateFontInfo)                            SmallSecondaryFont                                          OFFSET(getStruct<T>, {0x1B8, 88, 0, 0})
	DMember(int32_t)                                   LargeHeight                                                 OFFSET(get<int32_t>, {0x210, 4, 0, 0})
	DMember(int32_t)                                   MediumHeight                                                OFFSET(get<int32_t>, {0x214, 4, 0, 0})
	DMember(int32_t)                                   SmallHeight                                                 OFFSET(get<int32_t>, {0x218, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_c7587567e1f669b8
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_c7587567e1f669b8 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     LargePrimaryFont_Size                                       OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_ca1d1b08e0dc3d7f
/// Size: 0x0058 (0x000000 - 0x000058)
class FPropertyBag_ca1d1b08e0dc3d7f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FSlateFontInfo)                            GamepadPromptFont                                           OFFSET(getStruct<T>, {0x0, 88, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_ecb097eb3ab41385
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_ecb097eb3ab41385 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UObject*)                            Font_FontObject                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     Font_SkewAmount                                             OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(class UObject*)                            TabFont_FontObject                                          OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FName)                                     TabFont_TypefaceFontName                                    OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(float)                                     TabFont_Size                                                OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   TabFont_LetterSpacing                                       OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     TabFont_SkewAmount                                          OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_95f64d267364aeec
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyBag_95f64d267364aeec : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UObject*)                            Font_FontObject                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     Font_SkewAmount                                             OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_7c26a5880486864b
/// Size: 0x0040 (0x000000 - 0x000040)
class FPropertyBag_7c26a5880486864b : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UObject*)                            LargePrimaryFont_FontMaterial                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UObject*)                            LargeSecondaryFont_FontMaterial                             OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UObject*)                            MediumPrimaryFont_FontMaterial                              OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UObject*)                            MeduimSecondaryFont_FontMaterial                            OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class UObject*)                            SmallPrimaryFont_FontMaterial                               OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class UObject*)                            SmallSecondaryFont_FontMaterial                             OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UMaterialInstance*)                  BackgroundMaterial                                          OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UMaterialInstance*)                  BorderMaterial                                              OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_3152df0eae58ce28
/// Size: 0x0040 (0x000000 - 0x000040)
class FPropertyBag_3152df0eae58ce28 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UMaterialInstance*)                  RegularFontMaterial                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMaterialInstance*)                  RegularSecondaryFontMaterial                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UMaterialInstance*)                  RegularBackgroundMaterial                                   OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UMaterialInstance*)                  RegularOutlineMaterial                                      OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class UMaterialInstance*)                  QuietFontMaterial                                           OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class UMaterialInstance*)                  QuietSecondaryFontMaterial                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UMaterialInstance*)                  QuietBackgroundMaterial                                     OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UMaterialInstance*)                  QuietOutlineMaterial                                        OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_1bdcde19191b1cdd
/// Size: 0x0078 (0x000000 - 0x000078)
class FPropertyBag_1bdcde19191b1cdd : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UObject*)                            SmallPrimaryFont_FontMaterial                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UObject*)                            SmallSecondaryFont_FontMaterial                             OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UMaterialInstance*)                  BackgroundMaterial                                          OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UMaterialInstance*)                  BorderMaterial                                              OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FSlateFontInfo)                            GamepadPromptFont                                           OFFSET(getStruct<T>, {0x20, 88, 0, 0})
};

