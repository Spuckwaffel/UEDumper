
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/DynamicUI.DynamicUITransitionableWidgetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UDynamicUITransitionableWidgetInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/DynamicUI.DynamicUITransitionableWidgetInterface.BroadcastTransitionCompleted
	// void BroadcastTransitionCompleted();                                                                                     // [0x3177d60] Native|Protected|BlueprintCallable 
};

/// Class /Script/DynamicUI.DynamicUIDirectorBase
/// Size: 0x0020 (0x000290 - 0x0002B0)
class ADynamicUIDirectorBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(TArray<class UDynamicUIScene*>)            DefaultScenes                                               OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(TWeakObjectPtr<ULocalPlayer*>)             OwningLocalPlayer                                           OFFSET(get<T>, {0x2A0, 8, 0, 0})
	DMember(bool)                                      bEnabledDuringReplay                                        OFFSET(get<bool>, {0x2A8, 1, 0, 0})


	/// Functions
	// Function /Script/DynamicUI.DynamicUIDirectorBase.RemoveScene
	// void RemoveScene(class UDynamicUIScene* Scene);                                                                          // [0x80d76c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DynamicUI.DynamicUIDirectorBase.GetOwningLocalPlayerController
	// class APlayerController* GetOwningLocalPlayerController();                                                               // [0x80d7504] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicUI.DynamicUIDirectorBase.GetOwningLocalPlayer
	// class ULocalPlayer* GetOwningLocalPlayer();                                                                              // [0x80d74e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicUI.DynamicUIDirectorBase.AddScene
	// void AddScene(class UDynamicUIScene* Scene);                                                                             // [0x80d640c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DynamicUI.DynamicUIConstraintBase
/// Size: 0x0048 (0x000028 - 0x000070)
class UDynamicUIConstraintBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector2D)                                 Offset                                                      OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(class UDynamicUIConstraintOverrideBase*)   ConstraintOverride                                          OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      bUseOffset                                                  OFFSET(get<bool>, {0x68, 1, 1, 0})
	DMember(bool)                                      bUseOverride                                                OFFSET(get<bool>, {0x68, 1, 1, 1})
};

/// Class /Script/DynamicUI.DynamicUIConstraintPosition
/// Size: 0x0018 (0x000070 - 0x000088)
class UDynamicUIConstraintPosition : public UDynamicUIConstraintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FVector2D)                                 Position                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	CMember(EDynamicUIAnchor)                          Anchor                                                      OFFSET(get<T>, {0x80, 4, 0, 0})
	DMember(bool)                                      bUseSafeZone                                                OFFSET(get<bool>, {0x84, 1, 1, 0})
};

/// Class /Script/DynamicUI.DynamicUIConstraintAlignment
/// Size: 0x0018 (0x000070 - 0x000088)
class UDynamicUIConstraintAlignment : public UDynamicUIConstraintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x71, 1, 0, 0})
	CMember(EDynamicUIAnchor)                          Anchor                                                      OFFSET(get<T>, {0x74, 4, 0, 0})
	SMember(FDynamicUIAspectRatio)                     MaxAspectRatio                                              OFFSET(getStruct<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      bUseSafeZone                                                OFFSET(get<bool>, {0x80, 1, 1, 0})
	DMember(bool)                                      bUseMaxAspectRatio                                          OFFSET(get<bool>, {0x80, 1, 1, 1})
};

/// Class /Script/DynamicUI.DynamicUIConstraintWidget
/// Size: 0x00A0 (0x000070 - 0x000110)
class UDynamicUIConstraintWidget : public UDynamicUIConstraintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(EDynamicUIAnchor)                          Anchor                                                      OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FDynamicUIWidgetTarget)                    TargetWidget                                                OFFSET(getStruct<T>, {0x78, 120, 0, 0})
	CMember(EDynamicUIAnchor)                          TargetAnchor                                                OFFSET(get<T>, {0xF0, 4, 0, 0})
	CMember(TArray<class UDynamicUIConstraintBase*>)   Fallbacks                                                   OFFSET(get<T>, {0xF8, 16, 0, 0})
	DMember(bool)                                      bConstrainToUnallowedWidgets                                OFFSET(get<bool>, {0x108, 1, 1, 0})
	DMember(bool)                                      bUseFallbacks                                               OFFSET(get<bool>, {0x108, 1, 1, 1})
};

