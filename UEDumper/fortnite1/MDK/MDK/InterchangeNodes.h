
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: InterchangeCore

/// Class /Script/InterchangeNodes.InterchangeAnimationTrackSetNode
/// Size: 0x0030 (0x000060 - 0x000090)
class UInterchangeAnimationTrackSetNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.SetCustomFrameRate
	// bool SetCustomFrameRate(float& AttributeValue);                                                                          // [0xced31d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.RemoveCustomAnimationTrackUid
	// bool RemoveCustomAnimationTrackUid(FString AnimationTrackUid);                                                           // [0xced08b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomFrameRate
	// bool GetCustomFrameRate(float& AttributeValue);                                                                          // [0xcecf234] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUids
	// void GetCustomAnimationTrackUids(TArray<FString>& OutAnimationTrackUids);                                                // [0xcecec24] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUidCount
	// int32_t GetCustomAnimationTrackUidCount();                                                                               // [0xcecebfc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUid
	// void GetCustomAnimationTrackUid(int32_t Index, FString& OutAnimationTrackUid);                                           // [0xcece560] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.AddCustomAnimationTrackUid
	// bool AddCustomAnimationTrackUid(FString AnimationTrackUid);                                                              // [0xcecd640] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeNodes.InterchangeAnimationTrackBaseNode
/// Size: 0x0010 (0x000060 - 0x000070)
class UInterchangeAnimationTrackBaseNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackBaseNode.SetCustomCompletionMode
	// bool SetCustomCompletionMode(int32_t& AttributeValue);                                                                   // [0xced2cf8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackBaseNode.GetCustomCompletionMode
	// bool GetCustomCompletionMode(int32_t& AttributeValue);                                                                   // [0xceced58] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode
/// Size: 0x0040 (0x000070 - 0x0000B0)
class UInterchangeAnimationTrackSetInstanceNode : public UInterchangeAnimationTrackBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomTrackSetDependencyUid
	// bool SetCustomTrackSetDependencyUid(FString AttributeValue);                                                             // [0xced3e0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomTimeScale
	// bool SetCustomTimeScale(float& AttributeValue);                                                                          // [0xced3d74] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomStartFrame
	// bool SetCustomStartFrame(int32_t& AttributeValue);                                                                       // [0xced3bcc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomDuration
	// bool SetCustomDuration(int32_t& AttributeValue);                                                                         // [0xced2dcc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomTrackSetDependencyUid
	// bool GetCustomTrackSetDependencyUid(FString& AttributeValue);                                                            // [0xcecfe38] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomTimeScale
	// bool GetCustomTimeScale(float& AttributeValue);                                                                          // [0xcecfda0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomStartFrame
	// bool GetCustomStartFrame(int32_t& AttributeValue);                                                                       // [0xcecfbf8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomDuration
	// bool GetCustomDuration(int32_t& AttributeValue);                                                                         // [0xcecee2c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeAnimationTrackNode
/// Size: 0x0060 (0x000070 - 0x0000D0)
class UInterchangeAnimationTrackNode : public UInterchangeAnimationTrackBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.SetCustomTargetedProperty
	// bool SetCustomTargetedProperty(int32_t& TargetedProperty);                                                               // [0xced3ca0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.SetCustomPropertyTrack
	// bool SetCustomPropertyTrack(FName& PropertyTrack);                                                                       // [0xced339c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.SetCustomFrameCount
	// bool SetCustomFrameCount(int32_t& AttributeValue);                                                                       // [0xced3100] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.SetCustomAnimationPayloadKey
	// bool SetCustomAnimationPayloadKey(FString InUniqueId, EInterchangeAnimationPayLoadType& InType);                         // [0xced23e8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.SetCustomActorDependencyUid
	// bool SetCustomActorDependencyUid(FString DependencyUid);                                                                 // [0xced1d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomTargetedProperty
	// bool GetCustomTargetedProperty(int32_t& TargetedProperty);                                                               // [0xcecfccc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomPropertyTrack
	// bool GetCustomPropertyTrack(FName& PropertyTrack);                                                                       // [0xcecf3fc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomFrameCount
	// bool GetCustomFrameCount(int32_t& AttributeValue);                                                                       // [0xcecf160] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomAnimationPayloadKey
	// bool GetCustomAnimationPayloadKey(FInterchangeAnimationPayLoadKey& AnimationPayLoadKey);                                 // [0xcece2e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomActorDependencyUid
	// bool GetCustomActorDependencyUid(FString& DependencyUid);                                                                // [0xcecdcb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeTransformAnimationTrackNode
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
class UInterchangeTransformAnimationTrackNode : public UInterchangeAnimationTrackNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeTransformAnimationTrackNode.SetCustomUsedChannels
	// bool SetCustomUsedChannels(int32_t& AttributeValue);                                                                     // [0xced4474] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTransformAnimationTrackNode.GetCustomUsedChannels
	// bool GetCustomUsedChannels(int32_t& AttributeValue);                                                                     // [0xced046c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode
/// Size: 0x0220 (0x000070 - 0x000290)
class UInterchangeSkeletalAnimationTrackNode : public UInterchangeAnimationTrackBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomSkeletonNodeUid
	// bool SetCustomSkeletonNodeUid(FString AttributeValue);                                                                   // [0xced3564] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationStopTime
	// bool SetCustomAnimationStopTime(double& StopTime);                                                                       // [0xced2bc4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationStartTime
	// bool SetCustomAnimationStartTime(double& StartTime);                                                                     // [0xced2b28] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationSampleRate
	// bool SetCustomAnimationSampleRate(double& SampleRate);                                                                   // [0xced2a8c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetAnimationPayloadKeyForSceneNodeUid
	// bool SetAnimationPayloadKeyForSceneNodeUid(FString SceneNodeUid, FString InUniqueId, EInterchangeAnimationPayLoadType& InType); // [0xced1654] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetAnimationPayloadKeyForMorphTargetNodeUid
	// bool SetAnimationPayloadKeyForMorphTargetNodeUid(FString MorphTargetNodeUid, FString InUniqueId, EInterchangeAnimationPayLoadType& InType); // [0xced0f28] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetSceneNodeAnimationPayloadKeys
	// void GetSceneNodeAnimationPayloadKeys(TMap<FString, FString>& OutSceneNodeAnimationPayloadKeyUids, TMap<FString, char>& OutSceneNodeAnimationPayloadKeyTypes); // [0xced0748] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetMorphTargetNodeAnimationPayloadKeys
	// void GetMorphTargetNodeAnimationPayloadKeys(TMap<FString, FString>& OutMorphTargetNodeAnimationPayloadKeyUids, TMap<FString, char>& OutMorphTargetNodeAnimationPayloadKeyTypes); // [0xced05d8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomSkeletonNodeUid
	// bool GetCustomSkeletonNodeUid(FString& AttributeValue);                                                                  // [0xcecf5c4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationStopTime
	// bool GetCustomAnimationStopTime(double& StopTime);                                                                       // [0xcece4c4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationStartTime
	// bool GetCustomAnimationStartTime(double& StartTime);                                                                     // [0xcece428] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationSampleRate
	// bool GetCustomAnimationSampleRate(double& SampleRate);                                                                   // [0xcece38c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangePhysicalCameraNode
/// Size: 0x0040 (0x000060 - 0x0000A0)
class UInterchangePhysicalCameraNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.SetCustomSensorWidth
	// bool SetCustomSensorWidth(float& AttributeValue);                                                                        // [0xced34cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.SetCustomSensorHeight
	// bool SetCustomSensorHeight(float& AttributeValue);                                                                       // [0xced3434] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.SetCustomFocalLength
	// bool SetCustomFocalLength(float& AttributeValue);                                                                        // [0xced3068] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.SetCustomEnableDepthOfField
	// bool SetCustomEnableDepthOfField(bool& AttributeValue);                                                                  // [0xced2ea0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.GetCustomSensorWidth
	// bool GetCustomSensorWidth(float& AttributeValue);                                                                        // [0xcecf52c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.GetCustomSensorHeight
	// bool GetCustomSensorHeight(float& AttributeValue);                                                                       // [0xcecf494] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.GetCustomFocalLength
	// bool GetCustomFocalLength(float& AttributeValue);                                                                        // [0xcecf0c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.GetCustomEnableDepthOfField
	// bool GetCustomEnableDepthOfField(bool& AttributeValue);                                                                  // [0xcecef00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeStandardCameraNode
/// Size: 0x0060 (0x000060 - 0x0000C0)
class UInterchangeStandardCameraNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomWidth
	// bool SetCustomWidth(float& AttributeValue);                                                                              // [0xced4548] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomProjectionMode
	// bool SetCustomProjectionMode(EInterchangeCameraProjectionType& AttributeValue);                                          // [0xced3304] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomNearClipPlane
	// bool SetCustomNearClipPlane(float& AttributeValue);                                                                      // [0xced326c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomFieldOfView
	// bool SetCustomFieldOfView(float& AttributeValue);                                                                        // [0xced2fd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomFarClipPlane
	// bool SetCustomFarClipPlane(float& AttributeValue);                                                                       // [0xced2f38] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomAspectRatio
	// bool SetCustomAspectRatio(float& AttributeValue);                                                                        // [0xced2c60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomWidth
	// bool GetCustomWidth(float& AttributeValue);                                                                              // [0xced0540] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomProjectionMode
	// bool GetCustomProjectionMode(EInterchangeCameraProjectionType& AttributeValue);                                          // [0xcecf364] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomNearClipPlane
	// bool GetCustomNearClipPlane(float& AttributeValue);                                                                      // [0xcecf2cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomFieldOfView
	// bool GetCustomFieldOfView(float& AttributeValue);                                                                        // [0xcecf030] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomFarClipPlane
	// bool GetCustomFarClipPlane(float& AttributeValue);                                                                       // [0xcecef98] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomAspectRatio
	// bool GetCustomAspectRatio(float& AttributeValue);                                                                        // [0xcececc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeShaderNode
