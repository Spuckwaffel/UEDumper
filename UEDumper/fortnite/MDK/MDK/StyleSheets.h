
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameFeatures
/// dependency: GameplayTags
/// dependency: StructUtils
/// dependency: Tweening
/// dependency: UMG

/// Class /Script/StyleSheets.GameFeatureAction_ActivateStyleTheme
/// Size: 0x0008 (0x000028 - 0x000030)
class UGameFeatureAction_ActivateStyleTheme : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     ThemeName                                                   OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Class /Script/StyleSheets.GameFeatureAction_RegisterStyleThemes
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameFeatureAction_RegisterStyleThemes : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UStyleThemeConfig*>)        StyleThemeConfig                                            OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Class /Script/StyleSheets.PropertyTweenContext
/// Size: 0x0008 (0x000028 - 0x000030)
class UPropertyTweenContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     PropertyPath                                                OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Class /Script/StyleSheets.StyleAnimationProvider
/// Size: 0x0050 (0x000028 - 0x000078)
class UStyleAnimationProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FWidgetProperty, int32_t>)            WidgetPropertyTweens                                        OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/StyleSheets.StyleProvider
/// Size: 0x00E8 (0x000028 - 0x000110)
class UStyleProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TWeakObjectPtr<UStyleRuleTree*>)           StyleRuleTree                                               OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TWeakObjectPtr<UStyleAnimationProvider*>)  StyleAnimationProvider                                      OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/StyleSheets.StyleRule
/// Size: 0x0138 (0x000028 - 0x000160)
class UStyleRule : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(TArray<class UStyleRule*>)                 Children                                                    OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FStyleSelectorItem)                        StyleSelectorItem                                           OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TWeakObjectPtr<UStyleRule*>)               Parent                                                      OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FStyleClass)                               style                                                       OFFSET(getStruct<T>, {0x50, 264, 0, 0})
};

/// Class /Script/StyleSheets.StyleRuleTree
/// Size: 0x0040 (0x000028 - 0x000068)
class UStyleRuleTree : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<class UStyleSheetCollection*>)      StyleSheetCollections                                       OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FStyleRuleEntry>)                   StyleRuleEntries                                            OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/StyleSheets.StyleSheet
/// Size: 0x0030 (0x000028 - 0x000058)
class UStyleSheet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<class UStyleRule*>)                 StyleRules                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FStyleSheetSettings)                       Settings                                                    OFFSET(getStruct<T>, {0x38, 32, 0, 0})
};

/// Class /Script/StyleSheets.StyleSheetCollection
/// Size: 0x0010 (0x000030 - 0x000040)
class UStyleSheetCollection : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<class UStyleSheet*>)                StyleSheets                                                 OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/StyleSheets.StyleTagFinder
/// Size: 0x0000 (0x000028 - 0x000028)
class UStyleTagFinder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/StyleSheets.StyleThemeConfig
/// Size: 0x0010 (0x000030 - 0x000040)
class UStyleThemeConfig : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FStyleThemeConfigEntry>)            Entries                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/StyleSheets.StyleThemeProvider
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UStyleThemeProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TWeakObjectPtr<UStyleRuleTree*>)           StyleRuleTree                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TMap<FStyleThemeConfigKey, UStyleThemeConfig*>) ThemeConfigSourceMap                                   OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TSet<FName>)                               ActiveThemeNames                                            OFFSET(get<T>, {0x80, 80, 0, 0})
};

/// Class /Script/StyleSheets.WidgetBlueprintGeneratedClassExtension_StyleClass
/// Size: 0x0050 (0x000028 - 0x000078)
class UWidgetBlueprintGeneratedClassExtension_StyleClass : public UWidgetBlueprintGeneratedClassExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FName, FStyleTag>)                    WidgetStyleTagMap                                           OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/StyleSheets.StylableWidget
/// Size: 0x0000 (0x000028 - 0x000028)
class UStylableWidget : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/StyleSheets.StylableWidget.BP_OnWidgetStyled
	// void BP_OnWidgetStyled();                                                                                                // [0x18a39e4] RequiredAPI|Event|Protected|BlueprintEvent 
};