/// Class /Script/DynamicUI.DynamicUIConstraintContainer
/// Size: 0x0028 (0x000070 - 0x000098)
class UDynamicUIConstraintContainer : public UDynamicUIConstraintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<FDynamicUIWidgetTarget>)            WidgetsToContain                                            OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bMustMatchAllWidgets                                        OFFSET(get<bool>, {0x90, 1, 1, 0})
};

/// Class /Script/DynamicUI.DynamicUIConstraintReplace
/// Size: 0x0090 (0x000070 - 0x000100)
class UDynamicUIConstraintReplace : public UDynamicUIConstraintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FDynamicUIWidgetTarget)                    TargetWidget                                                OFFSET(getStruct<T>, {0x70, 120, 0, 0})
	CMember(TArray<class UDynamicUIConstraintBase*>)   Fallbacks                                                   OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(bool)                                      bUseFallbacks                                               OFFSET(get<bool>, {0xF8, 1, 1, 0})
};

/// Class /Script/DynamicUI.DynamicUIConstraintOverrideBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UDynamicUIConstraintOverrideBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DynamicUI.DynamicUIConstraintPlatformOverride
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UDynamicUIConstraintPlatformOverride : public UDynamicUIConstraintOverrideBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TMap<FName, UDynamicUIConstraintBase*>)    PlatformVisibilityControls                                  OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TMap<ECommonInputType, UDynamicUIConstraintBase*>) InputTypeVisibilityControls                         OFFSET(get<T>, {0x78, 80, 0, 0})
};

/// Class /Script/DynamicUI.DynamicUIManager
/// Size: 0x0068 (0x000030 - 0x000098)
class UDynamicUIManager : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TMap<TWeakObjectPtr<ULocalPlayer*>, FDynamicUIPlayerData>) PlayerDataMap                               OFFSET(get<T>, {0x48, 80, 0, 0})


	/// Functions
	// Function /Script/DynamicUI.DynamicUIManager.RemoveScenes
	// void RemoveScenes(TArray<UDynamicUIScene*> Scenes, class APlayerController*& Player);                                    // [0x80d7a84] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DynamicUI.DynamicUIManager.RemoveSceneFromFirstLocalPlayer
	// void RemoveSceneFromFirstLocalPlayer(class UDynamicUIScene* Scene);                                                      // [0x80d7904] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DynamicUI.DynamicUIManager.RemoveScene
	// void RemoveScene(class UDynamicUIScene* Scene, class APlayerController*& Player);                                        // [0x80d7740] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DynamicUI.DynamicUIManager.IsSceneActiveOnFirstLocalPlayer
	// bool IsSceneActiveOnFirstLocalPlayer(class UDynamicUIScene* Scene);                                                      // [0x80d7610] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicUI.DynamicUIManager.IsSceneActive
	// bool IsSceneActive(class UDynamicUIScene* Scene, class APlayerController*& Player);                                      // [0x80d7528] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicUI.DynamicUIManager.AddSceneToFirstLocalPlayer
	// void AddSceneToFirstLocalPlayer(class UDynamicUIScene* Scene);                                                           // [0x80d6928] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DynamicUI.DynamicUIManager.AddScenes
	// void AddScenes(TArray<UDynamicUIScene*> Scenes, class APlayerController*& Player);                                       // [0x80d6d88] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DynamicUI.DynamicUIManager.AddScene
	// void AddScene(class UDynamicUIScene* Scene, class APlayerController*& Player);                                           // [0x80d648c] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/DynamicUI.DynamicUIScene
