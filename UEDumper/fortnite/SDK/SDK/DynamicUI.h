
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
/// dependency: UMG

/// Enum /Script/DynamicUI.EDynamicUIStrength
/// Size: 0x05
enum class EDynamicUIStrength : uint8_t
{
	EDynamicUIStrength__Weak                                                         = 0,
	EDynamicUIStrength__Medium                                                       = 1,
	EDynamicUIStrength__Strong                                                       = 2,
	EDynamicUIStrength__Required                                                     = 3,
	EDynamicUIStrength__EDynamicUIStrength_MAX                                       = 4
};

/// Enum /Script/DynamicUI.EDynamicUIAnchor
/// Size: 0x10
enum class EDynamicUIAnchor : uint32_t
{
	EDynamicUIAnchor__TopLeft                                                        = 0,
	EDynamicUIAnchor__TopCenter                                                      = 1,
	EDynamicUIAnchor__TopRight                                                       = 2,
	EDynamicUIAnchor__CenterLeft                                                     = 3,
	EDynamicUIAnchor__CenterCenter                                                   = 4,
	EDynamicUIAnchor__CenterRight                                                    = 5,
	EDynamicUIAnchor__BottomLeft                                                     = 6,
	EDynamicUIAnchor__BottomCenter                                                   = 7,
	EDynamicUIAnchor__BottomRight                                                    = 8,
	EDynamicUIAnchor__MAX                                                            = 9
};

/// Enum /Script/DynamicUI.EDynamicUIAspectRatioType
/// Size: 0x08
enum class EDynamicUIAspectRatioType : uint32_t
{
	EDynamicUIAspectRatioType__AspectRatio_1                                         = 0,
	EDynamicUIAspectRatioType__AspectRatio_4                                         = 1,
	EDynamicUIAspectRatioType__AspectRatio_5                                         = 2,
	EDynamicUIAspectRatioType__AspectRatio_16                                        = 3,
	EDynamicUIAspectRatioType__AspectRatio_165                                       = 4,
	EDynamicUIAspectRatioType__AspectRatio_21                                        = 5,
	EDynamicUIAspectRatioType__Custom                                                = 6,
	EDynamicUIAspectRatioType__EDynamicUIAspectRatioType_MAX                         = 7
};

/// Enum /Script/DynamicUI.EDynamicUISizeMatch
/// Size: 0x04
enum class EDynamicUISizeMatch : uint32_t
{
	EDynamicUISizeMatch__Both                                                        = 0,
	EDynamicUISizeMatch__Width                                                       = 1,
	EDynamicUISizeMatch__Height                                                      = 2,
	EDynamicUISizeMatch__EDynamicUISizeMatch_MAX                                     = 3
};

/// Enum /Script/DynamicUI.EDynamicUIZOrder
/// Size: 0x09
enum class EDynamicUIZOrder : uint32_t
{
	EDynamicUIZOrder__Back                                                           = 1000,
	EDynamicUIZOrder__Middle                                                         = 2000,
	EDynamicUIZOrder__Front                                                          = 3000,
	EDynamicUIZOrder__Custom                                                         = 2500,
	EDynamicUIZOrder__CustomMin                                                      = 0,
	EDynamicUIZOrder__CustomMax                                                      = 5000,
	EDynamicUIZOrder__Loading                                                        = 30000,
	EDynamicUIZOrder__Top                                                            = 50000,
	EDynamicUIZOrder__EDynamicUIZOrder_MAX                                           = 50001
};

/// Enum /Script/DynamicUI.EDynamicUIUnallowedBehavior
/// Size: 0x04
enum class EDynamicUIUnallowedBehavior : uint32_t
{
	EDynamicUIUnallowedBehavior__Hide                                                = 0,
	EDynamicUIUnallowedBehavior__Collapse                                            = 1,
	EDynamicUIUnallowedBehavior__Destroy                                             = 2,
	EDynamicUIUnallowedBehavior__EDynamicUIUnallowedBehavior_MAX                     = 3
};

/// Enum /Script/DynamicUI.EDynamicUIDebugDisplayMode
/// Size: 0x04
enum class EDynamicUIDebugDisplayMode : uint8_t
{
	EDynamicUIDebugDisplayMode__Hide                                                 = 0,
	EDynamicUIDebugDisplayMode__ShowSelected                                         = 1,
	EDynamicUIDebugDisplayMode__ShowAll                                              = 2,
	EDynamicUIDebugDisplayMode__EDynamicUIDebugDisplayMode_MAX                       = 3
};

