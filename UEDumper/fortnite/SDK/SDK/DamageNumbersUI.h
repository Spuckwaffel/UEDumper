
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x02E8   (0x0010)  MISSED
	FVector                                            WorldSpacePos;                                              // 0x02F8   (0x0018)  
	FGameplayTag                                       CheckAnimalTag;                                             // 0x0310   (0x0004)  
	float                                              Damage;                                                     // 0x0314   (0x0004)  
	float                                              AdditionalVerticalScreenOffset;                             // 0x0318   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x031C   (0x0004)  MISSED
	double                                             SpawnTime;                                                  // 0x0320   (0x0008)  
	FVector2D                                          DamageNumberScaleVector;                                    // 0x0328   (0x0010)  
	FVector2D                                          ScreenSpaceOffsetFromHitActor;                              // 0x0338   (0x0010)  
	FVector2D                                          InverseHUDScaleVector;                                      // 0x0348   (0x0010)  
	class AActor*                                      HitActor;                                                   // 0x0358   (0x0008)  
	bool                                               bHitAnimal;                                                 // 0x0360   (0x0001)  
	bool                                               bHitVehicle;                                                // 0x0361   (0x0001)  
	bool                                               bIsPlayingCritAnimation;                                    // 0x0362   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x0363   (0x0001)  MISSED
	FLinearColor                                       HitColor;                                                   // 0x0364   (0x0010)  
	FLinearColor                                       VehicleColor;                                               // 0x0374   (0x0010)  
	FLinearColor                                       CritColor;                                                  // 0x0384   (0x0010)  
	FLinearColor                                       HealthColor;                                                // 0x0394   (0x0010)  
	FLinearColor                                       ShieldColor;                                                // 0x03A4   (0x0010)  
	FLinearColor                                       CritColor_Text;                                             // 0x03B4   (0x0010)  
	FLinearColor                                       ShieldColor_Text;                                           // 0x03C4   (0x0010)  
	FLinearColor                                       HealthColor_InnerStroke;                                    // 0x03D4   (0x0010)  
	FLinearColor                                       ShieldColor_InnerStroke;                                    // 0x03E4   (0x0010)  
	FLinearColor                                       CritColor_InnerStroke;                                      // 0x03F4   (0x0010)  
	FLinearColor                                       DamageIconVehicleColor;                                     // 0x0404   (0x0010)  
	FLinearColor                                       DamageIconShieldColor;                                      // 0x0414   (0x0010)  
	FLinearColor                                       DamageIconShieldOutline1Color;                              // 0x0424   (0x0010)  
	FLinearColor                                       DamageIconShieldOutline2Color;                              // 0x0434   (0x0010)  
	FLinearColor                                       DamageIconVehicleOutline1Color;                             // 0x0444   (0x0010)  
	FLinearColor                                       DamageIconVehicleOutline2Color;                             // 0x0454   (0x0010)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0464   (0x0004)  MISSED
	class UWidgetAnimation*                            OnDamage;                                                   // 0x0468   (0x0008)  
	class UWidgetAnimation*                            OnDamage_Crit;                                              // 0x0470   (0x0008)  
	class UCommonTextBlock*                            Text_Number;                                                // 0x0478   (0x0008)  
	class UCommonTextBlock*                            Text_Number_Stroke;                                         // 0x0480   (0x0008)  
	class UImage*                                      DamageTypeCrit;                                             // 0x0488   (0x0008)  
	class UImage*                                      DamageTypeIcon;                                             // 0x0490   (0x0008)  
	class UImage*                                      DamageTypeIcon_EMP;                                         // 0x0498   (0x0008)  


	/// Functions
	// Function /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers.UpdateScreenSpacePosition
	// void UpdateScreenSpacePosition();                                                                                     // [0xa8ee354] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers.Reset
	// void Reset();                                                                                                         // [0xa8ee2f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers.OnShieldBreak
	// void OnShieldBreak(bool bIsOvershield);                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers.OnDamageDealt
	// void OnDamageDealt(double InDamage, class AActor* InActor, bool bInShield, bool bInCrit, FVector InWorldSpacePos, bool bInEMP); // [0xa8edb54] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/DamageNumbersUI.FortUserWidget_DamageNumbers
/// Size: 0x0088 (0x0002D0 - 0x000358)
class UFortUserWidget_DamageNumbers : public UFortUserWidget
{ 
public:
	double                                             VerticalShiftForNewDamage;                                  // 0x02D0   (0x0008)  
	double                                             AccumulationTime;                                           // 0x02D8   (0x0008)  
	int32_t                                            MaxNumberCount;                                             // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02E4   (0x0004)  MISSED
	FVector                                            OffsetFromPawnLocationDBNO;                                 // 0x02E8   (0x0018)  
	FVector                                            OffsetFromPawnLocation;                                     // 0x0300   (0x0018)  
	class AFortPlayerPawn*                             BoundPawn;                                                  // 0x0318   (0x0008)  
	FGameplayTag                                       HideDamageNumbersTag;                                       // 0x0320   (0x0004)  
	FGameplayTag                                       DamageAtLocTag;                                             // 0x0324   (0x0004)  
	FGameplayTagContainer                              TagsToNotDisplayDmgNumbersOnSpecificActors;                 // 0x0328   (0x0020)  
	class UDynamicEntryBox*                            DynamicEntryBox_Numbers;                                    // 0x0348   (0x0008)  
	FGameplayTag                                       DamageCueEMPTag;                                            // 0x0350   (0x0004)  
	bool                                               bPrecreateDamageNumberEntries;                              // 0x0354   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0355   (0x0003)  MISSED


	/// Functions
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.UpdateBinding
	// void UpdateBinding();                                                                                                 // [0xa8ee340] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.OnShieldBreak
	// void OnShieldBreak(bool bInOverShield);                                                                               // [0xa8ee270] Final|Native|Protected 
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.OnPawnSet
	// void OnPawnSet();                                                                                                     // [0xa8ee208] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.OnDamageDealt
	// void OnDamageDealt(double InDamage, bool bInCritical, bool bInFatal, bool bInShield, class AActor* HitActor, FVector HitLocation, FGameplayTagContainer Tags); // [0xa8ede7c] Final|Native|Protected|HasDefaults|BlueprintCallable 
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.ClearBinding
	// void ClearBinding();                                                                                                  // [0xa8edb40] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DamageNumbersUI.FortGameSettingRegistryExtension_DamageNumbers
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortGameSettingRegistryExtension_DamageNumbers : public UFortGameSettingRegistryExtension
{ 
public:
};

