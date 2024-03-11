
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore

/// Struct /Engine/Transient.ChaosDestructionEvent_SWC
/// Size: 0x0044 (0x000000 - 0x000044)
struct FChaosDestructionEvent_SWC
{ 
	FVector3f                                          Position;                                                   // 0x0000   (0x000C)  
	FVector3f                                          Normal;                                                     // 0x000C   (0x000C)  
	FVector3f                                          Velocity;                                                   // 0x0018   (0x000C)  
	FVector3f                                          AngularVelocity;                                            // 0x0024   (0x000C)  
	float                                              ExtentMin;                                                  // 0x0030   (0x0004)  
	float                                              ExtentMax;                                                  // 0x0034   (0x0004)  
	int32_t                                            ParticleID;                                                 // 0x0038   (0x0004)  
	float                                              Time;                                                       // 0x003C   (0x0004)  
	int32_t                                            Type;                                                       // 0x0040   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_8d03f831c8150625
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_8d03f831c8150625
{ 
	float                                              LineHeightPercentage;                                       // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_b17db09bfee2daa4
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_b17db09bfee2daa4
{ 
	FMargin                                            Margin;                                                     // 0x0000   (0x0010)  
};

/// Struct /Engine/Transient.PropertyBag_a9de03c6e49c1e0b
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_a9de03c6e49c1e0b
{ 
	float                                              LineHeightPercentage;                                       // 0x0000   (0x0004)  
	float                                              Font_Size;                                                  // 0x0004   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_f297e0a7e15e0082
/// Size: 0x0014 (0x000000 - 0x000014)
struct FPropertyBag_f297e0a7e15e0082
{ 
	FMargin                                            Margin;                                                     // 0x0000   (0x0010)  
	float                                              LineHeightPercentage;                                       // 0x0010   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_a65401dffd4afbb
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_a65401dffd4afbb
{ 
	FMargin                                            Margin;                                                     // 0x0000   (0x0010)  
};

/// Struct /Engine/Transient.PropertyBag_d506ab25012ad73c
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_d506ab25012ad73c
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_22dae022b6f7a9ed
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_22dae022b6f7a9ed
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_6f6f22aa481c3441
/// Size: 0x001C (0x000000 - 0x00001C)
struct FPropertyBag_6f6f22aa481c3441
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x000C   (0x0004)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LineHeightPercentage;                                       // 0x0014   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0018   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_cb8a0993adb14e1c
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_cb8a0993adb14e1c
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0004   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_6be0b158512782d8
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPropertyBag_6be0b158512782d8
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
	float                                              Font_Size;                                                  // 0x0004   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0008   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_628bee2b2e5ef9c9
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_628bee2b2e5ef9c9
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0004   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_70feafebe0d70ca8
/// Size: 0x0009 (0x000000 - 0x000009)
struct FPropertyBag_70feafebe0d70ca8
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0004   (0x0004)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x0008   (0x0001)  
};

/// Struct /Engine/Transient.PropertyBag_55d4f75a2e4abcf7
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_55d4f75a2e4abcf7
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_2d329f0f1d87fc48
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_2d329f0f1d87fc48
{ 
	float                                              Font_Size;                                                  // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_d30199ed93342094
/// Size: 0x0014 (0x000000 - 0x000014)
struct FPropertyBag_d30199ed93342094
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	float                                              Font_Size;                                                  // 0x000C   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0010   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_bcc79700371574ac
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPropertyBag_bcc79700371574ac
{ 
	FName                                              Font_TypefaceFontName;                                      // 0x0000   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_34a4a38e215c73c6
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_34a4a38e215c73c6
{ 
	class UObject*                                     Font_FontMaterial;                                          // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_a0abadac782ed67d
/// Size: 0x0064 (0x000000 - 0x000064)
struct FPropertyBag_a0abadac782ed67d
{ 
	FSlateColor                                        Color_Idle;                                                 // 0x0000   (0x0014)  
	FSlateColor                                        Color_Hovered;                                              // 0x0014   (0x0014)  
	FSlateColor                                        Color_Focused;                                              // 0x0028   (0x0014)  
	FSlateColor                                        Color_Pressed;                                              // 0x003C   (0x0014)  
	FSlateColor                                        Color_Disabled;                                             // 0x0050   (0x0014)  
};

/// Struct /Engine/Transient.PropertyBag_5a6de1d1ee4e96c9
/// Size: 0x0058 (0x000000 - 0x000058)
struct FPropertyBag_5a6de1d1ee4e96c9
{ 
	FSlateFontInfo                                     Font;                                                       // 0x0000   (0x0058)  
};

/// Struct /Engine/Transient.PropertyBag_1f786dc64334588b
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_1f786dc64334588b
{ 
	class USoundBase*                                  PressedSound;                                               // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_20c4d2eb2c917fe0
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPropertyBag_20c4d2eb2c917fe0
{ 
	class USoundBase*                                  HoveredSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  HoldPressedSound;                                           // 0x0008   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0010   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0018   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0020   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_1a83f30efa536af6
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_1a83f30efa536af6
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Engine/Transient.PropertyBag_45cc8c371db0e839
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyBag_45cc8c371db0e839
{ 
	class USoundBase*                                  HoldPressedSound;                                           // 0x0000   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0008   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0010   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0018   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_220a50ce7a9d729c
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBag_220a50ce7a9d729c
{ 
	class USoundBase*                                  ContextButtonHoverSound;                                    // 0x0000   (0x0008)  
	class USoundBase*                                  ContextButtonClickedSound;                                  // 0x0008   (0x0008)  
	class USoundBase*                                  BlockOutlineHoverSound;                                     // 0x0010   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_d03e10ac31236a71
/// Size: 0x0048 (0x000000 - 0x000048)
struct FPropertyBag_d03e10ac31236a71
{ 
	class USoundBase*                                  PressedSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  HoveredSound;                                               // 0x0008   (0x0008)  
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0010   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0028   (0x0018)  
	class USoundBase*                                  ActivityBrowserTileHoverSound;                              // 0x0040   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_b73a1a0f2dcad9d1
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_b73a1a0f2dcad9d1
{ 
	class USoundBase*                                  PressedSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  HoveredSound;                                               // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_c497730dfb64f80b
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_c497730dfb64f80b
{ 
	class USoundBase*                                  HoveredSound;                                               // 0x0000   (0x0008)  
	class USoundBase*                                  PressedSound;                                               // 0x0008   (0x0008)  
	class USoundBase*                                  HoldPressedSound;                                           // 0x0010   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0018   (0x0008)  
	class USoundBase*                                  HoldReleasedSound;                                          // 0x0020   (0x0008)  
	class USoundBase*                                  HoldCompletedSound;                                         // 0x0028   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_98b9bd7f905d0fff
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_98b9bd7f905d0fff
{ 
	class USoundBase*                                  ListEntryHoveredSound;                                      // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_e51634010aa438b7
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_e51634010aa438b7
{ 
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x0000   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x0018   (0x0018)  
};

/// Struct /Engine/Transient.PropertyBag_1708fa3970bd9e64
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyBag_1708fa3970bd9e64
{ 
	class USoundBase*                                  Press_Sound;                                                // 0x0000   (0x0008)  
	class USoundBase*                                  HoldSound;                                                  // 0x0008   (0x0008)  
	class USoundBase*                                  ReleaseSound;                                               // 0x0010   (0x0008)  
	class USoundBase*                                  CompleteSound;                                              // 0x0018   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_78458b8cd0b08bb1
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_78458b8cd0b08bb1
{ 
	class USoundBase*                                  MatchMakingSucceededSound;                                  // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_dae5475d5412c8b0
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_dae5475d5412c8b0
{ 
	float                                              SecondsPriorToTransSound;                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class USoundBase*                                  TransitionSound;                                            // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_277325d0f6b6f71b
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_277325d0f6b6f71b
{ 
	class USoundBase*                                  MTXOfferTileIntroWhoosh;                                    // 0x0000   (0x0008)  
	class USoundBase*                                  ShopRowWhooshIn;                                            // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_b6174542b5fe0eda
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_b6174542b5fe0eda
{ 
	class USoundBase*                                  ShopRowWhooshIn;                                            // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_db4a2bbd29f43907
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPropertyBag_db4a2bbd29f43907
{ 
	class USoundBase*                                  LockerCategoryWhooshSound;                                  // 0x0000   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_454811af9268b32e
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPropertyBag_454811af9268b32e
{ 
	class USoundBase*                                  BannerAppearSound;                                          // 0x0000   (0x0008)  
	class USoundBase*                                  BannerAwaySound;                                            // 0x0008   (0x0008)  
	class USoundBase*                                  IntroSound;                                                 // 0x0010   (0x0008)  
	class USoundBase*                                  OutroSound;                                                 // 0x0018   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_fce4dcaa5fe68a75
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_fce4dcaa5fe68a75
{ 
	class USoundBase*                                  ShopIntroWhooshSound;                                       // 0x0000   (0x0008)  
	class USoundBase*                                  ContentWhoosh_RetractSound;                                 // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_c625ab53a94ce1ed
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPropertyBag_c625ab53a94ce1ed
{ 
	class USoundBase*                                  ErrorWindowAppearSound;                                     // 0x0000   (0x0008)  
	class USoundBase*                                  ErrorWindowAwaySound;                                       // 0x0008   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_a73aff4f29ea7c3f
/// Size: 0x021C (0x000000 - 0x00021C)
struct FPropertyBag_a73aff4f29ea7c3f
{ 
	FSlateFontInfo                                     LargePrimaryFont;                                           // 0x0000   (0x0058)  
	FSlateFontInfo                                     LargeSecondaryFont;                                         // 0x0058   (0x0058)  
	FSlateFontInfo                                     MediumPrimaryFont;                                          // 0x00B0   (0x0058)  
	FSlateFontInfo                                     MeduimSecondaryFont;                                        // 0x0108   (0x0058)  
	FSlateFontInfo                                     SmallPrimaryFont;                                           // 0x0160   (0x0058)  
	FSlateFontInfo                                     SmallSecondaryFont;                                         // 0x01B8   (0x0058)  
	int32_t                                            LargeHeight;                                                // 0x0210   (0x0004)  
	int32_t                                            MediumHeight;                                               // 0x0214   (0x0004)  
	int32_t                                            SmallHeight;                                                // 0x0218   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_ac947643f42d076a
/// Size: 0x0058 (0x000000 - 0x000058)
struct FPropertyBag_ac947643f42d076a
{ 
	FSlateFontInfo                                     GamepadPromptFont;                                          // 0x0000   (0x0058)  
};

/// Struct /Engine/Transient.PropertyBag_8f8993a80e2e7cbf
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPropertyBag_8f8993a80e2e7cbf
{ 
	class UObject*                                     LargePrimaryFont_FontMaterial;                              // 0x0000   (0x0008)  
	class UObject*                                     LargeSecondaryFont_FontMaterial;                            // 0x0008   (0x0008)  
	class UObject*                                     MediumPrimaryFont_FontMaterial;                             // 0x0010   (0x0008)  
	class UObject*                                     MeduimSecondaryFont_FontMaterial;                           // 0x0018   (0x0008)  
	class UObject*                                     SmallPrimaryFont_FontMaterial;                              // 0x0020   (0x0008)  
	class UObject*                                     SmallSecondaryFont_FontMaterial;                            // 0x0028   (0x0008)  
	class UMaterialInstance*                           BackgroundMaterial;                                         // 0x0030   (0x0008)  
	class UMaterialInstance*                           BorderMaterial;                                             // 0x0038   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_809d1057048d5cbe
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPropertyBag_809d1057048d5cbe
{ 
	class UMaterialInstance*                           RegularFontMaterial;                                        // 0x0000   (0x0008)  
	class UMaterialInstance*                           RegularSecondaryFontMaterial;                               // 0x0008   (0x0008)  
	class UMaterialInstance*                           RegularBackgroundMaterial;                                  // 0x0010   (0x0008)  
	class UMaterialInstance*                           RegularOutlineMaterial;                                     // 0x0018   (0x0008)  
	class UMaterialInstance*                           QuietFontMaterial;                                          // 0x0020   (0x0008)  
	class UMaterialInstance*                           QuietSecondaryFontMaterial;                                 // 0x0028   (0x0008)  
	class UMaterialInstance*                           QuietBackgroundMaterial;                                    // 0x0030   (0x0008)  
	class UMaterialInstance*                           QuietOutlineMaterial;                                       // 0x0038   (0x0008)  
};

/// Struct /Engine/Transient.PropertyBag_6c2e12509819cad5
/// Size: 0x0078 (0x000000 - 0x000078)
struct FPropertyBag_6c2e12509819cad5
{ 
	class UObject*                                     SmallPrimaryFont_FontMaterial;                              // 0x0000   (0x0008)  
	class UObject*                                     SmallSecondaryFont_FontMaterial;                            // 0x0008   (0x0008)  
	class UMaterialInstance*                           BackgroundMaterial;                                         // 0x0010   (0x0008)  
	class UMaterialInstance*                           BorderMaterial;                                             // 0x0018   (0x0008)  
	FSlateFontInfo                                     GamepadPromptFont;                                          // 0x0020   (0x0058)  
};

/// Struct /Engine/Transient.PropertyBag_edd612634593f9cd
/// Size: 0x0090 (0x000000 - 0x000090)
struct FPropertyBag_edd612634593f9cd
{ 
	class UObject*                                     LargePrimaryFont_FontObject;                                // 0x0000   (0x0008)  
	FName                                              LargePrimaryFont_TypefaceFontName;                          // 0x0008   (0x0004)  
	float                                              LargePrimaryFont_Size;                                      // 0x000C   (0x0004)  
	int32_t                                            LargePrimaryFont_LetterSpacing;                             // 0x0010   (0x0004)  
	float                                              LargePrimaryFont_SkewAmount;                                // 0x0014   (0x0004)  
	class UObject*                                     MediumPrimaryFont_FontObject;                               // 0x0018   (0x0008)  
	FName                                              MediumPrimaryFont_TypefaceFontName;                         // 0x0020   (0x0004)  
	float                                              MediumPrimaryFont_Size;                                     // 0x0024   (0x0004)  
	int32_t                                            MediumPrimaryFont_LetterSpacing;                            // 0x0028   (0x0004)  
	float                                              MediumPrimaryFont_SkewAmount;                               // 0x002C   (0x0004)  
	class UObject*                                     SmallPrimaryFont_FontObject;                                // 0x0030   (0x0008)  
	FName                                              SmallPrimaryFont_TypefaceFontName;                          // 0x0038   (0x0004)  
	float                                              SmallPrimaryFont_Size;                                      // 0x003C   (0x0004)  
	int32_t                                            SmallPrimaryFont_LetterSpacing;                             // 0x0040   (0x0004)  
	float                                              SmallPrimaryFont_SkewAmount;                                // 0x0044   (0x0004)  
	class UObject*                                     LargeSecondaryFont_FontObject;                              // 0x0048   (0x0008)  
	FName                                              LargeSecondaryFont_TypefaceFontName;                        // 0x0050   (0x0004)  
	float                                              LargeSecondaryFont_Size;                                    // 0x0054   (0x0004)  
	int32_t                                            LargeSecondaryFont_LetterSpacing;                           // 0x0058   (0x0004)  
	float                                              LargeSecondaryFont_SkewAmount;                              // 0x005C   (0x0004)  
	class UObject*                                     MeduimSecondaryFont_FontObject;                             // 0x0060   (0x0008)  
	FName                                              MeduimSecondaryFont_TypefaceFontName;                       // 0x0068   (0x0004)  
	float                                              MeduimSecondaryFont_Size;                                   // 0x006C   (0x0004)  
	int32_t                                            MeduimSecondaryFont_LetterSpacing;                          // 0x0070   (0x0004)  
	float                                              MeduimSecondaryFont_SkewAmount;                             // 0x0074   (0x0004)  
	class UObject*                                     SmallSecondaryFont_FontObject;                              // 0x0078   (0x0008)  
	FName                                              SmallSecondaryFont_TypefaceFontName;                        // 0x0080   (0x0004)  
	float                                              SmallSecondaryFont_Size;                                    // 0x0084   (0x0004)  
	int32_t                                            SmallSecondaryFont_LetterSpacing;                           // 0x0088   (0x0004)  
	float                                              SmallSecondaryFont_SkewAmount;                              // 0x008C   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_2c3d4f1c2efad9b4
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBag_2c3d4f1c2efad9b4
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	float                                              Font_Size;                                                  // 0x000C   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0010   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0014   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_b679bfb07d6f82c1
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPropertyBag_b679bfb07d6f82c1
{ 
	class UObject*                                     Font_FontObject;                                            // 0x0000   (0x0008)  
	FName                                              Font_TypefaceFontName;                                      // 0x0008   (0x0004)  
	float                                              Font_Size;                                                  // 0x000C   (0x0004)  
	int32_t                                            Font_LetterSpacing;                                         // 0x0010   (0x0004)  
	float                                              Font_SkewAmount;                                            // 0x0014   (0x0004)  
	class UObject*                                     TabFont_FontObject;                                         // 0x0018   (0x0008)  
	FName                                              TabFont_TypefaceFontName;                                   // 0x0020   (0x0004)  
	float                                              TabFont_Size;                                               // 0x0024   (0x0004)  
	int32_t                                            TabFont_LetterSpacing;                                      // 0x0028   (0x0004)  
	float                                              TabFont_SkewAmount;                                         // 0x002C   (0x0004)  
};

/// Struct /Engine/Transient.PropertyBag_5479f08d3e9050db
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPropertyBag_5479f08d3e9050db
{ 
	class UObject*                                     SmallPrimaryFont_FontObject;                                // 0x0000   (0x0008)  
	FName                                              SmallPrimaryFont_TypefaceFontName;                          // 0x0008   (0x0004)  
	float                                              SmallPrimaryFont_Size;                                      // 0x000C   (0x0004)  
	int32_t                                            SmallPrimaryFont_LetterSpacing;                             // 0x0010   (0x0004)  
	float                                              SmallPrimaryFont_SkewAmount;                                // 0x0014   (0x0004)  
};