/// Enum /Script/DynamicUI.EDynamicUIUnallowLayerComparison
/// Size: 0x07
enum class EDynamicUIUnallowLayerComparison : uint8_t
{
	EDynamicUIUnallowLayerComparison__Equal                                          = 0,
	EDynamicUIUnallowLayerComparison__NotEqual                                       = 1,
	EDynamicUIUnallowLayerComparison__Less                                           = 2,
	EDynamicUIUnallowLayerComparison__LessOrEqual                                    = 3,
	EDynamicUIUnallowLayerComparison__Greater                                        = 4,
	EDynamicUIUnallowLayerComparison__GreaterOrEqual                                 = 5,
	EDynamicUIUnallowLayerComparison__EDynamicUIUnallowLayerComparison_MAX           = 6
};

/// Class /Script/DynamicUI.DynamicUITransitionableWidgetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UDynamicUITransitionableWidgetInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DynamicUI.DynamicUITransitionableWidgetInterface.BroadcastTransitionCompleted
	// void BroadcastTransitionCompleted();                                                                                  // [0x359e8d4] Native|Protected|BlueprintCallable 
};

/// Class /Script/DynamicUI.DynamicUIDirectorBase
/// Size: 0x0020 (0x000290 - 0x0002B0)
class ADynamicUIDirectorBase : public AActor
{ 
public:
	TArray<class UDynamicUIScene*>                     DefaultScenes;                                              // 0x0290   (0x0010)  
	SDK_UNDEFINED(8,9478) /* TWeakObjectPtr<ULocalPlayer*> */ __um(OwningLocalPlayer);                             // 0x02A0   (0x0008)  
	bool                                               bEnabledDuringReplay;                                       // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02A9   (0x0007)  MISSED


	/// Functions
	// Function /Script/DynamicUI.DynamicUIDirectorBase.RemoveScene
	// void RemoveScene(class UDynamicUIScene* Scene);                                                                       // [0x78b3798] Final|Native|Public|BlueprintCallable 
	// Function /Script/DynamicUI.DynamicUIDirectorBase.GetOwningLocalPlayerController
	// class APlayerController* GetOwningLocalPlayerController();                                                            // [0x3824ebc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicUI.DynamicUIDirectorBase.GetOwningLocalPlayer
	// class ULocalPlayer* GetOwningLocalPlayer();                                                                           // [0x78b3774] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicUI.DynamicUIDirectorBase.AddScene
	// void AddScene(class UDynamicUIScene* Scene);                                                                          // [0x3852a68] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DynamicUI.DynamicUIConstraintBase
/// Size: 0x0048 (0x000028 - 0x000070)
class UDynamicUIConstraintBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x50];                                      // 0x0000   (0x0050)  MISSED
	FVector2D                                          Offset;                                                     // 0x0050   (0x0010)  
	class UDynamicUIConstraintOverrideBase*            ConstraintOverride;                                         // 0x0060   (0x0008)  
	bool                                               bUseOffset : 1;                                             // 0x0068:0 (0x0001)  
	bool                                               bUseOverride : 1;                                           // 0x0068:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/DynamicUI.DynamicUIConstraintPosition
/// Size: 0x0018 (0x000070 - 0x000088)
class UDynamicUIConstraintPosition : public UDynamicUIConstraintBase
{ 
public:
	FVector2D                                          Position;                                                   // 0x0070   (0x0010)  
	EDynamicUIAnchor                                   Anchor;                                                     // 0x0080   (0x0004)  
	bool                                               bUseSafeZone : 1;                                           // 0x0084:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0085   (0x0003)  MISSED
};

/// Struct /Script/DynamicUI.DynamicUIAspectRatio
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDynamicUIAspectRatio
{ 
	EDynamicUIAspectRatioType                          AspectRatio;                                                // 0x0000   (0x0004)  
	float                                              CustomAspectRatio;                                          // 0x0004   (0x0004)  
};

