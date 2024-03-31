
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: InterchangeCore

/// Class /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode
/// Size: 0x0040 (0x000140 - 0x000180)
class UInterchangeActorFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomMobility
	// bool SetCustomMobility(char& AttributeValue, bool bAddApplyDelegate);                                                    // [0xcdb91fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomLocalTransform
	// bool SetCustomLocalTransform(FTransform& AttributeValue, bool bAddApplyDelegate);                                        // [0xcdb793c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomGlobalTransform
	// bool SetCustomGlobalTransform(FTransform& AttributeValue, bool bAddApplyDelegate);                                       // [0xcdb793c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomActorClassName
	// bool SetCustomActorClassName(FString AttributeValue);                                                                    // [0xcdb4ba4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomMobility
	// bool GetCustomMobility(char& AttributeValue);                                                                            // [0xcda3674] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomLocalTransform
	// bool GetCustomLocalTransform(FTransform& AttributeValue);                                                                // [0xcda202c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomGlobalTransform
	// bool GetCustomGlobalTransform(FTransform& AttributeValue);                                                               // [0xcda202c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomActorClassName
	// bool GetCustomActorClassName(FString& AttributeValue);                                                                   // [0xcd9fa8c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode
/// Size: 0x0040 (0x000180 - 0x0001C0)
class UInterchangePhysicalCameraFactoryNode : public UInterchangeActorFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomSensorWidth
	// bool SetCustomSensorWidth(float& AttributeValue, bool bAddApplyDelegate);                                                // [0xcd51698] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomSensorHeight
	// bool SetCustomSensorHeight(float& AttributeValue, bool bAddApplyDelegate);                                               // [0xcd51578] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomFocusMethod
	// bool SetCustomFocusMethod(ECameraFocusMethod& AttributeValue, bool bAddApplyDelegate);                                   // [0xcd4f9a8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomFocalLength
	// bool SetCustomFocalLength(float& AttributeValue, bool bAddApplyDelegate);                                                // [0xcd4f888] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomSensorWidth
	// bool GetCustomSensorWidth(float& AttributeValue);                                                                        // [0xcd4dfd4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomSensorHeight
	// bool GetCustomSensorHeight(float& AttributeValue);                                                                       // [0xcd4df3c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomFocusMethod
	// bool GetCustomFocusMethod(ECameraFocusMethod& AttributeValue);                                                           // [0xcd4cb74] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomFocalLength
	// bool GetCustomFocalLength(float& AttributeValue);                                                                        // [0xcd4cadc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode
/// Size: 0x0060 (0x000180 - 0x0001E0)
class UInterchangeStandardCameraFactoryNode : public UInterchangeActorFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomWidth
	// bool SetCustomWidth(float& AttributeValue, bool bAddApplyDelegate);                                                      // [0xcd520cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomProjectionMode
	// bool SetCustomProjectionMode(TEnumAsByte<ECameraProjectionMode>& AttributeValue, bool bAddApplyDelegate);                // [0xcd51344] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomNearClipPlane
	// bool SetCustomNearClipPlane(float& AttributeValue, bool bAddApplyDelegate);                                              // [0xcd50a60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomFieldOfView
	// bool SetCustomFieldOfView(float& AttributeValue, bool bAddApplyDelegate);                                                // [0xcd4f768] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomFarClipPlane
	// bool SetCustomFarClipPlane(float& AttributeValue, bool bAddApplyDelegate);                                               // [0xcd4f648] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomAspectRatio
	// bool SetCustomAspectRatio(float& AttributeValue, bool bAddApplyDelegate);                                                // [0xcd4e590] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomWidth
	// bool GetCustomWidth(float& AttributeValue);                                                                              // [0xcd4e4d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomProjectionMode
	// bool GetCustomProjectionMode(TEnumAsByte<ECameraProjectionMode>& AttributeValue);                                        // [0xcd4de10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomNearClipPlane
	// bool GetCustomNearClipPlane(float& AttributeValue);                                                                      // [0xcd4d6a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomFieldOfView
	// bool GetCustomFieldOfView(float& AttributeValue);                                                                        // [0xcd4ca44] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomFarClipPlane
	// bool GetCustomFarClipPlane(float& AttributeValue);                                                                       // [0xcd4c9ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomAspectRatio
	// bool GetCustomAspectRatio(float& AttributeValue);                                                                        // [0xcd4bb38] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode
/// Size: 0x0030 (0x000180 - 0x0001B0)
class UInterchangeDecalActorFactoryNode : public UInterchangeActorFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.SetCustomSortOrder
	// bool SetCustomSortOrder(int32_t& AttributeValue, bool bAddApplyDelegate);                                                // [0xcd517b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.SetCustomDecalSize
	// bool SetCustomDecalSize(FVector& AttributeValue, bool bAddApplyDelegate);                                                // [0xcd4ee74] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.SetCustomDecalMaterialPathName
	// bool SetCustomDecalMaterialPathName(FString AttributeValue);                                                             // [0xcd4e804] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0xcd4e568] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.GetCustomSortOrder
	// bool GetCustomSortOrder(int32_t& AttributeValue);                                                                        // [0xcd4e06c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.GetCustomDecalSize
	// bool GetCustomDecalSize(FVector& AttributeValue);                                                                        // [0xcd4c2a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.GetCustomDecalMaterialPathName
	// bool GetCustomDecalMaterialPathName(FString& AttributeValue);                                                            // [0xcd4bc68] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeBaseMaterialFactoryNode
/// Size: 0x0010 (0x000140 - 0x000150)
class UInterchangeBaseMaterialFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseMaterialFactoryNode.SetCustomIsMaterialImportEnabled
	// bool SetCustomIsMaterialImportEnabled(bool& AttributeValue);                                                             // [0xcdb85fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseMaterialFactoryNode.GetCustomIsMaterialImportEnabled
	// bool GetCustomIsMaterialImportEnabled(bool& AttributeValue);                                                             // [0xcda2c34] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode
/// Size: 0x0020 (0x000150 - 0x000170)
class UInterchangeDecalMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.SetCustomNormalTexturePath
	// bool SetCustomNormalTexturePath(FString AttributeValue);                                                                 // [0xcd50b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.SetCustomDiffuseTexturePath
	// bool SetCustomDiffuseTexturePath(FString AttributeValue);                                                                // [0xcd4efd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0xcd4e568] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.GetCustomNormalTexturePath
	// bool GetCustomNormalTexturePath(FString& AttributeValue);                                                                // [0xcd4d740] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.GetCustomDiffuseTexturePath
	// bool GetCustomDiffuseTexturePath(FString& AttributeValue);                                                               // [0xcd4c374] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode
/// Size: 0x0030 (0x000140 - 0x000170)
class UInterchangeLevelSequenceFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.SetCustomFrameRate
	// bool SetCustomFrameRate(float& AttributeValue);                                                                          // [0xcd4fb38] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.RemoveCustomAnimationTrackUid
	// bool RemoveCustomAnimationTrackUid(FString AnimationTrackUid);                                                           // [0xccfd260] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0xcd4e568] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetCustomFrameRate
	// bool GetCustomFrameRate(float& AttributeValue);                                                                          // [0xcd4cc0c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetCustomAnimationTrackUids
	// void GetCustomAnimationTrackUids(TArray<FString>& OutAnimationTrackUids);                                                // [0xccfa144] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetCustomAnimationTrackUidCount
	// int32_t GetCustomAnimationTrackUidCount();                                                                               // [0xccfa1e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetCustomAnimationTrackUid
	// void GetCustomAnimationTrackUid(int32_t Index, FString& OutAnimationTrackUid);                                           // [0xccf9ab0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.AddCustomAnimationTrackUid
	// bool AddCustomAnimationTrackUid(FString AnimationTrackUid);                                                              // [0xcd036a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode
