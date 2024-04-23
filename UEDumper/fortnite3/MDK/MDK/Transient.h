
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

/// Struct /Engine/Transient.PropertyBag_5415005df515d39a
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_5415005df515d39a : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_feeb46f9932e3f12
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_feeb46f9932e3f12 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_62b6550c6246c456
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_62b6550c6246c456 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_78ea117047724599
/// Size: 0x0014 (0x000000 - 0x000014)
class FPropertyBag_78ea117047724599 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_90062536d02b71a8
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_90062536d02b71a8 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_473724d65ee4bf87
/// Size: 0x018C (0x000000 - 0x00018C)
class FPropertyBag_473724d65ee4bf87 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 396;

public:
	DMember(float)                                     WidgetStyle_BarThickness                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetStyle_TopShadowBrush_DrawAs                           OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetStyle_BottomShadowBrush_DrawAs                        OFFSET(get<T>, {0x5, 1, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetStyle_LeftShadowBrush_DrawAs                          OFFSET(get<T>, {0x6, 1, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetStyle_RightShadowBrush_DrawAs                         OFFSET(get<T>, {0x7, 1, 0, 0})
	CMember(class UObject*)                            WidgetBarStyle_VerticalBackgroundImage_ResourceObject       OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FDeprecateSlateVector2D)                   WidgetBarStyle_VerticalBackgroundImage_ImageSize            OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetBarStyle_VerticalBackgroundImage_DrawAs               OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FMargin)                                   WidgetBarStyle_VerticalBackgroundImage_Margin               OFFSET(getStruct<T>, {0x1C, 16, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetBarStyle_VerticalTopSlotImage_DrawAs                  OFFSET(get<T>, {0x2C, 1, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetBarStyle_HorizontalTopSlotImage_DrawAs                OFFSET(get<T>, {0x2D, 1, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetBarStyle_VerticalBottomSlotImage_DrawAs               OFFSET(get<T>, {0x2E, 1, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetBarStyle_HorizontalBottomSlotImage_DrawAs             OFFSET(get<T>, {0x2F, 1, 0, 0})
	CMember(class UObject*)                            WidgetBarStyle_NormalThumbImage_ResourceObject              OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FDeprecateSlateVector2D)                   WidgetBarStyle_NormalThumbImage_ImageSize                   OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FSlateColor)                               WidgetBarStyle_NormalThumbImage_TintColor                   OFFSET(getStruct<T>, {0x40, 20, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetBarStyle_NormalThumbImage_DrawAs                      OFFSET(get<T>, {0x54, 1, 0, 0})
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
	CMember(class UObject*)                            WidgetBarStyle_HorizontalBackgroundImage_ResourceObject     OFFSET(get<T>, {0x168, 8, 0, 0})
	SMember(FDeprecateSlateVector2D)                   WidgetBarStyle_HorizontalBackgroundImage_ImageSize          OFFSET(getStruct<T>, {0x170, 8, 0, 0})
	CMember(ESlateBrushDrawType)                       WidgetBarStyle_HorizontalBackgroundImage_DrawAs             OFFSET(get<T>, {0x178, 1, 0, 0})
	SMember(FMargin)                                   WidgetBarStyle_HorizontalBackgroundImage_Margin             OFFSET(getStruct<T>, {0x17C, 16, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_2999c9857a5c4f42
/// Size: 0x015C (0x000000 - 0x00015C)
class FPropertyBag_2999c9857a5c4f42 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_9357090034f4b622
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_9357090034f4b622 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_f598acc37f922756
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_f598acc37f922756 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_8adfc99b581e09b3
/// Size: 0x001C (0x000000 - 0x00001C)
class FPropertyBag_8adfc99b581e09b3 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_6b08103643228982
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_6b08103643228982 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_a64b1f78f24cf01d
/// Size: 0x000C (0x000000 - 0x00000C)
class FPropertyBag_a64b1f78f24cf01d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_56e3b628435cf519
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_56e3b628435cf519 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_33a0400511628dea
/// Size: 0x0009 (0x000000 - 0x000009)
class FPropertyBag_33a0400511628dea : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Font_LetterSpacing                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(ETextTransformPolicy)                      TextTransformPolicy                                         OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_a107483e33f2b05d
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_a107483e33f2b05d : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_8cdd58091ad521e3
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_8cdd58091ad521e3 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Font_Size                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_730029310d81e744
/// Size: 0x0014 (0x000000 - 0x000014)
class FPropertyBag_730029310d81e744 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_83b0bbe144eacc29
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_83b0bbe144eacc29 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Font_TypefaceFontName                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_dbb37dc4a4d205ba
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_dbb37dc4a4d205ba : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UObject*)                            Font_FontMaterial                                           OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_521f38ee93a75782
/// Size: 0x0064 (0x000000 - 0x000064)
class FPropertyBag_521f38ee93a75782 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_8211b5149cad35c6
/// Size: 0x0058 (0x000000 - 0x000058)
class FPropertyBag_8211b5149cad35c6 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x0, 88, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_b79d2e0356afe9d3
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_b79d2e0356afe9d3 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         MatchMakingSucceededSound                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_c742d77124097aa6
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_c742d77124097aa6 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     SecondsPriorToTransSound                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(class USoundBase*)                         TransitionSound                                             OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_5e290361565cb8ba
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_5e290361565cb8ba : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         MTXOfferTileIntroWhoosh                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ShopRowWhooshIn                                             OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_84e4641400ee1fd9
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_84e4641400ee1fd9 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         LockerCategoryWhooshSound                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_1d550be4799c6905
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyBag_1d550be4799c6905 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_e861272a3fbef3db
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyBag_e861272a3fbef3db : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class USoundBase*)                         ShopIntroWhooshSound                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ContentWhoosh_RetractSound                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         ShopRowWhooshIn                                             OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_57755f91dfaea796
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_57755f91dfaea796 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         ErrorWindowAppearSound                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ErrorWindowAwaySound                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_977a73223b4d0aa9
/// Size: 0x021C (0x000000 - 0x00021C)
class FPropertyBag_977a73223b4d0aa9 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_87c092716c7ba7d6
/// Size: 0x0004 (0x000000 - 0x000004)
class FPropertyBag_87c092716c7ba7d6 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     LargePrimaryFont_Size                                       OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_97b086967a393a8c
/// Size: 0x0058 (0x000000 - 0x000058)
class FPropertyBag_97b086967a393a8c : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FSlateFontInfo)                            GamepadPromptFont                                           OFFSET(getStruct<T>, {0x0, 88, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_325d84922c876a0d
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_325d84922c876a0d : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_c96ecaeb64a447bd
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyBag_c96ecaeb64a447bd : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_30c92c13bc693035
/// Size: 0x0040 (0x000000 - 0x000040)
class FPropertyBag_30c92c13bc693035 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_ea88d4d6f0f0b7ac
/// Size: 0x0040 (0x000000 - 0x000040)
class FPropertyBag_ea88d4d6f0f0b7ac : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_912537c34b7b33d9
/// Size: 0x0078 (0x000000 - 0x000078)
class FPropertyBag_912537c34b7b33d9 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_11b216c3d31d4cd
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_11b216c3d31d4cd : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_37878cb2bae06d2e
/// Size: 0x0028 (0x000000 - 0x000028)
class FPropertyBag_37878cb2bae06d2e : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_6a75d8ff50d44bed
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_6a75d8ff50d44bed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_bb768c05d1de08a7
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyBag_bb768c05d1de08a7 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_4ac867f26258a79f
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyBag_4ac867f26258a79f : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class USoundBase*)                         ContextButtonHoverSound                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         ContextButtonClickedSound                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         BlockOutlineHoverSound                                      OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_291132304a8823c5
/// Size: 0x0048 (0x000000 - 0x000048)
class FPropertyBag_291132304a8823c5 : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_ca0728acca1607a
/// Size: 0x0010 (0x000000 - 0x000010)
class FPropertyBag_ca0728acca1607a : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USoundBase*)                         PressedSound                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         HoveredSound                                                OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_769df90d9c876c1a
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_769df90d9c876c1a : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_ded50d2337a5fb74
/// Size: 0x0008 (0x000000 - 0x000008)
class FPropertyBag_ded50d2337a5fb74 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundBase*)                         ListEntryHoveredSound                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_ec48d4442d95745e
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_ec48d4442d95745e : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_33d909845972eead
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyBag_33d909845972eead : public MDKBase
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

/// Struct /Engine/Transient.PropertyBag_6c9b87d5b59ac106
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_6c9b87d5b59ac106 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_214ada60ad5b12d1
/// Size: 0x0038 (0x000000 - 0x000038)
class FPropertyBag_214ada60ad5b12d1 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	CMember(class USoundBase*)                         ClickedSound                                                OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_d4df731ef59b10c9
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_d4df731ef59b10c9 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Engine/Transient.PropertyBag_2f1bd39cacd6ff83
/// Size: 0x0030 (0x000000 - 0x000030)
class FPropertyBag_2f1bd39cacd6ff83 : public MDKBase
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

