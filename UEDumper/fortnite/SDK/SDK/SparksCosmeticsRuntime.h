
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: CosmeticsFrameworkLoadouts
/// dependency: Engine
/// dependency: FMJamCoreRuntime
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ItemizationCoreRuntime
/// dependency: McpProfileSys
/// dependency: ModularGameplay
/// dependency: Niagara
/// dependency: SparksCoreRuntime

/// Class /Script/SparksCosmeticsRuntime.FortAnimNotifyState_SpawnSparksProp
/// Size: 0x0060 (0x0001C0 - 0x000220)
class UFortAnimNotifyState_SpawnSparksProp : public UFortAnimNotifyState_SpawnProp
{ 
public:
	class UNiagaraComponent*                           SpawnedNiagaraComponent;                                    // 0x01C0   (0x0008)  
	ESparksInstrumentType                              InstrumentType;                                             // 0x01C8   (0x0001)  
	bool                                               ShouldUseLeftHandMesh;                                      // 0x01C9   (0x0001)  
	bool                                               ShouldUseAuxiliaryMesh;                                     // 0x01CA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x01CB   (0x0005)  MISSED
	FGameplayTagQuery                                  SkipActorsWithTag;                                          // 0x01D0   (0x0048)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0218   (0x0008)  MISSED


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.FortAnimNotifyState_SpawnSparksProp.InitNewNotify
	// void InitNewNotify(ESparksInstrumentType InType, bool InLeftHand, bool InAuxMesh, FName InSocketName, FGameplayTagQuery InSkipActorsWithTag, int32_t InPropId, class USkeletalMesh* InDefaultMesh); // [0xa40575c] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksAccountItemDefinition
/// Size: 0x0010 (0x000728 - 0x000738)
class USparksAccountItemDefinition : public UAthenaCosmeticItemDefinition
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0728   (0x0008)  MISSED
	ESparksAccountItemSubtype                          Subtype;                                                    // 0x0730   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0731   (0x0003)  MISSED
	FGameplayTag                                       Slot;                                                       // 0x0734   (0x0004)  


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksAccountItemDefinition.GetVariantChannelTags
	// void GetVariantChannelTags(TArray<FGameplayTag>& OutChannelTags);                                                     // [0xa4056c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksAccountItemDefinition.GetVariantChannelOptionNames
	// void GetVariantChannelOptionNames(FGameplayTag ChannelTag, FText& OutChannelName, TArray<FString>& OutNames);         // [0xa405480] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksAccountItemDefinition.GetItemSubtype
	// ESparksAccountItemSubtype GetItemSubtype();                                                                           // [0x88da6dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksAccountItemDefinition.GetInstrumentType
	// ESparksInstrumentType GetInstrumentType();                                                                            // [0x688e0e4] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksAuraItemDefinition
/// Size: 0x0078 (0x000738 - 0x0007B0)
class USparksAuraItemDefinition : public USparksAccountItemDefinition
{ 
public:
	SDK_UNDEFINED(32,12334) /* TWeakObjectPtr<UNiagaraSystem*> */ __um(StartSystem);                               // 0x0738   (0x0020)  
	FName                                              StartSystemAttachPoint;                                     // 0x0758   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x075C   (0x0004)  MISSED
	SDK_UNDEFINED(32,12335) /* TWeakObjectPtr<UNiagaraSystem*> */ __um(SustainSystem);                             // 0x0760   (0x0020)  
	FName                                              SustainSystemAttachPoint;                                   // 0x0780   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0784   (0x0004)  MISSED
	SDK_UNDEFINED(32,12336) /* TWeakObjectPtr<UNiagaraSystem*> */ __um(StopSystem);                                // 0x0788   (0x0020)  
	FName                                              StopSystemAttachPoint;                                      // 0x07A8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x07AC   (0x0004)  MISSED
};

/// Class /Script/SparksCosmeticsRuntime.SparksCosmeticCatalog
/// Size: 0x00F8 (0x0000A0 - 0x000198)
class USparksCosmeticCatalog : public UGameStateComponent
{ 
public:
	bool                                               bDefsAreInitialized;                                        // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	SDK_UNDEFINED(80,12337) /* TMap<FName, USparksAccountItemDefinition*> */ __um(ItemDefinitionMap);              // 0x00A8   (0x0050)  
	SDK_UNDEFINED(80,12338) /* TMap<FPrimaryAssetId, USparksAccountItemDefinition*> */ __um(AssetIDMap);           // 0x00F8   (0x0050)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0148   (0x0050)  MISSED


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticCatalog.GetSparksCosmeticCatalog
	// class USparksCosmeticCatalog* GetSparksCosmeticCatalog(class UObject* WorldContextObject);                            // [0xa405350] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticCatalog.GetItemDefFromAssetID
	// class USparksAccountItemDefinition* GetItemDefFromAssetID(FPrimaryAssetId& AssetId);                                  // [0xa404b9c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticCatalog.GetItemDef
	// class USparksAccountItemDefinition* GetItemDef(FName InItemName);                                                     // [0xa404b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticCatalog.GetActiveItemDefNamesForSubtypeAndInstrument
	// TArray<FName> GetActiveItemDefNamesForSubtypeAndInstrument(ESparksAccountItemSubtype Subtype, ESparksInstrumentType Instrument); // [0xa403de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticCatalog.GetActiveItemDefNamesForSubtype
	// TArray<FName> GetActiveItemDefNamesForSubtype(ESparksAccountItemSubtype Subtype);                                     // [0xa403d48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/SparksCosmeticsRuntime.SparksVariantChoices
/// Size: 0x0050 (0x000000 - 0x000050)
struct FSparksVariantChoices
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/SparksCosmeticsRuntime.SparksCosmeticLoadoutData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FSparksCosmeticLoadoutData
{ 
	FSparksVariantChoices                              AuraChoices;                                                // 0x0040   (0x0050)  
	SDK_UNDEFINED(80,12339) /* TMap<ESparksInstrumentType, FSparksVariantChoices> */ __um(InstrumentVariantChoices); // 0x0090   (0x0050)  
	TArray<class USparksSongItemDefinition*>           JamSongChoices;                                             // 0x00E0   (0x0010)  
};

/// Class /Script/SparksCosmeticsRuntime.SparksCosmeticComponent
/// Size: 0x03C0 (0x0000A0 - 0x000460)
class USparksCosmeticComponent : public UPawnComponent
{ 
public:
	SDK_UNDEFINED(16,12340) /* FMulticastInlineDelegate */ __um(CosmeticItemChanged);                              // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,12341) /* FMulticastInlineDelegate */ __um(CosmeticChoiceChanged);                            // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,12342) /* FMulticastInlineDelegate */ __um(OnLoadoutFilled);                                  // 0x00C0   (0x0010)  
	bool                                               bIsLoadoutFilled;                                           // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x57];                                      // 0x00D1   (0x0057)  MISSED
	FSparksCosmeticLoadoutData                         CurrentLoadout;                                             // 0x0128   (0x00F0)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0218   (0x0008)  MISSED
	class UNiagaraComponent*                           ActiveAura;                                                 // 0x0220   (0x0008)  
	FPrimaryAssetId                                    DefaultAuraItemDefID;                                       // 0x0228   (0x0008)  
	class USparksAuraItemDefinition*                   AuraItemDef;                                                // 0x0230   (0x0008)  
	SDK_UNDEFINED(80,12343) /* TMap<ESparksInstrumentType, FPrimaryAssetId> */ __um(DefaultInstrumentDefIDs);      // 0x0238   (0x0050)  
	SDK_UNDEFINED(80,12344) /* TMap<ESparksInstrumentType, USparksInstrumentItemDefBase*> */ __um(InstrumentDefs); // 0x0288   (0x0050)  
	unsigned char                                      UnknownData02_5[0x80];                                      // 0x02D8   (0x0080)  MISSED
	SDK_UNDEFINED(80,12345) /* TMap<ESparksInstrumentType, FPrimaryAssetId> */ __um(DefaultSpotlightAnimDefIDs);   // 0x0358   (0x0050)  
	SDK_UNDEFINED(80,12346) /* TMap<ESparksInstrumentType, USparksSpotlightAnimDefinition*> */ __um(SpotlightAnimDefs); // 0x03A8   (0x0050)  
	unsigned char                                      UnknownData03_5[0x50];                                      // 0x03F8   (0x0050)  MISSED
	TArray<FName>                                      AllValidJamTracksShortNameCache;                            // 0x0448   (0x0010)  
	bool                                               HasCachedValidJamTracks;                                    // 0x0458   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0459   (0x0007)  MISSED


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.SetVariantChoice
	// void SetVariantChoice(ESparksAccountItemSubtype Subtype, ESparksInstrumentType InstrumentType, FGameplayTag VariantChannel, FString Value); // [0xa4060f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.SetAuraState
	// void SetAuraState(bool bShouldBeActive);                                                                              // [0xa405fdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.SetActiveSpotlightAnimDef
	// void SetActiveSpotlightAnimDef(class USparksSpotlightAnimDefinition* NewSpotlightDef);                                // [0xa405ef4] Final|Native|Private 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.SetActiveItemDef
	// void SetActiveItemDef(class USparksAccountItemDefinition* NewItemDef);                                                // [0xa405e1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.SetActiveInstrumentItemDef
	// void SetActiveInstrumentItemDef(class USparksInstrumentItemDefBase* InstrumentItemDef);                               // [0xa405d08] Final|Native|Private 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.SetActiveAuraItemDef
	// void SetActiveAuraItemDef(class USparksAuraItemDefinition* NewAuraItemDef);                                           // [0xa405c6c] Final|Native|Private 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.RefreshMCP
	// void RefreshMCP();                                                                                                    // [0x36203b0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.OnWeaponChanged
	// void OnWeaponChanged(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                    // [0x2dc0784] Final|Native|Protected 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.OnMaterialOverridesCleared
	// void OnMaterialOverridesCleared(class AFortPlayerPawn* Pawn);                                                         // [0x35b089c] Final|Native|Protected 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetSpotlightAnim
	// class ULevelSequence* GetSpotlightAnim(ESparksInstrumentType InstrumentType);                                         // [0xa4053d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetOwnedJamTracksCount
	// int32_t GetOwnedJamTracksCount();                                                                                     // [0xa4052f8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetOwnedJamSongShortnameForIndex
	// FName GetOwnedJamSongShortnameForIndex(int32_t Index);                                                                // [0xa405274] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetInstrumentVFX
	// bool GetInstrumentVFX(ESparksInstrumentType InstrumentType, class UFXSystemAsset*& OutFX, class UFXSystemAsset*& OutLHFX); // [0x4c3c5c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetInstrumentCosmetics
	// bool GetInstrumentCosmetics(ESparksInstrumentType InstrumentType, class USkeletalMesh*& OutMesh, class UMaterialInstance*& OutMaterial, class USkeletalMesh*& OutLHMesh, class UMaterialInstance*& OutLHMaterial); // [0xa4048e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetInstrumentAuxiliaryVFX
	// bool GetInstrumentAuxiliaryVFX(ESparksInstrumentType InstrumentType, class UFXSystemAsset*& OutFX);                   // [0x4c3c470] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetInstrumentAuxiliaryCosmetics
	// bool GetInstrumentAuxiliaryCosmetics(ESparksInstrumentType InstrumentType, class USkeletalMesh*& OutMesh, class UMaterialInstance*& OutMaterial, class UMaterialInstance*& OutMaterial2); // [0x32ed578] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetEquippedJamTracksCount
	// int32_t GetEquippedJamTracksCount();                                                                                  // [0xa4048cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetEquippedJamSongShortnameForIndex
	// FName GetEquippedJamSongShortnameForIndex(int32_t Index);                                                             // [0xa404848] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetCosmeticItems
	// void GetCosmeticItems(TArray<USparksAccountItemDefinition*>& ItemDefs);                                               // [0xa404638] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetCosmeticItem
	// class USparksAccountItemDefinition* GetCosmeticItem(ESparksAccountItemSubtype Subtype, ESparksInstrumentType Instrument); // [0xa404558] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetChoice
	// bool GetChoice(FSparksVariantChoice& OutChoice, ESparksAccountItemSubtype Subtype, ESparksInstrumentType InstrumentType, FGameplayTag VariantChannel); // [0xa4041e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.GetAccountItemTypeFromInstrumentType
	// ESparksAccountItemSubtype GetAccountItemTypeFromInstrumentType(ESparksInstrumentType Instrument);                     // [0xa403cc8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.DoCacheValidJamTracks
	// void DoCacheValidJamTracks();                                                                                         // [0xa403cb4] Final|Native|Private 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.DebugForceAuraState
	// void DebugForceAuraState(bool bShouldBeActive);                                                                       // [0xa403c34] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.Debug_BP_ShowCosmeticPicker
	// void Debug_BP_ShowCosmeticPicker(bool bShow);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.AuraStop
	// void AuraStop();                                                                                                      // [0xa403c20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticComponent.AuraStart
	// void AuraStart();                                                                                                     // [0xa403c0c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SparksCosmeticsRuntime.SparksCosmeticsCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksCosmeticsCheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticsCheatManager.GrantSparksSongsLoadedAssets
	// void GrantSparksSongsLoadedAssets();                                                                                  // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Private|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksCosmeticsCheatManager.GrantSparksCosmeticsLoadedAssets
	// void GrantSparksCosmeticsLoadedAssets();                                                                              // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Private|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksCosmeticsSettings
/// Size: 0x00D0 (0x000030 - 0x000100)
class USparksCosmeticsSettings : public UPrimaryDataAsset
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UClass*                                      SparksCosmeticPreviewActorClass;                            // 0x0038   (0x0008)  
	class UClass*                                      SparksPreviewCameraActorClass;                              // 0x0040   (0x0008)  
	class UClass*                                      SparksAuraPreviewActorClass;                                // 0x0048   (0x0008)  
	class UClass*                                      SparksAuraDisplayActorClass;                                // 0x0050   (0x0008)  
	class UClass*                                      SparksSongPreviewActorClass;                                // 0x0058   (0x0008)  
	class UClass*                                      SparksSongPrefabActorClass;                                 // 0x0060   (0x0008)  
	class UCosmeticLoadoutSchema*                      SparksLoadoutSchema;                                        // 0x0068   (0x0008)  
	FFortUICameraFrameTargetBounds                     GuitarCameraFramingBounds;                                  // 0x0070   (0x0020)  
	FFortUICameraFrameTargetBounds                     BassCameraFramingBounds;                                    // 0x0090   (0x0020)  
	FFortUICameraFrameTargetBounds                     DrumCameraFramingBounds;                                    // 0x00B0   (0x0020)  
	FFortUICameraFrameTargetBounds                     MicCameraFramingBounds;                                     // 0x00D0   (0x0020)  
	TArray<FPrimaryAssetId>                            RandomCharacters;                                           // 0x00F0   (0x0010)  
};

/// Class /Script/SparksCosmeticsRuntime.SparksCosmetics_BPFL
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksCosmetics_BPFL : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksInstrumentComponentBase
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class USparksInstrumentComponentBase : public UActorComponent
{ 
public:
	TArray<class UNiagaraComponent*>                   SpawnedCosmeticVFX;                                         // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentComponentBase.GetInstrumentType
	// ESparksInstrumentType GetInstrumentType();                                                                            // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentComponentBase.DestroySpawnedVFX
	// void DestroySpawnedVFX();                                                                                             // [0x4c3c450] Final|Native|Public  
};

/// Class /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase
/// Size: 0x0140 (0x000738 - 0x000878)
class USparksInstrumentItemDefBase : public USparksAccountItemDefinition
{ 
public:
	SDK_UNDEFINED(32,12347) /* TWeakObjectPtr<USkeletalMesh*> */ __um(Mesh);                                       // 0x0738   (0x0020)  
	SDK_UNDEFINED(32,12348) /* TWeakObjectPtr<USkeletalMesh*> */ __um(LeftHandMesh);                               // 0x0758   (0x0020)  
	SDK_UNDEFINED(32,12349) /* TWeakObjectPtr<USkeletalMesh*> */ __um(AuxiliaryMesh);                              // 0x0778   (0x0020)  
	SDK_UNDEFINED(32,12350) /* TWeakObjectPtr<UMaterialInstance*> */ __um(Material);                               // 0x0798   (0x0020)  
	SDK_UNDEFINED(32,12351) /* TWeakObjectPtr<UMaterialInstance*> */ __um(LeftHandMaterial);                       // 0x07B8   (0x0020)  
	SDK_UNDEFINED(32,12352) /* TWeakObjectPtr<UMaterialInstance*> */ __um(AuxiliaryMaterial);                      // 0x07D8   (0x0020)  
	SDK_UNDEFINED(32,12353) /* TWeakObjectPtr<UMaterialInstance*> */ __um(AuxiliaryMaterial2);                     // 0x07F8   (0x0020)  
	SDK_UNDEFINED(32,12354) /* TWeakObjectPtr<UFXSystemAsset*> */ __um(MainFXSystem);                              // 0x0818   (0x0020)  
	SDK_UNDEFINED(32,12355) /* TWeakObjectPtr<UFXSystemAsset*> */ __um(LHFXSystem);                                // 0x0838   (0x0020)  
	SDK_UNDEFINED(32,12356) /* TWeakObjectPtr<UFXSystemAsset*> */ __um(AuxFXSystem);                               // 0x0858   (0x0020)  


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetMesh
	// class USkeletalMesh* GetMesh(FSparksVariantChoices& Choices);                                                         // [0xa4051ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetMaterial
	// class UMaterialInstance* GetMaterial(FSparksVariantChoices& Choices);                                                 // [0xa4050dc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetMainFXSystem
	// class UFXSystemAsset* GetMainFXSystem(FSparksVariantChoices& Choices);                                                // [0xa40500c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetLHFXSystem
	// class UFXSystemAsset* GetLHFXSystem(FSparksVariantChoices& Choices);                                                  // [0xa404da4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetLeftHandMesh
	// class USkeletalMesh* GetLeftHandMesh(FSparksVariantChoices& Choices);                                                 // [0xa404f44] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetLeftHandMaterial
	// class UMaterialInstance* GetLeftHandMaterial(FSparksVariantChoices& Choices);                                         // [0xa404e74] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetAuxiliaryMesh
	// class USkeletalMesh* GetAuxiliaryMesh(FSparksVariantChoices& Choices);                                                // [0xa40411c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetAuxiliaryMaterial2
	// class UMaterialInstance* GetAuxiliaryMaterial2(FSparksVariantChoices& Choices);                                       // [0xa403f7c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetAuxiliaryMaterial
	// class UMaterialInstance* GetAuxiliaryMaterial(FSparksVariantChoices& Choices);                                        // [0xa40404c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentItemDefBase.GetAuxFXSystem
	// class UFXSystemAsset* GetAuxFXSystem(FSparksVariantChoices& Choices);                                                 // [0xa403eac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksGuitarItemDefinition
/// Size: 0x0000 (0x000878 - 0x000878)
class USparksGuitarItemDefinition : public USparksInstrumentItemDefBase
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksBassItemDefinition
/// Size: 0x0000 (0x000878 - 0x000878)
class USparksBassItemDefinition : public USparksInstrumentItemDefBase
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksDrumItemDefinition
/// Size: 0x0000 (0x000878 - 0x000878)
class USparksDrumItemDefinition : public USparksInstrumentItemDefBase
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksMicItemDefinition
/// Size: 0x0000 (0x000878 - 0x000878)
class USparksMicItemDefinition : public USparksInstrumentItemDefBase
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksKeyboardItemDefinition
/// Size: 0x0000 (0x000878 - 0x000878)
class USparksKeyboardItemDefinition : public USparksInstrumentItemDefBase
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksInstrumentPreviewActor
/// Size: 0x0040 (0x000430 - 0x000470)
class ASparksInstrumentPreviewActor : public AFortItemPreviewActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0430   (0x0010)  MISSED
	SDK_UNDEFINED(32,12357) /* TWeakObjectPtr<USparksInstrumentItemDefBase*> */ __um(ItemDef);                     // 0x0440   (0x0020)  
	SDK_UNDEFINED(12,12358) /* FDelegateProperty */    __um(OnSettingsChangedDelegate);                            // 0x0460   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x046C   (0x0004)  MISSED


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksInstrumentPreviewActor.GetCurrentChoices
	// FSparksVariantChoices GetCurrentChoices();                                                                            // [0xa4047a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksItemPreviewOffPawnActor
/// Size: 0x0000 (0x000488 - 0x000488)
class ASparksItemPreviewOffPawnActor : public AFortItemPreviewOffPawnActor
{ 
public:


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksItemPreviewOffPawnActor.GetInstrumentType
	// ESparksInstrumentType GetInstrumentType();                                                                            // [0xa404ab8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SparksCosmeticsRuntime.SparksItemPreviewOnPawnActor
/// Size: 0x0010 (0x000700 - 0x000710)
class ASparksItemPreviewOnPawnActor : public AFortItemPreviewOnPawnActor
{ 
public:
	class UNiagaraComponent*                           ActiveAura;                                                 // 0x0700   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0708   (0x0008)  MISSED
};

/// Class /Script/SparksCosmeticsRuntime.SparksJamEmoteItemDefinition
/// Size: 0x0010 (0x000950 - 0x000960)
class USparksJamEmoteItemDefinition : public UAthenaDanceItemDefinition
{ 
public:
	class USparksSongItemDefinition*                   SongItemDef;                                                // 0x0950   (0x0008)  
	EFMJamLoopType                                     LoopType;                                                   // 0x0958   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0959   (0x0007)  MISSED


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksJamEmoteItemDefinition.IsJamLoopEnabled
	// bool IsJamLoopEnabled(class AFortPlayerController* PlayerController);                                                 // [0xa405ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksJamEmoteItemDefinition.GetSongItemDef
	// class USparksSongItemDefinition* GetSongItemDef();                                                                    // [0xa405338] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksJamEmoteItemDefinition.GetJamSongShortName
	// FName GetJamSongShortName(class UObject* WorldContextObject);                                                         // [0xa404ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksJamEmoteItemDefinition.GetJamSongMetaData
	// class UCatalogData* GetJamSongMetaData(class UObject* WorldContextObject);                                            // [0xa404c50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCosmeticsRuntime.SparksJamEmoteItemDefinition.GetJamLoopType
	// EFMJamLoopType GetJamLoopType();                                                                                      // [0xa404c38] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksPlayerStateComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class USparksPlayerStateComponent : public UPlayerStateComponent
{ 
public:
	ESparksInstrumentType                              SparksInstrumentChoice;                                     // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksPlayerStateComponent.SetSparksInstrumentChoice
	// void SetSparksInstrumentChoice(ESparksInstrumentType Instrument);                                                     // [0xa406074] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SparksCosmeticsRuntime.SparksPlayerStateComponent.GetSparksInstrumentChoice
	// ESparksInstrumentType GetSparksInstrumentChoice();                                                                    // [0x81ea0ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksCosmeticsRuntime.SparksSongItemDefinition
/// Size: 0x0080 (0x000738 - 0x0007B8)
class USparksSongItemDefinition : public USparksAccountItemDefinition
{ 
public:
	SDK_UNDEFINED(32,12359) /* TWeakObjectPtr<USparksJamEmoteItemDefinition*> */ __um(JamEmote_Vox);               // 0x0738   (0x0020)  
	SDK_UNDEFINED(32,12360) /* TWeakObjectPtr<USparksJamEmoteItemDefinition*> */ __um(JamEmote_Lead);              // 0x0758   (0x0020)  
	SDK_UNDEFINED(32,12361) /* TWeakObjectPtr<USparksJamEmoteItemDefinition*> */ __um(JamEmote_Bass);              // 0x0778   (0x0020)  
	SDK_UNDEFINED(32,12362) /* TWeakObjectPtr<USparksJamEmoteItemDefinition*> */ __um(JamEmote_Drum);              // 0x0798   (0x0020)  
};

/// Class /Script/SparksCosmeticsRuntime.SparksSongPreviewActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class ASparksSongPreviewActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0290   (0x0010)  MISSED
	FName                                              SongShortName;                                              // 0x02A0   (0x0004)  
	float                                              BoundsScale;                                                // 0x02A4   (0x0004)  


	/// Functions
	// Function /Script/SparksCosmeticsRuntime.SparksSongPreviewActor.StartSongPreview
	// void StartSongPreview();                                                                                              // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCosmeticsRuntime.SparksSongPreviewActor.OnSongTextureLoaded
	// void OnSongTextureLoaded(class UTexture2D* CoverArt);                                                                 // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/SparksCosmeticsRuntime.SparksSpotlightAnimDefinition
/// Size: 0x0028 (0x000738 - 0x000760)
class USparksSpotlightAnimDefinition : public USparksAccountItemDefinition
{ 
public:
	SDK_UNDEFINED(32,12363) /* TWeakObjectPtr<ULevelSequence*> */ __um(SpotlightSequence);                         // 0x0738   (0x0020)  
	ESparksInstrumentType                              InstrumentType;                                             // 0x0758   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0759   (0x0007)  MISSED
};

/// Class /Script/SparksCosmeticsRuntime.SparksGuitarSpotlightDefinition
/// Size: 0x0000 (0x000760 - 0x000760)
class USparksGuitarSpotlightDefinition : public USparksSpotlightAnimDefinition
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksDrumSpotlightDefinition
/// Size: 0x0000 (0x000760 - 0x000760)
class USparksDrumSpotlightDefinition : public USparksSpotlightAnimDefinition
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksBassSpotlightDefinition
/// Size: 0x0000 (0x000760 - 0x000760)
class USparksBassSpotlightDefinition : public USparksSpotlightAnimDefinition
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksMicSpotlightDefinition
/// Size: 0x0000 (0x000760 - 0x000760)
class USparksMicSpotlightDefinition : public USparksSpotlightAnimDefinition
{ 
public:
};

/// Class /Script/SparksCosmeticsRuntime.SparksKeyboardSpotlightDefinition
/// Size: 0x0000 (0x000760 - 0x000760)
class USparksKeyboardSpotlightDefinition : public USparksSpotlightAnimDefinition
{ 
public:
};

/// Struct /Script/SparksCosmeticsRuntime.SparksVariantChoice
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSparksVariantChoice
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/SparksCosmeticsRuntime.NameList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNameList
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/SparksCosmeticsRuntime.SparksCosmeticsEvent_AuraEnable
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSparksCosmeticsEvent_AuraEnable
{ 
	SDK_UNDEFINED(8,12364) /* TWeakObjectPtr<AFortPlayerPawn*> */ __um(ForPlayer);                                 // 0x0000   (0x0008)  
	bool                                               bAuraIsEnabled;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