/// Size: 0x0040 (0x000180 - 0x0001C0)
class UInterchangeBaseLightFactoryNode : public UInterchangeActorFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomUseTemperature
	// bool SetCustomUseTemperature(bool AttributeValue, bool bAddApplyDelegate);                                               // [0xcd51f78] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomTemperature
	// bool SetCustomTemperature(float AttributeValue, bool bAddApplyDelegate);                                                 // [0xcd51bb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomLightColor
	// bool SetCustomLightColor(FColor& AttributeValue, bool bAddApplyDelegate);                                                // [0xcd50750] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomIntensity
	// bool SetCustomIntensity(float AttributeValue, bool bAddApplyDelegate);                                                   // [0xcd504ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomUseTemperature
	// bool GetCustomUseTemperature(bool& AttributeValue);                                                                      // [0xcd4e438] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomTemperature
	// bool GetCustomTemperature(float& AttributeValue);                                                                        // [0xcd4e270] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomLightColor
	// bool GetCustomLightColor(FColor& AttributeValue);                                                                        // [0xcd4d53c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomIntensity
	// bool GetCustomIntensity(float& AttributeValue);                                                                          // [0xcd4d40c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeDirectionalLightFactoryNode
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UInterchangeDirectionalLightFactoryNode : public UInterchangeBaseLightFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode
/// Size: 0x0060 (0x0001C0 - 0x000220)
class UInterchangeLightFactoryNode : public UInterchangeBaseLightFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomUseIESBrightness
	// bool SetCustomUseIESBrightness(bool& AttributeValue, bool bAddApplyDelegate);                                            // [0xcd51d0c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomRotation
	// bool SetCustomRotation(FRotator& AttributeValue, bool bAddApplyDelegate);                                                // [0xcd51464] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomIntensityUnits
	// bool SetCustomIntensityUnits(ELightUnits AttributeValue, bool bAddApplyDelegate);                                        // [0xcd50600] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomIESTexture
	// bool SetCustomIESTexture(FString AttributeValue);                                                                        // [0xcd4fce8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomIESBrightnessScale
	// bool SetCustomIESBrightnessScale(float& AttributeValue, bool bAddApplyDelegate);                                         // [0xcd4fbd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomAttenuationRadius
	// bool SetCustomAttenuationRadius(float AttributeValue, bool bAddApplyDelegate);                                           // [0xcd4e6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomUseIESBrightness
	// bool GetCustomUseIESBrightness(bool& AttributeValue);                                                                    // [0xcd4e308] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomRotation
	// bool GetCustomRotation(FRotator& AttributeValue);                                                                        // [0xcd4dea8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomIntensityUnits
	// bool GetCustomIntensityUnits(ELightUnits& AttributeValue);                                                               // [0xcd4d4a4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomIESTexture
	// bool GetCustomIESTexture(FString& AttributeValue);                                                                       // [0xcd4cd3c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomIESBrightnessScale
	// bool GetCustomIESBrightnessScale(float& AttributeValue);                                                                 // [0xcd4cca4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomAttenuationRadius
	// bool GetCustomAttenuationRadius(float& AttributeValue);                                                                  // [0xcd4bbd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode
/// Size: 0x0020 (0x000220 - 0x000240)
class UInterchangeRectLightFactoryNode : public UInterchangeLightFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode.SetCustomSourceWidth
	// bool SetCustomSourceWidth(float AttributeValue, bool bAddApplyDelegate);                                                 // [0xcd51a64] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode.SetCustomSourceHeight
	// bool SetCustomSourceHeight(float AttributeValue, bool bAddApplyDelegate);                                                // [0xcd51910] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode.GetCustomSourceWidth
	// bool GetCustomSourceWidth(float& AttributeValue);                                                                        // [0xcd4e1d8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode.GetCustomSourceHeight
	// bool GetCustomSourceHeight(float& AttributeValue);                                                                       // [0xcd4e140] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode
/// Size: 0x0020 (0x000220 - 0x000240)
class UInterchangePointLightFactoryNode : public UInterchangeLightFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode.SetCustomUseInverseSquaredFalloff
	// bool SetCustomUseInverseSquaredFalloff(bool AttributeValue, bool bAddApplyDelegate);                                     // [0xcd51e24] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode.SetCustomLightFalloffExponent
	// bool SetCustomLightFalloffExponent(float AttributeValue, bool bAddApplyDelegate);                                        // [0xcd5090c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode.GetCustomUseInverseSquaredFalloff
	// bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue);                                                            // [0xcd4e3a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode.GetCustomLightFalloffExponent
	// bool GetCustomLightFalloffExponent(float& AttributeValue);                                                               // [0xcd4d610] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode
/// Size: 0x0020 (0x000240 - 0x000260)
class UInterchangeSpotLightFactoryNode : public UInterchangePointLightFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.SetCustomOuterConeAngle
	// bool SetCustomOuterConeAngle(float AttributeValue, bool bAddApplyDelegate);                                              // [0xcd511f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.SetCustomInnerConeAngle
	// bool SetCustomInnerConeAngle(float AttributeValue, bool bAddApplyDelegate);                                              // [0xcd50358] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.GetCustomOuterConeAngle
	// bool GetCustomOuterConeAngle(float& AttributeValue);                                                                     // [0xcd4dd78] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.GetCustomInnerConeAngle
	// bool GetCustomInnerConeAngle(float& AttributeValue);                                                                     // [0xcd4d374] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode
/// Size: 0x0030 (0x000140 - 0x000170)
class UInterchangePhysicsAssetFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.SetCustomSkeletalMeshUid
	// bool SetCustomSkeletalMeshUid(FString AttributeValue);                                                                   // [0xcd68ebc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.InitializePhysicsAssetNode
	// void InitializePhysicsAssetNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);                           // [0xcd63e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0xcd4e568] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.GetCustomSkeletalMeshUid
	// bool GetCustomSkeletalMeshUid(FString& AttributeValue);                                                                  // [0xcd61840] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode
/// Size: 0x0020 (0x000140 - 0x000160)
class UInterchangeSceneVariantSetsFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.RemoveCustomVariantSetUid
	// bool RemoveCustomVariantSetUid(FString VariantUID);                                                                      // [0xcd654a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0xcd4e568] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUids
	// void GetCustomVariantSetUids(TArray<FString>& OutVariantUids);                                                           // [0xcd62c08] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUidCount
	// int32_t GetCustomVariantSetUidCount();                                                                                   // [0xcd62bdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUid
	// void GetCustomVariantSetUid(int32_t Index, FString& OutVariantUid);                                                      // [0xcd62548] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.AddCustomVariantSetUid
	// bool AddCustomVariantSetUid(FString VariantUID);                                                                         // [0xcd5ef00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode
/// Size: 0x0050 (0x000140 - 0x000190)
class UInterchangeSkeletonFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomUseTimeZeroForBindPose
	// bool SetCustomUseTimeZeroForBindPose(bool& AttributeValue);                                                              // [0xcd69b9c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomSkeletalMeshFactoryNodeUid
	// bool SetCustomSkeletalMeshFactoryNodeUid(FString AttributeValue);                                                        // [0xcd6884c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomRootJointUid
	// bool SetCustomRootJointUid(FString AttributeValue);                                                                      // [0xcd680bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.InitializeSkeletonNode
	// void InitializeSkeletonNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);                               // [0xcd645cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0xcd4e568] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomUseTimeZeroForBindPose
	// bool GetCustomUseTimeZeroForBindPose(bool& AttributeValue);                                                              // [0xcd624b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomSkeletalMeshFactoryNodeUid
	// bool GetCustomSkeletalMeshFactoryNodeUid(FString& AttributeValue);                                                       // [0xcd61208] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomRootJointUid
	// bool GetCustomRootJointUid(FString& AttributeValue);                                                                     // [0xcd60b38] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode
/// Size: 0x0290 (0x000140 - 0x0003D0)
class UInterchangeTextureFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomVirtualTextureStreaming
	// bool SetCustomVirtualTextureStreaming(bool& AttributeValue, bool bAddApplyDelegate);                                     // [0xcd69c34] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomTranslatedTextureNodeUid
	// bool SetCustomTranslatedTextureNodeUid(FString AttributeValue);                                                          // [0xcd6952c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomSRGB
	// bool SetCustomSRGB(bool& AttributeValue, bool bAddApplyDelegate);                                                        // [0xcd6872c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPreferCompressedSourceData
	// bool SetCustomPreferCompressedSourceData(bool& AttributeValue);                                                          // [0xcd68024] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPowerOfTwoMode
	// bool SetCustomPowerOfTwoMode(char& AttributeValue, bool bAddApplyDelegate);                                              // [0xcd67f0c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPaddingColor
	// bool SetCustomPaddingColor(FColor& AttributeValue, bool bAddApplyDelegate);                                              // [0xcd67d58] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMipLoadOptions
	// bool SetCustomMipLoadOptions(char& AttributeValue, bool bAddApplyDelegate);                                              // [0xcd67c38] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMipGenSettings
	// bool SetCustomMipGenSettings(char& AttributeValue, bool bAddApplyDelegate);                                              // [0xcd67b20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMaxTextureSize
	// bool SetCustomMaxTextureSize(int32_t& AttributeValue, bool bAddApplyDelegate);                                           // [0xcd679d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLossyCompressionAmount
	// bool SetCustomLossyCompressionAmount(char& AttributeValue, bool bAddApplyDelegate);                                      // [0xcd678b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLODGroup
	// bool SetCustomLODGroup(char& AttributeValue, bool bAddApplyDelegate);                                                    // [0xcd67798] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLODBias
	// bool SetCustomLODBias(int32_t& AttributeValue, bool bAddApplyDelegate);                                                  // [0xcd67640] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomFilter
	// bool SetCustomFilter(char& AttributeValue, bool bAddApplyDelegate);                                                      // [0xcd67520] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDownscaleOptions
	// bool SetCustomDownscaleOptions(char& AttributeValue, bool bAddApplyDelegate);                                            // [0xcd67400] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDownscale
	// bool SetCustomDownscale(float& AttributeValue, bool bAddApplyDelegate);                                                  // [0xcd672e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDeferCompression
	// bool SetCustomDeferCompression(bool& AttributeValue, bool bAddApplyDelegate);                                            // [0xcd671c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionSettings
	// bool SetCustomCompressionSettings(char& AttributeValue, bool bAddApplyDelegate);                                         // [0xcd670a8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionQuality
	// bool SetCustomCompressionQuality(char& AttributeValue, bool bAddApplyDelegate);                                          // [0xcd66f90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionNoAlpha
	// bool SetCustomCompressionNoAlpha(bool& AttributeValue, bool bAddApplyDelegate);                                          // [0xcd66e78] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompositeTextureMode
	// bool SetCustomCompositeTextureMode(char& AttributeValue, bool bAddApplyDelegate);                                        // [0xcd66d60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompositePower
	// bool SetCustomCompositePower(float& AttributeValue, bool bAddApplyDelegate);                                             // [0xcd66c48] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomChromaKeyThreshold
	// bool SetCustomChromaKeyThreshold(float& AttributeValue, bool bAddApplyDelegate);                                         // [0xcd66b30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomChromaKeyColor
	// bool SetCustomChromaKeyColor(FColor& AttributeValue, bool bAddApplyDelegate);                                            // [0xcd6697c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombUseLegacyGamma
	// bool SetCustombUseLegacyGamma(bool& AttributeValue, bool bAddApplyDelegate);                                             // [0xcd6a1b4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombPreserveBorder
	// bool SetCustombPreserveBorder(bool& AttributeValue, bool bAddApplyDelegate);                                             // [0xcd6a09c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombFlipGreenChannel
	// bool SetCustombFlipGreenChannel(bool& AttributeValue, bool bAddApplyDelegate);                                           // [0xcd69f84] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombDoScaleMipsForAlphaCoverage
	// bool SetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue, bool bAddApplyDelegate);                                // [0xcd69e6c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombChromaKeyTexture
	// bool SetCustombChromaKeyTexture(bool& AttributeValue, bool bAddApplyDelegate);                                           // [0xcd69d54] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAlphaCoverageThresholds
	// bool SetCustomAlphaCoverageThresholds(FVector4& AttributeValue, bool bAddApplyDelegate);                                 // [0xcd66854] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAllowNonPowerOfTwo
	// bool SetCustomAllowNonPowerOfTwo(bool& AttributeValue);                                                                  // [0xcd667bc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustVibrance
	// bool SetCustomAdjustVibrance(float& AttributeValue, bool bAddApplyDelegate);                                             // [0xcd666a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustSaturation
	// bool SetCustomAdjustSaturation(float& AttributeValue, bool bAddApplyDelegate);                                           // [0xcd6658c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustRGBCurve
	// bool SetCustomAdjustRGBCurve(float& AttributeValue, bool bAddApplyDelegate);                                             // [0xcd66474] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustMinAlpha
	// bool SetCustomAdjustMinAlpha(float& AttributeValue, bool bAddApplyDelegate);                                             // [0xcd6635c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustMaxAlpha
	// bool SetCustomAdjustMaxAlpha(float& AttributeValue, bool bAddApplyDelegate);                                             // [0xcd66244] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustHue
	// bool SetCustomAdjustHue(float& AttributeValue, bool bAddApplyDelegate);                                                  // [0xcd6612c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustBrightnessCurve
	// bool SetCustomAdjustBrightnessCurve(float& AttributeValue, bool bAddApplyDelegate);                                      // [0xcd66014] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustBrightness
	// bool SetCustomAdjustBrightness(float& AttributeValue, bool bAddApplyDelegate);                                           // [0xcd65efc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.InitializeTextureNode
	// void InitializeTextureNode(FString UniqueID, FString DisplayLabel, FString InAssetName);                                 // [0xcd64d38] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0xcd4e568] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomVirtualTextureStreaming
	// bool GetCustomVirtualTextureStreaming(bool& AttributeValue);                                                             // [0xcd62ca4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomTranslatedTextureNodeUid
	// bool GetCustomTranslatedTextureNodeUid(FString& AttributeValue);                                                         // [0xcd61e78] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomSRGB
	// bool GetCustomSRGB(bool& AttributeValue);                                                                                // [0xcd61170] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPreferCompressedSourceData
	// bool GetCustomPreferCompressedSourceData(bool& AttributeValue);                                                          // [0xcd60aa0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPowerOfTwoMode
	// bool GetCustomPowerOfTwoMode(char& AttributeValue);                                                                      // [0xcd60a08] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPaddingColor
	// bool GetCustomPaddingColor(FColor& AttributeValue);                                                                      // [0xcd60934] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMipLoadOptions
	// bool GetCustomMipLoadOptions(char& AttributeValue);                                                                      // [0xcd6089c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMipGenSettings
	// bool GetCustomMipGenSettings(char& AttributeValue);                                                                      // [0xcd60804] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMaxTextureSize
	// bool GetCustomMaxTextureSize(int32_t& AttributeValue);                                                                   // [0xcd60730] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLossyCompressionAmount
	// bool GetCustomLossyCompressionAmount(char& AttributeValue);                                                              // [0xcd60698] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLODGroup
	// bool GetCustomLODGroup(char& AttributeValue);                                                                            // [0xcd60600] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLODBias
	// bool GetCustomLODBias(int32_t& AttributeValue);                                                                          // [0xcd6052c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomFilter
	// bool GetCustomFilter(char& AttributeValue);                                                                              // [0xcd60494] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDownscaleOptions
	// bool GetCustomDownscaleOptions(char& AttributeValue);                                                                    // [0xcd603fc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDownscale
	// bool GetCustomDownscale(float& AttributeValue);                                                                          // [0xcd60364] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDeferCompression
	// bool GetCustomDeferCompression(bool& AttributeValue);                                                                    // [0xcd602cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionSettings
	// bool GetCustomCompressionSettings(char& AttributeValue);                                                                 // [0xcd60234] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionQuality
	// bool GetCustomCompressionQuality(char& AttributeValue);                                                                  // [0xcd6019c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionNoAlpha
	// bool GetCustomCompressionNoAlpha(bool& AttributeValue);                                                                  // [0xcd60104] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompositeTextureMode
	// bool GetCustomCompositeTextureMode(char& AttributeValue);                                                                // [0xcd6006c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompositePower
	// bool GetCustomCompositePower(float& AttributeValue);                                                                     // [0xcd5ffd4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomChromaKeyThreshold
	// bool GetCustomChromaKeyThreshold(float& AttributeValue);                                                                 // [0xcd5ff3c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomChromaKeyColor
	// bool GetCustomChromaKeyColor(FColor& AttributeValue);                                                                    // [0xcd5fe68] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombUseLegacyGamma
	// bool GetCustombUseLegacyGamma(bool& AttributeValue);                                                                     // [0xcd62f9c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombPreserveBorder
	// bool GetCustombPreserveBorder(bool& AttributeValue);                                                                     // [0xcd62f04] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombFlipGreenChannel
	// bool GetCustombFlipGreenChannel(bool& AttributeValue);                                                                   // [0xcd62e6c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombDoScaleMipsForAlphaCoverage
	// bool GetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue);                                                        // [0xcd62dd4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombChromaKeyTexture
	// bool GetCustombChromaKeyTexture(bool& AttributeValue);                                                                   // [0xcd62d3c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAlphaCoverageThresholds
	// bool GetCustomAlphaCoverageThresholds(FVector4& AttributeValue);                                                         // [0xcd5fdc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAllowNonPowerOfTwo
	// bool GetCustomAllowNonPowerOfTwo(bool& AttributeValue);                                                                  // [0xcd5fd28] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustVibrance
	// bool GetCustomAdjustVibrance(float& AttributeValue);                                                                     // [0xcd5fc90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustSaturation
	// bool GetCustomAdjustSaturation(float& AttributeValue);                                                                   // [0xcd5fbf8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustRGBCurve
	// bool GetCustomAdjustRGBCurve(float& AttributeValue);                                                                     // [0xcd5fb60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustMinAlpha
	// bool GetCustomAdjustMinAlpha(float& AttributeValue);                                                                     // [0xcd5fac8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustMaxAlpha
	// bool GetCustomAdjustMaxAlpha(float& AttributeValue);                                                                     // [0xcd5fa30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustHue
	// bool GetCustomAdjustHue(float& AttributeValue);                                                                          // [0xcd5f998] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustBrightnessCurve
	// bool GetCustomAdjustBrightnessCurve(float& AttributeValue);                                                              // [0xcd5f900] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustBrightness
	// bool GetCustomAdjustBrightness(float& AttributeValue);                                                                   // [0xcd5f868] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode
/// Size: 0x0030 (0x0003D0 - 0x000400)
class UInterchangeTexture2DArrayFactoryNode : public UInterchangeTextureFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.SetCustomAddressZ
	// bool SetCustomAddressZ(char AttributeValue, bool bAddApplyDelegate);                                                     // [0xcd65db4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressZ
	// bool GetCustomAddressZ(char& AttributeValue);                                                                            // [0xcd5f7d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressY
	// bool GetCustomAddressY(char& AttributeValue);                                                                            // [0xcd5f6a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressX
	// bool GetCustomAddressX(char& AttributeValue);                                                                            // [0xcd5f570] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode
/// Size: 0x0098 (0x0003D0 - 0x000468)
class UInterchangeTexture2DFactoryNode : public UInterchangeTextureFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlocks
	// void SetSourceBlocks(TMap<int32_t, FString>& InSourceBlocks);                                                            // [0xcd6b0f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlockByCoordinates
	// void SetSourceBlockByCoordinates(int32_t X, int32_t Y, FString InSourceFile);                                            // [0xcd6a99c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlock
	// void SetSourceBlock(int32_t BlockIndex, FString InSourceFile);                                                           // [0xcd6a2cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetCustomAddressY
	// bool SetCustomAddressY(TEnumAsByte<TextureAddress> AttributeValue, bool bAddApplyDelegate);                              // [0xcd65c64] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetCustomAddressX
	// bool SetCustomAddressX(TEnumAsByte<TextureAddress> AttributeValue, bool bAddApplyDelegate);                              // [0xcd65b14] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlocks
	// TMap<int32_t, FString> GetSourceBlocks();                                                                                // [0xcd63de4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlockByCoordinates
	// bool GetSourceBlockByCoordinates(int32_t X, int32_t Y, FString& OutSourceFile);                                          // [0xcd636d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlock
	// bool GetSourceBlock(int32_t BlockIndex, FString& OutSourceFile);                                                         // [0xcd63034] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetCustomAddressY
	// bool GetCustomAddressY(TEnumAsByte<TextureAddress>& AttributeValue);                                                     // [0xcd5f738] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetCustomAddressX
	// bool GetCustomAddressX(TEnumAsByte<TextureAddress>& AttributeValue);                                                     // [0xcd5f608] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureCubeArrayFactoryNode
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UInterchangeTextureCubeArrayFactoryNode : public UInterchangeTextureFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureCubeFactoryNode
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UInterchangeTextureCubeFactoryNode : public UInterchangeTextureFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode
/// Size: 0x0020 (0x000468 - 0x000488)
class UInterchangeTextureLightProfileFactoryNode : public UInterchangeTexture2DFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.SetCustomTextureMultiplier
	// bool SetCustomTextureMultiplier(float AttributeValue, bool bAddApplyDelegate);                                           // [0xcdbc458] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.SetCustomBrightness
	// bool SetCustomBrightness(float AttributeValue, bool bAddApplyDelegate);                                                  // [0xcdb5b94] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.GetCustomTextureMultiplier
	// bool GetCustomTextureMultiplier(float& AttributeValue);                                                                  // [0xcda62e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.GetCustomBrightness
	// bool GetCustomBrightness(float& AttributeValue);                                                                         // [0xcda0900] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeVolumeTextureFactoryNode
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UInterchangeVolumeTextureFactoryNode : public UInterchangeTextureFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode
/// Size: 0x0340 (0x000140 - 0x000480)
class UInterchangeAnimSequenceFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomSkeletonSoftObjectPath
	// bool SetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue);                                                   // [0xcdbaf28] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomSkeletonFactoryNodeUid
	// bool SetCustomSkeletonFactoryNodeUid(FString AttributeValue);                                                            // [0xcdba8b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomRemoveCurveRedundantKeys
	// bool SetCustomRemoveCurveRedundantKeys(bool& AttributeValue);                                                            // [0xcdba548] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomMaterialDriveParameterOnCustomAttribute
	// bool SetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue);                                             // [0xcdb8844] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksSampleRate
	// bool SetCustomImportBoneTracksSampleRate(double& AttributeValue);                                                        // [0xcdb7d28] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksRangeStop
	// bool SetCustomImportBoneTracksRangeStop(double& AttributeValue);                                                         // [0xcdb7c8c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksRangeStart
	// bool SetCustomImportBoneTracksRangeStart(double& AttributeValue);                                                        // [0xcdb7bf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracks
	// bool SetCustomImportBoneTracks(bool& AttributeValue);                                                                    // [0xcdb7b58] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportAttributeCurves
	// bool SetCustomImportAttributeCurves(bool& AttributeValue);                                                               // [0xcdb7ac0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDoNotImportCurveWithZero
	// bool SetCustomDoNotImportCurveWithZero(bool& AttributeValue);                                                            // [0xcdb6c1c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingNonCurveCustomAttributes
	// bool SetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue);                                              // [0xcdb6340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingMorphTargetCurves
	// bool SetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue);                                                     // [0xcdb62a8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingCustomAttributeCurves
	// bool SetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue);                                                 // [0xcdb6210] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomAddCurveMetadataToSkeleton
	// bool SetCustomAddCurveMetadataToSkeleton(bool& AttributeValue);                                                          // [0xcdb5214] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimationPayloadKeysForSceneNodeUids
	// void SetAnimationPayloadKeysForSceneNodeUids(TMap<FString, FString>& SceneNodeAnimationPayloadKeyUids, TMap<FString, char>& SceneNodeAnimationPayloadKeyTypes); // [0xcdb491c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimationPayloadKeysForMorphTargetNodeUids
	// void SetAnimationPayloadKeysForMorphTargetNodeUids(TMap<FString, FString>& MorphTargetAnimationPayloadKeyUids, TMap<FString, char>& MorphTargetAnimationPayloadKeyTypes); // [0xcdb47ac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedMaterialCurveSuffixe
	// bool SetAnimatedMaterialCurveSuffixe(FString MaterialCurveSuffixe);                                                      // [0xcdb413c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedAttributeStepCurveName
	// bool SetAnimatedAttributeStepCurveName(FString AttributeStepCurveName);                                                  // [0xcdb3acc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedAttributeCurveName
	// bool SetAnimatedAttributeCurveName(FString AttributeCurveName);                                                          // [0xcdb345c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedMaterialCurveSuffixe
	// bool RemoveAnimatedMaterialCurveSuffixe(FString MaterialCurveSuffixe);                                                   // [0xcdafa34] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedAttributeStepCurveName
	// bool RemoveAnimatedAttributeStepCurveName(FString AttributeStepCurveName);                                               // [0xcdaf3c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedAttributeCurveName
	// bool RemoveAnimatedAttributeCurveName(FString AttributeCurveName);                                                       // [0xcdaed54] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.InitializeAnimSequenceNode
	// void InitializeAnimSequenceNode(FString UniqueID, FString DisplayLabel);                                                 // [0xcdad694] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetSceneNodeAnimationPayloadKeys
	// void GetSceneNodeAnimationPayloadKeys(TMap<FString, FInterchangeAnimationPayLoadKey>& OutSceneNodeAnimationPayloadKeys); // [0xcdaaa7c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0xcd4e568] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetMorphTargetNodeAnimationPayloadKeys
	// void GetMorphTargetNodeAnimationPayloadKeys(TMap<FString, FInterchangeAnimationPayLoadKey>& OutMorphTargetNodeAnimationPayloads); // [0xcda87cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomSkeletonSoftObjectPath
	// bool GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue);                                                   // [0xcda4ef8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomSkeletonFactoryNodeUid
	// bool GetCustomSkeletonFactoryNodeUid(FString& AttributeValue);                                                           // [0xcda48c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomRemoveCurveRedundantKeys
	// bool GetCustomRemoveCurveRedundantKeys(bool& AttributeValue);                                                            // [0xcda4660] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomMaterialDriveParameterOnCustomAttribute
	// bool GetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue);                                             // [0xcda2dfc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksSampleRate
	// bool GetCustomImportBoneTracksSampleRate(double& AttributeValue);                                                        // [0xcda2398] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksRangeStop
	// bool GetCustomImportBoneTracksRangeStop(double& AttributeValue);                                                         // [0xcda22fc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksRangeStart
	// bool GetCustomImportBoneTracksRangeStart(double& AttributeValue);                                                        // [0xcda2260] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracks
	// bool GetCustomImportBoneTracks(bool& AttributeValue);                                                                    // [0xcda21c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportAttributeCurves
	// bool GetCustomImportAttributeCurves(bool& AttributeValue);                                                               // [0xcda2130] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDoNotImportCurveWithZero
	// bool GetCustomDoNotImportCurveWithZero(bool& AttributeValue);                                                            // [0xcda1550] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingNonCurveCustomAttributes
	// bool GetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue);                                              // [0xcda0dfc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingMorphTargetCurves
	// bool GetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue);                                                     // [0xcda0d64] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingCustomAttributeCurves
	// bool GetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue);                                                 // [0xcda0ccc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomAddCurveMetadataToSkeleton
	// bool GetCustomAddCurveMetadataToSkeleton(bool& AttributeValue);                                                          // [0xcda00c4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixesCount
	// int32_t GetAnimatedMaterialCurveSuffixesCount();                                                                         // [0xcd9cf80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixes
	// void GetAnimatedMaterialCurveSuffixes(TArray<FString>& OutMaterialCurveSuffixes);                                        // [0xcd9cee4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixe
	// void GetAnimatedMaterialCurveSuffixe(int32_t Index, FString& OutMaterialCurveSuffixe);                                   // [0xcd9c850] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveNamesCount
	// int32_t GetAnimatedAttributeStepCurveNamesCount();                                                                       // [0xcd9c824] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveNames
	// void GetAnimatedAttributeStepCurveNames(TArray<FString>& OutAttributeStepCurveNames);                                    // [0xcd9c788] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveName
	// void GetAnimatedAttributeStepCurveName(int32_t Index, FString& OutAttributeStepCurveName);                               // [0xcd9c0f4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveNamesCount
	// int32_t GetAnimatedAttributeCurveNamesCount();                                                                           // [0xcd9c0c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveNames
	// void GetAnimatedAttributeCurveNames(TArray<FString>& OutAttributeCurveNames);                                            // [0xcd9c02c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveName
	// void GetAnimatedAttributeCurveName(int32_t Index, FString& OutAttributeCurveName);                                       // [0xcd9b998] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode
/// Size: 0x0020 (0x000140 - 0x000160)
class UInterchangeCommonPipelineDataFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.SetCustomGlobalOffsetTransform
	// bool SetCustomGlobalOffsetTransform(class UInterchangeBaseNodeContainer* NodeContainer, FTransform& AttributeValue);     // [0xcdb77c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.SetBakeMeshes
	// bool SetBakeMeshes(class UInterchangeBaseNodeContainer* NodeContainer, bool& AttributeValue);                            // [0xcdb4a8c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.GetCustomGlobalOffsetTransform
	// bool GetCustomGlobalOffsetTransform(FTransform& AttributeValue);                                                         // [0xcda1f28] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.GetBakeMeshes
	// bool GetBakeMeshes(bool& AttributeValue);                                                                                // [0xcd9d654] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode
/// Size: 0x0070 (0x000150 - 0x0001C0)
class UInterchangeMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomTwoSided
	// bool SetCustomTwoSided(bool& AttributeValue, bool bAddApplyDelegate);                                                    // [0xcdbca24] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomTranslucencyLightingMode
	// bool SetCustomTranslucencyLightingMode(TEnumAsByte<ETranslucencyLightingMode>& AttributeValue, bool bAddApplyDelegate);  // [0xcdbc904] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomShadingModel
	// bool SetCustomShadingModel(TEnumAsByte<EMaterialShadingModel>& AttributeValue, bool bAddApplyDelegate);                  // [0xcdba798] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomScreenSpaceReflections
	// bool SetCustomScreenSpaceReflections(bool& AttributeValue);                                                              // [0xcdba700] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomRefractionMethod
	// bool SetCustomRefractionMethod(TEnumAsByte<ERefractionMode>& AttributeValue, bool bAddApplyDelegate);                    // [0xcdba428] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomOpacityMaskClipValue
	// bool SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate);                                       // [0xcdb9434] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomBlendMode
	// bool SetCustomBlendMode(TEnumAsByte<EBlendMode>& AttributeValue, bool bAddApplyDelegate);                                // [0xcdb591c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetTransmissionColorConnection
	// bool GetTransmissionColorConnection(FString& ExpressionNodeUid, FString& OutputName);                                    // [0xcdacfec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetTangentConnection
	// bool GetTangentConnection(FString& ExpressionNodeUid, FString& OutputName);                                              // [0xcdac944] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetSubsurfaceConnection
	// bool GetSubsurfaceConnection(FString& ExpressionNodeUid, FString& OutputName);                                           // [0xcdac29c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetSpecularConnection
	// bool GetSpecularConnection(FString& ExpressionNodeUid, FString& OutputName);                                             // [0xcdabb2c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetRoughnessConnection
	// bool GetRoughnessConnection(FString& ExpressionNodeUid, FString& OutputName);                                            // [0xcdaa3d4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetRefractionConnection
	// bool GetRefractionConnection(FString& ExpressionNodeUid, FString& OutputName);                                           // [0xcda9d2c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetOpacityConnection
	// bool GetOpacityConnection(FString& ExpressionNodeUid, FString& OutputName);                                              // [0xcda9684] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetOcclusionConnection
	// bool GetOcclusionConnection(FString& ExpressionNodeUid, FString& OutputName);                                            // [0xcda8f44] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0xcd4e568] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetNormalConnection
	// bool GetNormalConnection(FString& ExpressionNodeUid, FString& OutputName);                                               // [0xcda889c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetMetallicConnection
	// bool GetMetallicConnection(FString& ExpressionNodeUid, FString& OutputName);                                             // [0xcda8124] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetFuzzColorConnection
	// bool GetFuzzColorConnection(FString& ExpressionNodeUid, FString& OutputName);                                            // [0xcda7218] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetEmissiveColorConnection
	// bool GetEmissiveColorConnection(FString& ExpressionNodeUid, FString& OutputName);                                        // [0xcda6b70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomTwoSided
	// bool GetCustomTwoSided(bool& AttributeValue);                                                                            // [0xcda65dc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomTranslucencyLightingMode
	// bool GetCustomTranslucencyLightingMode(TEnumAsByte<ETranslucencyLightingMode>& AttributeValue);                          // [0xcda6544] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomShadingModel
	// bool GetCustomShadingModel(TEnumAsByte<EMaterialShadingModel>& AttributeValue);                                          // [0xcda4828] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomScreenSpaceReflections
	// bool GetCustomScreenSpaceReflections(bool& AttributeValue);                                                              // [0xcda4790] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomRefractionMethod
	// bool GetCustomRefractionMethod(TEnumAsByte<ERefractionMode>& AttributeValue);                                            // [0xcda45c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomOpacityMaskClipValue
	// bool GetCustomOpacityMaskClipValue(float& AttributeValue);                                                               // [0xcda37a4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomBlendMode
	// bool GetCustomBlendMode(TEnumAsByte<EBlendMode>& AttributeValue);                                                        // [0xcda0794] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClothConnection
	// bool GetClothConnection(FString& ExpressionNodeUid, FString& OutputName);                                                // [0xcd9f31c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatRoughnessConnection
	// bool GetClearCoatRoughnessConnection(FString& ExpressionNodeUid, FString& OutputName);                                   // [0xcd9ec74] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatNormalConnection
	// bool GetClearCoatNormalConnection(FString& ExpressionNodeUid, FString& OutputName);                                      // [0xcd9e5cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatConnection
	// bool GetClearCoatConnection(FString& ExpressionNodeUid, FString& OutputName);                                            // [0xcd9df24] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetBaseColorConnection
	// bool GetBaseColorConnection(FString& ExpressionNodeUid, FString& OutputName);                                            // [0xcd9d6ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetAnisotropyConnection
	// bool GetAnisotropyConnection(FString& ExpressionNodeUid, FString& OutputName);                                           // [0xcd9cfac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToTransmissionColor
	// bool ConnectToTransmissionColor(FString AttributeValue);                                                                 // [0xcd9b320] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToTangent
	// bool ConnectToTangent(FString ExpressionNodeUid);                                                                        // [0xcd9aca8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToSubsurface
	// bool ConnectToSubsurface(FString ExpressionNodeUid);                                                                     // [0xcd9a630] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToSpecular
	// bool ConnectToSpecular(FString ExpressionNodeUid);                                                                       // [0xcd99fb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToRoughness
	// bool ConnectToRoughness(FString ExpressionNodeUid);                                                                      // [0xcd99940] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToRefraction
	// bool ConnectToRefraction(FString AttributeValue);                                                                        // [0xcd992d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToOpacity
	// bool ConnectToOpacity(FString AttributeValue);                                                                           // [0xcd98c58] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToOcclusion
	// bool ConnectToOcclusion(FString AttributeValue);                                                                         // [0xcd985e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToNormal
	// bool ConnectToNormal(FString ExpressionNodeUid);                                                                         // [0xcd97f68] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToMetallic
	// bool ConnectToMetallic(FString AttributeValue);                                                                          // [0xcd978f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToFuzzColor
	// bool ConnectToFuzzColor(FString AttributeValue);                                                                         // [0xcd97278] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToEmissiveColor
	// bool ConnectToEmissiveColor(FString ExpressionNodeUid);                                                                  // [0xcd96c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToCloth
	// bool ConnectToCloth(FString AttributeValue);                                                                             // [0xcd96588] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoatRoughness
	// bool ConnectToClearCoatRoughness(FString AttributeValue);                                                                // [0xcd95f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoatNormal
	// bool ConnectToClearCoatNormal(FString AttributeValue);                                                                   // [0xcd95898] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoat
	// bool ConnectToClearCoat(FString AttributeValue);                                                                         // [0xcd95220] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToBaseColor
	// bool ConnectToBaseColor(FString AttributeValue);                                                                         // [0xcd94ba8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToAnisotropy
	// bool ConnectToAnisotropy(FString ExpressionNodeUid);                                                                     // [0xcd94530] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToTransmissionColor
	// bool ConnectOutputToTransmissionColor(FString ExpressionNodeUid, FString OutputName);                                    // [0xcd93e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToTangent
	// bool ConnectOutputToTangent(FString ExpressionNodeUid, FString OutputName);                                              // [0xcd93770] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToSubsurface
	// bool ConnectOutputToSubsurface(FString ExpressionNodeUid, FString OutputName);                                           // [0xcd93090] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToSpecular
	// bool ConnectOutputToSpecular(FString ExpressionNodeUid, FString OutputName);                                             // [0xcd929b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToRoughness
	// bool ConnectOutputToRoughness(FString ExpressionNodeUid, FString OutputName);                                            // [0xcd922d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToRefraction
	// bool ConnectOutputToRefraction(FString ExpressionNodeUid, FString OutputName);                                           // [0xcd91bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToOpacity
	// bool ConnectOutputToOpacity(FString ExpressionNodeUid, FString OutputName);                                              // [0xcd91510] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToOcclusion
	// bool ConnectOutputToOcclusion(FString ExpressionNodeUid, FString OutputName);                                            // [0xcd90e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToNormal
	// bool ConnectOutputToNormal(FString ExpressionNodeUid, FString OutputName);                                               // [0xcd90750] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToMetallic
	// bool ConnectOutputToMetallic(FString ExpressionNodeUid, FString OutputName);                                             // [0xcd90070] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToFuzzColor
	// bool ConnectOutputToFuzzColor(FString ExpressionNodeUid, FString OutputName);                                            // [0xcd8f990] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToEmissiveColor
	// bool ConnectOutputToEmissiveColor(FString ExpressionNodeUid, FString OutputName);                                        // [0xcd8f2b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToCloth
	// bool ConnectOutputToCloth(FString ExpressionNodeUid, FString OutputName);                                                // [0xcd8ebd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoatRoughness
	// bool ConnectOutputToClearCoatRoughness(FString ExpressionNodeUid, FString OutputName);                                   // [0xcd8e4f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoatNormal
	// bool ConnectOutputToClearCoatNormal(FString ExpressionNodeUid, FString OutputName);                                      // [0xcd8de10] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoat
	// bool ConnectOutputToClearCoat(FString ExpressionNodeUid, FString OutputName);                                            // [0xcd8d730] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToBaseColor
	// bool ConnectOutputToBaseColor(FString ExpressionNodeUid, FString OutputName);                                            // [0xcd8d050] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToAnisotropy
	// bool ConnectOutputToAnisotropy(FString ExpressionNodeUid, FString OutputName);                                           // [0xcd8c970] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode
/// Size: 0x0010 (0x000140 - 0x000150)
class UInterchangeMaterialExpressionFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode.SetCustomExpressionClassName
	// bool SetCustomExpressionClassName(FString AttributeValue);                                                               // [0xcdb6e0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode.GetCustomExpressionClassName
	// bool GetCustomExpressionClassName(FString& AttributeValue);                                                              // [0xcda16bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode
/// Size: 0x0020 (0x000150 - 0x000170)
class UInterchangeMaterialInstanceFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.SetCustomParent
	// bool SetCustomParent(FString AttributeValue);                                                                            // [0xcdb9554] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.SetCustomInstanceClassName
	// bool SetCustomInstanceClassName(FString AttributeValue);                                                                 // [0xcdb7f8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.GetCustomParent
	// bool GetCustomParent(FString& AttributeValue);                                                                           // [0xcda383c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.GetCustomInstanceClassName
	// bool GetCustomInstanceClassName(FString& AttributeValue);                                                                // [0xcda25fc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode
/// Size: 0x0010 (0x000150 - 0x000160)
class UInterchangeMaterialFunctionCallExpressionFactoryNode : public UInterchangeMaterialExpressionFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode.SetCustomMaterialFunctionDependency
	// bool SetCustomMaterialFunctionDependency(FString AttributeValue);                                                        // [0xcdb88dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode.GetCustomMaterialFunctionDependency
	// bool GetCustomMaterialFunctionDependency(FString& AttributeValue);                                                       // [0xcda2e94] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode
/// Size: 0x0000 (0x000150 - 0x000150)
class UInterchangeMaterialFunctionFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0xcd4e568] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode.GetInputConnection
	// bool GetInputConnection(FString InputName, FString& ExpressionNodeUid, FString& OutputName);                             // [0xcda7958] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode
/// Size: 0x0098 (0x000180 - 0x000218)
class UInterchangeMeshActorFactoryNode : public UInterchangeActorFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetSlotMaterialDependencyUid
	// bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);                                      // [0xcdbd488] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetCustomGeometricTransform
	// bool SetCustomGeometricTransform(FTransform& AttributeValue);                                                            // [0xcdb76bc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetCustomAnimationAssetUidToPlay
	// bool SetCustomAnimationAssetUidToPlay(FString AttributeValue);                                                           // [0xcdb52ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.RemoveSlotMaterialDependencyUid
	// bool RemoveSlotMaterialDependencyUid(FString SlotName);                                                                  // [0xcdb1a64] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetSlotMaterialDependencyUid
	// bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);                                     // [0xcdaad14] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetSlotMaterialDependencies
	// void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies);                                       // [0xcdaab4c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetCustomGeometricTransform
	// bool GetCustomGeometricTransform(FTransform& AttributeValue);                                                            // [0xcda1e24] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetCustomAnimationAssetUidToPlay
	// bool GetCustomAnimationAssetUidToPlay(FString& AttributeValue);                                                          // [0xcda015c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode
/// Size: 0x0180 (0x000140 - 0x0002C0)
class UInterchangeMeshFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetSlotMaterialDependencyUid
	// bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);                                      // [0xcdbdb64] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorReplace
	// bool SetCustomVertexColorReplace(bool& AttributeValue);                                                                  // [0xcdbd250] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorOverride
	// bool SetCustomVertexColorOverride(FColor& AttributeValue);                                                               // [0xcdbd17c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorIgnore
	// bool SetCustomVertexColorIgnore(bool& AttributeValue);                                                                   // [0xcdbd0e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseMikkTSpace
	// bool SetCustomUseMikkTSpace(bool& AttributeValue, bool bAddApplyDelegate);                                               // [0xcdbcfc4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseHighPrecisionTangentBasis
	// bool SetCustomUseHighPrecisionTangentBasis(bool& AttributeValue, bool bAddApplyDelegate);                                // [0xcdbcea4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseFullPrecisionUVs
	// bool SetCustomUseFullPrecisionUVs(bool& AttributeValue, bool bAddApplyDelegate);                                         // [0xcdbcc64] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseBackwardsCompatibleF16TruncUVs
	// bool SetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue, bool bAddApplyDelegate);                           // [0xcdbcb44] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRemoveDegenerates
	// bool SetCustomRemoveDegenerates(bool& AttributeValue, bool bAddApplyDelegate);                                           // [0xcdba5e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRecomputeTangents
	// bool SetCustomRecomputeTangents(bool& AttributeValue, bool bAddApplyDelegate);                                           // [0xcdba308] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRecomputeNormals
	// bool SetCustomRecomputeNormals(bool& AttributeValue, bool bAddApplyDelegate);                                            // [0xcdba1e8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomLODGroup
	// bool SetCustomLODGroup(FName& AttributeValue, bool bAddApplyDelegate);                                                   // [0xcdb872c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomKeepSectionsSeparate
	// bool SetCustomKeepSectionsSeparate(bool& AttributeValue);                                                                // [0xcdb8694] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomComputeWeightedNormals
	// bool SetCustomComputeWeightedNormals(bool& AttributeValue, bool bAddApplyDelegate);                                      // [0xcdb6058] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.ResetSlotMaterialDependencies
	// bool ResetSlotMaterialDependencies();                                                                                    // [0xcdb3438] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.RemoveSlotMaterialDependencyUid
	// bool RemoveSlotMaterialDependencyUid(FString SlotName);                                                                  // [0xcdb20d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.RemoveLodDataUniqueId
	// bool RemoveLodDataUniqueId(FString LodDataUniqueId);                                                                     // [0xcdb13f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetSlotMaterialDependencyUid
	// bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);                                     // [0xcdab3bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetSlotMaterialDependencies
	// void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies);                                       // [0xcdaac30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetLodDataUniqueIds
	// void GetLodDataUniqueIds(TArray<FString>& OutLodDataUniqueIds);                                                          // [0xcda8088] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetLodDataCount
	// int32_t GetLodDataCount();                                                                                               // [0xcda8064] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorReplace
	// bool GetCustomVertexColorReplace(bool& AttributeValue);                                                                  // [0xcda6ad8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorOverride
	// bool GetCustomVertexColorOverride(FColor& AttributeValue);                                                               // [0xcda6a04] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorIgnore
	// bool GetCustomVertexColorIgnore(bool& AttributeValue);                                                                   // [0xcda696c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseMikkTSpace
	// bool GetCustomUseMikkTSpace(bool& AttributeValue);                                                                       // [0xcda68d4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseHighPrecisionTangentBasis
	// bool GetCustomUseHighPrecisionTangentBasis(bool& AttributeValue);                                                        // [0xcda683c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseFullPrecisionUVs
	// bool GetCustomUseFullPrecisionUVs(bool& AttributeValue);                                                                 // [0xcda670c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseBackwardsCompatibleF16TruncUVs
	// bool GetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue);                                                   // [0xcda6674] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRemoveDegenerates
	// bool GetCustomRemoveDegenerates(bool& AttributeValue);                                                                   // [0xcda46f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRecomputeTangents
	// bool GetCustomRecomputeTangents(bool& AttributeValue);                                                                   // [0xcda4530] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRecomputeNormals
	// bool GetCustomRecomputeNormals(bool& AttributeValue);                                                                    // [0xcda4498] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomLODGroup
	// bool GetCustomLODGroup(FName& AttributeValue);                                                                           // [0xcda2d64] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomKeepSectionsSeparate
	// bool GetCustomKeepSectionsSeparate(bool& AttributeValue);                                                                // [0xcda2ccc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomComputeWeightedNormals
	// bool GetCustomComputeWeightedNormals(bool& AttributeValue);                                                              // [0xcda0b9c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.AddLodDataUniqueId
	// bool AddLodDataUniqueId(FString LodDataUniqueId);                                                                        // [0xcd8b578] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSceneImportAssetFactoryNode
/// Size: 0x0000 (0x000140 - 0x000140)
class UInterchangeSceneImportAssetFactoryNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode
/// Size: 0x00D8 (0x0002C0 - 0x000398)
class UInterchangeSkeletalMeshFactoryNode : public UInterchangeMeshFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomUseHighPrecisionSkinWeights
	// bool SetCustomUseHighPrecisionSkinWeights(bool& AttributeValue, bool bAddApplyDelegate);                                 // [0xcdbcd84] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdUV
	// bool SetCustomThresholdUV(float& AttributeValue, bool bAddApplyDelegate);                                                // [0xcdbc7e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdTangentNormal
	// bool SetCustomThresholdTangentNormal(float& AttributeValue, bool bAddApplyDelegate);                                     // [0xcdbc6c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdPosition
	// bool SetCustomThresholdPosition(float& AttributeValue, bool bAddApplyDelegate);                                          // [0xcdbc5a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomSkeletonSoftObjectPath
	// bool SetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue);                                                   // [0xcdbb54c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomPhysicAssetSoftObjectPath
	// bool SetCustomPhysicAssetSoftObjectPath(FSoftObjectPath& AttributeValue);                                                // [0xcdb9bc4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomMorphThresholdPosition
	// bool SetCustomMorphThresholdPosition(float& AttributeValue, bool bAddApplyDelegate);                                     // [0xcdb9314] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportVertexAttributes
	// bool SetCustomImportVertexAttributes(bool& AttributeValue);                                                              // [0xcdb7ef4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportMorphTarget
	// bool SetCustomImportMorphTarget(bool& AttributeValue);                                                                   // [0xcdb7e5c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportContentType
	// bool SetCustomImportContentType(EInterchangeSkeletalMeshContentType& AttributeValue);                                    // [0xcdb7dc4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomCreatePhysicsAsset
	// bool SetCustomCreatePhysicsAsset(bool& AttributeValue);                                                                  // [0xcdb6178] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomBoneInfluenceLimit
	// bool SetCustomBoneInfluenceLimit(int32_t& AttributeValue, bool bAddApplyDelegate);                                       // [0xcdb5a3c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.InitializeSkeletalMeshNode
	// void InitializeSkeletalMeshNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);                           // [0xcdadd74] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0xcd4e568] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomUseHighPrecisionSkinWeights
	// bool GetCustomUseHighPrecisionSkinWeights(bool& AttributeValue);                                                         // [0xcda67a4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdUV
	// bool GetCustomThresholdUV(float& AttributeValue);                                                                        // [0xcda64ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdTangentNormal
	// bool GetCustomThresholdTangentNormal(float& AttributeValue);                                                             // [0xcda6414] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdPosition
	// bool GetCustomThresholdPosition(float& AttributeValue);                                                                  // [0xcda637c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomSkeletonSoftObjectPath
	// bool GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue);                                                   // [0xcda551c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomPhysicAssetSoftObjectPath
	// bool GetCustomPhysicAssetSoftObjectPath(FSoftObjectPath& AttributeValue);                                                // [0xcda3e74] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomMorphThresholdPosition
	// bool GetCustomMorphThresholdPosition(float& AttributeValue);                                                             // [0xcda370c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportVertexAttributes
	// bool GetCustomImportVertexAttributes(bool& AttributeValue);                                                              // [0xcda2564] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportMorphTarget
	// bool GetCustomImportMorphTarget(bool& AttributeValue);                                                                   // [0xcda24cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportContentType
	// bool GetCustomImportContentType(EInterchangeSkeletalMeshContentType& AttributeValue);                                    // [0xcda2434] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomCreatePhysicsAsset
	// bool GetCustomCreatePhysicsAsset(bool& AttributeValue);                                                                  // [0xcda0c34] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomBoneInfluenceLimit
	// bool GetCustomBoneInfluenceLimit(int32_t& AttributeValue);                                                               // [0xcda082c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode
/// Size: 0x0030 (0x000140 - 0x000170)
class UInterchangeSkeletalMeshLodDataNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.SetCustomSkeletonUid
	// bool SetCustomSkeletonUid(FString AttributeValue);                                                                       // [0xcdbbb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.RemoveMeshUid
	// bool RemoveMeshUid(FString MeshName);                                                                                    // [0xccfd260] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.RemoveAllMeshes
	// bool RemoveAllMeshes();                                                                                                  // [0xcdaecd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetMeshUidsCount
	// int32_t GetMeshUidsCount();                                                                                              // [0xccfa1e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetMeshUids
	// void GetMeshUids(TArray<FString>& OutMeshNames);                                                                         // [0xccfa144] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetCustomSkeletonUid
	// bool GetCustomSkeletonUid(FString& AttributeValue);                                                                      // [0xcda5b40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.AddMeshUid
	// bool AddMeshUid(FString MeshName);                                                                                       // [0xcd036a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode
/// Size: 0x00E8 (0x0002C0 - 0x0003A8)
class UInterchangeStaticMeshFactoryNode : public UInterchangeMeshFactoryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomSupportFaceRemap
	// bool SetCustomSupportFaceRemap(bool& AttributeValue, bool bAddApplyDelegate);                                            // [0xcdbc338] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomSrcLightmapIndex
	// bool SetCustomSrcLightmapIndex(int32_t& AttributeValue, bool bAddApplyDelegate);                                         // [0xcdbc1e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomMinLightmapResolution
	// bool SetCustomMinLightmapResolution(int32_t& AttributeValue, bool bAddApplyDelegate);                                    // [0xcdb90a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomMaxLumenMeshCards
	// bool SetCustomMaxLumenMeshCards(int32_t& AttributeValue, bool bAddApplyDelegate);                                        // [0xcdb8f4c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomGenerateLightmapUVs
	// bool SetCustomGenerateLightmapUVs(bool& AttributeValue, bool bAddApplyDelegate);                                         // [0xcdb759c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomGenerateDistanceFieldAsIfTwoSided
	// bool SetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue, bool bAddApplyDelegate);                           // [0xcdb747c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDstLightmapIndex
	// bool SetCustomDstLightmapIndex(int32_t& AttributeValue, bool bAddApplyDelegate);                                         // [0xcdb6cb4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDistanceFieldResolutionScale
	// bool SetCustomDistanceFieldResolutionScale(float& AttributeValue, bool bAddApplyDelegate);                               // [0xcdb6afc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDistanceFieldReplacementMesh
	// bool SetCustomDistanceFieldReplacementMesh(FSoftObjectPath& AttributeValue, bool bAddApplyDelegate);                     // [0xcdb63d8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildScale3D
	// bool SetCustomBuildScale3D(FVector& AttributeValue, bool bAddApplyDelegate);                                             // [0xcdb5ef4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildReversedIndexBuffer
	// bool SetCustomBuildReversedIndexBuffer(bool& AttributeValue, bool bAddApplyDelegate);                                    // [0xcdb5dd4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildNanite
	// bool SetCustomBuildNanite(bool& AttributeValue, bool bAddApplyDelegate);                                                 // [0xcdb5ce0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.RemoveSocketUd
	// bool RemoveSocketUd(FString SocketUid);                                                                                  // [0xcdb2758] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.InitializeStaticMeshNode
	// void InitializeStaticMeshNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);                             // [0xcdae4e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetSocketUids
	// void GetSocketUids(TArray<FString>& OutSocketUids);                                                                      // [0xcdaba90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetSocketUidCount
	// int32_t GetSocketUidCount();                                                                                             // [0xcdaba64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0xcd4e568] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomSupportFaceRemap
	// bool GetCustomSupportFaceRemap(bool& AttributeValue);                                                                    // [0xcda624c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomSrcLightmapIndex
	// bool GetCustomSrcLightmapIndex(int32_t& AttributeValue);                                                                 // [0xcda6178] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomMinLightmapResolution
	// bool GetCustomMinLightmapResolution(int32_t& AttributeValue);                                                            // [0xcda35a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomMaxLumenMeshCards
	// bool GetCustomMaxLumenMeshCards(int32_t& AttributeValue);                                                                // [0xcda34cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomGenerateLightmapUVs
	// bool GetCustomGenerateLightmapUVs(bool& AttributeValue);                                                                 // [0xcda1d8c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomGenerateDistanceFieldAsIfTwoSided
	// bool GetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue);                                                   // [0xcda1cf4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDstLightmapIndex
	// bool GetCustomDstLightmapIndex(int32_t& AttributeValue);                                                                 // [0xcda15e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDistanceFieldResolutionScale
	// bool GetCustomDistanceFieldResolutionScale(float& AttributeValue);                                                       // [0xcda14b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDistanceFieldReplacementMesh
	// bool GetCustomDistanceFieldReplacementMesh(FSoftObjectPath& AttributeValue);                                             // [0xcda0e94] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildScale3D
	// bool GetCustomBuildScale3D(FVector& AttributeValue);                                                                     // [0xcda0ac8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildReversedIndexBuffer
	// bool GetCustomBuildReversedIndexBuffer(bool& AttributeValue);                                                            // [0xcda0a30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildNanite
	// bool GetCustomBuildNanite(bool& AttributeValue);                                                                         // [0xcda0998] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.AddSocketUids
	// bool AddSocketUids(TArray<FString>& InSocketUids);                                                                       // [0xcd8c258] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.AddSocketUid
	// bool AddSocketUid(FString SocketUid);                                                                                    // [0xcd8bbe8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode
/// Size: 0x00C0 (0x000140 - 0x000200)
class UInterchangeStaticMeshLodDataNode : public UInterchangeFactoryBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.SetOneConvexHullPerUCX
	// bool SetOneConvexHullPerUCX(bool AttributeValue);                                                                        // [0xcdbd3b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.SetImportCollision
	// bool SetImportCollision(bool AttributeValue);                                                                            // [0xcdbd2e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveSphereCollisionMeshUid
	// bool RemoveSphereCollisionMeshUid(FString MeshName);                                                                     // [0xcdb2dc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveMeshUid
	// bool RemoveMeshUid(FString MeshName);                                                                                    // [0xcd654a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveConvexCollisionMeshUid
	// bool RemoveConvexCollisionMeshUid(FString MeshName);                                                                     // [0xcdb0d84] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveCapsuleCollisionMeshUid
	// bool RemoveCapsuleCollisionMeshUid(FString MeshName);                                                                    // [0xcdb0714] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveBoxCollisionMeshUid
	// bool RemoveBoxCollisionMeshUid(FString MeshName);                                                                        // [0xcdb00a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllSphereCollisionMeshes
	// bool RemoveAllSphereCollisionMeshes();                                                                                   // [0xcdaed28] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllMeshes
	// bool RemoveAllMeshes();                                                                                                  // [0xcdaecfc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllConvexCollisionMeshes
	// bool RemoveAllConvexCollisionMeshes();                                                                                   // [0xcdaeca4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllCapsuleCollisionMeshes
	// bool RemoveAllCapsuleCollisionMeshes();                                                                                  // [0xcdaec78] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllBoxCollisionMeshes
	// bool RemoveAllBoxCollisionMeshes();                                                                                      // [0xcdaec4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetSphereCollisionMeshUidsCount
	// int32_t GetSphereCollisionMeshUidsCount();                                                                               // [0xcdac270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetSphereCollisionMeshUids
	// void GetSphereCollisionMeshUids(TArray<FString>& OutMeshNames);                                                          // [0xcdac1d4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetOneConvexHullPerUCX
	// bool GetOneConvexHullPerUCX(bool& AttributeValue);                                                                       // [0xcda95ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetMeshUidsCount
	// int32_t GetMeshUidsCount();                                                                                              // [0xcd62bdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetMeshUids
	// void GetMeshUids(TArray<FString>& OutMeshNames);                                                                         // [0xcd62c08] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetImportCollision
	// bool GetImportCollision(bool& AttributeValue);                                                                           // [0xcda78c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetConvexCollisionMeshUidsCount
	// int32_t GetConvexCollisionMeshUidsCount();                                                                               // [0xcd9fa60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetConvexCollisionMeshUids
	// void GetConvexCollisionMeshUids(TArray<FString>& OutMeshNames);                                                          // [0xcd9f9c4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetCapsuleCollisionMeshUidsCount
	// int32_t GetCapsuleCollisionMeshUidsCount();                                                                              // [0xcd9def8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetCapsuleCollisionMeshUids
	// void GetCapsuleCollisionMeshUids(TArray<FString>& OutMeshNames);                                                         // [0xcd9de5c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetBoxCollisionMeshUidsCount
	// int32_t GetBoxCollisionMeshUidsCount();                                                                                  // [0xcd9de30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetBoxCollisionMeshUids
	// void GetBoxCollisionMeshUids(TArray<FString>& OutMeshNames);                                                             // [0xcd9dd94] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddSphereCollisionMeshUid
	// bool AddSphereCollisionMeshUid(FString MeshName);                                                                        // [0xcd8c300] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddMeshUid
	// bool AddMeshUid(FString MeshName);                                                                                       // [0xcd5ef00] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddConvexCollisionMeshUid
	// bool AddConvexCollisionMeshUid(FString MeshName);                                                                        // [0xcd8af08] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddCapsuleCollisionMeshUid
	// bool AddCapsuleCollisionMeshUid(FString MeshName);                                                                       // [0xcd8a898] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddBoxCollisionMeshUid
	// bool AddBoxCollisionMeshUid(FString MeshName);                                                                           // [0xcd8a228] Final|Native|Public|BlueprintCallable 
};

/// Enum /Script/InterchangeFactoryNodes.EInterchangeSkeletalMeshContentType
/// Size: 0x04
enum class EInterchangeSkeletalMeshContentType : uint8_t
{
	EInterchangeSkeletalMeshContentType__All                                         = 0,
	EInterchangeSkeletalMeshContentType__Geometry                                    = 1,
	EInterchangeSkeletalMeshContentType__SkinningWeights                             = 2,
	EInterchangeSkeletalMeshContentType__MAX                                         = 3
};

