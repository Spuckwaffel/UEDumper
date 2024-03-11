
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: SlateCore

/// Struct /Script/WidgetCarousel.WidgetCarouselNavigationButtonStyle
/// Size: 0x0538 (0x000008 - 0x000540)
struct FWidgetCarouselNavigationButtonStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FButtonStyle                                       InnerButtonStyle;                                           // 0x0010   (0x03B0)  
	FSlateBrush                                        NavigationButtonLeftImage;                                  // 0x03C0   (0x00C0)  
	FSlateBrush                                        NavigationButtonRightImage;                                 // 0x0480   (0x00C0)  
};

/// Struct /Script/WidgetCarousel.WidgetCarouselNavigationBarStyle
/// Size: 0x0BD8 (0x000008 - 0x000BE0)
struct FWidgetCarouselNavigationBarStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        HighlightBrush;                                             // 0x0010   (0x00C0)  
	FButtonStyle                                       LeftButtonStyle;                                            // 0x00D0   (0x03B0)  
	FButtonStyle                                       CenterButtonStyle;                                          // 0x0480   (0x03B0)  
	FButtonStyle                                       RightButtonStyle;                                           // 0x0830   (0x03B0)  
};