/// Class /Script/StyleSheets.StyleSheetsSettings
/// Size: 0x0038 (0x000028 - 0x000060)
class UStyleSheetsSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FWidgetTypeEntry>)                  WidgetTypes                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TWeakObjectPtr<UStyleThemeConfig*>)        StyleThemeConfig                                            OFFSET(get<T>, {0x38, 32, 0, 0})
	DMember(bool)                                      bAllowAssigningStyleTagsToWidgets                           OFFSET(get<bool>, {0x58, 1, 0, 0})
};

/// Class /Script/StyleSheets.StyleSheetsSubsystem
/// Size: 0x0030 (0x000030 - 0x000060)
class UStyleSheetsSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UStyleTagFinder*)                    EditorStyleTagFinder                                        OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UStyleRuleTree*)                     StyleRuleTree                                               OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UStyleAnimationProvider*)            StyleAnimationProvider                                      OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UStyleProvider*)                     StyleProvider                                               OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UStyleThemeProvider*)                StyleThemeProvider                                          OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UStyleTagFinder*)                    StyleTagFinder                                              OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Struct /Script/StyleSheets.WidgetProperty
/// Size: 0x000C (0x000000 - 0x00000C)
class FWidgetProperty : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<UWidget*>)                  Widget                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     PropertyPath                                                OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/StyleSheets.StyleAnimationData
/// Size: 0x000C (0x000000 - 0x00000C)
class FStyleAnimationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Delay                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(ETweenBuiltInEasing)                       Easing                                                      OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/StyleSheets.StyleClass
/// Size: 0x0108 (0x000000 - 0x000108)
class FStyleClass : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FInstancedPropertyBag)                     StylePropertyBag                                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TMap<FName, FStyleAnimationData>)          PropertyAnimations                                          OFFSET(get<T>, {0x10, 80, 0, 0})
	CMember(TMap<FName, FInstancedPropertyBag>)        MaterialParameters                                          OFFSET(get<T>, {0x60, 80, 0, 0})
};

/// Struct /Script/StyleSheets.StylePropertyStore
/// Size: 0x0050 (0x000000 - 0x000050)
class FStylePropertyStore : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<UWidget*, FInstancedPropertyBag>)     WidgetToPropertyBagMap                                      OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/StyleSheets.StyleRulePreviewInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FStyleRulePreviewInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UClass*)                             PreviewWidgetClass                                          OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FInstancedPropertyBag)                     PreviewPropertyBag                                          OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/StyleSheets.StyleRuleEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FStyleRuleEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FStyleSelectorItem>)                SelectorItems                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(class UStyleRule*)                         StyleRule                                                   OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/StyleSheets.StyleSelectorItem
/// Size: 0x0010 (0x000000 - 0x000010)
class FStyleSelectorItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FGameplayTag>)                      Targets                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/StyleSheets.StyleSheetSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FStyleSheetSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Description                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<class UClass*>)                     StylableWidgetClasses                                       OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/StyleSheets.StyleTag
/// Size: 0x0000 (0x000010 - 0x000010)
class FStyleTag : public FStyleSelectorItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/StyleSheets.StyleThemeConfigEntry
/// Size: 0x0030 (0x000000 - 0x000030)
class FStyleThemeConfigEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     ThemeName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UStyleSheetCollection*>)    Theme                                                       OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(class UStyleSheetCollection*)              ThemeInstance                                               OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/StyleSheets.StyleThemeConfigKey
/// Size: 0x0008 (0x000000 - 0x000008)
class FStyleThemeConfigKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/StyleSheets.WidgetTypeEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FWidgetTypeEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              WidgetType                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<class UClass*>)                     WidgetClasses                                               OFFSET(get<T>, {0x8, 16, 0, 0})
};

