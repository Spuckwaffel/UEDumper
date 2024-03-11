
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: CosmeticsFrameworkItems
/// dependency: CustomizableObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: RigVM
/// dependency: StructUtils

/// Struct /Script/AssembledMeshSystem.AssembledMeshAttachmentRules
/// Size: 0x0050 (0x000000 - 0x000050)
struct FAssembledMeshAttachmentRules
{ 
	FName                                              AttachSocketName;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            AttachOffset;                                               // 0x0008   (0x0018)  
	FRotator                                           AttachRotation;                                             // 0x0020   (0x0018)  
	FVector                                            AttachScale;                                                // 0x0038   (0x0018)  
};

/// Class /Script/AssembledMeshSystem.AssembledMeshSchema
/// Size: 0x01B0 (0x000030 - 0x0001E0)
class UAssembledMeshSchema : public UPrimaryDataAsset
{ 
public:
	FGameplayTag                                       MeshSchemaTag;                                              // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(32,1718) /* TWeakObjectPtr<UCustomizableObjectInstance*> */ __um(CustomizableObjectInstance);    // 0x0038   (0x0020)  
	SDK_UNDEFINED(32,1719) /* TWeakObjectPtr<UCustomizableObject*> */ __um(CustomizableObject);                    // 0x0058   (0x0020)  
	int32_t                                            ComponentIndex;                                             // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	SDK_UNDEFINED(32,1720) /* TWeakObjectPtr<USkeletalMesh*> */ __um(SkeletalMesh);                                // 0x0080   (0x0020)  
	SDK_UNDEFINED(80,1721) /* TMap<FString, FString> */ __um(SelectedIntParams);                                   // 0x00A0   (0x0050)  
	SDK_UNDEFINED(80,1722) /* TMap<FString, float> */  __um(SelectedFloatParams);                                  // 0x00F0   (0x0050)  
	FAssembledMeshAttachmentRules                      AttachmentRules;                                            // 0x0140   (0x0050)  
	SDK_UNDEFINED(32,1723) /* TWeakObjectPtr<UClass*> */ __um(AnimClass);                                          // 0x0190   (0x0020)  
	FGameplayTagContainer                              SoundLibraryTags;                                           // 0x01B0   (0x0020)  
	TArray<FInstancedStruct>                           AdditionalData;                                             // 0x01D0   (0x0010)  
};

/// Class /Script/AssembledMeshSystem.HeadAccDataAssetLink
/// Size: 0x0000 (0x000108 - 0x000108)
class UHeadAccDataAssetLink : public UDataAssetLink
{ 
public:
};

/// Class /Script/AssembledMeshSystem.NeckAccDataAssetLink
/// Size: 0x0000 (0x000108 - 0x000108)
class UNeckAccDataAssetLink : public UDataAssetLink
{ 
public:
};

/// Class /Script/AssembledMeshSystem.HipAccDataAssetLink
/// Size: 0x0000 (0x000108 - 0x000108)
class UHipAccDataAssetLink : public UDataAssetLink
{ 
public:
};

/// Struct /Script/AssembledMeshSystem.AssembledComponentReferences
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAssembledComponentReferences
{ 
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                      // 0x0000   (0x0008)  
	class UCustomizableObjectInstanceUsage*            CustomizableObjectInstanceUsage;                            // 0x0008   (0x0008)  
	FGameplayTag                                       AssembledMeshSchemaTag;                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/AssembledMeshSystem.AssembledMeshUserComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UAssembledMeshUserComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00A0   (0x0010)  MISSED
	TArray<class UAssembledMeshSchema*>                MeshParts;                                                  // 0x00B0   (0x0010)  
	TArray<FAssembledComponentReferences>              MeshPartComponents;                                         // 0x00C0   (0x0010)  
	bool                                               bAssignMeshPartsOnBeginPlay;                                // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00D1   (0x0007)  MISSED


	/// Functions
	// Function /Script/AssembledMeshSystem.AssembledMeshUserComponent.SetMeshParts
	// void SetMeshParts(TArray<UAssembledMeshSchema*> InMeshParts);                                                         // [0x7233748] Final|Native|Private|BlueprintCallable 
	// Function /Script/AssembledMeshSystem.AssembledMeshUserComponent.SetMeshPart
	// void SetMeshPart(class UAssembledMeshSchema* InMeshPart);                                                             // [0x7233680] Final|Native|Private|BlueprintCallable 
	// Function /Script/AssembledMeshSystem.AssembledMeshUserComponent.OnRep_MeshParts
	// void OnRep_MeshParts();                                                                                               // [0x28ca58c] Native|Protected     
	// Function /Script/AssembledMeshSystem.AssembledMeshUserComponent.GetMeshPart
	// class UAssembledMeshSchema* GetMeshPart();                                                                            // [0x69f1ed4] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AssembledMeshSystem.AssembledMeshUserComponent.GetAttachToComponent
	// class USkeletalMeshComponent* GetAttachToComponent();                                                                 // [0x365e024] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AssembledMeshSystem.AssembledMeshUserComponent.GatherAndAssignAssembledMeshParts
	// void GatherAndAssignAssembledMeshParts();                                                                             // [0x30fd094] Native|Public        
	// Function /Script/AssembledMeshSystem.AssembledMeshUserComponent.CustomizationCompleted
	// void CustomizationCompleted(int32_t PartIndex);                                                                       // [0x72335fc] Native|Protected     
};

/// Struct /Script/AssembledMeshSystem.AssembledMeshSchemaData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FAssembledMeshSchemaData
{ 
};

/// Struct /Script/AssembledMeshSystem.AssembledMeshSchemaData_Icons
/// Size: 0x005F (0x000001 - 0x000060)
struct FAssembledMeshSchemaData_Icons : FAssembledMeshSchemaData
{ 
	SDK_UNDEFINED(32,1724) /* TWeakObjectPtr<UTexture2D*> */ __um(WidePreviewImage);                               // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,1725) /* TWeakObjectPtr<UTexture2D*> */ __um(SmallPreviewImage);                              // 0x0020   (0x0020)  
	SDK_UNDEFINED(32,1726) /* TWeakObjectPtr<UTexture2D*> */ __um(LargePreviewImage);                              // 0x0040   (0x0020)  
};

/// Struct /Script/AssembledMeshSystem.CosmeticProperty_AssembledMeshSchema
/// Size: 0x0024 (0x000004 - 0x000028)
struct FCosmeticProperty_AssembledMeshSchema : FCosmeticPropertyBase
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,1727) /* TWeakObjectPtr<UAssembledMeshSchema*> */ __um(AssembledMeshSchema);                  // 0x0008   (0x0020)  
};

/// Struct /Script/AssembledMeshSystem.BaseParamData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FBaseParamData
{ 
	SDK_UNDEFINED(16,1728) /* FString */               __um(ParamName);                                            // 0x0000   (0x0010)  
};

/// Struct /Script/AssembledMeshSystem.IntParamData
/// Size: 0x0010 (0x000010 - 0x000020)
struct FIntParamData : FBaseParamData
{ 
	SDK_UNDEFINED(16,1729) /* TArray<FString> */       __um(ParamOptions);                                         // 0x0010   (0x0010)  
};

/// Struct /Script/AssembledMeshSystem.FloatParamData
/// Size: 0x0010 (0x000010 - 0x000020)
struct FFloatParamData : FBaseParamData
{ 
	float                                              FloatValue;                                                 // 0x0010   (0x0004)  
	float                                              MinFloatValue;                                              // 0x0014   (0x0004)  
	float                                              MaxFloatValue;                                              // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

