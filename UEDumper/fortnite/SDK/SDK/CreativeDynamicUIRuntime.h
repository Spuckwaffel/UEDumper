
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Enum /Script/CreativeDynamicUIRuntime.ECreativeDynamicUIAnchor
/// Size: 0x10
enum class ECreativeDynamicUIAnchor : uint8_t
{
	ECreativeDynamicUIAnchor__TopLeft                                                = 0,
	ECreativeDynamicUIAnchor__TopCenter                                              = 1,
	ECreativeDynamicUIAnchor__TopRight                                               = 2,
	ECreativeDynamicUIAnchor__CenterLeft                                             = 3,
	ECreativeDynamicUIAnchor__CenterCenter                                           = 4,
	ECreativeDynamicUIAnchor__CenterRight                                            = 5,
	ECreativeDynamicUIAnchor__BottomLeft                                             = 6,
	ECreativeDynamicUIAnchor__BottomCenter                                           = 7,
	ECreativeDynamicUIAnchor__BottomRight                                            = 8,
	ECreativeDynamicUIAnchor__ECreativeDynamicUIAnchor_MAX                           = 9
};

/// Enum /Script/CreativeDynamicUIRuntime.ECreativeDynamicUIAlignment
/// Size: 0x17
enum class ECreativeDynamicUIAlignment : uint8_t
{
	ECreativeDynamicUIAlignment__TopLeft                                             = 0,
	ECreativeDynamicUIAlignment__TopCenter                                           = 1,
	ECreativeDynamicUIAlignment__TopRight                                            = 2,
	ECreativeDynamicUIAlignment__MiddleLeft                                          = 3,
	ECreativeDynamicUIAlignment__Centered                                            = 4,
	ECreativeDynamicUIAlignment__MiddleRight                                         = 5,
	ECreativeDynamicUIAlignment__BottomLeft                                          = 6,
	ECreativeDynamicUIAlignment__BottomCenter                                        = 7,
	ECreativeDynamicUIAlignment__BottomRight                                         = 8,
	ECreativeDynamicUIAlignment__CenteredFull                                        = 9,
	ECreativeDynamicUIAlignment__LeftTall                                            = 10,
	ECreativeDynamicUIAlignment__CenteredTall                                        = 11,
	ECreativeDynamicUIAlignment__RightTall                                           = 12,
	ECreativeDynamicUIAlignment__TopWide                                             = 13,
	ECreativeDynamicUIAlignment__CenteredWide                                        = 14,
	ECreativeDynamicUIAlignment__BottomWide                                          = 15,
	ECreativeDynamicUIAlignment__ECreativeDynamicUIAlignment_MAX                     = 16
};

/// Enum /Script/CreativeDynamicUIRuntime.ECreativeDynamicUIAspectRatioType
/// Size: 0x08
enum class ECreativeDynamicUIAspectRatioType : uint8_t
{
	ECreativeDynamicUIAspectRatioType__None                                          = 0,
	ECreativeDynamicUIAspectRatioType__AspectRatio_1                                 = 1,
	ECreativeDynamicUIAspectRatioType__AspectRatio_4                                 = 2,
	ECreativeDynamicUIAspectRatioType__AspectRatio_5                                 = 3,
	ECreativeDynamicUIAspectRatioType__AspectRatio_16                                = 4,
	ECreativeDynamicUIAspectRatioType__AspectRatio_166                               = 5,
	ECreativeDynamicUIAspectRatioType__AspectRatio_21                                = 6,
	ECreativeDynamicUIAspectRatioType__ECreativeDynamicUIAspectRatioType_MAX         = 7
};

/// Enum /Script/CreativeDynamicUIRuntime.ECreativeDynamicUILayoutConstraintType
/// Size: 0x03
enum class ECreativeDynamicUILayoutConstraintType : uint8_t
{
	ECreativeDynamicUILayoutConstraintType__None                                     = 0,
	ECreativeDynamicUILayoutConstraintType__Alignment                                = 1,
	ECreativeDynamicUILayoutConstraintType__ECreativeDynamicUILayoutConstraintType_MAX = 2
};

/// Enum /Script/CreativeDynamicUIRuntime.ECreativeDynamicUISizeModifierType
/// Size: 0x04
enum class ECreativeDynamicUISizeModifierType : uint8_t
{
	ECreativeDynamicUISizeModifierType__None                                         = 0,
	ECreativeDynamicUISizeModifierType__Fixed                                        = 1,
	ECreativeDynamicUISizeModifierType__Scale                                        = 2,
	ECreativeDynamicUISizeModifierType__ECreativeDynamicUISizeModifierType_MAX       = 3
};

/// Struct /Script/CreativeDynamicUIRuntime.CreativeDynamicUIAlignmentConstraint
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCreativeDynamicUIAlignmentConstraint
{ 
	ECreativeDynamicUIAlignment                        Alignment;                                                  // 0x0000   (0x0001)  
	ECreativeDynamicUIAnchor                           Anchor;                                                     // 0x0001   (0x0001)  
	ECreativeDynamicUIAspectRatioType                  AspectRatio;                                                // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0003   (0x0005)  MISSED
	FVector2D                                          Offset;                                                     // 0x0008   (0x0010)  
};

/// Struct /Script/CreativeDynamicUIRuntime.CreativeDynamicUIFixedSizeModifier
/// Size: 0x000C (0x000000 - 0x00000C)
struct FCreativeDynamicUIFixedSizeModifier
{ 
	FVector2f                                          Size;                                                       // 0x0000   (0x0008)  
	bool                                               bUseRenderTransform;                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/CreativeDynamicUIRuntime.CreativeDynamicUIScaleSizeModifier
/// Size: 0x000C (0x000000 - 0x00000C)
struct FCreativeDynamicUIScaleSizeModifier
{ 
	FVector2f                                          Scale;                                                      // 0x0000   (0x0008)  
	bool                                               bUseRenderTransform;                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