/// Size: 0x0010 (0x000060 - 0x000070)
class UInterchangeShaderNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeShaderNode.SetCustomShaderType
	// bool SetCustomShaderType(FString AttributeValue);                                                                        // [0xcf0e134] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderNode.GetCustomShaderType
	// bool GetCustomShaderType(FString& AttributeValue);                                                                       // [0xcf065e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderNode.AddStringInput
	// bool AddStringInput(FString InputName, FString AttributeValue, bool bIsAParameter);                                      // [0xcf028cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderNode.AddLinearColorInput
	// bool AddLinearColorInput(FString InputName, FLinearColor& AttributeValue, bool bIsAParameter);                           // [0xcf01b34] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderNode.AddFloatInput
	// bool AddFloatInput(FString InputName, float& AttributeValue, bool bIsAParameter);                                        // [0xcf01410] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/InterchangeNodes.InterchangeDecalMaterialNode
/// Size: 0x0020 (0x000070 - 0x000090)
class UInterchangeDecalMaterialNode : public UInterchangeShaderNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/InterchangeNodes.InterchangeDecalNode
/// Size: 0x0030 (0x000060 - 0x000090)
class UInterchangeDecalNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeDecalNode.SetCustomSortOrder
	// bool SetCustomSortOrder(int32_t& AttributeValue);                                                                        // [0xcef18e8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.SetCustomDecalSize
	// bool SetCustomDecalSize(FVector& AttributeValue);                                                                        // [0xceef948] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.SetCustomDecalMaterialPathName
	// bool SetCustomDecalMaterialPathName(FString AttributeValue);                                                             // [0xceef2e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.GetCustomSortOrder
	// bool GetCustomSortOrder(int32_t& AttributeValue);                                                                        // [0xcee8520] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.GetCustomDecalSize
	// bool GetCustomDecalSize(FVector& AttributeValue);                                                                        // [0xcee6098] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.GetCustomDecalMaterialPathName
	// bool GetCustomDecalMaterialPathName(FString& AttributeValue);                                                            // [0xcee5a64] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeBaseLightNode
/// Size: 0x0040 (0x000060 - 0x0000A0)
class UInterchangeBaseLightNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.SetCustomUseTemperature
	// bool SetCustomUseTemperature(bool AttributeValue);                                                                       // [0xcef1ee8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.SetCustomTemperature
	// bool SetCustomTemperature(float AttributeValue);                                                                         // [0xcef1b5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.SetCustomLightColor
	// bool SetCustomLightColor(FLinearColor& AttributeValue);                                                                  // [0xcef0dcc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.SetCustomIntensity
	// bool SetCustomIntensity(float AttributeValue);                                                                           // [0xcef0c64] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.GetCustomUseTemperature
	// bool GetCustomUseTemperature(bool& AttributeValue);                                                                      // [0xcee89c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.GetCustomTemperature
	// bool GetCustomTemperature(float& AttributeValue);                                                                        // [0xcee8724] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.GetCustomLightColor
	// bool GetCustomLightColor(FLinearColor& AttributeValue);                                                                  // [0xcee7b28] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.GetCustomIntensity
	// bool GetCustomIntensity(float& AttributeValue);                                                                          // [0xcee79f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeLightNode
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UInterchangeLightNode : public UInterchangeBaseLightNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomUseIESBrightness
	// bool SetCustomUseIESBrightness(bool& AttributeValue, bool bAddApplyDelegate);                                            // [0xcef1d00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomRotation
	// bool SetCustomRotation(FRotator& AttributeValue, bool bAddApplyDelegate);                                                // [0xcef173c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomIntensityUnits
	// bool SetCustomIntensityUnits(EInterchangeLightUnits& AttributeValue);                                                    // [0xcef0d34] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomIESTexture
	// bool SetCustomIESTexture(FString AttributeValue);                                                                        // [0xcef052c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomIESBrightnessScale
	// bool SetCustomIESBrightnessScale(float& AttributeValue, bool bAddApplyDelegate);                                         // [0xcef0414] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomAttenuationRadius
	// bool SetCustomAttenuationRadius(float AttributeValue);                                                                   // [0xceef174] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomUseIESBrightness
	// bool GetCustomUseIESBrightness(bool& AttributeValue);                                                                    // [0xcee8890] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomRotation
	// bool GetCustomRotation(FRotator& AttributeValue);                                                                        // [0xcee83f4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomIntensityUnits
	// bool GetCustomIntensityUnits(EInterchangeLightUnits& AttributeValue);                                                    // [0xcee7a90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomIESTexture
	// bool GetCustomIESTexture(FString& AttributeValue);                                                                       // [0xcee732c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomIESBrightnessScale
	// bool GetCustomIESBrightnessScale(float& AttributeValue);                                                                 // [0xcee7294] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomAttenuationRadius
	// bool GetCustomAttenuationRadius(float& AttributeValue);                                                                  // [0xcee5930] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangePointLightNode
/// Size: 0x0020 (0x000100 - 0x000120)
class UInterchangePointLightNode : public UInterchangeLightNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangePointLightNode.SetCustomUseInverseSquaredFalloff
	// bool SetCustomUseInverseSquaredFalloff(bool AttributeValue);                                                             // [0xcef1e18] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePointLightNode.SetCustomLightFalloffExponent
	// bool SetCustomLightFalloffExponent(float AttributeValue);                                                                // [0xcef0e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePointLightNode.GetCustomUseInverseSquaredFalloff
	// bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue);                                                            // [0xcee8928] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangePointLightNode.GetCustomLightFalloffExponent
	// bool GetCustomLightFalloffExponent(float& AttributeValue);                                                               // [0xcee7bbc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeSpotLightNode
/// Size: 0x0020 (0x000120 - 0x000140)
class UInterchangeSpotLightNode : public UInterchangePointLightNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeSpotLightNode.SetCustomOuterConeAngle
	// bool SetCustomOuterConeAngle(float AttributeValue);                                                                      // [0xcef0f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSpotLightNode.SetCustomInnerConeAngle
	// bool SetCustomInnerConeAngle(float AttributeValue);                                                                      // [0xcef0b94] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSpotLightNode.GetCustomOuterConeAngle
	// bool GetCustomOuterConeAngle(float& AttributeValue);                                                                     // [0xcee7c54] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSpotLightNode.GetCustomInnerConeAngle
	// bool GetCustomInnerConeAngle(float& AttributeValue);                                                                     // [0xcee7960] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeRectLightNode
/// Size: 0x0020 (0x000100 - 0x000120)
class UInterchangeRectLightNode : public UInterchangeLightNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeRectLightNode.SetCustomSourceWidth
	// bool SetCustomSourceWidth(float AttributeValue);                                                                         // [0xcef1a8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeRectLightNode.SetCustomSourceHeight
	// bool SetCustomSourceHeight(float AttributeValue);                                                                        // [0xcef19bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeRectLightNode.GetCustomSourceWidth
	// bool GetCustomSourceWidth(float& AttributeValue);                                                                        // [0xcee868c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeRectLightNode.GetCustomSourceHeight
	// bool GetCustomSourceHeight(float& AttributeValue);                                                                       // [0xcee85f4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeDirectionalLightNode
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UInterchangeDirectionalLightNode : public UInterchangeBaseLightNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/InterchangeNodes.InterchangeTextureNode
/// Size: 0x0030 (0x000060 - 0x000090)
class UInterchangeTextureNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeTextureNode.SetPayLoadKey
	// void SetPayLoadKey(FString PayloadKey);                                                                                  // [0xcef3bd8] Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.SetCustomSRGB
	// bool SetCustomSRGB(bool& AttributeValue);                                                                                // [0xcef1850] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.SetCustomFilter
	// bool SetCustomFilter(EInterchangeTextureFilterMode& AttributeValue);                                                     // [0xcef0084] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.SetCustombFlipGreenChannel
	// bool SetCustombFlipGreenChannel(bool& AttributeValue);                                                                   // [0xcef26f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.GetCustomSRGB
	// bool GetCustomSRGB(bool& AttributeValue);                                                                                // [0xcee8488] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.GetCustomFilter
	// bool GetCustomFilter(EInterchangeTextureFilterMode& AttributeValue);                                                     // [0xcee6f04] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.GetCustombFlipGreenChannel
	// bool GetCustombFlipGreenChannel(bool& AttributeValue);                                                                   // [0xcee9160] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeTexture2DArrayNode
/// Size: 0x0000 (0x000090 - 0x000090)
class UInterchangeTexture2DArrayNode : public UInterchangeTextureNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/InterchangeNodes.InterchangeTextureCubeArrayNode
/// Size: 0x0000 (0x000090 - 0x000090)
class UInterchangeTextureCubeArrayNode : public UInterchangeTextureNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/InterchangeNodes.InterchangeTextureCubeNode
/// Size: 0x0000 (0x000090 - 0x000090)
class UInterchangeTextureCubeNode : public UInterchangeTextureNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/InterchangeNodes.InterchangeTextureLightProfileNode
/// Size: 0x0000 (0x000090 - 0x000090)
class UInterchangeTextureLightProfileNode : public UInterchangeTextureNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/InterchangeNodes.InterchangeVariantSetNode
/// Size: 0x0040 (0x000060 - 0x0000A0)
class UInterchangeVariantSetNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.SetCustomVariantsPayloadKey
	// bool SetCustomVariantsPayloadKey(FString PayloadKey);                                                                    // [0xcef1fb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.SetCustomDisplayText
	// bool SetCustomDisplayText(FString AttributeValue);                                                                       // [0xceefa1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.RemoveCustomDependencyUid
	// bool RemoveCustomDependencyUid(FString DependencyUid);                                                                   // [0xceed130] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomVariantsPayloadKey
	// bool GetCustomVariantsPayloadKey(FString& PayloadKey);                                                                   // [0xcee8a58] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomDisplayText
	// bool GetCustomDisplayText(FString& AttributeValue);                                                                      // [0xcee68d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUids
	// void GetCustomDependencyUids(TArray<FString>& OutDependencyUids);                                                        // [0xcee6834] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUidCount
	// int32_t GetCustomDependencyUidCount();                                                                                   // [0xcee680c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUid
	// void GetCustomDependencyUid(int32_t Index, FString& OutDependencyUid);                                                   // [0xcee616c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.AddCustomDependencyUid
	// bool AddCustomDependencyUid(FString DependencyUid);                                                                      // [0xcee3720] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeNodes.InterchangeSceneVariantSetsNode