/// Size: 0x0048 (0x000030 - 0x000078)
class UDynamicUIScene : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(char)                                      LayerId                                                     OFFSET(get<char>, {0x30, 1, 0, 0})
	CMember(TArray<FDynamicUIAllowed>)                 Allowed                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<class UDynamicUIUnallowBase*>)      Unallow                                                     OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FDynamicUIAdjust>)                  Adjust                                                      OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FDynamicUIPreload>)                 Preload                                                     OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/DynamicUI.DynamicUISizeBase
/// Size: 0x0038 (0x000028 - 0x000060)
class UDynamicUISizeBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UDynamicUISizeOverrideBase*)         SizeOverride                                                OFFSET(get<T>, {0x50, 8, 0, 0})
	DMember(bool)                                      bUseOverride                                                OFFSET(get<bool>, {0x58, 1, 1, 0})
	DMember(bool)                                      bUseRenderTransform                                         OFFSET(get<bool>, {0x58, 1, 1, 1})
};

/// Class /Script/DynamicUI.DynamicUISizeFixed
/// Size: 0x0008 (0x000060 - 0x000068)
class UDynamicUISizeFixed : public UDynamicUISizeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVector2f)                                 Size                                                        OFFSET(getStruct<T>, {0x60, 8, 0, 0})
};

/// Class /Script/DynamicUI.DynamicUISizeScale
/// Size: 0x0008 (0x000060 - 0x000068)
class UDynamicUISizeScale : public UDynamicUISizeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVector2f)                                 Scale                                                       OFFSET(getStruct<T>, {0x60, 8, 0, 0})
};

/// Class /Script/DynamicUI.DynamicUISizeMatchWidget
/// Size: 0x0098 (0x000060 - 0x0000F8)
class UDynamicUISizeMatchWidget : public UDynamicUISizeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FDynamicUIWidgetTarget)                    TargetWidget                                                OFFSET(getStruct<T>, {0x60, 120, 0, 0})
	CMember(EDynamicUISizeMatch)                       MatchType                                                   OFFSET(get<T>, {0xD8, 4, 0, 0})
	CMember(TArray<class UDynamicUISizeBase*>)         Fallbacks                                                   OFFSET(get<T>, {0xE0, 16, 0, 0})
	DMember(bool)                                      bUseFallbacks                                               OFFSET(get<bool>, {0xF0, 1, 1, 0})
};

/// Class /Script/DynamicUI.DynamicUISizeOverrideBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UDynamicUISizeOverrideBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DynamicUI.DynamicUISizeOverridePlatform
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UDynamicUISizeOverridePlatform : public UDynamicUISizeOverrideBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TMap<FName, UDynamicUISizeBase*>)          PlatformOverrides                                           OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TMap<ECommonInputType, UDynamicUISizeBase*>) InputTypeOverrides                                        OFFSET(get<T>, {0x78, 80, 0, 0})
};

/// Class /Script/DynamicUI.DynamicUIUnallowBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UDynamicUIUnallowBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EDynamicUIUnallowedBehavior)               Behavior                                                    OFFSET(get<T>, {0x28, 4, 0, 0})
};

/// Class /Script/DynamicUI.DynamicUIUnallowWidget
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UDynamicUIUnallowWidget : public UDynamicUIUnallowBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FDynamicUIWidgetTarget)                    Widget                                                      OFFSET(getStruct<T>, {0x30, 120, 0, 0})
	DMember(bool)                                      bTargetAll                                                  OFFSET(get<bool>, {0xA8, 1, 1, 0})
};

/// Class /Script/DynamicUI.DynamicUIUnallowLayer
/// Size: 0x0008 (0x000030 - 0x000038)
class UDynamicUIUnallowLayer : public UDynamicUIUnallowBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(char)                                      LayerId                                                     OFFSET(get<char>, {0x30, 1, 0, 0})
	CMember(EDynamicUIUnallowLayerComparison)          Comparison                                                  OFFSET(get<T>, {0x31, 1, 0, 0})
};

/// Class /Script/DynamicUI.DynamicUIVisualizerWidget
/// Size: 0x0028 (0x0002C8 - 0x0002F0)
class UDynamicUIVisualizerWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(TArray<class UDynamicUIScene*>)            Scenes                                                      OFFSET(get<T>, {0x2C8, 16, 0, 0})
	DMember(bool)                                      bRefresh                                                    OFFSET(get<bool>, {0x2D8, 1, 0, 0})
};

