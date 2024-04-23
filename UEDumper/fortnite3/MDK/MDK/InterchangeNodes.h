
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
	// bool SetCustomFrameRate(float& AttributeValue);                                                                          // [0xd324198] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.RemoveCustomAnimationTrackUid
	// bool RemoveCustomAnimationTrackUid(FString AnimationTrackUid);                                                           // [0xd3216c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomFrameRate
	// bool GetCustomFrameRate(float& AttributeValue);                                                                          // [0xd31fed4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUids
	// void GetCustomAnimationTrackUids(TArray<FString>& OutAnimationTrackUids);                                                // [0xd31f8c4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUidCount
	// int32_t GetCustomAnimationTrackUidCount();                                                                               // [0xd31f89c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUid
	// void GetCustomAnimationTrackUid(int32_t Index, FString& OutAnimationTrackUid);                                           // [0xd31f194] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.AddCustomAnimationTrackUid
	// bool AddCustomAnimationTrackUid(FString AnimationTrackUid);                                                              // [0xd31e148] Final|Native|Public|BlueprintCallable 
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
	// bool SetCustomCompletionMode(int32_t& AttributeValue);                                                                   // [0xd323cbc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackBaseNode.GetCustomCompletionMode
	// bool GetCustomCompletionMode(int32_t& AttributeValue);                                                                   // [0xd31f9f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomTrackSetDependencyUid(FString AttributeValue);                                                             // [0xd324e48] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomTimeScale
	// bool SetCustomTimeScale(float& AttributeValue);                                                                          // [0xd324db0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomStartFrame
	// bool SetCustomStartFrame(int32_t& AttributeValue);                                                                       // [0xd324c08] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomDuration
	// bool SetCustomDuration(int32_t& AttributeValue);                                                                         // [0xd323d90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomTrackSetDependencyUid
	// bool GetCustomTrackSetDependencyUid(FString& AttributeValue);                                                            // [0xd320b90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomTimeScale
	// bool GetCustomTimeScale(float& AttributeValue);                                                                          // [0xd320af8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomStartFrame
	// bool GetCustomStartFrame(int32_t& AttributeValue);                                                                       // [0xd320950] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomDuration
	// bool GetCustomDuration(int32_t& AttributeValue);                                                                         // [0xd31facc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomTargetedProperty(int32_t& TargetedProperty);                                                               // [0xd324cdc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.SetCustomPropertyTrack
	// bool SetCustomPropertyTrack(FName& PropertyTrack);                                                                       // [0xd324360] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.SetCustomFrameCount
	// bool SetCustomFrameCount(int32_t& AttributeValue);                                                                       // [0xd3240c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.SetCustomAnimationPayloadKey
	// bool SetCustomAnimationPayloadKey(FString InUniqueId, EInterchangeAnimationPayLoadType& InType);                         // [0xd323344] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.SetCustomActorDependencyUid
	// bool SetCustomActorDependencyUid(FString DependencyUid);                                                                 // [0xd322c64] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomTargetedProperty
	// bool GetCustomTargetedProperty(int32_t& TargetedProperty);                                                               // [0xd320a24] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomPropertyTrack
	// bool GetCustomPropertyTrack(FName& PropertyTrack);                                                                       // [0xd32009c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomFrameCount
	// bool GetCustomFrameCount(int32_t& AttributeValue);                                                                       // [0xd31fe00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomAnimationPayloadKey
	// bool GetCustomAnimationPayloadKey(FInterchangeAnimationPayLoadKey& AnimationPayLoadKey);                                 // [0xd31ef18] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomActorDependencyUid
	// bool GetCustomActorDependencyUid(FString& DependencyUid);                                                                // [0xd31e82c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomUsedChannels(int32_t& AttributeValue);                                                                     // [0xd325528] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTransformAnimationTrackNode.GetCustomUsedChannels
	// bool GetCustomUsedChannels(int32_t& AttributeValue);                                                                     // [0xd32127c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomSkeletonNodeUid(FString AttributeValue);                                                                   // [0xd324528] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationStopTime
	// bool SetCustomAnimationStopTime(double& StopTime);                                                                       // [0xd323b88] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationStartTime
	// bool SetCustomAnimationStartTime(double& StartTime);                                                                     // [0xd323aec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationSampleRate
	// bool SetCustomAnimationSampleRate(double& SampleRate);                                                                   // [0xd323a50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetAnimationPayloadKeyForSceneNodeUid
	// bool SetAnimationPayloadKeyForSceneNodeUid(FString SceneNodeUid, FString InUniqueId, EInterchangeAnimationPayLoadType& InType); // [0xd322508] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetAnimationPayloadKeyForMorphTargetNodeUid
	// bool SetAnimationPayloadKeyForMorphTargetNodeUid(FString MorphTargetNodeUid, FString InUniqueId, EInterchangeAnimationPayLoadType& InType); // [0xd321dac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetSceneNodeAnimationPayloadKeys
	// void GetSceneNodeAnimationPayloadKeys(TMap<FString, FString>& OutSceneNodeAnimationPayloadKeyUids, TMap<FString, char>& OutSceneNodeAnimationPayloadKeyTypes); // [0xd321558] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetMorphTargetNodeAnimationPayloadKeys
	// void GetMorphTargetNodeAnimationPayloadKeys(TMap<FString, FString>& OutMorphTargetNodeAnimationPayloadKeyUids, TMap<FString, char>& OutMorphTargetNodeAnimationPayloadKeyTypes); // [0xd3213e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomSkeletonNodeUid
	// bool GetCustomSkeletonNodeUid(FString& AttributeValue);                                                                  // [0xd320264] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationStopTime
	// bool GetCustomAnimationStopTime(double& StopTime);                                                                       // [0xd31f0f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationStartTime
	// bool GetCustomAnimationStartTime(double& StartTime);                                                                     // [0xd31f05c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationSampleRate
	// bool GetCustomAnimationSampleRate(double& SampleRate);                                                                   // [0xd31efc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomSensorWidth(float& AttributeValue);                                                                        // [0xd324490] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.SetCustomSensorHeight
	// bool SetCustomSensorHeight(float& AttributeValue);                                                                       // [0xd3243f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.SetCustomFocalLength
	// bool SetCustomFocalLength(float& AttributeValue);                                                                        // [0xd32402c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.SetCustomEnableDepthOfField
	// bool SetCustomEnableDepthOfField(bool& AttributeValue);                                                                  // [0xd323e64] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.GetCustomSensorWidth
	// bool GetCustomSensorWidth(float& AttributeValue);                                                                        // [0xd3201cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.GetCustomSensorHeight
	// bool GetCustomSensorHeight(float& AttributeValue);                                                                       // [0xd320134] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.GetCustomFocalLength
	// bool GetCustomFocalLength(float& AttributeValue);                                                                        // [0xd31fd68] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.GetCustomEnableDepthOfField
	// bool GetCustomEnableDepthOfField(bool& AttributeValue);                                                                  // [0xd31fba0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomWidth(float& AttributeValue);                                                                              // [0xd3255fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomProjectionMode
	// bool SetCustomProjectionMode(EInterchangeCameraProjectionType& AttributeValue);                                          // [0xd3242c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomNearClipPlane
	// bool SetCustomNearClipPlane(float& AttributeValue);                                                                      // [0xd324230] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomFieldOfView
	// bool SetCustomFieldOfView(float& AttributeValue);                                                                        // [0xd323f94] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomFarClipPlane
	// bool SetCustomFarClipPlane(float& AttributeValue);                                                                       // [0xd323efc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomAspectRatio
	// bool SetCustomAspectRatio(float& AttributeValue);                                                                        // [0xd323c24] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomWidth
	// bool GetCustomWidth(float& AttributeValue);                                                                              // [0xd321350] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomProjectionMode
	// bool GetCustomProjectionMode(EInterchangeCameraProjectionType& AttributeValue);                                          // [0xd320004] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomNearClipPlane
	// bool GetCustomNearClipPlane(float& AttributeValue);                                                                      // [0xd31ff6c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomFieldOfView
	// bool GetCustomFieldOfView(float& AttributeValue);                                                                        // [0xd31fcd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomFarClipPlane
	// bool GetCustomFarClipPlane(float& AttributeValue);                                                                       // [0xd31fc38] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomAspectRatio
	// bool GetCustomAspectRatio(float& AttributeValue);                                                                        // [0xd31f960] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomShaderType(FString AttributeValue);                                                                        // [0xd36111c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderNode.GetCustomShaderType
	// bool GetCustomShaderType(FString& AttributeValue);                                                                       // [0xd359008] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderNode.AddStringInput
	// bool AddStringInput(FString InputName, FString AttributeValue, bool bIsAParameter);                                      // [0xd355254] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderNode.AddLinearColorInput
	// bool AddLinearColorInput(FString InputName, FLinearColor& AttributeValue, bool bIsAParameter);                           // [0xd3543d4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderNode.AddFloatInput
	// bool AddFloatInput(FString InputName, float& AttributeValue, bool bIsAParameter);                                        // [0xd353c40] Final|Native|Public|HasOutParms|BlueprintCallable 
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
	// bool SetCustomSortOrder(int32_t& AttributeValue);                                                                        // [0xd343954] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.SetCustomDecalSize
	// bool SetCustomDecalSize(FVector& AttributeValue);                                                                        // [0xd34194c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.SetCustomDecalMaterialPathName
	// bool SetCustomDecalMaterialPathName(FString AttributeValue);                                                             // [0xd34126c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.GetCustomSortOrder
	// bool GetCustomSortOrder(int32_t& AttributeValue);                                                                        // [0xd339de0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.GetCustomDecalSize
	// bool GetCustomDecalSize(FVector& AttributeValue);                                                                        // [0xd3376c4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.GetCustomDecalMaterialPathName
	// bool GetCustomDecalMaterialPathName(FString& AttributeValue);                                                            // [0xd336fd8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomUseTemperature(bool AttributeValue);                                                                       // [0xd343e54] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.SetCustomTemperature
	// bool SetCustomTemperature(float AttributeValue);                                                                         // [0xd343b48] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.SetCustomLightColor
	// bool SetCustomLightColor(FLinearColor& AttributeValue);                                                                  // [0xd342e40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.SetCustomIntensity
	// bool SetCustomIntensity(float AttributeValue);                                                                           // [0xd342d18] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.GetCustomUseTemperature
	// bool GetCustomUseTemperature(bool& AttributeValue);                                                                      // [0xd33a280] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.GetCustomTemperature
	// bool GetCustomTemperature(float& AttributeValue);                                                                        // [0xd339fe4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.GetCustomLightColor
	// bool GetCustomLightColor(FLinearColor& AttributeValue);                                                                  // [0xd339330] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.GetCustomIntensity
	// bool GetCustomIntensity(float& AttributeValue);                                                                          // [0xd339200] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomUseIESBrightness(bool& AttributeValue, bool bAddApplyDelegate);                                            // [0xd343cac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomRotation
	// bool SetCustomRotation(FRotator& AttributeValue, bool bAddApplyDelegate);                                                // [0xd3437a8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomIntensityUnits
	// bool SetCustomIntensityUnits(EInterchangeLightUnits& AttributeValue);                                                    // [0xd342da8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomIESTexture
	// bool SetCustomIESTexture(FString AttributeValue);                                                                        // [0xd3425a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomIESBrightnessScale
	// bool SetCustomIESBrightnessScale(float& AttributeValue, bool bAddApplyDelegate);                                         // [0xd342490] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomAttenuationRadius
	// bool SetCustomAttenuationRadius(float AttributeValue);                                                                   // [0xd341140] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomUseIESBrightness
	// bool GetCustomUseIESBrightness(bool& AttributeValue);                                                                    // [0xd33a150] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomRotation
	// bool GetCustomRotation(FRotator& AttributeValue);                                                                        // [0xd339cb4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomIntensityUnits
	// bool GetCustomIntensityUnits(EInterchangeLightUnits& AttributeValue);                                                    // [0xd339298] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomIESTexture
	// bool GetCustomIESTexture(FString& AttributeValue);                                                                       // [0xd338a7c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomIESBrightnessScale
	// bool GetCustomIESBrightnessScale(float& AttributeValue);                                                                 // [0xd3389e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomAttenuationRadius
	// bool GetCustomAttenuationRadius(float& AttributeValue);                                                                  // [0xd336ea4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomUseInverseSquaredFalloff(bool AttributeValue);                                                             // [0xd343dc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePointLightNode.SetCustomLightFalloffExponent
	// bool SetCustomLightFalloffExponent(float AttributeValue);                                                                // [0xd342ed4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePointLightNode.GetCustomUseInverseSquaredFalloff
	// bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue);                                                            // [0xd33a1e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangePointLightNode.GetCustomLightFalloffExponent
	// bool GetCustomLightFalloffExponent(float& AttributeValue);                                                               // [0xd3393c4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomOuterConeAngle(float AttributeValue);                                                                      // [0xd342f64] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSpotLightNode.SetCustomInnerConeAngle
	// bool SetCustomInnerConeAngle(float AttributeValue);                                                                      // [0xd342c88] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSpotLightNode.GetCustomOuterConeAngle
	// bool GetCustomOuterConeAngle(float& AttributeValue);                                                                     // [0xd33945c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSpotLightNode.GetCustomInnerConeAngle
	// bool GetCustomInnerConeAngle(float& AttributeValue);                                                                     // [0xd339168] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomSourceWidth(float AttributeValue);                                                                         // [0xd343ab8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeRectLightNode.SetCustomSourceHeight
	// bool SetCustomSourceHeight(float AttributeValue);                                                                        // [0xd343a28] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeRectLightNode.GetCustomSourceWidth
	// bool GetCustomSourceWidth(float& AttributeValue);                                                                        // [0xd339f4c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeRectLightNode.GetCustomSourceHeight
	// bool GetCustomSourceHeight(float& AttributeValue);                                                                       // [0xd339eb4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// void SetPayLoadKey(FString PayloadKey);                                                                                  // [0xd345c94] Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.SetCustomSRGB
	// bool SetCustomSRGB(bool& AttributeValue);                                                                                // [0xd3438bc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.SetCustomFilter
	// bool SetCustomFilter(EInterchangeTextureFilterMode& AttributeValue);                                                     // [0xd342100] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.SetCustombFlipGreenChannel
	// bool SetCustombFlipGreenChannel(bool& AttributeValue);                                                                   // [0xd344698] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.GetCustomSRGB
	// bool GetCustomSRGB(bool& AttributeValue);                                                                                // [0xd339d48] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.GetCustomFilter
	// bool GetCustomFilter(EInterchangeTextureFilterMode& AttributeValue);                                                     // [0xd338654] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.GetCustombFlipGreenChannel
	// bool GetCustombFlipGreenChannel(bool& AttributeValue);                                                                   // [0xd33aad8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomVariantsPayloadKey(FString PayloadKey);                                                                    // [0xd343ee4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.SetCustomDisplayText
	// bool SetCustomDisplayText(FString AttributeValue);                                                                       // [0xd341a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.RemoveCustomDependencyUid
	// bool RemoveCustomDependencyUid(FString DependencyUid);                                                                   // [0xd33eeb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomVariantsPayloadKey
	// bool GetCustomVariantsPayloadKey(FString& PayloadKey);                                                                   // [0xd33a318] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomDisplayText
	// bool GetCustomDisplayText(FString& AttributeValue);                                                                      // [0xd337f68] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUids
	// void GetCustomDependencyUids(TArray<FString>& OutDependencyUids);                                                        // [0xd337ecc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUidCount
	// int32_t GetCustomDependencyUidCount();                                                                                   // [0xd337ea4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUid
	// void GetCustomDependencyUid(int32_t Index, FString& OutDependencyUid);                                                   // [0xd337798] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.AddCustomDependencyUid
	// bool AddCustomDependencyUid(FString DependencyUid);                                                                      // [0xd334b34] Final|Native|Public|BlueprintCallable 
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
	// bool RemoveCustomVariantSetUid(FString VariantUID);                                                                      // [0xd2f4634] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUids
	// void GetCustomVariantSetUids(TArray<FString>& OutVariantUids);                                                           // [0xd2ea384] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUidCount
	// int32_t GetCustomVariantSetUidCount();                                                                                   // [0xd2ea420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUid
	// void GetCustomVariantSetUid(int32_t Index, FString& OutVariantUid);                                                      // [0xd2ea448] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneVariantSetsNode.AddCustomVariantSetUid
	// bool AddCustomVariantSetUid(FString VariantUID);                                                                         // [0xd2e1ad4] Final|Native|Public|BlueprintCallable 
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
	// bool SetCustomParent(FString AttributeValue);                                                                            // [0xd342ff4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetVectorParameterValue
	// bool GetVectorParameterValue(FString ParameterName, FLinearColor& AttributeValue);                                       // [0xd33e744] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetTextureParameterValue
	// bool GetTextureParameterValue(FString ParameterName, FString& AttributeValue);                                           // [0xd33e004] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetStaticSwitchParameterValue
	// bool GetStaticSwitchParameterValue(FString ParameterName, bool& AttributeValue);                                         // [0xd33d8d8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetScalarParameterValue
	// bool GetScalarParameterValue(FString ParameterName, float& AttributeValue);                                              // [0xd33ba28] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetCustomParent
	// bool GetCustomParent(FString& AttributeValue);                                                                           // [0xd3394f4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.AddVectorParameterValue
	// bool AddVectorParameterValue(FString ParameterName, FLinearColor& AttributeValue);                                       // [0xd336778] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.AddTextureParameterValue
	// bool AddTextureParameterValue(FString ParameterName, FString AttributeValue);                                            // [0xd336044] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.AddStaticSwitchParameterValue
	// bool AddStaticSwitchParameterValue(FString ParameterName, bool AttributeValue);                                          // [0xd33591c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.AddScalarParameterValue
	// bool AddScalarParameterValue(FString ParameterName, float AttributeValue);                                               // [0xd33521c] Final|Native|Public|BlueprintCallable 
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
	// bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);                                      // [0xd3471d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetSkinnedMesh
	// bool SetSkinnedMesh(bool bIsSkinnedMesh);                                                                                // [0xd347140] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetSkeletonDependencyUid
	// bool SetSkeletonDependencyUid(FString DependencyUid);                                                                    // [0xd346a58] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetSceneInstanceUid
	// bool SetSceneInstanceUid(FString DependencyUid);                                                                         // [0xd346370] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetPayLoadKey
	// void SetPayLoadKey(FString PayloadKey, EInterchangeMeshPayLoadType& PayloadType);                                        // [0xd345588] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetMorphTargetName
	// bool SetMorphTargetName(FString MorphTargetName);                                                                        // [0xd344ea8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetMorphTargetDependencyUid
	// bool SetMorphTargetDependencyUid(FString DependencyUid);                                                                 // [0xd3447c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetMorphTarget
	// bool SetMorphTarget(bool bIsMorphTarget);                                                                                // [0xd344730] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomVertexCount
	// bool SetCustomVertexCount(int32_t& AttributeValue);                                                                      // [0xd3445c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomUVCount
	// bool SetCustomUVCount(int32_t& AttributeValue);                                                                          // [0xd343bd8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomPolygonCount
	// bool SetCustomPolygonCount(int32_t& AttributeValue);                                                                     // [0xd3436d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexTangent
	// bool SetCustomHasVertexTangent(bool& AttributeValue);                                                                    // [0xd3423f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexNormal
	// bool SetCustomHasVertexNormal(bool& AttributeValue);                                                                     // [0xd342360] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexColor
	// bool SetCustomHasVertexColor(bool& AttributeValue);                                                                      // [0xd3422c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexBinormal
	// bool SetCustomHasVertexBinormal(bool& AttributeValue);                                                                   // [0xd342230] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasSmoothGroup
	// bool SetCustomHasSmoothGroup(bool& AttributeValue);                                                                      // [0xd342198] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomBoundingBox
	// bool SetCustomBoundingBox(FBox& AttributeValue);                                                                         // [0xd3411d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.RemoveSlotMaterialDependencyUid
	// bool RemoveSlotMaterialDependencyUid(FString SlotName);                                                                  // [0xd340a58] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.RemoveSkeletonDependencyUid
	// bool RemoveSkeletonDependencyUid(FString DependencyUid);                                                                 // [0xd340370] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.RemoveSceneInstanceUid
	// bool RemoveSceneInstanceUid(FString DependencyUid);                                                                      // [0xd33fc88] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.RemoveMorphTargetDependencyUid
	// bool RemoveMorphTargetDependencyUid(FString DependencyUid);                                                              // [0xd33f5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.IsSkinnedMesh
	// bool IsSkinnedMesh();                                                                                                    // [0xd33ee94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.IsMorphTarget
	// bool IsMorphTarget();                                                                                                    // [0xd33ee70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSlotMaterialDependencyUid
	// bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);                                     // [0xd33d1b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSlotMaterialDependencies
	// void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies);                                       // [0xd33d0d4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSkeletonDependency
	// void GetSkeletonDependency(int32_t Index, FString& OutDependency);                                                       // [0xd33c9c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSkeletonDependencies
	// void GetSkeletonDependencies(TArray<FString>& OutDependencies);                                                          // [0xd33c92c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSkeletonDependeciesCount
	// int32_t GetSkeletonDependeciesCount();                                                                                   // [0xd33c908] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUidsCount
	// int32_t GetSceneInstanceUidsCount();                                                                                     // [0xd33c8dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUids
	// void GetSceneInstanceUids(TArray<FString>& OutDependencies);                                                             // [0xd33c840] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUid
	// void GetSceneInstanceUid(int32_t Index, FString& OutDependency);                                                         // [0xd33c134] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetMorphTargetName
	// bool GetMorphTargetName(FString& OutMorphTargetName);                                                                    // [0xd33b33c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependency
	// void GetMorphTargetDependency(int32_t Index, FString& OutDependency);                                                    // [0xd33ac30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependencies
	// void GetMorphTargetDependencies(TArray<FString>& OutDependencies);                                                       // [0xd33ab94] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependeciesCount
	// int32_t GetMorphTargetDependeciesCount();                                                                                // [0xd33ab70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomVertexCount
	// bool GetCustomVertexCount(int32_t& AttributeValue);                                                                      // [0xd33aa04] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomUVCount
	// bool GetCustomUVCount(int32_t& AttributeValue);                                                                          // [0xd33a07c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomPolygonCount
	// bool GetCustomPolygonCount(int32_t& AttributeValue);                                                                     // [0xd339be0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexTangent
	// bool GetCustomHasVertexTangent(bool& AttributeValue);                                                                    // [0xd33894c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexNormal
	// bool GetCustomHasVertexNormal(bool& AttributeValue);                                                                     // [0xd3388b4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexColor
	// bool GetCustomHasVertexColor(bool& AttributeValue);                                                                      // [0xd33881c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexBinormal
	// bool GetCustomHasVertexBinormal(bool& AttributeValue);                                                                   // [0xd338784] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasSmoothGroup
	// bool GetCustomHasSmoothGroup(bool& AttributeValue);                                                                      // [0xd3386ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomBoundingBox
	// bool GetCustomBoundingBox(FBox& AttributeValue);                                                                         // [0xd336f3c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);                                      // [0xd3623ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetMorphTargetCurveWeight
	// bool SetMorphTargetCurveWeight(FString MorphTargetName, float& Weight);                                                  // [0xd361c20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomTimeZeroLocalTransform
	// bool SetCustomTimeZeroLocalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& AttributeValue, bool bResetCache); // [0xd3617fc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomLocalTransform
	// bool SetCustomLocalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& AttributeValue, bool bResetCache); // [0xd3606c8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomGeometricTransform
	// bool SetCustomGeometricTransform(FTransform& AttributeValue);                                                            // [0xd36052c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomBindPoseLocalTransform
	// bool SetCustomBindPoseLocalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& AttributeValue, bool bResetCache); // [0xd3602dc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomAssetInstanceUid
	// bool SetCustomAssetInstanceUid(FString AttributeValue);                                                                  // [0xd35fbfc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomAnimationAssetUidToPlay
	// bool SetCustomAnimationAssetUidToPlay(FString AttributeValue);                                                           // [0xd35f51c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.RemoveSpecializedType
	// bool RemoveSpecializedType(FString SpecializedType);                                                                     // [0xd35ee34] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.RemoveSlotMaterialDependencyUid
	// bool RemoveSlotMaterialDependencyUid(FString SlotName);                                                                  // [0xd35e74c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.IsSpecializedTypeContains
	// bool IsSpecializedTypeContains(FString SpecializedType);                                                                 // [0xd35c4ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSpecializedTypes
	// void GetSpecializedTypes(TArray<FString>& OutSpecializedTypes);                                                          // [0xd35b500] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSpecializedTypeCount
	// int32_t GetSpecializedTypeCount();                                                                                       // [0xd35b4dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSpecializedType
	// void GetSpecializedType(int32_t Index, FString& OutSpecializedType);                                                     // [0xd35add0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSlotMaterialDependencyUid
	// bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);                                     // [0xd35a634] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSlotMaterialDependencies
	// void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies);                                       // [0xd35a550] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetMorphTargetCurveWeights
	// void GetMorphTargetCurveWeights(TMap<FString, float>& OutMorphTargetCurveWeights);                                       // [0xd35a46c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomTimeZeroLocalTransform
	// bool GetCustomTimeZeroLocalTransform(FTransform& AttributeValue);                                                        // [0xd359958] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomTimeZeroGlobalTransform
	// bool GetCustomTimeZeroGlobalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache); // [0xd3596f4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomLocalTransform
	// bool GetCustomLocalTransform(FTransform& AttributeValue);                                                                // [0xd3586e8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomGlobalTransform
	// bool GetCustomGlobalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache); // [0xd3583ec] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomGeometricTransform
	// bool GetCustomGeometricTransform(FTransform& AttributeValue);                                                            // [0xd3582e8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomBindPoseLocalTransform
	// bool GetCustomBindPoseLocalTransform(FTransform& AttributeValue);                                                        // [0xd358110] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomBindPoseGlobalTransform
	// bool GetCustomBindPoseGlobalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache); // [0xd357eac] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomAssetInstanceUid
	// bool GetCustomAssetInstanceUid(FString& AttributeValue);                                                                 // [0xd3577c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomAnimationAssetUidToPlay
	// bool GetCustomAnimationAssetUidToPlay(FString& AttributeValue);                                                          // [0xd3570d4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.AddSpecializedType
	// bool AddSpecializedType(FString SpecializedType);                                                                        // [0xd354b6c] Final|Native|Public|BlueprintCallable 
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
	// FString MakeInputValueKey(FString InputName);                                                                            // [0xd35e06c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.MakeInputParameterKey
	// FString MakeInputParameterKey(FString InputName);                                                                        // [0xd35d98c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.MakeInputName
	// FString MakeInputName(FString InputKey);                                                                                 // [0xd35d2ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.MakeInputConnectionKey
	// FString MakeInputConnectionKey(FString InputName);                                                                       // [0xd35cbcc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.IsAParameter
	// bool IsAParameter(FString AttributeKey);                                                                                 // [0xd35b73c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.IsAnInput
	// bool IsAnInput(FString AttributeKey);                                                                                    // [0xd35be14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.HasParameter
	// bool HasParameter(class UInterchangeBaseNode* InterchangeNode, FName& InInputName);                                      // [0xd35b66c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.HasInput
	// bool HasInput(class UInterchangeBaseNode* InterchangeNode, FName& InInputName);                                          // [0xd35b59c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.GetInputConnection
	// bool GetInputConnection(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString& OutExpressionUid, FString& OutputName); // [0xd359cbc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.GatherInputs
	// void GatherInputs(class UInterchangeBaseNode* InterchangeNode, TArray<FString>& OutInputNames);                          // [0xd357004] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.ConnectOuputToInputByName
	// bool ConnectOuputToInputByName(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString ExpressionUid, FString OutputName); // [0xd356870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.ConnectOuputToInputByIndex
	// bool ConnectOuputToInputByIndex(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString ExpressionUid, int32_t OutputIndex); // [0xd3560f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.ConnectDefaultOuputToInput
	// bool ConnectDefaultOuputToInput(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString ExpressionUid);  // [0xd3559a8] Final|Native|Static|Public|BlueprintCallable 
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
	// bool SetCustomMaterialFunction(FString AttributeValue);                                                                  // [0xd36088c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeFunctionCallShaderNode.GetCustomMaterialFunction
	// bool GetCustomMaterialFunction(FString& AttributeValue);                                                                 // [0xd3587ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomTwoSidedTransmission(bool& AttributeValue);                                                                // [0xd361a58] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomTwoSided
	// bool SetCustomTwoSided(bool& AttributeValue);                                                                            // [0xd3619c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomScreenSpaceReflections
	// bool SetCustomScreenSpaceReflections(bool& AttributeValue);                                                              // [0xd361084] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomOpacityMaskClipValue
	// bool SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate);                                       // [0xd360f6c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomIsAShaderFunction
	// bool SetCustomIsAShaderFunction(bool& AttributeValue);                                                                   // [0xd360630] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomBlendMode
	// bool SetCustomBlendMode(int32_t AttributeValue);                                                                         // [0xd3604a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomTwoSidedTransmission
	// bool GetCustomTwoSidedTransmission(bool& AttributeValue);                                                                // [0xd359af4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomTwoSided
	// bool GetCustomTwoSided(bool& AttributeValue);                                                                            // [0xd359a5c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomScreenSpaceReflections
	// bool GetCustomScreenSpaceReflections(bool& AttributeValue);                                                              // [0xd358f70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomOpacityMaskClipValue
	// bool GetCustomOpacityMaskClipValue(float& AttributeValue);                                                               // [0xd358ed8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomIsAShaderFunction
	// bool GetCustomIsAShaderFunction(bool& AttributeValue);                                                                   // [0xd358650] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomBlendMode
	// bool GetCustomBlendMode(int32_t& AttributeValue);                                                                        // [0xd358214] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomWrapV(EInterchangeTextureWrapMode& AttributeValue);                                                        // [0xd361b88] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTexture2DNode.SetCustomWrapU
	// bool SetCustomWrapU(EInterchangeTextureWrapMode& AttributeValue);                                                        // [0xd361af0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTexture2DNode.GetSourceBlocks
	// TMap<int32_t, FString> GetSourceBlocks();                                                                                // [0xd35ad54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeTexture2DNode.GetCustomWrapV
	// bool GetCustomWrapV(EInterchangeTextureWrapMode& AttributeValue);                                                        // [0xd359c24] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeTexture2DNode.GetCustomWrapU
	// bool GetCustomWrapU(EInterchangeTextureWrapMode& AttributeValue);                                                        // [0xd359b8c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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

