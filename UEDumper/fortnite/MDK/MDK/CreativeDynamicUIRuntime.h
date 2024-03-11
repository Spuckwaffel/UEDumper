
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Struct /Script/CreativeDynamicUIRuntime.CreativeDynamicUIAlignmentConstraint
/// Size: 0x0018 (0x000000 - 0x000018)
class FCreativeDynamicUIAlignmentConstraint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ECreativeDynamicUIAlignment)               Alignment                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ECreativeDynamicUIAnchor)                  Anchor                                                      OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(ECreativeDynamicUIAspectRatioType)         AspectRatio                                                 OFFSET(get<T>, {0x2, 1, 0, 0})
	SMember(FVector2D)                                 Offset                                                      OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CreativeDynamicUIRuntime.CreativeDynamicUIFixedSizeModifier
/// Size: 0x000C (0x000000 - 0x00000C)
class FCreativeDynamicUIFixedSizeModifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FVector2f)                                 Size                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bUseRenderTransform                                         OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/CreativeDynamicUIRuntime.CreativeDynamicUIScaleSizeModifier
/// Size: 0x000C (0x000000 - 0x00000C)
class FCreativeDynamicUIScaleSizeModifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FVector2f)                                 Scale                                                       OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bUseRenderTransform                                         OFFSET(get<bool>, {0x8, 1, 0, 0})
};

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

