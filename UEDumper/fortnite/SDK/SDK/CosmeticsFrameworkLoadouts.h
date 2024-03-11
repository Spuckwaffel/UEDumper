
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/CosmeticsFrameworkLoadouts.BasicCosmeticLoadoutContext
/// Size: 0x0008 (0x000028 - 0x000030)
class UBasicCosmeticLoadoutContext : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/CosmeticsFrameworkLoadouts.CosmeticCustomizableItemDefinition
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticCustomizableItemDefinition : public UInterface
{ 
public:
};

/// Class /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutContext
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticLoadoutContext : public UInterface
{ 
public:
};

/// Class /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutItemDefinition
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticLoadoutItemDefinition : public UInterface
{ 
public:
};

/// Class /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSchema
/// Size: 0x0010 (0x000030 - 0x000040)
class UCosmeticLoadoutSchema : public UPrimaryDataAsset
{ 
public:
	TArray<class UCosmeticLoadoutSlotTemplate*>        Slots;                                                      // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSchema.GetTemplateId
	// FString GetTemplateId();                                                                                              // [0x7c1a28c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotRequirements
/// Size: 0x0050 (0x000000 - 0x000050)
struct FCosmeticLoadoutSlotRequirements
{ 
	FGameplayTagContainer                              RequiredTags;                                               // 0x0000   (0x0020)  
	FGameplayTagContainer                              DeniedTags;                                                 // 0x0020   (0x0020)  
	TArray<FPrimaryAssetType>                          AllowedItemTypes;                                           // 0x0040   (0x0010)  
};

/// Class /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate
/// Size: 0x0098 (0x000030 - 0x0000C8)
class UCosmeticLoadoutSlotTemplate : public UPrimaryDataAsset
{ 
public:
	FGameplayTag                                       SlotTag;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	FGameplayTagContainer                              MetaTags;                                                   // 0x0038   (0x0020)  
	FCosmeticLoadoutSlotRequirements                   Requirements;                                               // 0x0058   (0x0050)  
	SDK_UNDEFINED(16,1946) /* FString */               __um(ShortName);                                            // 0x00A8   (0x0010)  
	FPrimaryAssetId                                    DefaultCosmeticItemId;                                      // 0x00B8   (0x0008)  
	bool                                               bAlwaysUseDefaultCosmeticItemId;                            // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C1   (0x0007)  MISSED


	/// Functions
	// Function /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetSlotTag
	// FGameplayTag GetSlotTag();                                                                                            // [0x66dfad4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetShortName
	// FString GetShortName();                                                                                               // [0x7c1a270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetRequirements
	// FCosmeticLoadoutSlotRequirements GetRequirements();                                                                   // [0x7c1a254] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetMetaTags
	// FGameplayTagContainer GetMetaTags();                                                                                  // [0x7c1a238] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetDefaultCosmeticItemId
	// FPrimaryAssetId GetDefaultCosmeticItemId();                                                                           // [0x7c1a220] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetAlwaysUseDefaultCosmeticItemId
	// bool GetAlwaysUseDefaultCosmeticItemId();                                                                             // [0x7c1a208] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticCustomizationInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCosmeticCustomizationInfo
{ 
	FGameplayTag                                       ChannelTag;                                                 // 0x0000   (0x0004)  
	FGameplayTag                                       VariantTag;                                                 // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,1947) /* FString */               __um(AdditionalData);                                       // 0x0008   (0x0010)  
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlot
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCosmeticLoadoutSlot
{ 
	class UCosmeticLoadoutSlotTemplate*                SlotTemplate;                                               // 0x0000   (0x0008)  
	class UObject*                                     EquippedItemDefinitionObject;                               // 0x0008   (0x0008)  
	TArray<FCosmeticCustomizationInfo>                 CustomizationInfo;                                          // 0x0010   (0x0010)  
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticLoadout
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCosmeticLoadout
{ 
	TArray<FCosmeticLoadoutSlot>                       Slots;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticBackendLoadoutSlot
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCosmeticBackendLoadoutSlot
{ 
	FPrimaryAssetId                                    SlotTemplate;                                               // 0x0000   (0x0008)  
	FPrimaryAssetId                                    EquippedItem;                                               // 0x0008   (0x0008)  
	TArray<FCosmeticCustomizationInfo>                 CustomizationInfo;                                          // 0x0010   (0x0010)  
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticBackendLoadout
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCosmeticBackendLoadout
{ 
	TArray<FCosmeticBackendLoadoutSlot>                Slots;                                                      // 0x0000   (0x0010)  
	FGameplayTagContainer                              UserTags;                                                   // 0x0010   (0x0020)  
	SDK_UNDEFINED(16,1948) /* FString */               __um(DisplayName);                                          // 0x0030   (0x0010)  
};