/// Size: 0x0020 (0x000060 - 0x000080)
class UInterchangeSceneVariantSetsNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeSceneVariantSetsNode.RemoveCustomVariantSetUid
	// bool RemoveCustomVariantSetUid(FString VariantUID);                                                                      // [0xcea4f0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUids
	// void GetCustomVariantSetUids(TArray<FString>& OutVariantUids);                                                           // [0xce9b314] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUidCount
	// int32_t GetCustomVariantSetUidCount();                                                                                   // [0xce9b3b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUid
	// void GetCustomVariantSetUid(int32_t Index, FString& OutVariantUid);                                                      // [0xce9b3d8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneVariantSetsNode.AddCustomVariantSetUid
	// bool AddCustomVariantSetUid(FString VariantUID);                                                                         // [0xce92f7c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeNodes.InterchangeVolumeTextureNode
/// Size: 0x0000 (0x000090 - 0x000090)
class UInterchangeVolumeTextureNode : public UInterchangeTextureNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/InterchangeNodes.InterchangeMaterialInstanceNode
/// Size: 0x0010 (0x000060 - 0x000070)
class UInterchangeMaterialInstanceNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.SetCustomParent
	// bool SetCustomParent(FString AttributeValue);                                                                            // [0xcef1000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetVectorParameterValue
	// bool GetVectorParameterValue(FString ParameterName, FLinearColor& AttributeValue);                                       // [0xceeca24] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetTextureParameterValue
	// bool GetTextureParameterValue(FString ParameterName, FString& AttributeValue);                                           // [0xceec350] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetStaticSwitchParameterValue
	// bool GetStaticSwitchParameterValue(FString ParameterName, bool& AttributeValue);                                         // [0xceebc90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetScalarParameterValue
	// bool GetScalarParameterValue(FString ParameterName, float& AttributeValue);                                              // [0xcee9f8c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetCustomParent
	// bool GetCustomParent(FString& AttributeValue);                                                                           // [0xcee7cec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.AddVectorParameterValue
	// bool AddVectorParameterValue(FString ParameterName, FLinearColor& AttributeValue);                                       // [0xcee526c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.AddTextureParameterValue
	// bool AddTextureParameterValue(FString ParameterName, FString AttributeValue);                                            // [0xcee4b68] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.AddStaticSwitchParameterValue
	// bool AddStaticSwitchParameterValue(FString ParameterName, bool AttributeValue);                                          // [0xcee446c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.AddScalarParameterValue
	// bool AddScalarParameterValue(FString ParameterName, float AttributeValue);                                               // [0xcee3d94] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeNodes.InterchangeMeshNode
/// Size: 0x0188 (0x000060 - 0x0001E8)
class UInterchangeMeshNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetSlotMaterialDependencyUid
	// bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);                                      // [0xcef4ff8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetSkinnedMesh
	// bool SetSkinnedMesh(bool bIsSkinnedMesh);                                                                                // [0xcef4f28] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetSkeletonDependencyUid
	// bool SetSkeletonDependencyUid(FString DependencyUid);                                                                    // [0xcef48b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetSceneInstanceUid
	// bool SetSceneInstanceUid(FString DependencyUid);                                                                         // [0xcef4240] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetPayLoadKey
	// void SetPayLoadKey(FString PayloadKey, EInterchangeMeshPayLoadType& PayloadType);                                        // [0xcef3538] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetMorphTargetName
	// bool SetMorphTargetName(FString MorphTargetName);                                                                        // [0xcef2ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetMorphTargetDependencyUid
	// bool SetMorphTargetDependencyUid(FString DependencyUid);                                                                 // [0xcef285c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetMorphTarget
	// bool SetMorphTarget(bool bIsMorphTarget);                                                                                // [0xcef278c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomVertexCount
	// bool SetCustomVertexCount(int32_t& AttributeValue);                                                                      // [0xcef2620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomUVCount
	// bool SetCustomUVCount(int32_t& AttributeValue);                                                                          // [0xcef1c2c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomPolygonCount
	// bool SetCustomPolygonCount(int32_t& AttributeValue);                                                                     // [0xcef1668] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexTangent
	// bool SetCustomHasVertexTangent(bool& AttributeValue);                                                                    // [0xcef037c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexNormal
	// bool SetCustomHasVertexNormal(bool& AttributeValue);                                                                     // [0xcef02e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexColor
	// bool SetCustomHasVertexColor(bool& AttributeValue);                                                                      // [0xcef024c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexBinormal
	// bool SetCustomHasVertexBinormal(bool& AttributeValue);                                                                   // [0xcef01b4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasSmoothGroup
	// bool SetCustomHasSmoothGroup(bool& AttributeValue);                                                                      // [0xcef011c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomBoundingBox
	// bool SetCustomBoundingBox(FBox& AttributeValue);                                                                         // [0xceef244] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.RemoveSlotMaterialDependencyUid
	// bool RemoveSlotMaterialDependencyUid(FString SlotName);                                                                  // [0xceeeb00] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.RemoveSkeletonDependencyUid
	// bool RemoveSkeletonDependencyUid(FString DependencyUid);                                                                 // [0xceee48c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.RemoveSceneInstanceUid
	// bool RemoveSceneInstanceUid(FString DependencyUid);                                                                      // [0xceede18] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.RemoveMorphTargetDependencyUid
	// bool RemoveMorphTargetDependencyUid(FString DependencyUid);                                                              // [0xceed7a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.IsSkinnedMesh
	// bool IsSkinnedMesh();                                                                                                    // [0xceed10c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.IsMorphTarget
	// bool IsMorphTarget();                                                                                                    // [0xceed0e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSlotMaterialDependencyUid
	// bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);                                     // [0xceeb5dc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSlotMaterialDependencies
	// void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies);                                       // [0xceeb4f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSkeletonDependency
	// void GetSkeletonDependency(int32_t Index, FString& OutDependency);                                                       // [0xceeae58] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSkeletonDependencies
	// void GetSkeletonDependencies(TArray<FString>& OutDependencies);                                                          // [0xceeadbc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSkeletonDependeciesCount
	// int32_t GetSkeletonDependeciesCount();                                                                                   // [0xceead98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUidsCount
	// int32_t GetSceneInstanceUidsCount();                                                                                     // [0xceead6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUids
	// void GetSceneInstanceUids(TArray<FString>& OutDependencies);                                                             // [0xceeacd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUid
	// void GetSceneInstanceUid(int32_t Index, FString& OutDependency);                                                         // [0xceea630] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetMorphTargetName
	// bool GetMorphTargetName(FString& OutMorphTargetName);                                                                    // [0xcee9958] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependency
	// void GetMorphTargetDependency(int32_t Index, FString& OutDependency);                                                    // [0xcee92b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependencies
	// void GetMorphTargetDependencies(TArray<FString>& OutDependencies);                                                       // [0xcee921c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependeciesCount
	// int32_t GetMorphTargetDependeciesCount();                                                                                // [0xcee91f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomVertexCount
	// bool GetCustomVertexCount(int32_t& AttributeValue);                                                                      // [0xcee908c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomUVCount
	// bool GetCustomUVCount(int32_t& AttributeValue);                                                                          // [0xcee87bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomPolygonCount
	// bool GetCustomPolygonCount(int32_t& AttributeValue);                                                                     // [0xcee8320] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexTangent
	// bool GetCustomHasVertexTangent(bool& AttributeValue);                                                                    // [0xcee71fc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexNormal
	// bool GetCustomHasVertexNormal(bool& AttributeValue);                                                                     // [0xcee7164] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexColor
	// bool GetCustomHasVertexColor(bool& AttributeValue);                                                                      // [0xcee70cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexBinormal
	// bool GetCustomHasVertexBinormal(bool& AttributeValue);                                                                   // [0xcee7034] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasSmoothGroup
	// bool GetCustomHasSmoothGroup(bool& AttributeValue);                                                                      // [0xcee6f9c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomBoundingBox
	// bool GetCustomBoundingBox(FBox& AttributeValue);                                                                         // [0xcee59c8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeSceneNode
/// Size: 0x02C0 (0x000060 - 0x000320)
class UInterchangeSceneNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetSlotMaterialDependencyUid
	// bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);                                      // [0xcf0f310] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetMorphTargetCurveWeight
	// bool SetMorphTargetCurveWeight(FString MorphTargetName, float& Weight);                                                  // [0xcf0ebf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomTimeZeroLocalTransform
	// bool SetCustomTimeZeroLocalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& AttributeValue, bool bResetCache); // [0xcf0e79c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomLocalTransform
	// bool SetCustomLocalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& AttributeValue, bool bResetCache); // [0xcf0d728] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomGeometricTransform
	// bool SetCustomGeometricTransform(FTransform& AttributeValue);                                                            // [0xcf0d58c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomBindPoseLocalTransform
	// bool SetCustomBindPoseLocalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& AttributeValue, bool bResetCache); // [0xcf0d2cc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomAssetInstanceUid
	// bool SetCustomAssetInstanceUid(FString AttributeValue);                                                                  // [0xcf0cc64] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomAnimationAssetUidToPlay
	// bool SetCustomAnimationAssetUidToPlay(FString AttributeValue);                                                           // [0xcf0c5fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.RemoveSpecializedType
	// bool RemoveSpecializedType(FString SpecializedType);                                                                     // [0xcf0bf88] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.RemoveSlotMaterialDependencyUid
	// bool RemoveSlotMaterialDependencyUid(FString SlotName);                                                                  // [0xcf0b914] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.IsSpecializedTypeContains
	// bool IsSpecializedTypeContains(FString SpecializedType);                                                                 // [0xcf098dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSpecializedTypes
	// void GetSpecializedTypes(TArray<FString>& OutSpecializedTypes);                                                          // [0xcf08960] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSpecializedTypeCount
	// int32_t GetSpecializedTypeCount();                                                                                       // [0xcf0893c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSpecializedType
	// void GetSpecializedType(int32_t Index, FString& OutSpecializedType);                                                     // [0xcf0829c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSlotMaterialDependencyUid
	// bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);                                     // [0xcf07b6c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSlotMaterialDependencies
	// void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies);                                       // [0xcf07a88] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetMorphTargetCurveWeights
	// void GetMorphTargetCurveWeights(TMap<FString, float>& OutMorphTargetCurveWeights);                                       // [0xcf079a4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomTimeZeroLocalTransform
	// bool GetCustomTimeZeroLocalTransform(FTransform& AttributeValue);                                                        // [0xcf06ebc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomTimeZeroGlobalTransform
	// bool GetCustomTimeZeroGlobalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache); // [0xcf06c1c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomLocalTransform
	// bool GetCustomLocalTransform(FTransform& AttributeValue);                                                                // [0xcf05d80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomGlobalTransform
	// bool GetCustomGlobalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache); // [0xcf05a48] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomGeometricTransform
	// bool GetCustomGeometricTransform(FTransform& AttributeValue);                                                            // [0xcf05944] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomBindPoseLocalTransform
	// bool GetCustomBindPoseLocalTransform(FTransform& AttributeValue);                                                        // [0xcf0576c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomBindPoseGlobalTransform
	// bool GetCustomBindPoseGlobalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache); // [0xcf054cc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomAssetInstanceUid
	// bool GetCustomAssetInstanceUid(FString& AttributeValue);                                                                 // [0xcf04e98] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomAnimationAssetUidToPlay
	// bool GetCustomAnimationAssetUidToPlay(FString& AttributeValue);                                                          // [0xcf04864] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.AddSpecializedType
	// bool AddSpecializedType(FString SpecializedType);                                                                        // [0xcf02258] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeNodes.InterchangeShaderPortsAPI
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeShaderPortsAPI : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.MakeInputValueKey
	// FString MakeInputValueKey(FString InputName);                                                                            // [0xcf0b2a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.MakeInputParameterKey
	// FString MakeInputParameterKey(FString InputName);                                                                        // [0xcf0ac2c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.MakeInputName
	// FString MakeInputName(FString InputKey);                                                                                 // [0xcf0a5b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.MakeInputConnectionKey
	// FString MakeInputConnectionKey(FString InputName);                                                                       // [0xcf09f44] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.IsAParameter
	// bool IsAParameter(FString AttributeKey);                                                                                 // [0xcf08c14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.IsAnInput
	// bool IsAnInput(FString AttributeKey);                                                                                    // [0xcf09278] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.HasParameter
	// bool HasParameter(class UInterchangeBaseNode* InterchangeNode, FName& InInputName);                                      // [0xcf08b08] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.HasInput
	// bool HasInput(class UInterchangeBaseNode* InterchangeNode, FName& InInputName);                                          // [0xcf089fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.GetInputConnection
	// bool GetInputConnection(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString& OutExpressionUid, FString& OutputName); // [0xcf07220] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.GatherInputs
	// void GatherInputs(class UInterchangeBaseNode* InterchangeNode, TArray<FString>& OutInputNames);                          // [0xcf0474c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.ConnectOuputToInputByName
	// bool ConnectOuputToInputByName(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString ExpressionUid, FString OutputName); // [0xcf03f64] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.ConnectOuputToInputByIndex
	// bool ConnectOuputToInputByIndex(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString ExpressionUid, int32_t OutputIndex); // [0xcf03790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.ConnectDefaultOuputToInput
	// bool ConnectDefaultOuputToInput(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString ExpressionUid);  // [0xcf03034] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/InterchangeNodes.InterchangeFunctionCallShaderNode
