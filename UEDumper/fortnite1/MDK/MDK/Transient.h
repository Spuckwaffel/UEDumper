
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

/// Struct /Engine/Transient.PropertyBag_5b2dd236dbb50b7c
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_5b2dd236dbb50b7c : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_43f590ec23c52fe6
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_43f590ec23c52fe6 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_e188a5101237da
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_e188a5101237da : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_9140204f6b27f01b
/// Size: 0x0014 (0x000000 - 0x000014)
class FPropertyBag_9140204f6b27f01b : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_5b808c423e011a11
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_5b808c423e011a11 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_dd87f686b5333639
/// Size: 0x0168 (0x000000 - 0x000168)
class FPropertyBag_dd87f686b5333639 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_38f20d80932ed350
/// Size: 0x015C (0x000000 - 0x00015C)
class FPropertyBag_38f20d80932ed350 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_54b8fa93b73f535d
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_54b8fa93b73f535d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_2d095e7830ddea5a
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_2d095e7830ddea5a : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_5891937d74e12a9b
/// Size: 0x001C (0x000000 - 0x00001C)
class FPropertyBag_5891937d74e12a9b : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_14960ae8eb657a2f
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_14960ae8eb657a2f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_8b67acede7509460
/// Size: 0x000C (0x000000 - 0x00000C)
class FPropertyBag_8b67acede7509460 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_9de66477b493e40d
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_9de66477b493e40d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_846c9a6e55b7db43
/// Size: 0x0009 (0x000000 - 0x000009)
class FPropertyBag_846c9a6e55b7db43 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(ETextTransformPolicy)                      TextTransformPolicy                                         OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_7d0ca938253af843
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_7d0ca938253af843 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_45db383151c31df2
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_45db383151c31df2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_65ab15a97ad99c32
/// Size: 0x0014 (0x000000 - 0x000014)
class FPropertyBag_65ab15a97ad99c32 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_fc2cd96559cd4679
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_fc2cd96559cd4679 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_2b1b765751bb6f89
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_2b1b765751bb6f89 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UObject*)                            Font_FontMaterial                                           OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_ed6419665d2c659
/// Size: 0x0064 (0x000000 - 0x000064)
class FPropertyBag_ed6419665d2c659 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_b08164ec9e38155b
/// Size: 0x0058 (0x000000 - 0x000058)
class FPropertyBag_b08164ec9e38155b : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x0, 88, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_93d516978058038f
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_93d516978058038f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         MatchMakingSucceededSound                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_eead9f9dc5f49130
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_eead9f9dc5f49130 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     SecondsPriorToTransSound                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(class USoundBase*)                         TransitionSound                                             OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_730c31520924cb23
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_730c31520924cb23 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         MTXOfferTileIntroWhoosh                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ShopRowWhooshIn                                             OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_3ce65621ed0f17c
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_3ce65621ed0f17c : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         ShopRowWhooshIn                                             OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_ff0e6f7e3c0cffd6
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_ff0e6f7e3c0cffd6 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         LockerCategoryWhooshSound                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_1da2e9030fa881df
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyBag_1da2e9030fa881df : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_377e9a5ede02aa4e
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_377e9a5ede02aa4e : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         ShopIntroWhooshSound                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ContentWhoosh_RetractSound                                  OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_bcbb017cc223e99f
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_bcbb017cc223e99f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         ErrorWindowAppearSound                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ErrorWindowAwaySound                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_4081cbcaf2dfa7b7
/// Size: 0x021C (0x000000 - 0x00021C)
class FPropertyBag_4081cbcaf2dfa7b7 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_ad8b09079c4170ed
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_ad8b09079c4170ed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     LargePrimaryFont_Size                                       OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_d1eb73946a18bdd7
/// Size: 0x0058 (0x000000 - 0x000058)
class FPropertyBag_d1eb73946a18bdd7 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FSlateFontInfo)                            GamepadPromptFont                                           OFFSET(getStruct<T>, {0x0, 88, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_719344069fd90649
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_719344069fd90649 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_689baebaa828d4ff
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyBag_689baebaa828d4ff : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_e90f194e3f47db02
/// Size: 0x0040 (0x000000 - 0x000040)
class FPropertyBag_e90f194e3f47db02 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_aeebdd5e54f78855
/// Size: 0x0040 (0x000000 - 0x000040)
class FPropertyBag_aeebdd5e54f78855 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_7111c6e75fc1a1d2
/// Size: 0x0078 (0x000000 - 0x000078)
class FPropertyBag_7111c6e75fc1a1d2 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_8329813e1de9dacb
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_8329813e1de9dacb : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_141cc4db6bc1cba5
/// Size: 0x0028 (0x000000 - 0x000028)
class FPropertyBag_141cc4db6bc1cba5 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_21e355f4fb312b5f
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_21e355f4fb312b5f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_7b9d13b369a368a2
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyBag_7b9d13b369a368a2 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_d328000c9f843d9
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyBag_d328000c9f843d9 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class USoundBase*)                         ContextButtonHoverSound                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ContextButtonClickedSound                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         BlockOutlineHoverSound                                      OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_d71583304f1de8c4
/// Size: 0x0048 (0x000000 - 0x000048)
class FPropertyBag_d71583304f1de8c4 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_6310534883e0af3a
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_6310534883e0af3a : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         HoveredSound                                                OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_54fbb19d5263fc50
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_54fbb19d5263fc50 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_57564e440f898404
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_57564e440f898404 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         ListEntryHoveredSound                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_f28c46400e5f98e5
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_f28c46400e5f98e5 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_fa2970ee77f05267
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyBag_fa2970ee77f05267 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_fdd0ab431a51bbcb
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_fdd0ab431a51bbcb : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_cb987bd4098c0c85
/// Size: 0x0038 (0x000000 - 0x000038)
class FPropertyBag_cb987bd4098c0c85 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	CMember(class USoundBase*)                         ClickedSound                                                OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_71ff49374b3bfcf9
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_71ff49374b3bfcf9 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_1b5a14847a5417ee
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_1b5a14847a5417ee : public MDKBase
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

