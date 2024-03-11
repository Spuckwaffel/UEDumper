
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FabricRuntime
/// dependency: FortniteGame
/// dependency: GameplayEventRouter

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCableActivatedState
/// Size: 0x03
enum class EDeviceCableActivatedState : uint8_t
{
	EDeviceCableActivatedState__Active                                               = 0,
	EDeviceCableActivatedState__Dormant                                              = 1,
	EDeviceCableActivatedState__EDeviceCableActivatedState_MAX                       = 2
};

/// Enum /Script/FMDeviceCablesRuntime.EPortSelectStatus
/// Size: 0x15
enum class EPortSelectStatus : uint8_t
{
	EPortSelectStatus__Error                                                         = 0,
	EPortSelectStatus__ControllerCableUsed                                           = 1,
	EPortSelectStatus__GaveControllerCable                                           = 2,
	EPortSelectStatus__CableSwap                                                     = 3,
	EPortSelectStatus__NewCableUsed                                                  = 4,
	EPortSelectStatus__ConstantCableUsed                                             = 5,
	EPortSelectStatus__ConnectionEnded                                               = 6,
	EPortSelectStatus__NoCableAvailable                                              = 7,
	EPortSelectStatus__TypeMismatch                                                  = 8,
	EPortSelectStatus__AttemptedMultiConnect                                         = 9,
	EPortSelectStatus__SelfSelect                                                    = 10,
	EPortSelectStatus__InvalidConnection                                             = 11,
	EPortSelectStatus__WouldCreateLoop                                               = 12,
	EPortSelectStatus__Unselectable                                                  = 13,
	EPortSelectStatus__EPortSelectStatus_MAX                                         = 14
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCablePortAnimationSyncType
/// Size: 0x04
enum class EDeviceCablePortAnimationSyncType : uint8_t
{
	EDeviceCablePortAnimationSyncType__Follower                                      = 0,
	EDeviceCablePortAnimationSyncType__Authority                                     = 1,
	EDeviceCablePortAnimationSyncType__Independent                                   = 2,
	EDeviceCablePortAnimationSyncType__EDeviceCablePortAnimationSyncType_MAX         = 3
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCablePortFlowType
/// Size: 0x04
enum class EDeviceCablePortFlowType : uint8_t
{
	EDeviceCablePortFlowType__Input                                                  = 0,
	EDeviceCablePortFlowType__Output                                                 = 1,
	EDeviceCablePortFlowType__Any                                                    = 2,
	EDeviceCablePortFlowType__EDeviceCablePortFlowType_MAX                           = 3
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCablePortDataType
/// Size: 0x07
enum class EDeviceCablePortDataType : uint8_t
{
	EDeviceCablePortDataType__Scalar                                                 = 0,
	EDeviceCablePortDataType__Note                                                   = 1,
	EDeviceCablePortDataType__Audio                                                  = 2,
	EDeviceCablePortDataType__Texture                                                = 3,
	EDeviceCablePortDataType__Mesh                                                   = 4,
	EDeviceCablePortDataType__Any                                                    = 5,
	EDeviceCablePortDataType__EDeviceCablePortDataType_MAX                           = 6
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCablePortSelectableState
/// Size: 0x03
enum class EDeviceCablePortSelectableState : uint8_t
{
	EDeviceCablePortSelectableState__Selectable                                      = 0,
	EDeviceCablePortSelectableState__Unselectable                                    = 1,
	EDeviceCablePortSelectableState__EDeviceCablePortSelectableState_MAX             = 2
};

/// Enum /Script/FMDeviceCablesRuntime.EFMDeviceCablePortComponentAllowMultipleConnections
/// Size: 0x04
enum class EFMDeviceCablePortComponentAllowMultipleConnections : uint8_t
{
	EFMDeviceCablePortComponentAllowMultipleConnections__NoPreference                = 0,
	EFMDeviceCablePortComponentAllowMultipleConnections__ForceMultiple               = 1,
	EFMDeviceCablePortComponentAllowMultipleConnections__ForceSingle                 = 2,
	EFMDeviceCablePortComponentAllowMultipleConnections__EFMDeviceCablePortComponentAllowMultipleConnections_MAX = 3
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCableLoadableState
/// Size: 0x03
enum class EDeviceCableLoadableState : uint8_t
{
	EDeviceCableLoadableState__Loadable                                              = 0,
	EDeviceCableLoadableState__NotLoadable                                           = 1,
	EDeviceCableLoadableState__EDeviceCableLoadableState_MAX                         = 2
};

/// Enum /Script/FMDeviceCablesRuntime.EFMDeviceCableAnimationQuality
/// Size: 0x04
enum class EFMDeviceCableAnimationQuality : uint8_t
{
	EFMDeviceCableAnimationQuality__High                                             = 0,
	EFMDeviceCableAnimationQuality__Med                                              = 1,
	EFMDeviceCableAnimationQuality__Low                                              = 2,
	EFMDeviceCableAnimationQuality__EFMDeviceCableAnimationQuality_MAX               = 3
};

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCableInteractionType
/// Size: 0x03
enum class EDeviceCableInteractionType : uint8_t
{
	EDeviceCableInteractionType__Free                                                = 0,
	EDeviceCableInteractionType__StaticOutput                                        = 1,
	EDeviceCableInteractionType__EDeviceCableInteractionType_MAX                     = 2
};

/// Enum /Script/FMDeviceCablesRuntime.EFMDeviceCableWildcardOrderingState
/// Size: 0x04
enum class EFMDeviceCableWildcardOrderingState : uint32_t
{
	EFMDeviceCableWildcardOrderingState__Inactive                                    = 0,
	EFMDeviceCableWildcardOrderingState__Pending                                     = 1,
	EFMDeviceCableWildcardOrderingState__Active                                      = 2,
	EFMDeviceCableWildcardOrderingState__EFMDeviceCableWildcardOrderingState_MAX     = 3
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCable
/// Size: 0x01D8 (0x000718 - 0x0008F0)
class AFMDeviceCable : public ABuildingActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0718   (0x0018)  MISSED
	class USplineComponent*                            SplineComponent;                                            // 0x0730   (0x0008)  
	class UStaticMeshComponent*                        DeviceCableHead;                                            // 0x0738   (0x0008)  
	class UClass*                                      SplineMeshComponentClass;                                   // 0x0740   (0x0008)  
	SDK_UNDEFINED(32,13751) /* TWeakObjectPtr<UStaticMesh*> */ __um(ScalarStaticMesh);                             // 0x0748   (0x0020)  
	SDK_UNDEFINED(32,13752) /* TWeakObjectPtr<UStaticMesh*> */ __um(AudioStaticMesh);                              // 0x0768   (0x0020)  
	SDK_UNDEFINED(32,13753) /* TWeakObjectPtr<UStaticMesh*> */ __um(NoteStaticMesh);                               // 0x0788   (0x0020)  
	SDK_UNDEFINED(32,13754) /* TWeakObjectPtr<UStaticMesh*> */ __um(TextureStaticMesh);                            // 0x07A8   (0x0020)  
	SDK_UNDEFINED(32,13755) /* TWeakObjectPtr<UStaticMesh*> */ __um(MeshStaticMesh);                               // 0x07C8   (0x0020)  
	FName                                              SplineLengthParam;                                          // 0x07E8   (0x0004)  
	FName                                              SplineStartParam;                                           // 0x07EC   (0x0004)  
	FName                                              SplineEndParam;                                             // 0x07F0   (0x0004)  
	FName                                              PortTypeParam;                                              // 0x07F4   (0x0004)  
	float                                              CableStubLength;                                            // 0x07F8   (0x0004)  
	float                                              CableDistanceFromPortB;                                     // 0x07FC   (0x0004)  
	float                                              CableMinTangent;                                            // 0x0800   (0x0004)  
	float                                              CableMaxTangent;                                            // 0x0804   (0x0004)  
	float                                              CableSectionLengthAtCableCenter;                            // 0x0808   (0x0004)  
	float                                              CableSectionLengthAtCableHeads;                             // 0x080C   (0x0004)  
	int32_t                                            CableSectionCountAtCableHeads;                              // 0x0810   (0x0004)  
	int32_t                                            CableCenterSectionsMaxCount;                                // 0x0814   (0x0004)  
	float                                              ExtremeMinDotProduct;                                       // 0x0818   (0x0004)  
	float                                              MaxExtremeCableBendSize;                                    // 0x081C   (0x0004)  
	float                                              ExtremeAngleTangentScale;                                   // 0x0820   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0824   (0x0004)  MISSED
	TArray<class USplineMeshComponent*>                CableSplineMeshArray;                                       // 0x0828   (0x0010)  
	SDK_UNDEFINED(8,13756) /* TWeakObjectPtr<UFMDeviceCableAnimatorBase*> */ __um(DeviceCableAnimator);            // 0x0838   (0x0008)  
	class UMaterialInstanceDynamic*                    DeviceCableMaterial;                                        // 0x0840   (0x0008)  
	class UMaterialInstanceDynamic*                    DeviceCableHeadMaterial;                                    // 0x0848   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0850   (0x0010)  MISSED
	class UFMDeviceCablePortComponent*                 ConstantPort;                                               // 0x0860   (0x0008)  
	class UFMDeviceCablePortComponent*                 PortA;                                                      // 0x0868   (0x0008)  
	class UFMDeviceCablePortComponent*                 ServerPortA;                                                // 0x0870   (0x0008)  
	class UFMDeviceCablePortComponent*                 PortB;                                                      // 0x0878   (0x0008)  
	class UFMDeviceCablePortComponent*                 ServerPortB;                                                // 0x0880   (0x0008)  
	unsigned char                                      UnknownData03_6[0x68];                                      // 0x0888   (0x0068)  MISSED


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.UpdateVisualParameters
	// void UpdateVisualParameters();                                                                                        // [0xabf885c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.UpdateDeviceCableAnimator
	// void UpdateDeviceCableAnimator();                                                                                     // [0xabf8848] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.SetFocusedVisuals
	// void SetFocusedVisuals(bool bIsFocused);                                                                              // [0xabf86bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnSplineUpdated
	// void OnSplineUpdated(bool bCollisionEnabled);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnScalesUpdated
	// void OnScalesUpdated(FVector StartScale, FVector EndScale);                                                           // [0x18a39e4] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnRep_ServerPortB
	// void OnRep_ServerPortB();                                                                                             // [0xabf8188] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnRep_ServerPortA
	// void OnRep_ServerPortA();                                                                                             // [0xabf8174] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnCableReturned
	// void OnCableReturned();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnCableGrabbed
	// void OnCableGrabbed(bool bThroughReplication);                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnCableDisconnected
	// void OnCableDisconnected(bool bThroughReplication);                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnCableConnected
	// void OnCableConnected(bool bThroughReplication);                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetPortB
	// class UFMDeviceCablePortComponent* GetPortB();                                                                        // [0xabf794c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetPortA
	// class UFMDeviceCablePortComponent* GetPortA();                                                                        // [0xabf7934] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetDeviceCableHead
	// class UStaticMeshComponent* GetDeviceCableHead();                                                                     // [0xabf791c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetConstantPort
	// class UFMDeviceCablePortComponent* GetConstantPort();                                                                 // [0xabf7904] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetCableSpline
	// class USplineComponent* GetCableSpline();                                                                             // [0xabf78ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetCableDataType
	// EDeviceCablePortDataType GetCableDataType();                                                                          // [0xabf78b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.Disconnect
	// void Disconnect();                                                                                                    // [0xabf788c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.ConnectPort
	// void ConnectPort(class UFMDeviceCablePortComponent* Port);                                                            // [0xabf7698] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.ConnectConstantPort
	// void ConnectConstantPort(class UFMDeviceCablePortComponent* Port);                                                    // [0xabf7618] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.BuildMeshOnSpline
	// void BuildMeshOnSpline(bool bCollisionEnabled);                                                                       // [0xabf7598] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorTickSubsystem
/// Size: 0x0050 (0x0000D0 - 0x000120)
class UFMDeviceCableAnimatorTickSubsystem : public UFortManagedTickSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x00D0   (0x0050)  MISSED
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UFMDeviceCableAnimatorBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x78];                                      // 0x0000   (0x0078)  MISSED
	SDK_UNDEFINED(8,13757) /* TWeakObjectPtr<UFMDeviceCablePortComponent*> */ __um(OwnerPort);                     // 0x0078   (0x0008)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x0080   (0x0068)  MISSED


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.SetOwnerPort
	// void SetOwnerPort(class UFMDeviceCablePortComponent* OwnerPort);                                                      // [0xabf87c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.RemoveMaterialInstance
	// void RemoveMaterialInstance(class UMaterialInstanceDynamic* InMaterialInstance);                                      // [0xabf8294] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.OnPortArtifactUpdated
	// void OnPortArtifactUpdated();                                                                                         // [0x681406c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.OnConnectionStarted
	// void OnConnectionStarted(class UFMDeviceCableConnectionBase* NewConnection);                                          // [0x722e308] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.OnConnectionEnded
	// void OnConnectionEnded(class UFMDeviceCableConnectionBase* EndedConnection);                                          // [0x722e38c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.AddMaterialInstance
	// void AddMaterialInstance(class UMaterialInstanceDynamic* InMaterialInstance);                                         // [0xabf7518] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMidiEvent
/// Size: 0x00A8 (0x0000E8 - 0x000190)
class UFMDeviceCableAnimatorMidiEvent : public UFMDeviceCableAnimatorBase
{ 
public:
	FName                                              NoteTextureParam;                                           // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	class UCurveFloat*                                 NoteShapeCurve;                                             // 0x00F0   (0x0008)  
	float                                              NotePercentOfTexture;                                       // 0x00F8   (0x0004)  
	float                                              NoteTravelBeats;                                            // 0x00FC   (0x0004)  
	float                                              NoteStartDelayBeats;                                        // 0x0100   (0x0004)  
	unsigned char                                      UnknownData01_5[0x14];                                      // 0x0104   (0x0014)  MISSED
	class UTexture2D*                                  NoteTexture;                                                // 0x0118   (0x0008)  
	class UFabricMetaSoundPatchWrapper*                PatchWrapper;                                               // 0x0120   (0x0008)  
	unsigned char                                      UnknownData02_6[0x68];                                      // 0x0128   (0x0068)  MISSED


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMidiEvent.OnMetaSoundOutputIntChangedBatch
	// void OnMetaSoundOutputIntChangedBatch(FName& OutputName, TArray<int32_t>& Output);                                    // [0xabf8050] Final|Native|Private|HasOutParms 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorFloatProvider
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UFMDeviceCableAnimatorFloatProvider : public UFMDeviceCableAnimatorBase
{ 
public:
	FName                                              CableDataParam;                                             // 0x00E8   (0x0004)  
	FName                                              FloatProviderTypeParam;                                     // 0x00EC   (0x0004)  
	class UFabricFloatProviderBase*                    FloatProvider;                                              // 0x00F0   (0x0008)  


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorFloatProvider.SetFloatProvider
	// void SetFloatProvider(class UFabricFloatProviderBase* InFloatProvider);                                               // [0xabf863c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorFloatProvider.OnFloatChanged
	// void OnFloatChanged(float CurrentFloat);                                                                              // [0xabf7c34] Final|Native|Protected 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorTextureProvider
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UFMDeviceCableAnimatorTextureProvider : public UFMDeviceCableAnimatorBase
{ 
public:
	FName                                              CableDataParam;                                             // 0x00E8   (0x0004)  
	float                                              DecayRate;                                                  // 0x00EC   (0x0004)  
	class UFabricTextureProviderBase*                  TextureProvider;                                            // 0x00F0   (0x0008)  


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorTextureProvider.SetTextureProvider
	// void SetTextureProvider(class UFabricTextureProviderBase* InTextureProvider);                                         // [0xabf873c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMeshProvider
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UFMDeviceCableAnimatorMeshProvider : public UFMDeviceCableAnimatorBase
{ 
public:
	FName                                              CableDataParam;                                             // 0x00E8   (0x0004)  
	float                                              DecayRate;                                                  // 0x00EC   (0x0004)  
	class UFabricMeshProviderBase*                     MeshProvider;                                               // 0x00F0   (0x0008)  


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMeshProvider.SetMeshProvider
	// void SetMeshProvider(class UFabricMeshProviderBase* InMeshProvider);                                                  // [0xabf873c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer
/// Size: 0x0080 (0x0000E8 - 0x000168)
class UFMDeviceCableAnimatorAudioAnalyzer : public UFMDeviceCableAnimatorBase
{ 
public:
	FName                                              FftTextureParam;                                            // 0x00E8   (0x0004)  
	FName                                              WaveformTextureParam;                                       // 0x00EC   (0x0004)  
	FName                                              AmplitudeTextureParam;                                      // 0x00F0   (0x0004)  
	FName                                              AmplitudeDataParam;                                         // 0x00F4   (0x0004)  
	FName                                              CableQualityParam;                                          // 0x00F8   (0x0004)  
	FName                                              CableReactivityParam;                                       // 0x00FC   (0x0004)  
	int32_t                                            WaveformNumSamplesHeld;                                     // 0x0100   (0x0004)  
	int32_t                                            WaveformSmoothingDistance;                                  // 0x0104   (0x0004)  
	float                                              WaveformSmoothingFactor;                                    // 0x0108   (0x0004)  
	float                                              WaveformDecayPerSecond;                                     // 0x010C   (0x0004)  
	class UTexture2D*                                  WaveformTexture;                                            // 0x0110   (0x0008)  
	class UTexture2D*                                  AmplitudeTexture;                                           // 0x0118   (0x0008)  
	class UFabricMetaSoundPatchWrapper*                PatchWrapper;                                               // 0x0120   (0x0008)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0128   (0x0040)  MISSED


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer.SetAnalyzerName
	// void SetAnalyzerName(FName AnalyzerName);                                                                             // [0xabf85c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer.OnMetaSoundOutputFloatChangedBatch
	// void OnMetaSoundOutputFloatChangedBatch(FName& OutputName, TArray<float>& Output, FFabricMetaSoundPatchWrapperPeakTamer& PeakTamer, float DeltaSeconds); // [0xabf7dec] Final|Native|Private|HasOutParms 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer.GetLastAnalyzerValue
	// float GetLastAnalyzerValue();                                                                                         // [0x9487724] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableTerminalDeviceInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFMDeviceCableTerminalDeviceInfo
{ 
	SDK_UNDEFINED(8,13758) /* TWeakObjectPtr<UFMDeviceCablePortComponent*> */ __um(TerminalPort);                  // 0x0000   (0x0008)  
	SDK_UNDEFINED(8,13759) /* TWeakObjectPtr<AActor*> */ __um(TerminalActor);                                      // 0x0008   (0x0008)  
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCablePassthroughDeviceInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFMDeviceCablePassthroughDeviceInfo
{ 
	SDK_UNDEFINED(8,13760) /* TWeakObjectPtr<UFMDeviceCablePortComponent*> */ __um(InputPort);                     // 0x0000   (0x0008)  
	SDK_UNDEFINED(8,13761) /* TWeakObjectPtr<UFMDeviceCablePortComponent*> */ __um(OutputPort);                    // 0x0008   (0x0008)  
	SDK_UNDEFINED(8,13762) /* TWeakObjectPtr<AActor*> */ __um(PassthroughActor);                                   // 0x0010   (0x0008)  
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableConnectedDevicesInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFMDeviceCableConnectedDevicesInfo
{ 
	FFMDeviceCableTerminalDeviceInfo                   SourceDeviceInfo;                                           // 0x0000   (0x0010)  
	FFMDeviceCableTerminalDeviceInfo                   DestinationDeviceInfo;                                      // 0x0010   (0x0010)  
	TArray<FFMDeviceCablePassthroughDeviceInfo>        PassthroughDeviceInfos;                                     // 0x0020   (0x0010)  
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableDefaultOutputs
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFMDeviceCableDefaultOutputs
{ 
	class USoundSourceBus*                             SourceBus;                                                  // 0x0000   (0x0008)  
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UFMDeviceCableConnectionBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x80];                                      // 0x0000   (0x0080)  MISSED
	bool                                               bConnectionActive;                                          // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	SDK_UNDEFINED(16,13763) /* TArray<TWeakObjectPtr<UFMDeviceCablePortComponent*>> */ __um(BuildingCompositeArtifactFromPorts); // 0x0088   (0x0010)  
	FFMDeviceCableConnectedDevicesInfo                 ConnectedDevicesInfo;                                       // 0x0098   (0x0030)  
	FFMDeviceCableDefaultOutputs                       DefaultOutputs;                                             // 0x00C8   (0x0008)  


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase.StartConnectionBP
	// void StartConnectionBP();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase.RebuildDirtyConnectionBP
	// void RebuildDirtyConnectionBP();                                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase.EndConnectionBP
	// void EndConnectionBP();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableMetaSoundConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableMetaSoundConnection : public UFMDeviceCableConnectionBase
{ 
public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableNoteConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableNoteConnection : public UFMDeviceCableMetaSoundConnection
{ 
public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAudioConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableAudioConnection : public UFMDeviceCableMetaSoundConnection
{ 
public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableFloatConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableFloatConnection : public UFMDeviceCableConnectionBase
{ 
public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableTextureConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableTextureConnection : public UFMDeviceCableConnectionBase
{ 
public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableMeshConnection
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UFMDeviceCableMeshConnection : public UFMDeviceCableConnectionBase
{ 
public:
	uint32_t                                           PreviousMeshInstanceHash;                                   // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UFMDeviceCableControllerComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,13764) /* FMulticastInlineDelegate */ __um(OnControllerCableConnected);                       // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,13765) /* FMulticastInlineDelegate */ __um(OnControllerCableDisconnected);                    // 0x00B0   (0x0010)  
	class UClass*                                      ControllerCablePort;                                        // 0x00C0   (0x0008)  
	class UClass*                                      DeviceCableManagerClass;                                    // 0x00C8   (0x0008)  
	class AFortPlayerControllerAthena*                 PlayerController;                                           // 0x00D0   (0x0008)  
	class UFMDeviceCablePortComponent*                 LocalControllerPort;                                        // 0x00D8   (0x0008)  
	class UFMDeviceCablePortComponent*                 ServerControllerPort;                                       // 0x00E0   (0x0008)  
	SDK_UNDEFINED(8,13766) /* TWeakObjectPtr<AActor*> */ __um(LocalControllerPortActor);                           // 0x00E8   (0x0008)  
	class UFMDeviceCableManagerComponent*              LocalDeviceCableManager;                                    // 0x00F0   (0x0008)  
	class UFMDeviceCableManagerComponent*              ServerDeviceCableManager;                                   // 0x00F8   (0x0008)  


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.SetControllerTargetForControllerPortBP
	// void SetControllerTargetForControllerPortBP(class AActor* ControllerPortActor, class APlayerController* Controller);  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerVolumeChanged
	// void ServerVolumeChanged();                                                                                           // [0x6cb2178] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerSelectPort
	// void ServerSelectPort(class UFMDeviceCablePortComponent* SelectedPort);                                               // [0x89c7cb0] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerPortsUpdated
	// void ServerPortsUpdated(TArray<FPortUpdateInfo> PortChangeInfos);                                                     // [0xabf845c] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerPortActivatedStateChanged
	// void ServerPortActivatedStateChanged(class UFMDeviceCablePortComponent* Port, EDeviceCableActivatedState ActivatedState); // [0xabf8394] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerDisconnectController
	// void ServerDisconnectController();                                                                                    // [0x30fd094] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.SelectPort
	// void SelectPort(class UFMDeviceCablePortComponent* SelectedPort);                                                     // [0xabf8314] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnWeaponEquipped
	// void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                   // [0xabf81b0] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnRep_ServerDeviceCableManager
	// void OnRep_ServerDeviceCableManager();                                                                                // [0xabf8160] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnRep_ServerControllerPort
	// void OnRep_ServerControllerPort();                                                                                    // [0xabf814c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnNoFabricInteractablesHit
	// void OnNoFabricInteractablesHit();                                                                                    // [0xabf78a0] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnFortPawnChanged
	// void OnFortPawnChanged(class AFortPawn* Pawn);                                                                        // [0xabf7cb4] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnCreativePlotLinkedVolumeChanged
	// void OnCreativePlotLinkedVolumeChanged(class AFortVolume* FortVolume);                                                // [0xabf7bb4] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnControllerCableDisconnected__DelegateSignature
	// void OnControllerCableDisconnected__DelegateSignature();                                                              // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnControllerCableConnected__DelegateSignature
	// void OnControllerCableConnected__DelegateSignature(TArray<UFMDeviceCablePortComponent*>& ConnectedPorts);             // [0x18a39e4] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.IsHoldingCable
	// bool IsHoldingCable();                                                                                                // [0xabf7b94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.IsCableConnectionValid
	// bool IsCableConnectionValid(class UFMDeviceCablePortComponent* OtherPort);                                            // [0xabf7964] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.DropCable
	// void DropCable();                                                                                                     // [0xabf78a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableManagerComponent
/// Size: 0x01F8 (0x0000A0 - 0x000298)
class UFMDeviceCableManagerComponent : public UActorComponent
{ 
public:
	class UClass*                                      DeviceCableClass;                                           // 0x00A0   (0x0008)  
	int32_t                                            StartingCablePoolSize;                                      // 0x00A8   (0x0004)  
	EDeviceCableInteractionType                        CableInteractionType;                                       // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00AD   (0x0003)  MISSED
	SDK_UNDEFINED(80,13767) /* TMap<EDeviceCablePortDataType, UClass*> */ __um(ConnectionClasses);                 // 0x00B0   (0x0050)  
	FGameplayEventListenerBackwardCompatibleHandle     PlayerEnteredHandle;                                        // 0x0100   (0x0048)  
	TArray<class AFMDeviceCable*>                      FreeDeviceCables;                                           // 0x0148   (0x0010)  
	SDK_UNDEFINED(80,13768) /* TMap<EDeviceCablePortDataType, UFMDeviceCableConnectionBase*> */ __um(CableConnectionsByType); // 0x0158   (0x0050)  
	SDK_UNDEFINED(80,13769) /* TMap<FGuid, TWeakObjectPtr<UFMDeviceCablePortComponent*>> */ __um(PortsInVolume);   // 0x01A8   (0x0050)  
	SDK_UNDEFINED(80,13770) /* TMap<FGuid, FGuid> */   __um(OriginalGuidToDuplicatedGuidThisFrame);                // 0x01F8   (0x0050)  
	SDK_UNDEFINED(80,13771) /* TMap<TWeakObjectPtr<UObject*>, TWeakObjectPtr<UObject*>> */ __um(SourceObjectToDuplicatedObjectThisFrame); // 0x0248   (0x0050)  


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableManagerComponent.GetCableInteractionType
	// EDeviceCableInteractionType GetCableInteractionType();                                                                // [0xabf78d4] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableArtifact
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFMDeviceCableArtifact
{ 
	class UFabricMeshTreeNode*                         MeshTreeNode;                                               // 0x0000   (0x0008)  
	class UFabricMetaSoundTreeNode*                    MetaSoundTreeNode;                                          // 0x0008   (0x0008)  
	class UFabricTextureTreeNode*                      TextureTreeNode;                                            // 0x0010   (0x0008)  
	class UFabricModulationNode*                       ModulationNode;                                             // 0x0018   (0x0008)  
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent
/// Size: 0x02F0 (0x0005C0 - 0x0008B0)
class UFMDeviceCablePortComponent : public UStaticMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x05C0   (0x0038)  MISSED
	SDK_UNDEFINED(16,13772) /* FMulticastInlineDelegate */ __um(OnCablePortSizeUpdated);                           // 0x05F8   (0x0010)  
	SDK_UNDEFINED(16,13773) /* FMulticastInlineDelegate */ __um(OnAnimatorCreated);                                // 0x0608   (0x0010)  
	SDK_UNDEFINED(16,13774) /* FMulticastInlineDelegate */ __um(OnConnected);                                      // 0x0618   (0x0010)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0628   (0x0020)  MISSED
	SDK_UNDEFINED(16,13775) /* FMulticastInlineDelegate */ __um(OnDisconnected);                                   // 0x0648   (0x0010)  
	SDK_UNDEFINED(16,13776) /* FMulticastInlineDelegate */ __um(OnConnectionStarted);                              // 0x0658   (0x0010)  
	SDK_UNDEFINED(16,13777) /* FMulticastInlineDelegate */ __um(OnConnectionEnded);                                // 0x0668   (0x0010)  
	SDK_UNDEFINED(16,13778) /* FMulticastInlineDelegate */ __um(OnPortArtifactUpdated);                            // 0x0678   (0x0010)  
	SDK_UNDEFINED(16,13779) /* FMulticastInlineDelegate */ __um(OnReceiveFloatProviders);                          // 0x0688   (0x0010)  
	SDK_UNDEFINED(16,13780) /* FMulticastInlineDelegate */ __um(OnDisconnectFloatProvider);                        // 0x0698   (0x0010)  
	class UClass*                                      DeviceCableManagerClass;                                    // 0x06A8   (0x0008)  
	SDK_UNDEFINED(32,13781) /* TWeakObjectPtr<UStaticMesh*> */ __um(OutputStaticMesh);                             // 0x06B0   (0x0020)  
	SDK_UNDEFINED(32,13782) /* TWeakObjectPtr<UStaticMesh*> */ __um(AudioInStaticMesh);                            // 0x06D0   (0x0020)  
	SDK_UNDEFINED(32,13783) /* TWeakObjectPtr<UStaticMesh*> */ __um(NoteInStaticMesh);                             // 0x06F0   (0x0020)  
	SDK_UNDEFINED(32,13784) /* TWeakObjectPtr<UStaticMesh*> */ __um(TextureInStaticMesh);                          // 0x0710   (0x0020)  
	SDK_UNDEFINED(32,13785) /* TWeakObjectPtr<UStaticMesh*> */ __um(MeshInStaticMesh);                             // 0x0730   (0x0020)  
	SDK_UNDEFINED(32,13786) /* TWeakObjectPtr<UStaticMesh*> */ __um(ScalarInStaticMesh);                           // 0x0750   (0x0020)  
	SDK_UNDEFINED(80,13787) /* TMap<EDeviceCablePortDataType, UClass*> */ __um(CableAnimatorClasses);              // 0x0770   (0x0050)  
	EDeviceCablePortFlowType                           PortFlowType;                                               // 0x07C0   (0x0001)  
	EDeviceCablePortDataType                           PortDataType;                                               // 0x07C1   (0x0001)  
	EDeviceCableLoadableState                          PortLoadableState;                                          // 0x07C2   (0x0001)  
	EDeviceCablePortAnimationSyncType                  AnimationSyncType;                                          // 0x07C3   (0x0001)  
	bool                                               bAllowMultipleConnections;                                  // 0x07C4   (0x0001)  
	bool                                               bAllowSiblingConnections;                                   // 0x07C5   (0x0001)  
	EFMDeviceCablePortComponentAllowMultipleConnections OverrideAllowMultipleConnections;                          // 0x07C6   (0x0001)  
	EFMDeviceCablePortComponentAllowMultipleConnections OverrideAllowSiblingConnections;                           // 0x07C7   (0x0001)  
	bool                                               bHideWhenNotRelevant;                                       // 0x07C8   (0x0001)  
	bool                                               bIsPlayerPort;                                              // 0x07C9   (0x0001)  
	bool                                               bIsOnPreviewBuildingActor;                                  // 0x07CA   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x07CB   (0x0001)  MISSED
	FName                                              EnterVolumeTag;                                             // 0x07CC   (0x0004)  
	FName                                              ExitVolumeTag;                                              // 0x07D0   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x07D4   (0x0004)  MISSED
	TArray<class UFMDeviceCablePortComponent*>         ConnectedPorts;                                             // 0x07D8   (0x0010)  
	TArray<class UFMDeviceCablePortComponent*>         ServerConnectedPorts;                                       // 0x07E8   (0x0010)  
	TArray<class UFMDeviceCableConnectionBase*>        CurrentConnections;                                         // 0x07F8   (0x0010)  
	class AFMDeviceCable*                              ConstantCable;                                              // 0x0808   (0x0008)  
	class UFMDeviceCableManagerComponent*              DeviceCableManager;                                         // 0x0810   (0x0008)  
	TArray<class UFMDeviceCablePortComponent*>         OtherPortsOnActor;                                          // 0x0818   (0x0010)  
	EDeviceCableActivatedState                         PortActivatedState;                                         // 0x0828   (0x0001)  
	EDeviceCableActivatedState                         ServerPortActivatedState;                                   // 0x0829   (0x0001)  
	EDeviceCablePortSelectableState                    PortSelectableState;                                        // 0x082A   (0x0001)  
	unsigned char                                      UnknownData04_5[0x5];                                       // 0x082B   (0x0005)  MISSED
	class UFMDeviceCableAnimatorBase*                  DeviceCableAnimator;                                        // 0x0830   (0x0008)  
	FGuid                                              ConnectionGuid;                                             // 0x0838   (0x0010)  
	TArray<FGuid>                                      ConnectedGuids;                                             // 0x0848   (0x0010)  
	FFMDeviceCableArtifact                             CachedArtifact;                                             // 0x0858   (0x0020)  
	unsigned char                                      UnknownData05_5[0x10];                                      // 0x0878   (0x0010)  MISSED
	TArray<class UFMDeviceCablePortComponent*>         PendingConnectionBroadcasts;                                // 0x0888   (0x0010)  
	FGuid                                              SaveGuid;                                                   // 0x0898   (0x0010)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x08A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.UpdateStaticMesh
	// void UpdateStaticMesh();                                                                                              // [0xabfbcd8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetPortVisibility
	// void SetPortVisibility(bool bPortVisible);                                                                            // [0xabfbc58] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetPortSelectableState
	// void SetPortSelectableState(EDeviceCablePortSelectableState NewSelectableState);                                      // [0xabfbbd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetPortConnectionsDirty
	// void SetPortConnectionsDirty();                                                                                       // [0xabfbbc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetPortActivatedState
	// void SetPortActivatedState(EDeviceCableActivatedState NewActivatedState);                                             // [0xabfbb40] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetDeviceCableAnimator
	// void SetDeviceCableAnimator(class UFMDeviceCableAnimatorBase* InAnimator);                                            // [0x6414600] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetCachedArtifact
	// void SetCachedArtifact(FFMDeviceCableArtifact& InCachedArtifact);                                                     // [0xabfb738] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SelectWithStaticOutputInteraction
	// EPortSelectStatus SelectWithStaticOutputInteraction(class UFMDeviceCablePortComponent* PlayerSelectionPort, TArray<FPortUpdateInfo>& OutPortUpdates); // [0xabfb574] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.Select
	// EPortSelectStatus Select(class UFMDeviceCablePortComponent* PlayerSelectionPort, TArray<FPortUpdateInfo>& OutPortUpdates); // [0xabfb3b0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OpenConnectionToPort
	// void OpenConnectionToPort(class UFMDeviceCablePortComponent* OtherPort);                                              // [0xabfb330] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnRep_ServerPortActivatedState
	// void OnRep_ServerPortActivatedState();                                                                                // [0xabfb2ec] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnRep_ServerConnectedPorts
	// void OnRep_ServerConnectedPorts();                                                                                    // [0xabfb2d8] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnRep_DeviceCableManager
	// void OnRep_DeviceCableManager();                                                                                      // [0xabfb280] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnRep_ConstantCable
	// void OnRep_ConstantCable();                                                                                           // [0xabfb228] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnReceiveFloatProviders__DelegateSignature
	// void OnReceiveFloatProviders__DelegateSignature(TArray<UFabricFloatProviderBase*>& FloatProviders);                   // [0x18a39e4] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnPortArtifactUpdated__DelegateSignature
	// void OnPortArtifactUpdated__DelegateSignature();                                                                      // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnPlayerControllerPortDisconnected
	// void OnPlayerControllerPortDisconnected();                                                                            // [0xabfb214] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnPlayerControllerPortConnected
	// void OnPlayerControllerPortConnected(TArray<UFMDeviceCablePortComponent*>& ControllerPorts);                          // [0xabfb0a8] Final|Native|Private|HasOutParms 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnDisconnectFloatProvider__DelegateSignature
	// void OnDisconnectFloatProvider__DelegateSignature(class UFabricFloatProviderBase* FloatProvider);                     // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnDisconnected__DelegateSignature
	// void OnDisconnected__DelegateSignature(class UFMDeviceCablePortComponent* DisconnectedPort);                          // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnConnectionStarted__DelegateSignature
	// void OnConnectionStarted__DelegateSignature(class UFMDeviceCableConnectionBase* NewConnection);                       // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnConnectionEnded__DelegateSignature
	// void OnConnectionEnded__DelegateSignature(class UFMDeviceCableConnectionBase* EndedConnection);                       // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnConnectedWithSourcePort__DelegateSignature
	// void OnConnectedWithSourcePort__DelegateSignature(class UFMDeviceCablePortComponent* SourcePort, class UFMDeviceCablePortComponent* OtherPort); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnConnected__DelegateSignature
	// void OnConnected__DelegateSignature(class UFMDeviceCablePortComponent* ConnectedPort);                                // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnAnimatorCreated__DelegateSignature
	// void OnAnimatorCreated__DelegateSignature(class UFMDeviceCableAnimatorBase* Animator);                                // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.MatchesPortConnectionType
	// bool MatchesPortConnectionType(class UFMDeviceCablePortComponent* OtherPort);                                         // [0xabfa954] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.IsConnectedToPort
	// bool IsConnectedToPort(class UFMDeviceCablePortComponent* Port);                                                      // [0xabfa7d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.IsConnected
	// bool IsConnected();                                                                                                   // [0xabfa7bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.HasSavedConnections
	// bool HasSavedConnections();                                                                                           // [0xabfa78c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPreviousPortsInConnections
	// TArray<UFMDeviceCablePortComponent*> GetPreviousPortsInConnections();                                                 // [0xabfa750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPortSelectableState
	// EDeviceCablePortSelectableState GetPortSelectableState();                                                             // [0xabfa738] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPortFlowType
	// EDeviceCablePortFlowType GetPortFlowType();                                                                           // [0xabfa720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPortDataType
	// EDeviceCablePortDataType GetPortDataType();                                                                           // [0xabfa708] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPortActivatedState
	// EDeviceCableActivatedState GetPortActivatedState();                                                                   // [0xabfa6f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetOtherPortsOnActor
	// TArray<UFMDeviceCablePortComponent*> GetOtherPortsOnActor();                                                          // [0xabfa6d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetNextPortsInConnections
	// TArray<UFMDeviceCablePortComponent*> GetNextPortsInConnections();                                                     // [0xabfa698] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetIsTerminalPort
	// bool GetIsTerminalPort(EDeviceCablePortFlowType FlowType);                                                            // [0xabfa60c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetIsPlayerPort
	// bool GetIsPlayerPort();                                                                                               // [0x3ebabf8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetIsModulationPort
	// bool GetIsModulationPort();                                                                                           // [0xabfa5e4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetGuid
	// FGuid GetGuid();                                                                                                      // [0xabfa5b4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetDeviceCableAnimator
	// class UFMDeviceCableAnimatorBase* GetDeviceCableAnimator();                                                           // [0xabfa59c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetConstantCable
	// class AFMDeviceCable* GetConstantCable();                                                                             // [0xabfa584] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetConnections
	// TArray<UFMDeviceCableConnectionBase*> GetConnections();                                                               // [0xabfa50c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetConnectedPorts
	// TArray<UFMDeviceCablePortComponent*> GetConnectedPorts();                                                             // [0xabfa4f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetCachedArtifact
	// FFMDeviceCableArtifact GetCachedArtifact();                                                                           // [0xabfa4c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetAnimationSyncType
	// EDeviceCablePortAnimationSyncType GetAnimationSyncType();                                                             // [0xabfa4b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.FabricCablePortSizeUpdated__DelegateSignature
	// void FabricCablePortSizeUpdated__DelegateSignature(float Size);                                                       // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.EndConnectionWithPort
	// void EndConnectionWithPort(class UFMDeviceCablePortComponent* OtherPort);                                             // [0xabfa418] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.ActorHasValidControllerBP
	// bool ActorHasValidControllerBP(class AActor* Actor, class AFortPlayerPawn*& OutFortPlayerPawn, class APlayerController*& OutPlayerController); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableModulatorPortComponent
/// Size: 0x0030 (0x0008B0 - 0x0008E0)
class UFMDeviceCableModulatorPortComponent : public UFMDeviceCablePortComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x08B0   (0x0008)  MISSED
	SDK_UNDEFINED(16,13788) /* FString */              __um(AssociatedProperty);                                   // 0x08B8   (0x0010)  
	SDK_UNDEFINED(8,13789) /* TWeakObjectPtr<UObject*> */ __um(AssociatedObject);                                  // 0x08C8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x08D0   (0x0010)  MISSED


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableModulatorPortComponent.SetDeviceCableManager
	// void SetDeviceCableManager(class UFMDeviceCableManagerComponent* InDeviceCableManager);                               // [0xabfb7d0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCablesFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFMDeviceCablesFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablesFunctionLibrary.MakeSoundSourceBusSendInfo
	// FSoundSourceBusSendInfo MakeSoundSourceBusSendInfo(class USoundSourceBus* SoundSourceBus);                            // [0xabfa874] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablesFunctionLibrary.DeepCopySoundSourceBus
	// class USoundSourceBus* DeepCopySoundSourceBus(class UObject* Context, class UObject* Outer, class USoundSourceBus* Source); // [0xabf9e6c] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableOrderingMovementInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFMDeviceCableOrderingMovementInfo
{ 
	class UCurveFloat*                                 Curve;                                                      // 0x0000   (0x0008)  
	class UCurveVector*                                ScaleCurve;                                                 // 0x0008   (0x0008)  
	FVector                                            Vector;                                                     // 0x0010   (0x0018)  
	float                                              MovementTimeSeconds;                                        // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableOrderingPortState
/// Size: 0x0258 (0x000000 - 0x000258)
struct FFMDeviceCableOrderingPortState
{ 
	class UFMDeviceCableWildcardPortComponent*         WildcardPort;                                               // 0x0000   (0x0008)  
	class USceneComponent*                             VerticalPositionParent;                                     // 0x0008   (0x0008)  
	EFMDeviceCableWildcardOrderingState                VisualState;                                                // 0x0010   (0x0004)  
	EFMDeviceCableWildcardOrderingState                State;                                                      // 0x0014   (0x0004)  
	int32_t                                            Slot;                                                       // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x22C];                                     // 0x001C   (0x022C)  MISSED
	SDK_UNDEFINED(8,13790) /* TWeakObjectPtr<UFMDeviceCableWildcardOrderingComponent*> */ __um(Owner);             // 0x0248   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0250   (0x0008)  MISSED
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent
/// Size: 0x03F8 (0x0000A0 - 0x000498)
class UFMDeviceCableWildcardOrderingComponent : public UActorComponent
{ 
public:
	FFMDeviceCableOrderingMovementInfo                 InputsShowHideMovementInfo;                                 // 0x00A0   (0x0030)  
	unsigned char                                      UnknownData00_5[0xB8];                                      // 0x00D0   (0x00B8)  MISSED
	FFMDeviceCableOrderingMovementInfo                 InOutMovementInfo;                                          // 0x0188   (0x0030)  
	FFMDeviceCableOrderingMovementInfo                 TransitionMovementInfo;                                     // 0x01B8   (0x0030)  
	unsigned char                                      UnknownData01_5[0xB8];                                      // 0x01E8   (0x00B8)  MISSED
	FFMDeviceCableOrderingMovementInfo                 CollapseExpandMovementInfo;                                 // 0x02A0   (0x0030)  
	unsigned char                                      UnknownData02_5[0xB8];                                      // 0x02D0   (0x00B8)  MISSED
	float                                              VisualChangeTimeoutTime;                                    // 0x0388   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x038C   (0x0004)  MISSED
	FName                                              ClosedMeshTag;                                              // 0x0390   (0x0004)  
	FName                                              TopMeshTag;                                                 // 0x0394   (0x0004)  
	FName                                              MiddleMeshTag;                                              // 0x0398   (0x0004)  
	FName                                              BottomMeshTag;                                              // 0x039C   (0x0004)  
	class UStaticMeshComponent*                        ClosedMesh;                                                 // 0x03A0   (0x0008)  
	class UStaticMeshComponent*                        TopMesh;                                                    // 0x03A8   (0x0008)  
	TArray<class UStaticMeshComponent*>                MiddleMeshes;                                               // 0x03B0   (0x0010)  
	class UStaticMeshComponent*                        BottomMesh;                                                 // 0x03C0   (0x0008)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x03C8   (0x0008)  MISSED
	TArray<class UFMDeviceCableWildcardPortComponent*> InputWildcardPorts;                                         // 0x03D0   (0x0010)  
	TArray<class UFMDeviceCableWildcardPortComponent*> OutputWildcardPorts;                                        // 0x03E0   (0x0010)  
	unsigned char                                      UnknownData05_5[0x30];                                      // 0x03F0   (0x0030)  MISSED
	TArray<class UFMDeviceCableWildcardPortComponent*> PortsWithPendingDisconnects;                                // 0x0420   (0x0010)  
	unsigned char                                      UnknownData06_5[0x50];                                      // 0x0430   (0x0050)  MISSED
	TArray<FFMDeviceCableOrderingPortState>            ServerPortStates;                                           // 0x0480   (0x0010)  
	unsigned char                                      UnknownData07_6[0x8];                                       // 0x0490   (0x0008)  MISSED


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.SetOutputRoot
	// void SetOutputRoot(FVector RootLocation);                                                                             // [0xabfba08] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.SetOutputPortsExpanded
	// void SetOutputPortsExpanded(bool bExpanded);                                                                          // [0xabfb988] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.SetInputRoot
	// void SetInputRoot(FVector RootLocation);                                                                              // [0xabfb850] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnRep_ServerPortStates
	// void OnRep_ServerPortStates();                                                                                        // [0xabfb31c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnOutputPortSlotSetFromSave
	// void OnOutputPortSlotSetFromSave(class UFMDeviceCableWildcardPortComponent* WildcardPort, bool bHasConnections);      // [0xabfad6c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnOutputPortDisconnected
	// void OnOutputPortDisconnected(class UFMDeviceCablePortComponent* SourcePort, class UFMDeviceCablePortComponent* DisconnectedPort); // [0xabfaca8] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnOutputPortConnected
	// void OnOutputPortConnected(class UFMDeviceCablePortComponent* SourcePort, class UFMDeviceCablePortComponent* ConnectedPort); // [0xabfabe4] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnInputPortDisconnected
	// void OnInputPortDisconnected(class UFMDeviceCablePortComponent* DisconnectedPort);                                    // [0xabfab64] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnInputPortDataTypeChanged
	// void OnInputPortDataTypeChanged(class UFMDeviceCableWildcardPortComponent* WildcardPort, EDeviceCablePortDataType DataType); // [0xabfaa9c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnInputPortConnected
	// void OnInputPortConnected(class UFMDeviceCablePortComponent* ConnectedPort);                                          // [0xabfaa18] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.InitializeOutputSlots
	// void InitializeOutputSlots();                                                                                         // [0xabfa7a8] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.FinishVisualChange
	// void FinishVisualChange();                                                                                            // [0xabfa498] Final|Native|Protected 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent
/// Size: 0x0030 (0x0008B0 - 0x0008E0)
class UFMDeviceCableWildcardPortComponent : public UFMDeviceCablePortComponent
{ 
public:
	SDK_UNDEFINED(16,13791) /* FMulticastInlineDelegate */ __um(OnWildcardDataTypeChanged);                        // 0x08B0   (0x0010)  
	SDK_UNDEFINED(16,13792) /* FMulticastInlineDelegate */ __um(OnWildcardPortSlotSetFromSave);                    // 0x08C0   (0x0010)  
	int32_t                                            SlotIndex;                                                  // 0x08D0   (0x0004)  
	int32_t                                            SavedSlotIndex;                                             // 0x08D4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x08D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnWildcardPortSlotSetFromSave__DelegateSignature
	// void OnWildcardPortSlotSetFromSave__DelegateSignature(class UFMDeviceCableWildcardPortComponent* WildcardPort, bool bHasConnections); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnWildcardDataTypeChanged__DelegateSignature
	// void OnWildcardDataTypeChanged__DelegateSignature(class UFMDeviceCableWildcardPortComponent* WildcardPort, EDeviceCablePortDataType DataType); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnRep_SavedSlotIndex
	// void OnRep_SavedSlotIndex();                                                                                          // [0xac1cdf8] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnPlayerControllerPortDisconnectedWildcard
	// void OnPlayerControllerPortDisconnectedWildcard();                                                                    // [0xac1cde4] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnPlayerControllerPortConnectedWildcard
	// void OnPlayerControllerPortConnectedWildcard(TArray<UFMDeviceCablePortComponent*>& ControllerPorts);                  // [0xac1cc78] Final|Native|Private|HasOutParms 
};

/// Struct /Script/FMDeviceCablesRuntime.PortUpdateInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPortUpdateInfo
{ 
	EPortSelectStatus                                  PortSelectStatus;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UFMDeviceCablePortComponent*                 ConstantPort;                                               // 0x0008   (0x0008)  
	class UFMDeviceCablePortComponent*                 ConnectedPort;                                              // 0x0010   (0x0008)  
	class UFMDeviceCablePortComponent*                 DisconnectedPort;                                           // 0x0018   (0x0008)  
};

/// Struct /Script/FMDeviceCablesRuntime.ModulatorPortSaveData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FModulatorPortSaveData
{ 
	FGuid                                              ConnectionGuid;                                             // 0x0000   (0x0010)  
	TArray<FGuid>                                      ConnectedGuids;                                             // 0x0010   (0x0010)  
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableOrderingMovementState
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FFMDeviceCableOrderingMovementState
{ 
	unsigned char                                      UnknownData00_2[0xB8];                                      // 0x0000   (0x00B8)  MISSED
};