/// Size: 0x0010 (0x000070 - 0x000080)
class UInterchangeFunctionCallShaderNode : public UInterchangeShaderNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeFunctionCallShaderNode.SetCustomMaterialFunction
	// bool SetCustomMaterialFunction(FString AttributeValue);                                                                  // [0xcf0d91c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeFunctionCallShaderNode.GetCustomMaterialFunction
	// bool GetCustomMaterialFunction(FString& AttributeValue);                                                                 // [0xcf05e84] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeShaderGraphNode
/// Size: 0x0060 (0x000070 - 0x0000D0)
class UInterchangeShaderGraphNode : public UInterchangeShaderNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomTwoSidedTransmission
	// bool SetCustomTwoSidedTransmission(bool& AttributeValue);                                                                // [0xcf0ea28] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomTwoSided
	// bool SetCustomTwoSided(bool& AttributeValue);                                                                            // [0xcf0e990] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomScreenSpaceReflections
	// bool SetCustomScreenSpaceReflections(bool& AttributeValue);                                                              // [0xcf0e09c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomOpacityMaskClipValue
	// bool SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate);                                       // [0xcf0df84] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomIsAShaderFunction
	// bool SetCustomIsAShaderFunction(bool& AttributeValue);                                                                   // [0xcf0d690] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomBlendMode
	// bool SetCustomBlendMode(int32_t AttributeValue);                                                                         // [0xcf0d4c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomTwoSidedTransmission
	// bool GetCustomTwoSidedTransmission(bool& AttributeValue);                                                                // [0xcf07058] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomTwoSided
	// bool GetCustomTwoSided(bool& AttributeValue);                                                                            // [0xcf06fc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomScreenSpaceReflections
	// bool GetCustomScreenSpaceReflections(bool& AttributeValue);                                                              // [0xcf06550] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomOpacityMaskClipValue
	// bool GetCustomOpacityMaskClipValue(float& AttributeValue);                                                               // [0xcf064b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomIsAShaderFunction
	// bool GetCustomIsAShaderFunction(bool& AttributeValue);                                                                   // [0xcf05ce8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomBlendMode
	// bool GetCustomBlendMode(int32_t& AttributeValue);                                                                        // [0xcf05870] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeTexture2DNode