/// Struct /Script/DynamicUI.DynamicUIUnallowed
/// Size: 0x0030 (0x000000 - 0x000030)
class FDynamicUIUnallowed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UClass*>)                   Widget                                                      OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FName)                                     UniqueID                                                    OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	CMember(EDynamicUIUnallowedBehavior)               Behavior                                                    OFFSET(get<T>, {0x24, 4, 0, 0})
	DMember(bool)                                      bTargetAll                                                  OFFSET(get<bool>, {0x28, 1, 1, 0})
	DMember(bool)                                      bUseUniqueID                                                OFFSET(get<bool>, {0x28, 1, 1, 1})
};

/// Struct /Script/DynamicUI.DynamicUIManagerDebug
/// Size: 0x0001 (0x000000 - 0x000001)
class FDynamicUIManagerDebug : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/DynamicUI.DynamicUIPanelDebug
/// Size: 0x0001 (0x000000 - 0x000001)
class FDynamicUIPanelDebug : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/DynamicUI.DynamicUIAdjust
/// Size: 0x0088 (0x000000 - 0x000088)
class FDynamicUIAdjust : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FDynamicUIWidgetTarget)                    TargetWidget                                                OFFSET(getStruct<T>, {0x0, 120, 0, 0})
	CMember(class UDynamicUIConstraintBase*)           LayoutConstraint                                            OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class UDynamicUISizeBase*)                 SizeModifier                                                OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Struct /Script/DynamicUI.DynamicUIWidgetTarget
/// Size: 0x0078 (0x000000 - 0x000078)
class FDynamicUIWidgetTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     WidgetPath                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FSoftObjectPath)                           WidgetAssetPath                                             OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   WidgetClass                                                 OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FName)                                     UniqueID                                                    OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	DMember(bool)                                      bUseUniqueID                                                OFFSET(get<bool>, {0x44, 1, 1, 0})
};

/// Struct /Script/DynamicUI.DynamicUIAllowed
/// Size: 0x0068 (0x000000 - 0x000068)
class FDynamicUIAllowed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<UClass*>)                   Widget                                                      OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(EDynamicUIZOrder)                          ZOrder                                                      OFFSET(get<T>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   CustomZOrder                                                OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	SMember(FName)                                     UniqueID                                                    OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(TWeakObjectPtr<UCommonInputActionDomain*>) ActionDomain                                                OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(class UDynamicUIConstraintBase*)           LayoutConstraint                                            OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UDynamicUISizeBase*)                 SizeModifier                                                OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(char)                                      LayerIDOverride                                             OFFSET(get<char>, {0x60, 1, 0, 0})
	DMember(bool)                                      bIsUnique                                                   OFFSET(get<bool>, {0x61, 1, 1, 0})
	DMember(bool)                                      bUseActionDomain                                            OFFSET(get<bool>, {0x61, 1, 1, 1})
	DMember(bool)                                      bUseLayerOverride                                           OFFSET(get<bool>, {0x61, 1, 1, 2})
};

/// Struct /Script/DynamicUI.DynamicUIAspectRatio
/// Size: 0x0008 (0x000000 - 0x000008)
class FDynamicUIAspectRatio : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EDynamicUIAspectRatioType)                 AspectRatio                                                 OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     CustomAspectRatio                                           OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DynamicUI.DynamicUIPreload
/// Size: 0x0020 (0x000000 - 0x000020)
class FDynamicUIPreload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TWeakObjectPtr<UClass*>)                   Widget                                                      OFFSET(get<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/DynamicUI.DynamicUISceneData
/// Size: 0x0001 (0x000000 - 0x000001)
class FDynamicUISceneData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/DynamicUI.DynamicUIDirectorData
/// Size: 0x0030 (0x000000 - 0x000030)
class FDynamicUIDirectorData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UClass*>)                   DirectorClass                                               OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   Instance                                                    OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/DynamicUI.DynamicUIPlayerData
/// Size: 0x0090 (0x000000 - 0x000090)
class FDynamicUIPlayerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TMap<FString, FDynamicUIDirectorData>)     ActiveDirectors                                             OFFSET(get<T>, {0x40, 80, 0, 0})
};

