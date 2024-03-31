
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
	// bool SetCustomFrameRate(float& AttributeValue);                                                                          // [0xcce2698] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.RemoveCustomAnimationTrackUid
	// bool RemoveCustomAnimationTrackUid(FString AnimationTrackUid);                                                           // [0xccdfd80] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomFrameRate
	// bool GetCustomFrameRate(float& AttributeValue);                                                                          // [0xccde6f4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUids
	// void GetCustomAnimationTrackUids(TArray<FString>& OutAnimationTrackUids);                                                // [0xccde0e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUidCount
	// int32_t GetCustomAnimationTrackUidCount();                                                                               // [0xccde0bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUid
	// void GetCustomAnimationTrackUid(int32_t Index, FString& OutAnimationTrackUid);                                           // [0xccdda2c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.AddCustomAnimationTrackUid
	// bool AddCustomAnimationTrackUid(FString AnimationTrackUid);                                                              // [0xccdcb0c] Final|Native|Public|BlueprintCallable 
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
	// bool SetCustomCompletionMode(int32_t& AttributeValue);                                                                   // [0xcce21bc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackBaseNode.GetCustomCompletionMode
	// bool GetCustomCompletionMode(int32_t& AttributeValue);                                                                   // [0xccde218] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomTrackSetDependencyUid(FString AttributeValue);                                                             // [0xcce32d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomTimeScale
	// bool SetCustomTimeScale(float& AttributeValue);                                                                          // [0xcce3240] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomStartFrame
	// bool SetCustomStartFrame(int32_t& AttributeValue);                                                                       // [0xcce3098] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomDuration
	// bool SetCustomDuration(int32_t& AttributeValue);                                                                         // [0xcce2290] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomTrackSetDependencyUid
	// bool GetCustomTrackSetDependencyUid(FString& AttributeValue);                                                            // [0xccdf2fc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomTimeScale
	// bool GetCustomTimeScale(float& AttributeValue);                                                                          // [0xccdf264] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomStartFrame
	// bool GetCustomStartFrame(int32_t& AttributeValue);                                                                       // [0xccdf0bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomDuration
	// bool GetCustomDuration(int32_t& AttributeValue);                                                                         // [0xccde2ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomTargetedProperty(int32_t& TargetedProperty);                                                               // [0xcce316c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.SetCustomPropertyTrack
	// bool SetCustomPropertyTrack(FName& PropertyTrack);                                                                       // [0xcce2860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.SetCustomFrameCount
	// bool SetCustomFrameCount(int32_t& AttributeValue);                                                                       // [0xcce25c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.SetCustomAnimationPayloadKey
	// bool SetCustomAnimationPayloadKey(FString InUniqueId, EInterchangeAnimationPayLoadType& InType);                         // [0xcce18b4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.SetCustomActorDependencyUid
	// bool SetCustomActorDependencyUid(FString DependencyUid);                                                                 // [0xcce1244] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomTargetedProperty
	// bool GetCustomTargetedProperty(int32_t& TargetedProperty);                                                               // [0xccdf190] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomPropertyTrack
	// bool GetCustomPropertyTrack(FName& PropertyTrack);                                                                       // [0xccde8bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomFrameCount
	// bool GetCustomFrameCount(int32_t& AttributeValue);                                                                       // [0xccde620] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomAnimationPayloadKey
	// bool GetCustomAnimationPayloadKey(FInterchangeAnimationPayLoadKey& AnimationPayLoadKey);                                 // [0xccdd7b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomActorDependencyUid
	// bool GetCustomActorDependencyUid(FString& DependencyUid);                                                                // [0xccdd178] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomUsedChannels(int32_t& AttributeValue);                                                                     // [0xcce3948] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTransformAnimationTrackNode.GetCustomUsedChannels
	// bool GetCustomUsedChannels(int32_t& AttributeValue);                                                                     // [0xccdf934] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomSkeletonNodeUid(FString AttributeValue);                                                                   // [0xcce2a28] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationStopTime
	// bool SetCustomAnimationStopTime(double& StopTime);                                                                       // [0xcce2088] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationStartTime
	// bool SetCustomAnimationStartTime(double& StartTime);                                                                     // [0xcce1fec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationSampleRate
	// bool SetCustomAnimationSampleRate(double& SampleRate);                                                                   // [0xcce1f50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetAnimationPayloadKeyForSceneNodeUid
	// bool SetAnimationPayloadKeyForSceneNodeUid(FString SceneNodeUid, FString InUniqueId, EInterchangeAnimationPayLoadType& InType); // [0xcce0b18] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetAnimationPayloadKeyForMorphTargetNodeUid
	// bool SetAnimationPayloadKeyForMorphTargetNodeUid(FString MorphTargetNodeUid, FString InUniqueId, EInterchangeAnimationPayLoadType& InType); // [0xcce03ec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetSceneNodeAnimationPayloadKeys
	// void GetSceneNodeAnimationPayloadKeys(TMap<FString, FString>& OutSceneNodeAnimationPayloadKeyUids, TMap<FString, char>& OutSceneNodeAnimationPayloadKeyTypes); // [0xccdfc10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetMorphTargetNodeAnimationPayloadKeys
	// void GetMorphTargetNodeAnimationPayloadKeys(TMap<FString, FString>& OutMorphTargetNodeAnimationPayloadKeyUids, TMap<FString, char>& OutMorphTargetNodeAnimationPayloadKeyTypes); // [0xccdfaa0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomSkeletonNodeUid
	// bool GetCustomSkeletonNodeUid(FString& AttributeValue);                                                                  // [0xccdea84] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationStopTime
	// bool GetCustomAnimationStopTime(double& StopTime);                                                                       // [0xccdd990] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationStartTime
	// bool GetCustomAnimationStartTime(double& StartTime);                                                                     // [0xccdd8f4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationSampleRate
	// bool GetCustomAnimationSampleRate(double& SampleRate);                                                                   // [0xccdd858] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomSensorWidth(float& AttributeValue);                                                                        // [0xcce2990] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.SetCustomSensorHeight
	// bool SetCustomSensorHeight(float& AttributeValue);                                                                       // [0xcce28f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.SetCustomFocalLength
	// bool SetCustomFocalLength(float& AttributeValue);                                                                        // [0xcce252c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.SetCustomEnableDepthOfField
	// bool SetCustomEnableDepthOfField(bool& AttributeValue);                                                                  // [0xcce2364] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.GetCustomSensorWidth
	// bool GetCustomSensorWidth(float& AttributeValue);                                                                        // [0xccde9ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.GetCustomSensorHeight
	// bool GetCustomSensorHeight(float& AttributeValue);                                                                       // [0xccde954] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.GetCustomFocalLength
	// bool GetCustomFocalLength(float& AttributeValue);                                                                        // [0xccde588] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.GetCustomEnableDepthOfField
	// bool GetCustomEnableDepthOfField(bool& AttributeValue);                                                                  // [0xccde3c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomWidth(float& AttributeValue);                                                                              // [0xcce3a1c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomProjectionMode
	// bool SetCustomProjectionMode(EInterchangeCameraProjectionType& AttributeValue);                                          // [0xcce27c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomNearClipPlane
	// bool SetCustomNearClipPlane(float& AttributeValue);                                                                      // [0xcce2730] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomFieldOfView
	// bool SetCustomFieldOfView(float& AttributeValue);                                                                        // [0xcce2494] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomFarClipPlane
	// bool SetCustomFarClipPlane(float& AttributeValue);                                                                       // [0xcce23fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomAspectRatio
	// bool SetCustomAspectRatio(float& AttributeValue);                                                                        // [0xcce2124] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomWidth
	// bool GetCustomWidth(float& AttributeValue);                                                                              // [0xccdfa08] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomProjectionMode
	// bool GetCustomProjectionMode(EInterchangeCameraProjectionType& AttributeValue);                                          // [0xccde824] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomNearClipPlane
	// bool GetCustomNearClipPlane(float& AttributeValue);                                                                      // [0xccde78c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomFieldOfView
	// bool GetCustomFieldOfView(float& AttributeValue);                                                                        // [0xccde4f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomFarClipPlane
	// bool GetCustomFarClipPlane(float& AttributeValue);                                                                       // [0xccde458] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomAspectRatio
	// bool GetCustomAspectRatio(float& AttributeValue);                                                                        // [0xccde180] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomShaderType(FString AttributeValue);                                                                        // [0xcd1d510] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderNode.GetCustomShaderType
	// bool GetCustomShaderType(FString& AttributeValue);                                                                       // [0xcd159ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderNode.AddStringInput
	// bool AddStringInput(FString InputName, FString AttributeValue, bool bIsAParameter);                                      // [0xcd11cd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderNode.AddLinearColorInput
	// bool AddLinearColorInput(FString InputName, FLinearColor& AttributeValue, bool bIsAParameter);                           // [0xcd10f44] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderNode.AddFloatInput
	// bool AddFloatInput(FString InputName, float& AttributeValue, bool bIsAParameter);                                        // [0xcd10824] Final|Native|Public|HasOutParms|BlueprintCallable 
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
	// bool SetCustomSortOrder(int32_t& AttributeValue);                                                                        // [0xcd00d44] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.SetCustomDecalSize
	// bool SetCustomDecalSize(FVector& AttributeValue);                                                                        // [0xccfed8c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.SetCustomDecalMaterialPathName
	// bool SetCustomDecalMaterialPathName(FString AttributeValue);                                                             // [0xccfe71c] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.GetCustomSortOrder
	// bool GetCustomSortOrder(int32_t& AttributeValue);                                                                        // [0xccf79ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.GetCustomDecalSize
	// bool GetCustomDecalSize(FVector& AttributeValue);                                                                        // [0xccf5524] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.GetCustomDecalMaterialPathName
	// bool GetCustomDecalMaterialPathName(FString& AttributeValue);                                                            // [0xccf4eec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomUseTemperature(bool AttributeValue);                                                                       // [0xcd01344] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.SetCustomTemperature
	// bool SetCustomTemperature(float AttributeValue);                                                                         // [0xcd00fb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.SetCustomLightColor
	// bool SetCustomLightColor(FLinearColor& AttributeValue);                                                                  // [0xcd00220] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.SetCustomIntensity
	// bool SetCustomIntensity(float AttributeValue);                                                                           // [0xcd000b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.GetCustomUseTemperature
	// bool GetCustomUseTemperature(bool& AttributeValue);                                                                      // [0xccf7e4c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.GetCustomTemperature
	// bool GetCustomTemperature(float& AttributeValue);                                                                        // [0xccf7bb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.GetCustomLightColor
	// bool GetCustomLightColor(FLinearColor& AttributeValue);                                                                  // [0xccf6fb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.GetCustomIntensity
	// bool GetCustomIntensity(float& AttributeValue);                                                                          // [0xccf6e80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomUseIESBrightness(bool& AttributeValue, bool bAddApplyDelegate);                                            // [0xcd0115c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomRotation
	// bool SetCustomRotation(FRotator& AttributeValue, bool bAddApplyDelegate);                                                // [0xcd00b98] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomIntensityUnits
	// bool SetCustomIntensityUnits(EInterchangeLightUnits& AttributeValue);                                                    // [0xcd00188] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomIESTexture
	// bool SetCustomIESTexture(FString AttributeValue);                                                                        // [0xccff978] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomIESBrightnessScale
	// bool SetCustomIESBrightnessScale(float& AttributeValue, bool bAddApplyDelegate);                                         // [0xccff860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomAttenuationRadius
	// bool SetCustomAttenuationRadius(float AttributeValue);                                                                   // [0xccfe5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomUseIESBrightness
	// bool GetCustomUseIESBrightness(bool& AttributeValue);                                                                    // [0xccf7d1c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomRotation
	// bool GetCustomRotation(FRotator& AttributeValue);                                                                        // [0xccf7880] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomIntensityUnits
	// bool GetCustomIntensityUnits(EInterchangeLightUnits& AttributeValue);                                                    // [0xccf6f18] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomIESTexture
	// bool GetCustomIESTexture(FString& AttributeValue);                                                                       // [0xccf67b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomIESBrightnessScale
	// bool GetCustomIESBrightnessScale(float& AttributeValue);                                                                 // [0xccf6718] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomAttenuationRadius
	// bool GetCustomAttenuationRadius(float& AttributeValue);                                                                  // [0xccf4db8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomUseInverseSquaredFalloff(bool AttributeValue);                                                             // [0xcd01274] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePointLightNode.SetCustomLightFalloffExponent
	// bool SetCustomLightFalloffExponent(float AttributeValue);                                                                // [0xcd002b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePointLightNode.GetCustomUseInverseSquaredFalloff
	// bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue);                                                            // [0xccf7db4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangePointLightNode.GetCustomLightFalloffExponent
	// bool GetCustomLightFalloffExponent(float& AttributeValue);                                                               // [0xccf7044] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomOuterConeAngle(float AttributeValue);                                                                      // [0xcd00384] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSpotLightNode.SetCustomInnerConeAngle
	// bool SetCustomInnerConeAngle(float AttributeValue);                                                                      // [0xccfffe8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSpotLightNode.GetCustomOuterConeAngle
	// bool GetCustomOuterConeAngle(float& AttributeValue);                                                                     // [0xccf70dc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSpotLightNode.GetCustomInnerConeAngle
	// bool GetCustomInnerConeAngle(float& AttributeValue);                                                                     // [0xccf6de8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomSourceWidth(float AttributeValue);                                                                         // [0xcd00ee8] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeRectLightNode.SetCustomSourceHeight
	// bool SetCustomSourceHeight(float AttributeValue);                                                                        // [0xcd00e18] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeRectLightNode.GetCustomSourceWidth
	// bool GetCustomSourceWidth(float& AttributeValue);                                                                        // [0xccf7b18] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeRectLightNode.GetCustomSourceHeight
	// bool GetCustomSourceHeight(float& AttributeValue);                                                                       // [0xccf7a80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// void SetPayLoadKey(FString PayloadKey);                                                                                  // [0xcd03034] Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.SetCustomSRGB
	// bool SetCustomSRGB(bool& AttributeValue);                                                                                // [0xcd00cac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.SetCustomFilter
	// bool SetCustomFilter(EInterchangeTextureFilterMode& AttributeValue);                                                     // [0xccff4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.SetCustombFlipGreenChannel
	// bool SetCustombFlipGreenChannel(bool& AttributeValue);                                                                   // [0xcd01b58] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.GetCustomSRGB
	// bool GetCustomSRGB(bool& AttributeValue);                                                                                // [0xccf7914] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.GetCustomFilter
	// bool GetCustomFilter(EInterchangeTextureFilterMode& AttributeValue);                                                     // [0xccf6388] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.GetCustombFlipGreenChannel
	// bool GetCustombFlipGreenChannel(bool& AttributeValue);                                                                   // [0xccf85f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomVariantsPayloadKey(FString PayloadKey);                                                                    // [0xcd01414] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.SetCustomDisplayText
	// bool SetCustomDisplayText(FString AttributeValue);                                                                       // [0xccfee60] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.RemoveCustomDependencyUid
	// bool RemoveCustomDependencyUid(FString DependencyUid);                                                                   // [0xccfc580] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomVariantsPayloadKey
	// bool GetCustomVariantsPayloadKey(FString& PayloadKey);                                                                   // [0xccf7ee4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomDisplayText
	// bool GetCustomDisplayText(FString& AttributeValue);                                                                      // [0xccf5d50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUids
	// void GetCustomDependencyUids(TArray<FString>& OutDependencyUids);                                                        // [0xccf5cb4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUidCount
	// int32_t GetCustomDependencyUidCount();                                                                                   // [0xccf5c8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUid
	// void GetCustomDependencyUid(int32_t Index, FString& OutDependencyUid);                                                   // [0xccf55f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.AddCustomDependencyUid
	// bool AddCustomDependencyUid(FString DependencyUid);                                                                      // [0xccf2bb8] Final|Native|Public|BlueprintCallable 
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
	// bool RemoveCustomVariantSetUid(FString VariantUID);                                                                      // [0xccb4068] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUids
	// void GetCustomVariantSetUids(TArray<FString>& OutVariantUids);                                                           // [0xccaa4d4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUidCount
	// int32_t GetCustomVariantSetUidCount();                                                                                   // [0xccaa570] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUid
	// void GetCustomVariantSetUid(int32_t Index, FString& OutVariantUid);                                                      // [0xccaa598] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneVariantSetsNode.AddCustomVariantSetUid
	// bool AddCustomVariantSetUid(FString VariantUID);                                                                         // [0xcca21c0] Final|Native|Public|BlueprintCallable 
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
	// bool SetCustomParent(FString AttributeValue);                                                                            // [0xcd00454] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetVectorParameterValue
	// bool GetVectorParameterValue(FString ParameterName, FLinearColor& AttributeValue);                                       // [0xccfbe78] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetTextureParameterValue
	// bool GetTextureParameterValue(FString ParameterName, FString& AttributeValue);                                           // [0xccfb7a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetStaticSwitchParameterValue
	// bool GetStaticSwitchParameterValue(FString ParameterName, bool& AttributeValue);                                         // [0xccfb0ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetScalarParameterValue
	// bool GetScalarParameterValue(FString ParameterName, float& AttributeValue);                                              // [0xccf9414] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetCustomParent
	// bool GetCustomParent(FString& AttributeValue);                                                                           // [0xccf7174] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.AddVectorParameterValue
	// bool AddVectorParameterValue(FString ParameterName, FLinearColor& AttributeValue);                                       // [0xccf46f8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.AddTextureParameterValue
	// bool AddTextureParameterValue(FString ParameterName, FString AttributeValue);                                            // [0xccf3ff4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.AddStaticSwitchParameterValue
	// bool AddStaticSwitchParameterValue(FString ParameterName, bool AttributeValue);                                          // [0xccf38fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.AddScalarParameterValue
	// bool AddScalarParameterValue(FString ParameterName, float AttributeValue);                                               // [0xccf3228] Final|Native|Public|BlueprintCallable 
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
	// bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);                                      // [0xcd04450] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetSkinnedMesh
	// bool SetSkinnedMesh(bool bIsSkinnedMesh);                                                                                // [0xcd04380] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetSkeletonDependencyUid
	// bool SetSkeletonDependencyUid(FString DependencyUid);                                                                    // [0xcd03d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetSceneInstanceUid
	// bool SetSceneInstanceUid(FString DependencyUid);                                                                         // [0xcd036a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetPayLoadKey
	// void SetPayLoadKey(FString PayloadKey, EInterchangeMeshPayLoadType& PayloadType);                                        // [0xcd029a0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetMorphTargetName
	// bool SetMorphTargetName(FString MorphTargetName);                                                                        // [0xcd02330] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetMorphTargetDependencyUid
	// bool SetMorphTargetDependencyUid(FString DependencyUid);                                                                 // [0xcd01cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetMorphTarget
	// bool SetMorphTarget(bool bIsMorphTarget);                                                                                // [0xcd01bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomVertexCount
	// bool SetCustomVertexCount(int32_t& AttributeValue);                                                                      // [0xcd01a84] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomUVCount
	// bool SetCustomUVCount(int32_t& AttributeValue);                                                                          // [0xcd01088] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomPolygonCount
	// bool SetCustomPolygonCount(int32_t& AttributeValue);                                                                     // [0xcd00ac4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexTangent
	// bool SetCustomHasVertexTangent(bool& AttributeValue);                                                                    // [0xccff7c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexNormal
	// bool SetCustomHasVertexNormal(bool& AttributeValue);                                                                     // [0xccff730] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexColor
	// bool SetCustomHasVertexColor(bool& AttributeValue);                                                                      // [0xccff698] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexBinormal
	// bool SetCustomHasVertexBinormal(bool& AttributeValue);                                                                   // [0xccff600] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasSmoothGroup
	// bool SetCustomHasSmoothGroup(bool& AttributeValue);                                                                      // [0xccff568] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomBoundingBox
	// bool SetCustomBoundingBox(FBox& AttributeValue);                                                                         // [0xccfe680] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.RemoveSlotMaterialDependencyUid
	// bool RemoveSlotMaterialDependencyUid(FString SlotName);                                                                  // [0xccfdf40] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.RemoveSkeletonDependencyUid
	// bool RemoveSkeletonDependencyUid(FString DependencyUid);                                                                 // [0xccfd8d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.RemoveSceneInstanceUid
	// bool RemoveSceneInstanceUid(FString DependencyUid);                                                                      // [0xccfd260] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.RemoveMorphTargetDependencyUid
	// bool RemoveMorphTargetDependencyUid(FString DependencyUid);                                                              // [0xccfcbf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.IsSkinnedMesh
	// bool IsSkinnedMesh();                                                                                                    // [0xccfc55c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.IsMorphTarget
	// bool IsMorphTarget();                                                                                                    // [0xccfc538] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSlotMaterialDependencyUid
	// bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);                                     // [0xccfaa44] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSlotMaterialDependencies
	// void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies);                                       // [0xccfa960] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSkeletonDependency
	// void GetSkeletonDependency(int32_t Index, FString& OutDependency);                                                       // [0xccfa2cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSkeletonDependencies
	// void GetSkeletonDependencies(TArray<FString>& OutDependencies);                                                          // [0xccfa230] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSkeletonDependeciesCount
	// int32_t GetSkeletonDependeciesCount();                                                                                   // [0xccfa20c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUidsCount
	// int32_t GetSceneInstanceUidsCount();                                                                                     // [0xccfa1e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUids
	// void GetSceneInstanceUids(TArray<FString>& OutDependencies);                                                             // [0xccfa144] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUid
	// void GetSceneInstanceUid(int32_t Index, FString& OutDependency);                                                         // [0xccf9ab0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetMorphTargetName
	// bool GetMorphTargetName(FString& OutMorphTargetName);                                                                    // [0xccf8ddc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependency
	// void GetMorphTargetDependency(int32_t Index, FString& OutDependency);                                                    // [0xccf8748] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependencies
	// void GetMorphTargetDependencies(TArray<FString>& OutDependencies);                                                       // [0xccf86ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependeciesCount
	// int32_t GetMorphTargetDependeciesCount();                                                                                // [0xccf8688] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomVertexCount
	// bool GetCustomVertexCount(int32_t& AttributeValue);                                                                      // [0xccf851c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomUVCount
	// bool GetCustomUVCount(int32_t& AttributeValue);                                                                          // [0xccf7c48] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomPolygonCount
	// bool GetCustomPolygonCount(int32_t& AttributeValue);                                                                     // [0xccf77ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexTangent
	// bool GetCustomHasVertexTangent(bool& AttributeValue);                                                                    // [0xccf6680] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexNormal
	// bool GetCustomHasVertexNormal(bool& AttributeValue);                                                                     // [0xccf65e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexColor
	// bool GetCustomHasVertexColor(bool& AttributeValue);                                                                      // [0xccf6550] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexBinormal
	// bool GetCustomHasVertexBinormal(bool& AttributeValue);                                                                   // [0xccf64b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasSmoothGroup
	// bool GetCustomHasSmoothGroup(bool& AttributeValue);                                                                      // [0xccf6420] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomBoundingBox
	// bool GetCustomBoundingBox(FBox& AttributeValue);                                                                         // [0xccf4e50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);                                      // [0xcd1e6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetMorphTargetCurveWeight
	// bool SetMorphTargetCurveWeight(FString MorphTargetName, float& Weight);                                                  // [0xcd1dfd4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomTimeZeroLocalTransform
	// bool SetCustomTimeZeroLocalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& AttributeValue, bool bResetCache); // [0xcd1db80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomLocalTransform
	// bool SetCustomLocalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& AttributeValue, bool bResetCache); // [0xcd1cafc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomGeometricTransform
	// bool SetCustomGeometricTransform(FTransform& AttributeValue);                                                            // [0xcd1c960] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomBindPoseLocalTransform
	// bool SetCustomBindPoseLocalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& AttributeValue, bool bResetCache); // [0xcd1c6a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomAssetInstanceUid
	// bool SetCustomAssetInstanceUid(FString AttributeValue);                                                                  // [0xcd1c030] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomAnimationAssetUidToPlay
	// bool SetCustomAnimationAssetUidToPlay(FString AttributeValue);                                                           // [0xcd1b9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.RemoveSpecializedType
	// bool RemoveSpecializedType(FString SpecializedType);                                                                     // [0xcd1b350] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.RemoveSlotMaterialDependencyUid
	// bool RemoveSlotMaterialDependencyUid(FString SlotName);                                                                  // [0xcd1ace0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.IsSpecializedTypeContains
	// bool IsSpecializedTypeContains(FString SpecializedType);                                                                 // [0xcd18cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSpecializedTypes
	// void GetSpecializedTypes(TArray<FString>& OutSpecializedTypes);                                                          // [0xcd17d4c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSpecializedTypeCount
	// int32_t GetSpecializedTypeCount();                                                                                       // [0xcd17d28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSpecializedType
	// void GetSpecializedType(int32_t Index, FString& OutSpecializedType);                                                     // [0xcd17694] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSlotMaterialDependencyUid
	// bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);                                     // [0xcd16f70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSlotMaterialDependencies
	// void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies);                                       // [0xcd16e8c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetMorphTargetCurveWeights
	// void GetMorphTargetCurveWeights(TMap<FString, float>& OutMorphTargetCurveWeights);                                       // [0xcd16da8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomTimeZeroLocalTransform
	// bool GetCustomTimeZeroLocalTransform(FTransform& AttributeValue);                                                        // [0xcd162c4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomTimeZeroGlobalTransform
	// bool GetCustomTimeZeroGlobalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache); // [0xcd16024] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomLocalTransform
	// bool GetCustomLocalTransform(FTransform& AttributeValue);                                                                // [0xcd15180] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomGlobalTransform
	// bool GetCustomGlobalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache); // [0xcd14e48] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomGeometricTransform
	// bool GetCustomGeometricTransform(FTransform& AttributeValue);                                                            // [0xcd14d44] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomBindPoseLocalTransform
	// bool GetCustomBindPoseLocalTransform(FTransform& AttributeValue);                                                        // [0xcd14b6c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomBindPoseGlobalTransform
	// bool GetCustomBindPoseGlobalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache); // [0xcd148cc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomAssetInstanceUid
	// bool GetCustomAssetInstanceUid(FString& AttributeValue);                                                                 // [0xcd14294] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomAnimationAssetUidToPlay
	// bool GetCustomAnimationAssetUidToPlay(FString& AttributeValue);                                                          // [0xcd13c5c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.AddSpecializedType
	// bool AddSpecializedType(FString SpecializedType);                                                                        // [0xcd11664] Final|Native|Public|BlueprintCallable 
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
	// FString MakeInputValueKey(FString InputName);                                                                            // [0xcd1a678] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.MakeInputParameterKey
	// FString MakeInputParameterKey(FString InputName);                                                                        // [0xcd1a010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.MakeInputName
	// FString MakeInputName(FString InputKey);                                                                                 // [0xcd199a8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.MakeInputConnectionKey
	// FString MakeInputConnectionKey(FString InputName);                                                                       // [0xcd19340] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.IsAParameter
	// bool IsAParameter(FString AttributeKey);                                                                                 // [0xcd18000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.IsAnInput
	// bool IsAnInput(FString AttributeKey);                                                                                    // [0xcd18668] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.HasParameter
	// bool HasParameter(class UInterchangeBaseNode* InterchangeNode, FName& InInputName);                                      // [0xcd17ef4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.HasInput
	// bool HasInput(class UInterchangeBaseNode* InterchangeNode, FName& InInputName);                                          // [0xcd17de8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.GetInputConnection
	// bool GetInputConnection(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString& OutExpressionUid, FString& OutputName); // [0xcd16628] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.GatherInputs
	// void GatherInputs(class UInterchangeBaseNode* InterchangeNode, TArray<FString>& OutInputNames);                          // [0xcd13b44] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.ConnectOuputToInputByName
	// bool ConnectOuputToInputByName(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString ExpressionUid, FString OutputName); // [0xcd13360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.ConnectOuputToInputByIndex
	// bool ConnectOuputToInputByIndex(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString ExpressionUid, int32_t OutputIndex); // [0xcd12b90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.ConnectDefaultOuputToInput
	// bool ConnectDefaultOuputToInput(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString ExpressionUid);  // [0xcd12438] Final|Native|Static|Public|BlueprintCallable 
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
	// bool SetCustomMaterialFunction(FString AttributeValue);                                                                  // [0xcd1ccf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeFunctionCallShaderNode.GetCustomMaterialFunction
	// bool GetCustomMaterialFunction(FString& AttributeValue);                                                                 // [0xcd15284] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomTwoSidedTransmission(bool& AttributeValue);                                                                // [0xcd1de0c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomTwoSided
	// bool SetCustomTwoSided(bool& AttributeValue);                                                                            // [0xcd1dd74] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomScreenSpaceReflections
	// bool SetCustomScreenSpaceReflections(bool& AttributeValue);                                                              // [0xcd1d478] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomOpacityMaskClipValue
	// bool SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate);                                       // [0xcd1d360] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomIsAShaderFunction
	// bool SetCustomIsAShaderFunction(bool& AttributeValue);                                                                   // [0xcd1ca64] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomBlendMode
	// bool SetCustomBlendMode(int32_t AttributeValue);                                                                         // [0xcd1c894] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomTwoSidedTransmission
	// bool GetCustomTwoSidedTransmission(bool& AttributeValue);                                                                // [0xcd16460] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomTwoSided
	// bool GetCustomTwoSided(bool& AttributeValue);                                                                            // [0xcd163c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomScreenSpaceReflections
	// bool GetCustomScreenSpaceReflections(bool& AttributeValue);                                                              // [0xcd15954] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomOpacityMaskClipValue
	// bool GetCustomOpacityMaskClipValue(float& AttributeValue);                                                               // [0xcd158bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomIsAShaderFunction
	// bool GetCustomIsAShaderFunction(bool& AttributeValue);                                                                   // [0xcd150e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomBlendMode
	// bool GetCustomBlendMode(int32_t& AttributeValue);                                                                        // [0xcd14c70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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
	// bool SetCustomWrapV(EInterchangeTextureWrapMode& AttributeValue);                                                        // [0xcd1df3c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTexture2DNode.SetCustomWrapU
	// bool SetCustomWrapU(EInterchangeTextureWrapMode& AttributeValue);                                                        // [0xcd1dea4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTexture2DNode.GetSourceBlocks
	// TMap<int32_t, FString> GetSourceBlocks();                                                                                // [0xcd17618] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeTexture2DNode.GetCustomWrapV
	// bool GetCustomWrapV(EInterchangeTextureWrapMode& AttributeValue);                                                        // [0xcd16590] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeTexture2DNode.GetCustomWrapU
	// bool GetCustomWrapU(EInterchangeTextureWrapMode& AttributeValue);                                                        // [0xcd164f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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