/// Size: 0x0098 (0x000090 - 0x000128)
class UInterchangeTexture2DNode : public UInterchangeTextureNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeTexture2DNode.SetCustomWrapV
	// bool SetCustomWrapV(EInterchangeTextureWrapMode& AttributeValue);                                                        // [0xcf0eb58] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTexture2DNode.SetCustomWrapU
	// bool SetCustomWrapU(EInterchangeTextureWrapMode& AttributeValue);                                                        // [0xcf0eac0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTexture2DNode.GetSourceBlocks
	// TMap<int32_t, FString> GetSourceBlocks();                                                                                // [0xcf08220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeTexture2DNode.GetCustomWrapV
	// bool GetCustomWrapV(EInterchangeTextureWrapMode& AttributeValue);                                                        // [0xcf07188] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeTexture2DNode.GetCustomWrapU
	// bool GetCustomWrapU(EInterchangeTextureWrapMode& AttributeValue);                                                        // [0xcf070f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeTextureBlurNode
/// Size: 0x0000 (0x000128 - 0x000128)
class UInterchangeTextureBlurNode : public UInterchangeTexture2DNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Struct /Script/InterchangeNodes.InterchangeAnimationPayLoadKey
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterchangeAnimationPayLoadKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   UniqueID                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EInterchangeAnimationPayLoadType)          Type                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/InterchangeNodes.InterchangeMeshPayLoadKey
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterchangeMeshPayLoadKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   UniqueID                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EInterchangeMeshPayLoadType)               Type                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Enum /Script/InterchangeNodes.EInterchangeAnimationPayLoadType
/// Size: 0x07
enum class EInterchangeAnimationPayLoadType : uint8_t
{
	EInterchangeAnimationPayLoadType__NONE                                           = 0,
	EInterchangeAnimationPayLoadType__CURVE                                          = 1,
	EInterchangeAnimationPayLoadType__MORPHTARGETCURVE                               = 2,
	EInterchangeAnimationPayLoadType__STEPCURVE                                      = 3,
	EInterchangeAnimationPayLoadType__BAKED                                          = 4,
	EInterchangeAnimationPayLoadType__MORPHTARGETCURVEWEIGHTINSTANCE                 = 5,
	EInterchangeAnimationPayLoadType__EInterchangeAnimationPayLoadType_MAX           = 6
};

/// Enum /Script/InterchangeNodes.EInterchangeAnimatedProperty
/// Size: 0x03
enum class EInterchangeAnimatedProperty : uint8_t
{
	EInterchangeAnimatedProperty__None                                               = 0,
	EInterchangeAnimatedProperty__Visibility                                         = 1,
	EInterchangeAnimatedProperty__MAX                                                = 2
};

/// Enum /Script/InterchangeNodes.EInterchangeCameraProjectionType
/// Size: 0x03
enum class EInterchangeCameraProjectionType : uint8_t
{
	EInterchangeCameraProjectionType__Perspective                                    = 0,
	EInterchangeCameraProjectionType__Orthographic                                   = 1,
	EInterchangeCameraProjectionType__EInterchangeCameraProjectionType_MAX           = 2
};

/// Enum /Script/InterchangeNodes.EInterchangeLightUnits
/// Size: 0x05
enum class EInterchangeLightUnits : uint8_t
{
	EInterchangeLightUnits__Unitless                                                 = 0,
	EInterchangeLightUnits__Candelas                                                 = 1,
	EInterchangeLightUnits__Lumens                                                   = 2,
	EInterchangeLightUnits__EV                                                       = 3,
	EInterchangeLightUnits__EInterchangeLightUnits_MAX                               = 4
};

/// Enum /Script/InterchangeNodes.EInterchangeTextureWrapMode
/// Size: 0x04
enum class EInterchangeTextureWrapMode : uint8_t
{
	EInterchangeTextureWrapMode__Wrap                                                = 0,
	EInterchangeTextureWrapMode__Clamp                                               = 1,
	EInterchangeTextureWrapMode__Mirror                                              = 2,
	EInterchangeTextureWrapMode__EInterchangeTextureWrapMode_MAX                     = 3
};

/// Enum /Script/InterchangeNodes.EInterchangeTextureFilterMode
/// Size: 0x05
enum class EInterchangeTextureFilterMode : uint8_t
{
	EInterchangeTextureFilterMode__Nearest                                           = 0,
	EInterchangeTextureFilterMode__Bilinear                                          = 1,
	EInterchangeTextureFilterMode__Trilinear                                         = 2,
	EInterchangeTextureFilterMode__Default                                           = 3,
	EInterchangeTextureFilterMode__EInterchangeTextureFilterMode_MAX                 = 4
};

/// Enum /Script/InterchangeNodes.EInterchangeMeshPayLoadType
/// Size: 0x05
enum class EInterchangeMeshPayLoadType : uint8_t
{
	EInterchangeMeshPayLoadType__NONE                                                = 0,
	EInterchangeMeshPayLoadType__STATIC                                              = 1,
	EInterchangeMeshPayLoadType__SKELETAL                                            = 2,
	EInterchangeMeshPayLoadType__MORPHTARGET                                         = 3,
	EInterchangeMeshPayLoadType__EInterchangeMeshPayLoadType_MAX                     = 4
};