/// Class /Script/DynamicUI.DynamicUIConstraintAlignment
/// Size: 0x0018 (0x000070 - 0x000088)
class UDynamicUIConstraintAlignment : public UDynamicUIConstraintBase
{ 
public:
	SDK_UNDEFINED(1,9479) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0070   (0x0001)  
	SDK_UNDEFINED(1,9480) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0071   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0072   (0x0002)  MISSED
	EDynamicUIAnchor                                   Anchor;                                                     // 0x0074   (0x0004)  
	FDynamicUIAspectRatio                              MaxAspectRatio;                                             // 0x0078   (0x0008)  
	bool                                               bUseSafeZone : 1;                                           // 0x0080:0 (0x0001)  
	bool                                               bUseMaxAspectRatio : 1;                                     // 0x0080:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Struct /Script/DynamicUI.DynamicUIWidgetTarget
/// Size: 0x0060 (0x000000 - 0x000060)
struct FDynamicUIWidgetTarget
{ 
	FName                                              WidgetPath;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,9481) /* TWeakObjectPtr<UClass*> */ __um(WidgetClass);                                        // 0x0008   (0x0020)  
	FName                                              UniqueID;                                                   // 0x0028   (0x0004)  
	bool                                               bUseUniqueID : 1;                                           // 0x002C:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x33];                                      // 0x002D   (0x0033)  MISSED
};

/// Class /Script/DynamicUI.DynamicUIConstraintWidget
/// Size: 0x0088 (0x000070 - 0x0000F8)
class UDynamicUIConstraintWidget : public UDynamicUIConstraintBase
{ 
public:
	EDynamicUIAnchor                                   Anchor;                                                     // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FDynamicUIWidgetTarget                             TargetWidget;                                               // 0x0078   (0x0060)  
	EDynamicUIAnchor                                   TargetAnchor;                                               // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TArray<class UDynamicUIConstraintBase*>            Fallbacks;                                                  // 0x00E0   (0x0010)  
	bool                                               bConstrainToUnallowedWidgets : 1;                           // 0x00F0:0 (0x0001)  
	bool                                               bUseFallbacks : 1;                                          // 0x00F0:1 (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00F1   (0x0007)  MISSED
};

