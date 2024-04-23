
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: UMG

/// Class /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers
/// Size: 0x01B8 (0x0002F0 - 0x0004A8)
class UCommonUserWidget_DamageNumbers : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1192;

public:
	SMember(FVector)                                   WorldSpacePos                                               OFFSET(getStruct<T>, {0x300, 24, 0, 0})
	SMember(FGameplayTag)                              CheckAnimalTag                                              OFFSET(getStruct<T>, {0x318, 4, 0, 0})
	DMember(float)                                     Damage                                                      OFFSET(get<float>, {0x31C, 4, 0, 0})
	DMember(float)                                     AdditionalVerticalScreenOffset                              OFFSET(get<float>, {0x320, 4, 0, 0})
	DMember(double)                                    SpawnTime                                                   OFFSET(get<double>, {0x328, 8, 0, 0})
	SMember(FVector2D)                                 DamageNumberScaleVector                                     OFFSET(getStruct<T>, {0x330, 16, 0, 0})
	SMember(FVector2D)                                 ScreenSpaceOffsetFromHitActor                               OFFSET(getStruct<T>, {0x340, 16, 0, 0})
	SMember(FVector2D)                                 InverseHUDScaleVector                                       OFFSET(getStruct<T>, {0x350, 16, 0, 0})
	CMember(class AActor*)                             HitActor                                                    OFFSET(get<T>, {0x360, 8, 0, 0})
	DMember(bool)                                      bHitAnimal                                                  OFFSET(get<bool>, {0x368, 1, 0, 0})
	DMember(bool)                                      bHitVehicle                                                 OFFSET(get<bool>, {0x369, 1, 0, 0})
	DMember(bool)                                      bIsPlayingCritAnimation                                     OFFSET(get<bool>, {0x36A, 1, 0, 0})
	SMember(FLinearColor)                              HitColor                                                    OFFSET(getStruct<T>, {0x36C, 16, 0, 0})
	SMember(FLinearColor)                              VehicleColor                                                OFFSET(getStruct<T>, {0x37C, 16, 0, 0})
	SMember(FLinearColor)                              CritColor                                                   OFFSET(getStruct<T>, {0x38C, 16, 0, 0})
	SMember(FLinearColor)                              HealthColor                                                 OFFSET(getStruct<T>, {0x39C, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor                                                 OFFSET(getStruct<T>, {0x3AC, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_Text                                              OFFSET(getStruct<T>, {0x3BC, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_Text                                            OFFSET(getStruct<T>, {0x3CC, 16, 0, 0})
	SMember(FLinearColor)                              HealthColor_InnerStroke                                     OFFSET(getStruct<T>, {0x3DC, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_InnerStroke                                     OFFSET(getStruct<T>, {0x3EC, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_InnerStroke                                       OFFSET(getStruct<T>, {0x3FC, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconVehicleColor                                      OFFSET(getStruct<T>, {0x40C, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconShieldColor                                       OFFSET(getStruct<T>, {0x41C, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconShieldOutline1Color                               OFFSET(getStruct<T>, {0x42C, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconShieldOutline2Color                               OFFSET(getStruct<T>, {0x43C, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconVehicleOutline1Color                              OFFSET(getStruct<T>, {0x44C, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconVehicleOutline2Color                              OFFSET(getStruct<T>, {0x45C, 16, 0, 0})
	CMember(class UWidgetAnimation*)                   OnDamage                                                    OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   OnDamage_Crit                                               OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Number                                                 OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Number_Stroke                                          OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class UImage*)                             DamageTypeCrit                                              OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class UImage*)                             DamageTypeIcon                                              OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(class UImage*)                             DamageTypeIcon_EMP                                          OFFSET(get<T>, {0x4A0, 8, 0, 0})


	/// Functions
	// Function /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers.UpdateScreenSpacePosition
	// void UpdateScreenSpacePosition();                                                                                        // [0xbc551d0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers.Reset
	// void Reset();                                                                                                            // [0xbc5516c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers.OnShieldBreak
	// void OnShieldBreak(bool bIsOvershield);                                                                                  // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers.OnDamageDealt
	// void OnDamageDealt(double InDamage, class AActor* InActor, bool bInShield, bool bInCrit, FVector InWorldSpacePos, bool bInEMP); // [0xbc54c0c] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/DamageNumbersUI.FortUserWidget_DamageNumbers
/// Size: 0x0088 (0x0002D8 - 0x000360)
class UFortUserWidget_DamageNumbers : public UFortUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	DMember(double)                                    VerticalShiftForNewDamage                                   OFFSET(get<double>, {0x2D8, 8, 0, 0})
	DMember(double)                                    AccumulationTime                                            OFFSET(get<double>, {0x2E0, 8, 0, 0})
	DMember(int32_t)                                   MaxNumberCount                                              OFFSET(get<int32_t>, {0x2E8, 4, 0, 0})
	SMember(FVector)                                   OffsetFromPawnLocationDBNO                                  OFFSET(getStruct<T>, {0x2F0, 24, 0, 0})
	SMember(FVector)                                   OffsetFromPawnLocation                                      OFFSET(getStruct<T>, {0x308, 24, 0, 0})
	CMember(class AFortPlayerPawn*)                    BoundPawn                                                   OFFSET(get<T>, {0x320, 8, 0, 0})
	SMember(FGameplayTag)                              HideDamageNumbersTag                                        OFFSET(getStruct<T>, {0x328, 4, 0, 0})
	SMember(FGameplayTag)                              DamageAtLocTag                                              OFFSET(getStruct<T>, {0x32C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TagsToNotDisplayDmgNumbersOnSpecificActors                  OFFSET(getStruct<T>, {0x330, 32, 0, 0})
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_Numbers                                     OFFSET(get<T>, {0x350, 8, 0, 0})
	SMember(FGameplayTag)                              DamageCueEMPTag                                             OFFSET(getStruct<T>, {0x358, 4, 0, 0})
	DMember(bool)                                      bPrecreateDamageNumberEntries                               OFFSET(get<bool>, {0x35C, 1, 0, 0})


	/// Functions
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.UpdateBinding
	// void UpdateBinding();                                                                                                    // [0xbc551bc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.OnShieldBreak
	// void OnShieldBreak(bool bInOverShield);                                                                                  // [0xbc550ec] Final|Native|Protected 
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.OnPawnSet
	// void OnPawnSet();                                                                                                        // [0xbc55084] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.OnDamageDealt
	// void OnDamageDealt(double InDamage, bool bInCritical, bool bInFatal, bool bInShield, class AActor* HitActor, FVector HitLocation, FGameplayTagContainer Tags); // [0xbc54e00] Final|Native|Protected|HasDefaults|BlueprintCallable 
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.ClearBinding
	// void ClearBinding();                                                                                                     // [0xbc54bf8] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DamageNumbersUI.FortGameSettingRegistryExtension_DamageNumbers
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortGameSettingRegistryExtension_DamageNumbers : public UFortGameSettingRegistryExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

