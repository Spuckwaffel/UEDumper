
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/CosmeticsFrameworkItems.CosmeticDataComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UCosmeticDataComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(80,1275) /* TMap<FGameplayTag, FInstancedStructContainer> */ __um(PropertyContainers);           // 0x00A0   (0x0050)  


	/// Functions
	// Function /Script/CosmeticsFrameworkItems.CosmeticDataComponent.ResetProperties
	// void ResetProperties();                                                                                               // [0x72302e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/CosmeticsFrameworkItems.CosmeticDataComponent.BP_FindProperty
	// bool BP_FindProperty(FGameplayTag SlotTag, FGameplayTag PropertyTag, FCosmeticPropertyBase& OutProperty);             // [0x722ff9c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CosmeticsFrameworkItems.CosmeticDataComponent.BP_AddOrOverrideProperty
	// bool BP_AddOrOverrideProperty(FGameplayTag SlotTag, FCosmeticPropertyBase& Property);                                 // [0x722fd48] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/CosmeticsFrameworkItems.CosmeticPropertyBase
/// Size: 0x0004 (0x000000 - 0x000004)
struct FCosmeticPropertyBase
{ 
	FGameplayTag                                       PropertyTag;                                                // 0x0000   (0x0004)  
};

/// Struct /Script/CosmeticsFrameworkItems.CosmeticProperty_Vector
/// Size: 0x001C (0x000004 - 0x000020)
struct FCosmeticProperty_Vector : FCosmeticPropertyBase
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
};

/// Struct /Script/CosmeticsFrameworkItems.CosmeticProperty_TableRow
/// Size: 0x0014 (0x000004 - 0x000018)
struct FCosmeticProperty_TableRow : FCosmeticPropertyBase
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x0004   (0x0004)  MISSED
	FDataTableRowHandle                                TableRow;                                                   // 0x0008   (0x0010)  
};