/// Class /Script/DynamicUI.DynamicUIConstraintContainer
/// Size: 0x0028 (0x000070 - 0x000098)
class UDynamicUIConstraintContainer : public UDynamicUIConstraintBase
{ 
public:
	TArray<FDynamicUIWidgetTarget>                     WidgetsToContain;                                           // 0x0070   (0x0010)  
	FMargin                                            Padding;                                                    // 0x0080   (0x0010)  
	bool                                               bMustMatchAllWidgets : 1;                                   // 0x0090:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Class /Script/DynamicUI.DynamicUIConstraintReplace
/// Size: 0x0078 (0x000070 - 0x0000E8)
class UDynamicUIConstraintReplace : public UDynamicUIConstraintBase
{ 
public:
	FDynamicUIWidgetTarget                             TargetWidget;                                               // 0x0070   (0x0060)  
	TArray<class UDynamicUIConstraintBase*>            Fallbacks;                                                  // 0x00D0   (0x0010)  
	bool                                               bUseFallbacks : 1;                                          // 0x00E0:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E1   (0x0007)  MISSED
};

/// Class /Script/DynamicUI.DynamicUIConstraintOverrideBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UDynamicUIConstraintOverrideBase : public UObject
{ 
public:
};

/// Class /Script/DynamicUI.DynamicUIConstraintPlatformOverride
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UDynamicUIConstraintPlatformOverride : public UDynamicUIConstraintOverrideBase
{ 
public:
	SDK_UNDEFINED(80,9482) /* TMap<FName, UDynamicUIConstraintBase*> */ __um(PlatformVisibilityControls);          // 0x0028   (0x0050)  
	SDK_UNDEFINED(80,9483) /* TMap<ECommonInputType, UDynamicUIConstraintBase*> */ __um(InputTypeVisibilityControls); // 0x0078   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/DynamicUI.DynamicUIManager
/// Size: 0x0068 (0x000030 - 0x000098)
class UDynamicUIManager : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0030   (0x0018)  MISSED
	SDK_UNDEFINED(80,9484) /* TMap<TWeakObjectPtr<ULocalPlayer*>, FDynamicUIPlayerData> */ __um(PlayerDataMap);    // 0x0048   (0x0050)  


	/// Functions
	// Function /Script/DynamicUI.DynamicUIManager.RemoveScenes
	// void RemoveScenes(TArray<UDynamicUIScene*> Scenes, class APlayerController*& Player);                                 // [0x78b3b5c] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DynamicUI.DynamicUIManager.RemoveSceneFromFirstLocalPlayer
	// void RemoveSceneFromFirstLocalPlayer(class UDynamicUIScene* Scene);                                                   // [0x78b39dc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DynamicUI.DynamicUIManager.RemoveScene
	// void RemoveScene(class UDynamicUIScene* Scene, class APlayerController*& Player);                                     // [0x78b3818] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DynamicUI.DynamicUIManager.AddSceneToFirstLocalPlayer
	// void AddSceneToFirstLocalPlayer(class UDynamicUIScene* Scene);                                                        // [0x78b3204] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DynamicUI.DynamicUIManager.AddScenes
	// void AddScenes(TArray<UDynamicUIScene*> Scenes, class APlayerController*& Player);                                    // [0x78b364c] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DynamicUI.DynamicUIManager.AddScene
	// void AddScene(class UDynamicUIScene* Scene, class APlayerController*& Player);                                        // [0x78b2d80] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Struct /Script/DynamicUI.DynamicUIAllowed
/// Size: 0x0068 (0x000000 - 0x000068)
struct FDynamicUIAllowed
{ 
	SDK_UNDEFINED(32,9485) /* TWeakObjectPtr<UClass*> */ __um(Widget);                                             // 0x0000   (0x0020)  
	EDynamicUIZOrder                                   ZOrder;                                                     // 0x0020   (0x0004)  
	int32_t                                            CustomZOrder;                                               // 0x0024   (0x0004)  
	FName                                              UniqueID;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(32,9486) /* TWeakObjectPtr<UCommonInputActionDomain*> */ __um(ActionDomain);                     // 0x0030   (0x0020)  
	class UDynamicUIConstraintBase*                    LayoutConstraint;                                           // 0x0050   (0x0008)  
	class UDynamicUISizeBase*                          SizeModifier;                                               // 0x0058   (0x0008)  
	char                                               LayerIDOverride;                                            // 0x0060   (0x0001)  
	bool                                               bIsUnique : 1;                                              // 0x0061:0 (0x0001)  
	bool                                               bUseActionDomain : 1;                                       // 0x0061:1 (0x0001)  
	bool                                               bUseLayerOverride : 1;                                      // 0x0061:2 (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0062   (0x0006)  MISSED
};

/// Struct /Script/DynamicUI.DynamicUIAdjust
/// Size: 0x0070 (0x000000 - 0x000070)
struct FDynamicUIAdjust
{ 
	FDynamicUIWidgetTarget                             TargetWidget;                                               // 0x0000   (0x0060)  
	class UDynamicUIConstraintBase*                    LayoutConstraint;                                           // 0x0060   (0x0008)  
	class UDynamicUISizeBase*                          SizeModifier;                                               // 0x0068   (0x0008)  
};

/// Struct /Script/DynamicUI.DynamicUIPreload
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDynamicUIPreload
{ 
	SDK_UNDEFINED(32,9487) /* TWeakObjectPtr<UClass*> */ __um(Widget);                                             // 0x0000   (0x0020)  
};

/// Class /Script/DynamicUI.DynamicUIScene
/// Size: 0x0048 (0x000030 - 0x000078)
class UDynamicUIScene : public UDataAsset
{ 
public:
	char                                               LayerId;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<FDynamicUIAllowed>                          Allowed;                                                    // 0x0038   (0x0010)  
	TArray<class UDynamicUIUnallowBase*>               Unallow;                                                    // 0x0048   (0x0010)  
	TArray<FDynamicUIAdjust>                           Adjust;                                                     // 0x0058   (0x0010)  
	TArray<FDynamicUIPreload>                          Preload;                                                    // 0x0068   (0x0010)  
};

/// Class /Script/DynamicUI.DynamicUISizeBase
/// Size: 0x0038 (0x000028 - 0x000060)
class UDynamicUISizeBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x50];                                      // 0x0000   (0x0050)  MISSED
	class UDynamicUISizeOverrideBase*                  SizeOverride;                                               // 0x0050   (0x0008)  
	bool                                               bUseOverride : 1;                                           // 0x0058:0 (0x0001)  
	bool                                               bUseRenderTransform : 1;                                    // 0x0058:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Class /Script/DynamicUI.DynamicUISizeFixed
/// Size: 0x0008 (0x000060 - 0x000068)
class UDynamicUISizeFixed : public UDynamicUISizeBase
{ 
public:
	FVector2f                                          Size;                                                       // 0x0060   (0x0008)  
};

/// Class /Script/DynamicUI.DynamicUISizeScale
/// Size: 0x0008 (0x000060 - 0x000068)
class UDynamicUISizeScale : public UDynamicUISizeBase
{ 
public:
	FVector2f                                          Scale;                                                      // 0x0060   (0x0008)  
};

/// Class /Script/DynamicUI.DynamicUISizeMatchWidget
/// Size: 0x0080 (0x000060 - 0x0000E0)
class UDynamicUISizeMatchWidget : public UDynamicUISizeBase
{ 
public:
	FDynamicUIWidgetTarget                             TargetWidget;                                               // 0x0060   (0x0060)  
	EDynamicUISizeMatch                                MatchType;                                                  // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	TArray<class UDynamicUISizeBase*>                  Fallbacks;                                                  // 0x00C8   (0x0010)  
	bool                                               bUseFallbacks : 1;                                          // 0x00D8:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Class /Script/DynamicUI.DynamicUISizeOverrideBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UDynamicUISizeOverrideBase : public UObject
{ 
public:
};

/// Class /Script/DynamicUI.DynamicUISizeOverridePlatform
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UDynamicUISizeOverridePlatform : public UDynamicUISizeOverrideBase
{ 
public:
	SDK_UNDEFINED(80,9488) /* TMap<FName, UDynamicUISizeBase*> */ __um(PlatformOverrides);                         // 0x0028   (0x0050)  
	SDK_UNDEFINED(80,9489) /* TMap<ECommonInputType, UDynamicUISizeBase*> */ __um(InputTypeOverrides);             // 0x0078   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/DynamicUI.DynamicUIUnallowBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UDynamicUIUnallowBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	EDynamicUIUnallowedBehavior                        Behavior;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/DynamicUI.DynamicUIUnallowWidget
/// Size: 0x0068 (0x000030 - 0x000098)
class UDynamicUIUnallowWidget : public UDynamicUIUnallowBase
{ 
public:
	FDynamicUIWidgetTarget                             Widget;                                                     // 0x0030   (0x0060)  
	bool                                               bTargetAll : 1;                                             // 0x0090:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Class /Script/DynamicUI.DynamicUIUnallowLayer
/// Size: 0x0008 (0x000030 - 0x000038)
class UDynamicUIUnallowLayer : public UDynamicUIUnallowBase
{ 
public:
	char                                               LayerId;                                                    // 0x0030   (0x0001)  
	EDynamicUIUnallowLayerComparison                   Comparison;                                                 // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0032   (0x0006)  MISSED
};

/// Class /Script/DynamicUI.DynamicUIVisualizerWidget
/// Size: 0x0028 (0x0002C0 - 0x0002E8)
class UDynamicUIVisualizerWidget : public UUserWidget
{ 
public:
	TArray<class UDynamicUIScene*>                     Scenes;                                                     // 0x02C0   (0x0010)  
	bool                                               bRefresh;                                                   // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x02D1   (0x0017)  MISSED
};

/// Struct /Script/DynamicUI.DynamicUIUnallowed
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDynamicUIUnallowed
{ 
	SDK_UNDEFINED(32,9490) /* TWeakObjectPtr<UClass*> */ __um(Widget);                                             // 0x0000   (0x0020)  
	FName                                              UniqueID;                                                   // 0x0020   (0x0004)  
	EDynamicUIUnallowedBehavior                        Behavior;                                                   // 0x0024   (0x0004)  
	bool                                               bTargetAll : 1;                                             // 0x0028:0 (0x0001)  
	bool                                               bUseUniqueID : 1;                                           // 0x0028:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/DynamicUI.DynamicUIManagerDebug
/// Size: 0x0001 (0x000000 - 0x000001)
struct FDynamicUIManagerDebug
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/DynamicUI.DynamicUIPanelDebug
/// Size: 0x0001 (0x000000 - 0x000001)
struct FDynamicUIPanelDebug
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/DynamicUI.DynamicUISceneData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FDynamicUISceneData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/DynamicUI.DynamicUIDirectorData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDynamicUIDirectorData
{ 
	SDK_UNDEFINED(32,9491) /* TWeakObjectPtr<UClass*> */ __um(DirectorClass);                                      // 0x0000   (0x0020)  
	SDK_UNDEFINED(8,9492) /* TWeakObjectPtr<AActor*> */ __um(Instance);                                            // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/DynamicUI.DynamicUIPlayerData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FDynamicUIPlayerData
{ 
	SDK_UNDEFINED(80,9493) /* TMap<FString, FDynamicUIDirectorData> */ __um(ActiveDirectors);                      // 0x0040   (0x0050)  
};

