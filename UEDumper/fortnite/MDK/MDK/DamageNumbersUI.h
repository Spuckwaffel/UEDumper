
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
/// Size: 0x01B8 (0x0002E8 - 0x0004A0)
class UCommonUserWidget_DamageNumbers : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	SMember(FVector)                                   WorldSpacePos                                               OFFSET(getStruct<T>, {0x2F8, 24, 0, 0})
	SMember(FGameplayTag)                              CheckAnimalTag                                              OFFSET(getStruct<T>, {0x310, 4, 0, 0})
	DMember(float)                                     Damage                                                      OFFSET(get<float>, {0x314, 4, 0, 0})
	DMember(float)                                     AdditionalVerticalScreenOffset                              OFFSET(get<float>, {0x318, 4, 0, 0})
	DMember(double)                                    SpawnTime                                                   OFFSET(get<double>, {0x320, 8, 0, 0})
	SMember(FVector2D)                                 DamageNumberScaleVector                                     OFFSET(getStruct<T>, {0x328, 16, 0, 0})
	SMember(FVector2D)                                 ScreenSpaceOffsetFromHitActor                               OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	SMember(FVector2D)                                 InverseHUDScaleVector                                       OFFSET(getStruct<T>, {0x348, 16, 0, 0})
	CMember(class AActor*)                             HitActor                                                    OFFSET(get<T>, {0x358, 8, 0, 0})
	DMember(bool)                                      bHitAnimal                                                  OFFSET(get<bool>, {0x360, 1, 0, 0})
	DMember(bool)                                      bHitVehicle                                                 OFFSET(get<bool>, {0x361, 1, 0, 0})
	DMember(bool)                                      bIsPlayingCritAnimation                                     OFFSET(get<bool>, {0x362, 1, 0, 0})
	SMember(FLinearColor)                              HitColor                                                    OFFSET(getStruct<T>, {0x364, 16, 0, 0})
	SMember(FLinearColor)                              VehicleColor                                                OFFSET(getStruct<T>, {0x374, 16, 0, 0})
	SMember(FLinearColor)                              CritColor                                                   OFFSET(getStruct<T>, {0x384, 16, 0, 0})
	SMember(FLinearColor)                              HealthColor                                                 OFFSET(getStruct<T>, {0x394, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor                                                 OFFSET(getStruct<T>, {0x3A4, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_Text                                              OFFSET(getStruct<T>, {0x3B4, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_Text                                            OFFSET(getStruct<T>, {0x3C4, 16, 0, 0})
	SMember(FLinearColor)                              HealthColor_InnerStroke                                     OFFSET(getStruct<T>, {0x3D4, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_InnerStroke                                     OFFSET(getStruct<T>, {0x3E4, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_InnerStroke                                       OFFSET(getStruct<T>, {0x3F4, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconVehicleColor                                      OFFSET(getStruct<T>, {0x404, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconShieldColor                                       OFFSET(getStruct<T>, {0x414, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconShieldOutline1Color                               OFFSET(getStruct<T>, {0x424, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconShieldOutline2Color                               OFFSET(getStruct<T>, {0x434, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconVehicleOutline1Color                              OFFSET(getStruct<T>, {0x444, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconVehicleOutline2Color                              OFFSET(getStruct<T>, {0x454, 16, 0, 0})
	CMember(class UWidgetAnimation*)                   OnDamage                                                    OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   OnDamage_Crit                                               OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Number                                                 OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Number_Stroke                                          OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UImage*)                             DamageTypeCrit                                              OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class UImage*)                             DamageTypeIcon                                              OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class UImage*)                             DamageTypeIcon_EMP                                          OFFSET(get<T>, {0x498, 8, 0, 0})


	/// Functions
	// Function /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers.UpdateScreenSpacePosition
	// void UpdateScreenSpacePosition();                                                                                        // [0xa8ee354] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers.Reset
	// void Reset();                                                                                                            // [0xa8ee2f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers.OnShieldBreak
	// void OnShieldBreak(bool bIsOvershield);                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers.OnDamageDealt
	// void OnDamageDealt(double InDamage, class AActor* InActor, bool bInShield, bool bInCrit, FVector InWorldSpacePos, bool bInEMP); // [0xa8edb54] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/DamageNumbersUI.FortUserWidget_DamageNumbers
/// Size: 0x0088 (0x0002D0 - 0x000358)
class UFortUserWidget_DamageNumbers : public UFortUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	DMember(double)                                    VerticalShiftForNewDamage                                   OFFSET(get<double>, {0x2D0, 8, 0, 0})
	DMember(double)                                    AccumulationTime                                            OFFSET(get<double>, {0x2D8, 8, 0, 0})
	DMember(int32_t)                                   MaxNumberCount                                              OFFSET(get<int32_t>, {0x2E0, 4, 0, 0})
	SMember(FVector)                                   OffsetFromPawnLocationDBNO                                  OFFSET(getStruct<T>, {0x2E8, 24, 0, 0})
	SMember(FVector)                                   OffsetFromPawnLocation                                      OFFSET(getStruct<T>, {0x300, 24, 0, 0})
	CMember(class AFortPlayerPawn*)                    BoundPawn                                                   OFFSET(get<T>, {0x318, 8, 0, 0})
	SMember(FGameplayTag)                              HideDamageNumbersTag                                        OFFSET(getStruct<T>, {0x320, 4, 0, 0})
	SMember(FGameplayTag)                              DamageAtLocTag                                              OFFSET(getStruct<T>, {0x324, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TagsToNotDisplayDmgNumbersOnSpecificActors                  OFFSET(getStruct<T>, {0x328, 32, 0, 0})
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_Numbers                                     OFFSET(get<T>, {0x348, 8, 0, 0})
	SMember(FGameplayTag)                              DamageCueEMPTag                                             OFFSET(getStruct<T>, {0x350, 4, 0, 0})
	DMember(bool)                                      bPrecreateDamageNumberEntries                               OFFSET(get<bool>, {0x354, 1, 0, 0})


	/// Functions
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.UpdateBinding
	// void UpdateBinding();                                                                                                    // [0xa8ee340] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.OnShieldBreak
	// void OnShieldBreak(bool bInOverShield);                                                                                  // [0xa8ee270] Final|Native|Protected 
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.OnPawnSet
	// void OnPawnSet();                                                                                                        // [0xa8ee208] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.OnDamageDealt
	// void OnDamageDealt(double InDamage, bool bInCritical, bool bInFatal, bool bInShield, class AActor* HitActor, FVector HitLocation, FGameplayTagContainer Tags); // [0xa8ede7c] Final|Native|Protected|HasDefaults|BlueprintCallable 
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.ClearBinding
	// void ClearBinding();                                                                                                     // [0xa8edb40] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DamageNumbersUI.FortGameSettingRegistryExtension_DamageNumbers
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortGameSettingRegistryExtension_DamageNumbers : public UFortGameSettingRegistryExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

