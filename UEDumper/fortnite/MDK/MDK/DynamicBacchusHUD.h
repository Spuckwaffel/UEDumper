
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
/// Size: 0x01C8 (0x0002B0 - 0x000478)
class ADynamicBacchusHUDDirector : public ADynamicUIDirectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	SMember(FDynamicUIWidgetTarget)                    TouchControlRegionWidget                                    OFFSET(getStruct<T>, {0x2B0, 96, 0, 0})
	CMember(class UFortMobileHUDWidgetRegistry*)       BaseHUDWidgetRegistry                                       OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    WatermarkScene                                              OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(TMap<FGameplayTag, UDynamicUIMobileScene*>) ScenesPool                                                 OFFSET(get<T>, {0x320, 80, 0, 0})
	CMember(class UFortMobileHUDWidgetRegistry*)       HUDWidgetRegistry                                           OFFSET(get<T>, {0x370, 8, 0, 0})
	SMember(FGameplayTagContainer)                     CurrentContextTags                                          OFFSET(getStruct<T>, {0x418, 32, 0, 0})
	SMember(FFortMobileHUDLayoutProfile)               LayoutProfile                                               OFFSET(getStruct<T>, {0x438, 64, 0, 0})
};

/// Class /Script/DynamicBacchusHUD.DynamicUIMobileScene
/// Size: 0x00C0 (0x000078 - 0x000138)
class UDynamicUIMobileScene : public UDynamicUIScene
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

