
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: GameplayTags

/// Class /Script/DynamicBacchusHUD.DynamicBacchusHUDDirector
/// Size: 0x01D8 (0x0002B0 - 0x000488)
class ADynamicBacchusHUDDirector : public ADynamicUIDirectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	SMember(FDynamicUIWidgetTarget)                    TouchControlRegionWidget                                    OFFSET(getStruct<T>, {0x2B0, 120, 0, 0})
	CMember(class UFortMobileHUDWidgetRegistry*)       BaseHUDWidgetRegistry                                       OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    WatermarkScene                                              OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(TMap<FGameplayTag, UDynamicUIMobileScene*>) ScenesPool                                                 OFFSET(get<T>, {0x338, 80, 0, 0})
	CMember(class UFortMobileHUDWidgetRegistry*)       HUDWidgetRegistry                                           OFFSET(get<T>, {0x388, 8, 0, 0})
	SMember(FGameplayTagContainer)                     CurrentContextTags                                          OFFSET(getStruct<T>, {0x430, 32, 0, 0})
	SMember(FFortMobileHUDLayoutProfile)               LayoutProfile                                               OFFSET(getStruct<T>, {0x450, 56, 0, 0})
};

/// Class /Script/DynamicBacchusHUD.DynamicUIMobileScene
/// Size: 0x00B8 (0x000078 - 0x000130)
class UDynamicUIMobileScene : public UDynamicUIScene
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