/// Enum /Script/DynamicUI.EDynamicUIStrength
/// Size: 0x04
enum class EDynamicUIStrength : uint8_t
{
	EDynamicUIStrength__Weak                                                         = 0,
	EDynamicUIStrength__Medium                                                       = 1,
	EDynamicUIStrength__Strong                                                       = 2,
	EDynamicUIStrength__Required                                                     = 3
};

/// Enum /Script/DynamicUI.EDynamicUIAnchor
/// Size: 0x09
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
	EDynamicUIAnchor__BottomRight                                                    = 8
};

/// Enum /Script/DynamicUI.EDynamicUIAspectRatioType
/// Size: 0x07
enum class EDynamicUIAspectRatioType : uint32_t
{
	EDynamicUIAspectRatioType__AspectRatio_1                                         = 0,
	EDynamicUIAspectRatioType__AspectRatio_4                                         = 1,
	EDynamicUIAspectRatioType__AspectRatio_5                                         = 2,
	EDynamicUIAspectRatioType__AspectRatio_16                                        = 3,
	EDynamicUIAspectRatioType__AspectRatio_165                                       = 4,
	EDynamicUIAspectRatioType__AspectRatio_21                                        = 5,
	EDynamicUIAspectRatioType__Custom                                                = 6
};

/// Enum /Script/DynamicUI.EDynamicUISizeMatch
/// Size: 0x03
enum class EDynamicUISizeMatch : uint32_t
{
	EDynamicUISizeMatch__Both                                                        = 0,
	EDynamicUISizeMatch__Width                                                       = 1,
	EDynamicUISizeMatch__Height                                                      = 2
};

/// Enum /Script/DynamicUI.EDynamicUIZOrder
/// Size: 0x08
enum class EDynamicUIZOrder : uint32_t
{
	EDynamicUIZOrder__Back                                                           = 1000,
	EDynamicUIZOrder__Middle                                                         = 2000,
	EDynamicUIZOrder__Front                                                          = 3000,
	EDynamicUIZOrder__Custom                                                         = 2500,
	EDynamicUIZOrder__CustomMin                                                      = 0,
	EDynamicUIZOrder__CustomMax                                                      = 5000,
	EDynamicUIZOrder__Loading                                                        = 30000,
	EDynamicUIZOrder__Top                                                            = 50000
};

/// Enum /Script/DynamicUI.EDynamicUIUnallowedBehavior
/// Size: 0x03
enum class EDynamicUIUnallowedBehavior : uint32_t
{
	EDynamicUIUnallowedBehavior__Hide                                                = 0,
	EDynamicUIUnallowedBehavior__Collapse                                            = 1,
	EDynamicUIUnallowedBehavior__Destroy                                             = 2
};

/// Enum /Script/DynamicUI.EDynamicUIDebugDisplayMode
/// Size: 0x03
enum class EDynamicUIDebugDisplayMode : uint8_t
{
	EDynamicUIDebugDisplayMode__Hide                                                 = 0,
	EDynamicUIDebugDisplayMode__ShowSelected                                         = 1,
	EDynamicUIDebugDisplayMode__ShowAll                                              = 2
};

/// Enum /Script/DynamicUI.EDynamicUIUnallowLayerComparison
/// Size: 0x06
enum class EDynamicUIUnallowLayerComparison : uint8_t
{
	EDynamicUIUnallowLayerComparison__Equal                                          = 0,
	EDynamicUIUnallowLayerComparison__NotEqual                                       = 1,
	EDynamicUIUnallowLayerComparison__Less                                           = 2,
	EDynamicUIUnallowLayerComparison__LessOrEqual                                    = 3,
	EDynamicUIUnallowLayerComparison__Greater                                        = 4,
	EDynamicUIUnallowLayerComparison__GreaterOrEqual                                 = 5
};

