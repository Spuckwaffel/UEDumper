
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FabricRuntime
/// dependency: FortniteGame
/// dependency: GameplayEventRouter

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCable
/// Size: 0x01F0 (0x000720 - 0x000910)
class AFMDeviceCable : public ABuildingActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2320;

public:
	CMember(class USplineComponent*)                   SplineComponent                                             OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               DeviceCableHead                                             OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(class UClass*)                             SplineMeshComponentClass                                    OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              ScalarStaticMesh                                            OFFSET(get<T>, {0x750, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              AudioStaticMesh                                             OFFSET(get<T>, {0x770, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              NoteStaticMesh                                              OFFSET(get<T>, {0x790, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              TextureStaticMesh                                           OFFSET(get<T>, {0x7B0, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              MeshStaticMesh                                              OFFSET(get<T>, {0x7D0, 32, 0, 0})
	SMember(FName)                                     SplineLengthParam                                           OFFSET(getStruct<T>, {0x7F0, 4, 0, 0})
	SMember(FName)                                     SplineStartParam                                            OFFSET(getStruct<T>, {0x7F4, 4, 0, 0})
	SMember(FName)                                     SplineEndParam                                              OFFSET(getStruct<T>, {0x7F8, 4, 0, 0})
	SMember(FName)                                     PortTypeParam                                               OFFSET(getStruct<T>, {0x7FC, 4, 0, 0})
	DMember(float)                                     CableStubLength                                             OFFSET(get<float>, {0x800, 4, 0, 0})
	DMember(float)                                     CableDistanceFromPortB                                      OFFSET(get<float>, {0x804, 4, 0, 0})
	DMember(float)                                     CableMinTangent                                             OFFSET(get<float>, {0x808, 4, 0, 0})
	DMember(float)                                     CableMaxTangent                                             OFFSET(get<float>, {0x80C, 4, 0, 0})
	DMember(float)                                     CableSectionLengthAtCableCenter                             OFFSET(get<float>, {0x810, 4, 0, 0})
	DMember(float)                                     CableSectionLengthAtCableHeads                              OFFSET(get<float>, {0x814, 4, 0, 0})
	DMember(int32_t)                                   CableSectionCountAtCableHeads                               OFFSET(get<int32_t>, {0x818, 4, 0, 0})
	DMember(int32_t)                                   CableCenterSectionsMaxCount                                 OFFSET(get<int32_t>, {0x81C, 4, 0, 0})
	DMember(float)                                     ExtremeMinDotProduct                                        OFFSET(get<float>, {0x820, 4, 0, 0})
	DMember(float)                                     MaxExtremeCableBendSize                                     OFFSET(get<float>, {0x824, 4, 0, 0})
	DMember(float)                                     ExtremeAngleTangentScale                                    OFFSET(get<float>, {0x828, 4, 0, 0})
	CMember(TArray<class USplineMeshComponent*>)       CableSplineMeshArray                                        OFFSET(get<T>, {0x830, 16, 0, 0})
	CMember(TWeakObjectPtr<UFMDeviceCableAnimatorBase*>) DeviceCableAnimator                                       OFFSET(get<T>, {0x840, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           DeviceCableMaterial                                         OFFSET(get<T>, {0x848, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           DeviceCableHeadMaterial                                     OFFSET(get<T>, {0x850, 8, 0, 0})
	SMember(FVector)                                   DeviceCableHeadScale                                        OFFSET(getStruct<T>, {0x858, 24, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        ConstantPort                                                OFFSET(get<T>, {0x880, 8, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        PortA                                                       OFFSET(get<T>, {0x888, 8, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        ServerPortA                                                 OFFSET(get<T>, {0x890, 8, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        PortB                                                       OFFSET(get<T>, {0x898, 8, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        ServerPortB                                                 OFFSET(get<T>, {0x8A0, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.UpdateVisualParameters
	// void UpdateVisualParameters();                                                                                           // [0xc6aea10] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.UpdateDeviceCableAnimator
	// void UpdateDeviceCableAnimator();                                                                                        // [0xc6ae9fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.SetFocusedVisuals
	// void SetFocusedVisuals(bool bIsFocused);                                                                                 // [0xc6ae870] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.SetDeviceCableHeadScale
	// void SetDeviceCableHeadScale(FVector Scale);                                                                             // [0xc6ae070] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnSplineUpdated
	// void OnSplineUpdated(bool bCollisionEnabled);                                                                            // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnScalesUpdated
	// void OnScalesUpdated(FVector StartScale, FVector EndScale);                                                              // [0x1340978] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnRep_ServerPortB
	// void OnRep_ServerPortB();                                                                                                // [0xc6ad664] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnRep_ServerPortA
	// void OnRep_ServerPortA();                                                                                                // [0xc6ad650] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnCableReturned
	// void OnCableReturned();                                                                                                  // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnCableGrabbed
	// void OnCableGrabbed(bool bThroughReplication);                                                                           // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnCableDisconnected
	// void OnCableDisconnected(bool bThroughReplication);                                                                      // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.OnCableConnected
	// void OnCableConnected(bool bThroughReplication);                                                                         // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetPortB
	// class UFMDeviceCablePortComponent* GetPortB();                                                                           // [0x338c444] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetPortA
	// class UFMDeviceCablePortComponent* GetPortA();                                                                           // [0xc6acf5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetDeviceCableHead
	// class UStaticMeshComponent* GetDeviceCableHead();                                                                        // [0xc6acf2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetConstantPort
	// class UFMDeviceCablePortComponent* GetConstantPort();                                                                    // [0xc6acf14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetCableSpline
	// class USplineComponent* GetCableSpline();                                                                                // [0xc6acefc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.GetCableDataType
	// EDeviceCablePortDataType GetCableDataType();                                                                             // [0xc6acec4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.Disconnect
	// void Disconnect();                                                                                                       // [0xc6ace9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.ConnectPort
	// void ConnectPort(class UFMDeviceCablePortComponent* Port);                                                               // [0xc6acca8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.ConnectConstantPort
	// void ConnectConstantPort(class UFMDeviceCablePortComponent* Port);                                                       // [0xc6acc28] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCable.BuildMeshOnSpline
	// void BuildMeshOnSpline(bool bCollisionEnabled);                                                                          // [0xc6ac4cc] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorTickSubsystem
/// Size: 0x0050 (0x0000D0 - 0x000120)
class UFMDeviceCableAnimatorTickSubsystem : public UFortManagedTickSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UFMDeviceCableAnimatorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TWeakObjectPtr<UFMDeviceCablePortComponent*>) OwnerPort                                                OFFSET(get<T>, {0x78, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.SetOwnerPort
	// void SetOwnerPort(class UFMDeviceCablePortComponent* OwnerPort);                                                         // [0xc6ae97c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.RemoveMaterialInstance
	// void RemoveMaterialInstance(class UMaterialInstanceDynamic* InMaterialInstance);                                         // [0xc6ad750] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.OnPortArtifactUpdated
	// void OnPortArtifactUpdated();                                                                                            // [0x256b6f8] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.OnConnectionStarted
	// void OnConnectionStarted(class UFMDeviceCableConnectionBase* NewConnection);                                             // [0x75a60e0] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.OnConnectionEnded
	// void OnConnectionEnded(class UFMDeviceCableConnectionBase* EndedConnection);                                             // [0x75a6164] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase.AddMaterialInstance
	// void AddMaterialInstance(class UMaterialInstanceDynamic* InMaterialInstance);                                            // [0xc6ac44c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMidiEvent
/// Size: 0x00A8 (0x0000E8 - 0x000190)
class UFMDeviceCableAnimatorMidiEvent : public UFMDeviceCableAnimatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FName)                                     NoteTextureParam                                            OFFSET(getStruct<T>, {0xE8, 4, 0, 0})
	CMember(class UCurveFloat*)                        NoteShapeCurve                                              OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(float)                                     NotePercentOfTexture                                        OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     NoteTravelBeats                                             OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     NoteStartDelayBeats                                         OFFSET(get<float>, {0x100, 4, 0, 0})
	CMember(class UTexture2D*)                         NoteTexture                                                 OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UFabricMetaSoundPatchWrapper*)       PatchWrapper                                                OFFSET(get<T>, {0x120, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMidiEvent.OnMetaSoundOutputIntChangedBatch
	// void OnMetaSoundOutputIntChangedBatch(FName& OutputName, TArray<int32_t>& Output);                                       // [0xc6ad52c] Final|Native|Private|HasOutParms 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorFloatProvider
/// Size: 0x0018 (0x0000E8 - 0x000100)
class UFMDeviceCableAnimatorFloatProvider : public UFMDeviceCableAnimatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FName)                                     CableDataParam                                              OFFSET(getStruct<T>, {0xE8, 4, 0, 0})
	SMember(FName)                                     FloatProviderTypeParam                                      OFFSET(getStruct<T>, {0xEC, 4, 0, 0})
	CMember(TArray<class UFabricFloatProviderBase*>)   FloatProviders                                              OFFSET(get<T>, {0xF0, 16, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorFloatProvider.SetFloatProviders
	// void SetFloatProviders(TArray<UFabricFloatProviderBase*>& InFloatProviders);                                             // [0xc6ae180] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorFloatProvider.SetFloatProvider
	// void SetFloatProvider(class UFabricFloatProviderBase* InFloatProvider);                                                  // [0xc6ae100] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorFloatProvider.OnFloatChanged
	// void OnFloatChanged(float CurrentFloat, class UFabricFloatProviderBase* FloatProvider);                                  // [0xc6ad0a4] Final|Native|Protected 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorTextureProvider
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UFMDeviceCableAnimatorTextureProvider : public UFMDeviceCableAnimatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FName)                                     CableDataParam                                              OFFSET(getStruct<T>, {0xE8, 4, 0, 0})
	DMember(float)                                     DecayRate                                                   OFFSET(get<float>, {0xEC, 4, 0, 0})
	CMember(class UFabricTextureProviderBase*)         TextureProvider                                             OFFSET(get<T>, {0xF0, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorTextureProvider.SetTextureProvider
	// void SetTextureProvider(class UFabricTextureProviderBase* InTextureProvider);                                            // [0xc6ae8f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMeshProvider
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UFMDeviceCableAnimatorMeshProvider : public UFMDeviceCableAnimatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FName)                                     CableDataParam                                              OFFSET(getStruct<T>, {0xE8, 4, 0, 0})
	DMember(float)                                     DecayRate                                                   OFFSET(get<float>, {0xEC, 4, 0, 0})
	CMember(class UFabricMeshProviderBase*)            MeshProvider                                                OFFSET(get<T>, {0xF0, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMeshProvider.SetMeshProvider
	// void SetMeshProvider(class UFabricMeshProviderBase* InMeshProvider);                                                     // [0xc6ae8f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer
/// Size: 0x0080 (0x0000E8 - 0x000168)
class UFMDeviceCableAnimatorAudioAnalyzer : public UFMDeviceCableAnimatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FName)                                     FftTextureParam                                             OFFSET(getStruct<T>, {0xE8, 4, 0, 0})
	SMember(FName)                                     WaveformTextureParam                                        OFFSET(getStruct<T>, {0xEC, 4, 0, 0})
	SMember(FName)                                     AmplitudeTextureParam                                       OFFSET(getStruct<T>, {0xF0, 4, 0, 0})
	SMember(FName)                                     AmplitudeDataParam                                          OFFSET(getStruct<T>, {0xF4, 4, 0, 0})
	SMember(FName)                                     CableQualityParam                                           OFFSET(getStruct<T>, {0xF8, 4, 0, 0})
	SMember(FName)                                     CableReactivityParam                                        OFFSET(getStruct<T>, {0xFC, 4, 0, 0})
	DMember(int32_t)                                   WaveformNumSamplesHeld                                      OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	DMember(int32_t)                                   WaveformSmoothingDistance                                   OFFSET(get<int32_t>, {0x104, 4, 0, 0})
	DMember(float)                                     WaveformSmoothingFactor                                     OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     WaveformDecayPerSecond                                      OFFSET(get<float>, {0x10C, 4, 0, 0})
	CMember(class UTexture2D*)                         WaveformTexture                                             OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UTexture2D*)                         AmplitudeTexture                                            OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UFabricMetaSoundPatchWrapper*)       PatchWrapper                                                OFFSET(get<T>, {0x120, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer.SetAnalyzerName
	// void SetAnalyzerName(FName AnalyzerName);                                                                                // [0xc6adf2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer.OnMetaSoundOutputFloatChangedBatch
	// void OnMetaSoundOutputFloatChangedBatch(FName& OutputName, TArray<float>& Output, FFabricMetaSoundPatchWrapperPeakTamer& PeakTamer, float DeltaSeconds); // [0xc6ad29c] Final|Native|Private|HasOutParms 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer.GetLastAnalyzerValue
	// float GetLastAnalyzerValue();                                                                                            // [0xc6acf44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UFMDeviceCableConnectionBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(bool)                                      bConnectionActive                                           OFFSET(get<bool>, {0x80, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr<UFMDeviceCablePortComponent*>>) BuildingCompositeArtifactFromPorts               OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FFMDeviceCableConnectedDevicesInfo)        ConnectedDevicesInfo                                        OFFSET(getStruct<T>, {0x98, 48, 0, 0})
	SMember(FFMDeviceCableDefaultOutputs)              DefaultOutputs                                              OFFSET(getStruct<T>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase.StartConnectionBP
	// void StartConnectionBP();                                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase.RebuildDirtyConnectionBP
	// void RebuildDirtyConnectionBP();                                                                                         // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase.EndConnectionBP
	// void EndConnectionBP();                                                                                                  // [0x1340978] Event|Protected|BlueprintEvent 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableMetaSoundConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableMetaSoundConnection : public UFMDeviceCableConnectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableNoteConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableNoteConnection : public UFMDeviceCableMetaSoundConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableAudioConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableAudioConnection : public UFMDeviceCableMetaSoundConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableFloatConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableFloatConnection : public UFMDeviceCableConnectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableTextureConnection
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFMDeviceCableTextureConnection : public UFMDeviceCableConnectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableMeshConnection
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UFMDeviceCableMeshConnection : public UFMDeviceCableConnectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(uint32_t)                                  PreviousMeshInstanceHash                                    OFFSET(get<uint32_t>, {0xD0, 4, 0, 0})
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UFMDeviceCableControllerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FMulticastInlineDelegate)                  OnControllerCableConnected                                  OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCableDisconnected                               OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(class UClass*)                             ControllerCablePort                                         OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UClass*)                             DeviceCableManagerClass                                     OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class AFortPlayerControllerAthena*)        PlayerController                                            OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        LocalControllerPort                                         OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        ServerControllerPort                                        OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   LocalControllerPortActor                                    OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UFMDeviceCableManagerComponent*)     LocalDeviceCableManager                                     OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UFMDeviceCableManagerComponent*)     ServerDeviceCableManager                                    OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(bool)                                      bFitIsEquipped                                              OFFSET(get<bool>, {0x100, 1, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.SetControllerTargetForControllerPortBP
	// void SetControllerTargetForControllerPortBP(class AActor* ControllerPortActor, class APlayerController* Controller);     // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerVolumeChanged
	// void ServerVolumeChanged();                                                                                              // [0x3b0eddc] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerSelectPort
	// void ServerSelectPort(class UFMDeviceCablePortComponent* SelectedPort);                                                  // [0x99d4930] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerPortsUpdated
	// void ServerPortsUpdated(TArray<FPortUpdateInfo> PortChangeInfos);                                                        // [0xc6ad850] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerPortActivatedStateChanged
	// void ServerPortActivatedStateChanged(class UFMDeviceCablePortComponent* Port, EDeviceCableActivatedState ActivatedState); // [0x9ac8190] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ServerDisconnectController
	// void ServerDisconnectController();                                                                                       // [0x3145fc4] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.SelectPort
	// void SelectPort(class UFMDeviceCablePortComponent* SelectedPort);                                                        // [0xc6ad7d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnWeaponEquipped
	// void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                      // [0xc6ad68c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnRep_ServerDeviceCableManager
	// void OnRep_ServerDeviceCableManager();                                                                                   // [0xc6ad63c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnRep_ServerControllerPort
	// void OnRep_ServerControllerPort();                                                                                       // [0xc6ad628] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnNoFabricInteractablesHit
	// void OnNoFabricInteractablesHit();                                                                                       // [0xc6aceb0] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnFortPawnChanged
	// void OnFortPawnChanged(class AFortPawn* Pawn);                                                                           // [0xc6ad15c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnCreativePlotLinkedVolumeChanged
	// void OnCreativePlotLinkedVolumeChanged(class AFortVolume* FortVolume);                                                   // [0xc6ad024] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnControllerCableDisconnected__DelegateSignature
	// void OnControllerCableDisconnected__DelegateSignature();                                                                 // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.OnControllerCableConnected__DelegateSignature
	// void OnControllerCableConnected__DelegateSignature(TArray<UFMDeviceCablePortComponent*>& ConnectedPorts);                // [0x1340978] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.IsHoldingCable
	// bool IsHoldingCable();                                                                                                   // [0xc6ad004] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.IsCableConnectionValid
	// bool IsCableConnectionValid(class UFMDeviceCablePortComponent* OtherPort);                                               // [0xc6acf74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.DropCable
	// void DropCable();                                                                                                        // [0xc6aceb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent.ClientPortUpdatesRejected
	// void ClientPortUpdatesRejected(TArray<FPortUpdateInfo> PortChangeInfos);                                                 // [0xc6ac54c] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableManagerComponent
/// Size: 0x01F8 (0x0000A0 - 0x000298)
class UFMDeviceCableManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UClass*)                             DeviceCableClass                                            OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(int32_t)                                   StartingCablePoolSize                                       OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	CMember(EDeviceCableInteractionType)               CableInteractionType                                        OFFSET(get<T>, {0xAC, 1, 0, 0})
	CMember(TMap<EDeviceCablePortDataType, UClass*>)   ConnectionClasses                                           OFFSET(get<T>, {0xB0, 80, 0, 0})
	SMember(FGameplayEventListenerBackwardCompatibleHandle) PlayerEnteredHandle                                    OFFSET(getStruct<T>, {0x100, 72, 0, 0})
	CMember(TArray<class AFMDeviceCable*>)             FreeDeviceCables                                            OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TMap<EDeviceCablePortDataType, UFMDeviceCableConnectionBase*>) CableConnectionsByType                  OFFSET(get<T>, {0x158, 80, 0, 0})
	CMember(TMap<FGuid, TWeakObjectPtr<UFMDeviceCablePortComponent*>>) PortsInVolume                               OFFSET(get<T>, {0x1A8, 80, 0, 0})
	CMember(TMap<FGuid, FGuid>)                        OriginalGuidToDuplicatedGuidThisFrame                       OFFSET(get<T>, {0x1F8, 80, 0, 0})
	CMember(TMap<TWeakObjectPtr<UObject*>, TWeakObjectPtr<UObject*>>) SourceObjectToDuplicatedObjectThisFrame      OFFSET(get<T>, {0x248, 80, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableManagerComponent.GetCableInteractionType
	// EDeviceCableInteractionType GetCableInteractionType();                                                                   // [0xc6acee4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent
/// Size: 0x0310 (0x0005C0 - 0x0008D0)
class UFMDeviceCablePortComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2256;

public:
	SMember(FMulticastInlineDelegate)                  OnCablePortSizeUpdated                                      OFFSET(getStruct<T>, {0x5F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAnimatorCreated                                           OFFSET(getStruct<T>, {0x608, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnConnected                                                 OFFSET(getStruct<T>, {0x618, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnConnectedDuringGameplay                                   OFFSET(getStruct<T>, {0x648, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDisconnected                                              OFFSET(getStruct<T>, {0x658, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnConnectionStarted                                         OFFSET(getStruct<T>, {0x668, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnConnectionEnded                                           OFFSET(getStruct<T>, {0x678, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPortArtifactUpdated                                       OFFSET(getStruct<T>, {0x688, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReceiveFloatProviders                                     OFFSET(getStruct<T>, {0x698, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDisconnectFloatProvider                                   OFFSET(getStruct<T>, {0x6A8, 16, 0, 0})
	CMember(class UClass*)                             DeviceCableManagerClass                                     OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              OutputStaticMesh                                            OFFSET(get<T>, {0x6C0, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              AudioInStaticMesh                                           OFFSET(get<T>, {0x6E0, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              NoteInStaticMesh                                            OFFSET(get<T>, {0x700, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              TextureInStaticMesh                                         OFFSET(get<T>, {0x720, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              MeshInStaticMesh                                            OFFSET(get<T>, {0x740, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              ScalarInStaticMesh                                          OFFSET(get<T>, {0x760, 32, 0, 0})
	CMember(TMap<EDeviceCablePortDataType, UClass*>)   CableAnimatorClasses                                        OFFSET(get<T>, {0x780, 80, 0, 0})
	CMember(EDeviceCablePortFlowType)                  PortFlowType                                                OFFSET(get<T>, {0x7D0, 1, 0, 0})
	CMember(EDeviceCablePortDataType)                  PortDataType                                                OFFSET(get<T>, {0x7D1, 1, 0, 0})
	CMember(EDeviceCableLoadableState)                 PortLoadableState                                           OFFSET(get<T>, {0x7D2, 1, 0, 0})
	CMember(EDeviceCablePortAnimationSyncType)         AnimationSyncType                                           OFFSET(get<T>, {0x7D3, 1, 0, 0})
	DMember(bool)                                      bAllowMultipleConnections                                   OFFSET(get<bool>, {0x7D4, 1, 0, 0})
	DMember(bool)                                      bAllowSiblingConnections                                    OFFSET(get<bool>, {0x7D5, 1, 0, 0})
	CMember(EFMDeviceCablePortComponentAllowMultipleConnections) OverrideAllowMultipleConnections                  OFFSET(get<T>, {0x7D6, 1, 0, 0})
	CMember(EFMDeviceCablePortComponentAllowMultipleConnections) OverrideAllowSiblingConnections                   OFFSET(get<T>, {0x7D7, 1, 0, 0})
	DMember(bool)                                      bHideWhenNotRelevant                                        OFFSET(get<bool>, {0x7D8, 1, 0, 0})
	DMember(bool)                                      bIsPlayerPort                                               OFFSET(get<bool>, {0x7D9, 1, 0, 0})
	DMember(bool)                                      bIsOnPreviewBuildingActor                                   OFFSET(get<bool>, {0x7DA, 1, 0, 0})
	SMember(FName)                                     EnterVolumeTag                                              OFFSET(getStruct<T>, {0x7DC, 4, 0, 0})
	SMember(FName)                                     ExitVolumeTag                                               OFFSET(getStruct<T>, {0x7E0, 4, 0, 0})
	CMember(TArray<class UFMDeviceCablePortComponent*>) ConnectedPorts                                             OFFSET(get<T>, {0x7E8, 16, 0, 0})
	CMember(TArray<class UFMDeviceCablePortComponent*>) ServerConnectedPorts                                       OFFSET(get<T>, {0x7F8, 16, 0, 0})
	CMember(TArray<class UFMDeviceCableConnectionBase*>) CurrentConnections                                        OFFSET(get<T>, {0x808, 16, 0, 0})
	CMember(class AFMDeviceCable*)                     ConstantCable                                               OFFSET(get<T>, {0x818, 8, 0, 0})
	CMember(class UFMDeviceCableManagerComponent*)     DeviceCableManager                                          OFFSET(get<T>, {0x820, 8, 0, 0})
	CMember(TArray<class UFMDeviceCablePortComponent*>) OtherPortsOnActor                                          OFFSET(get<T>, {0x828, 16, 0, 0})
	CMember(EDeviceCableActivatedState)                PortActivatedState                                          OFFSET(get<T>, {0x838, 1, 0, 0})
	CMember(EDeviceCableActivatedState)                ServerPortActivatedState                                    OFFSET(get<T>, {0x839, 1, 0, 0})
	CMember(EDeviceCablePortSelectableState)           PortSelectableState                                         OFFSET(get<T>, {0x83A, 1, 0, 0})
	CMember(class UFMDeviceCableAnimatorBase*)         DeviceCableAnimator                                         OFFSET(get<T>, {0x840, 8, 0, 0})
	SMember(FGuid)                                     ConnectionGuid                                              OFFSET(getStruct<T>, {0x848, 16, 0, 0})
	CMember(TArray<FGuid>)                             ConnectedGuids                                              OFFSET(get<T>, {0x858, 16, 0, 0})
	SMember(FFMDeviceCableArtifact)                    CachedArtifact                                              OFFSET(getStruct<T>, {0x868, 32, 0, 0})
	CMember(TArray<class UFMDeviceCablePortComponent*>) PendingConnectionBroadcasts                                OFFSET(get<T>, {0x898, 16, 0, 0})
	SMember(FGuid)                                     SaveGuid                                                    OFFSET(getStruct<T>, {0x8A8, 16, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.UpdateStaticMesh
	// void UpdateStaticMesh();                                                                                                 // [0xc6b2c90] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetPortVisibility
	// void SetPortVisibility(bool bPortVisible);                                                                               // [0xc6b2c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetPortSelectableState
	// void SetPortSelectableState(EDeviceCablePortSelectableState NewSelectableState);                                         // [0xc6b2b8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetPortConnectionsDirty
	// void SetPortConnectionsDirty();                                                                                          // [0xc6b2b78] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetPortActivatedState
	// void SetPortActivatedState(EDeviceCableActivatedState NewActivatedState);                                                // [0xc6b2af8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetDeviceCableAnimator
	// void SetDeviceCableAnimator(class UFMDeviceCableAnimatorBase* InAnimator);                                               // [0x64c3a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SetCachedArtifact
	// void SetCachedArtifact(FFMDeviceCableArtifact& InCachedArtifact);                                                        // [0xc6b2850] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.SelectWithStaticOutputInteraction
	// EPortSelectStatus SelectWithStaticOutputInteraction(class UFMDeviceCablePortComponent* PlayerSelectionPort, TArray<FPortUpdateInfo>& OutPortUpdates); // [0xc6b2144] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.Select
	// EPortSelectStatus Select(class UFMDeviceCablePortComponent* PlayerSelectionPort, TArray<FPortUpdateInfo>& OutPortUpdates); // [0xc6b1a34] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnRep_ServerPortActivatedState
	// void OnRep_ServerPortActivatedState();                                                                                   // [0xc6b19f0] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnRep_ServerConnectedPorts
	// void OnRep_ServerConnectedPorts();                                                                                       // [0xc6b19dc] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnRep_DeviceCableManager
	// void OnRep_DeviceCableManager();                                                                                         // [0xc6b1984] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnRep_ConstantCable
	// void OnRep_ConstantCable();                                                                                              // [0xc6b192c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnReceiveFloatProviders__DelegateSignature
	// void OnReceiveFloatProviders__DelegateSignature(TArray<UFabricFloatProviderBase*>& FloatProviders);                      // [0x1340978] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnPortArtifactUpdated__DelegateSignature
	// void OnPortArtifactUpdated__DelegateSignature();                                                                         // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnPlayerControllerPortDisconnected
	// void OnPlayerControllerPortDisconnected();                                                                               // [0xc6b1918] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnPlayerControllerPortConnected
	// void OnPlayerControllerPortConnected(TArray<UFMDeviceCablePortComponent*>& ControllerPorts);                             // [0xc6b1228] Final|Native|Private|HasOutParms 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnDisconnectFloatProvider__DelegateSignature
	// void OnDisconnectFloatProvider__DelegateSignature(class UFabricFloatProviderBase* FloatProvider);                        // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnDisconnected__DelegateSignature
	// void OnDisconnected__DelegateSignature(class UFMDeviceCablePortComponent* DisconnectedPort);                             // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnConnectionStarted__DelegateSignature
	// void OnConnectionStarted__DelegateSignature(class UFMDeviceCableConnectionBase* NewConnection);                          // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnConnectionEnded__DelegateSignature
	// void OnConnectionEnded__DelegateSignature(class UFMDeviceCableConnectionBase* EndedConnection);                          // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnConnectedWithSourcePort__DelegateSignature
	// void OnConnectedWithSourcePort__DelegateSignature(class UFMDeviceCablePortComponent* SourcePort, class UFMDeviceCablePortComponent* OtherPort); // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnConnected__DelegateSignature
	// void OnConnected__DelegateSignature(class UFMDeviceCablePortComponent* ConnectedPort);                                   // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.OnAnimatorCreated__DelegateSignature
	// void OnAnimatorCreated__DelegateSignature(class UFMDeviceCableAnimatorBase* Animator);                                   // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.MatchesPortConnectionType
	// bool MatchesPortConnectionType(class UFMDeviceCablePortComponent* OtherPort);                                            // [0xc6b0900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.IsConnectedToPort
	// bool IsConnectedToPort(class UFMDeviceCablePortComponent* Port);                                                         // [0xc6b0784] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.IsConnected
	// bool IsConnected();                                                                                                      // [0xc6b0768] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.HasSavedConnections
	// bool HasSavedConnections();                                                                                              // [0xc6b0738] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPreviousPortsInConnections
	// TArray<UFMDeviceCablePortComponent*> GetPreviousPortsInConnections();                                                    // [0xc6b06fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPortSelectableState
	// EDeviceCablePortSelectableState GetPortSelectableState();                                                                // [0xc6b06e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPortFlowType
	// EDeviceCablePortFlowType GetPortFlowType();                                                                              // [0x3eb2730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPortDataType
	// EDeviceCablePortDataType GetPortDataType();                                                                              // [0xc6b06cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetPortActivatedState
	// EDeviceCableActivatedState GetPortActivatedState();                                                                      // [0xc6b06b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetOtherPortsOnActor
	// TArray<UFMDeviceCablePortComponent*> GetOtherPortsOnActor();                                                             // [0xc6b0698] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetNextPortsInConnections
	// TArray<UFMDeviceCablePortComponent*> GetNextPortsInConnections();                                                        // [0xc6b065c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetIsTerminalPort
	// bool GetIsTerminalPort(EDeviceCablePortFlowType FlowType);                                                               // [0xc6b05d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetIsPlayerPort
	// bool GetIsPlayerPort();                                                                                                  // [0x96645f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetIsModulationPort
	// bool GetIsModulationPort();                                                                                              // [0xc6b05a8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetGuid
	// FGuid GetGuid();                                                                                                         // [0xc6b0578] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetDeviceCableAnimator
	// class UFMDeviceCableAnimatorBase* GetDeviceCableAnimator();                                                              // [0xc6b0560] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetConstantCable
	// class AFMDeviceCable* GetConstantCable();                                                                                // [0xc6b0548] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetConnections
	// TArray<UFMDeviceCableConnectionBase*> GetConnections();                                                                  // [0xc6b04d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetConnectedPorts
	// TArray<UFMDeviceCablePortComponent*> GetConnectedPorts();                                                                // [0xc6b04b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetCachedArtifact
	// FFMDeviceCableArtifact GetCachedArtifact();                                                                              // [0xc6b048c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.GetAnimationSyncType
	// EDeviceCablePortAnimationSyncType GetAnimationSyncType();                                                                // [0x3eb2700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.FabricCablePortSizeUpdated__DelegateSignature
	// void FabricCablePortSizeUpdated__DelegateSignature(float Size);                                                          // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent.ActorHasValidControllerBP
	// bool ActorHasValidControllerBP(class AActor* Actor, class AFortPlayerPawn*& OutFortPlayerPawn, class APlayerController*& OutPlayerController); // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableModulatorPortComponent
/// Size: 0x0020 (0x0008D0 - 0x0008F0)
class UFMDeviceCableModulatorPortComponent : public UFMDeviceCablePortComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2288;

public:
	SMember(FString)                                   AssociatedProperty                                          OFFSET(getStruct<T>, {0x8D0, 16, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  AssociatedObject                                            OFFSET(get<T>, {0x8E0, 8, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableModulatorPortComponent.SetDeviceCableManager
	// void SetDeviceCableManager(class UFMDeviceCableManagerComponent* InDeviceCableManager);                                  // [0xc6b28e8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCablesFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFMDeviceCablesFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablesFunctionLibrary.MakeSoundSourceBusSendInfo
	// FSoundSourceBusSendInfo MakeSoundSourceBusSendInfo(class USoundSourceBus* SoundSourceBus);                               // [0xc6b0820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCablesFunctionLibrary.DeepCopySoundSourceBus
	// class USoundSourceBus* DeepCopySoundSourceBus(class UObject* Context, class UObject* Outer, class USoundSourceBus* Source); // [0xc6aff18] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent
/// Size: 0x04C0 (0x0000A0 - 0x000560)
class UFMDeviceCableWildcardOrderingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	SMember(FFMDeviceCableOrderingMovementInfo)        InputsShowHideMovementInfo                                  OFFSET(getStruct<T>, {0xA8, 48, 0, 0})
	SMember(FFMDeviceCableOrderingMovementInfo)        InOutMovementInfo                                           OFFSET(getStruct<T>, {0x190, 48, 0, 0})
	SMember(FFMDeviceCableOrderingMovementInfo)        TransitionMovementInfo                                      OFFSET(getStruct<T>, {0x1C0, 48, 0, 0})
	SMember(FFMDeviceCableOrderingMovementInfo)        CollapseExpandMovementInfo                                  OFFSET(getStruct<T>, {0x2A8, 48, 0, 0})
	SMember(FVector)                                   CollapsedOutputPosition                                     OFFSET(getStruct<T>, {0x390, 24, 0, 0})
	DMember(float)                                     VisualChangeTimeoutTime                                     OFFSET(get<float>, {0x3A8, 4, 0, 0})
	SMember(FName)                                     ClosedMeshTag                                               OFFSET(getStruct<T>, {0x3B0, 4, 0, 0})
	SMember(FName)                                     TopMeshTag                                                  OFFSET(getStruct<T>, {0x3B4, 4, 0, 0})
	SMember(FName)                                     MiddleMeshTag                                               OFFSET(getStruct<T>, {0x3B8, 4, 0, 0})
	SMember(FName)                                     BottomMeshTag                                               OFFSET(getStruct<T>, {0x3BC, 4, 0, 0})
	SMember(FName)                                     InputPortParentTag                                          OFFSET(getStruct<T>, {0x3C0, 4, 0, 0})
	CMember(class UStaticMeshComponent*)               ClosedMesh                                                  OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               TopMesh                                                     OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(TArray<class UStaticMeshComponent*>)       MiddleMeshes                                                OFFSET(get<T>, {0x3D8, 16, 0, 0})
	CMember(class UStaticMeshComponent*)               BottomMesh                                                  OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(TArray<class UFMDeviceCableWildcardPortComponent*>) InputWildcardPorts                                 OFFSET(get<T>, {0x3F8, 16, 0, 0})
	CMember(class USceneComponent*)                    InputWildcardPortParent                                     OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(TArray<class UFMDeviceCableWildcardPortComponent*>) OutputWildcardPorts                                OFFSET(get<T>, {0x410, 16, 0, 0})
	CMember(TArray<FFMDeviceCableOrderingPortState>)   ServerPortStates                                            OFFSET(get<T>, {0x540, 16, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.SetOutputRoot
	// void SetOutputRoot(FVector RootLocation);                                                                                // [0xc6b2a70] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.SetOutputPortsExpanded
	// void SetOutputPortsExpanded(bool bExpanded);                                                                             // [0xc6b29f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.SetInputRoot
	// void SetInputRoot(FVector RootLocation);                                                                                 // [0xc6b2968] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnRep_ServerPortStates
	// void OnRep_ServerPortStates();                                                                                           // [0xc6b1a20] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnOutputPortSlotSetFromSave
	// void OnOutputPortSlotSetFromSave(class UFMDeviceCableWildcardPortComponent* WildcardPort, bool bHasConnections);         // [0xc6b0e54] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnOutputPortDisconnected
	// void OnOutputPortDisconnected(class UFMDeviceCablePortComponent* SourcePort, class UFMDeviceCablePortComponent* DisconnectedPort); // [0xc6b0c4c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnOutputPortConnected
	// void OnOutputPortConnected(class UFMDeviceCablePortComponent* SourcePort, class UFMDeviceCablePortComponent* ConnectedPort); // [0xc6b0b88] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnInputPortDisconnected
	// void OnInputPortDisconnected(class UFMDeviceCablePortComponent* DisconnectedPort);                                       // [0xc6b0b08] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnInputPortDataTypeChanged
	// void OnInputPortDataTypeChanged(class UFMDeviceCableWildcardPortComponent* WildcardPort, EDeviceCablePortDataType DataType); // [0xc6b0a40] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.OnInputPortConnected
	// void OnInputPortConnected(class UFMDeviceCablePortComponent* ConnectedPort);                                             // [0xc6b09c4] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.InitializeOutputSlots
	// void InitializeOutputSlots();                                                                                            // [0xc6b0754] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent.FinishVisualChange
	// void FinishVisualChange();                                                                                               // [0xc6b0474] Final|Native|Protected 
};

/// Class /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent
/// Size: 0x0030 (0x0008D0 - 0x000900)
class UFMDeviceCableWildcardPortComponent : public UFMDeviceCablePortComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2304;

public:
	SMember(FMulticastInlineDelegate)                  OnWildcardDataTypeChanged                                   OFFSET(getStruct<T>, {0x8C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWildcardPortSlotSetFromSave                               OFFSET(getStruct<T>, {0x8D8, 16, 0, 0})
	DMember(int32_t)                                   SlotIndex                                                   OFFSET(get<int32_t>, {0x8E8, 4, 0, 0})
	DMember(int32_t)                                   SavedSlotIndex                                              OFFSET(get<int32_t>, {0x8EC, 4, 0, 0})
	CMember(EDeviceCablePortDataType)                  SavedPortDataType                                           OFFSET(get<T>, {0x8F0, 1, 0, 0})


	/// Functions
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnWildcardPortSlotSetFromSave__DelegateSignature
	// void OnWildcardPortSlotSetFromSave__DelegateSignature(class UFMDeviceCableWildcardPortComponent* WildcardPort, bool bHasConnections); // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnWildcardDataTypeChanged__DelegateSignature
	// void OnWildcardDataTypeChanged__DelegateSignature(class UFMDeviceCableWildcardPortComponent* WildcardPort, EDeviceCablePortDataType DataType); // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnRep_SavedSlotIndex
	// void OnRep_SavedSlotIndex();                                                                                             // [0xc6d768c] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnRep_SavedPortDataType
	// void OnRep_SavedPortDataType();                                                                                          // [0xc6d7658] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnPlayerControllerPortDisconnectedWildcard
	// void OnPlayerControllerPortDisconnectedWildcard();                                                                       // [0xc6d7644] Final|Native|Private 
	// Function /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent.OnPlayerControllerPortConnectedWildcard
	// void OnPlayerControllerPortConnectedWildcard(TArray<UFMDeviceCablePortComponent*>& ControllerPorts);                     // [0xc6d6f54] Final|Native|Private|HasOutParms 
};

/// Struct /Script/FMDeviceCablesRuntime.PortUpdateInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FPortUpdateInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EPortSelectStatus)                         PortSelectStatus                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        ConstantPort                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        ConnectedPort                                               OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UFMDeviceCablePortComponent*)        DisconnectedPort                                            OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableArtifact
/// Size: 0x0020 (0x000000 - 0x000020)
class FFMDeviceCableArtifact : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UFabricMeshTreeNode*)                MeshTreeNode                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UFabricMetaSoundTreeNode*)           MetaSoundTreeNode                                           OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UFabricTextureTreeNode*)             TextureTreeNode                                             OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UFabricModulationNode*)              ModulationNode                                              OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableTerminalDeviceInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FFMDeviceCableTerminalDeviceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<UFMDeviceCablePortComponent*>) TerminalPort                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   TerminalActor                                               OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCablePassthroughDeviceInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FFMDeviceCablePassthroughDeviceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TWeakObjectPtr<UFMDeviceCablePortComponent*>) InputPort                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<UFMDeviceCablePortComponent*>) OutputPort                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   PassthroughActor                                            OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableConnectedDevicesInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FFMDeviceCableConnectedDevicesInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FFMDeviceCableTerminalDeviceInfo)          SourceDeviceInfo                                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FFMDeviceCableTerminalDeviceInfo)          DestinationDeviceInfo                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FFMDeviceCablePassthroughDeviceInfo>) PassthroughDeviceInfos                                    OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableDefaultOutputs
/// Size: 0x0008 (0x000000 - 0x000008)
class FFMDeviceCableDefaultOutputs : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class USoundSourceBus*)                    SourceBus                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.ModulatorPortSaveData
/// Size: 0x0020 (0x000000 - 0x000020)
class FModulatorPortSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     ConnectionGuid                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGuid>)                             ConnectedGuids                                              OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableOrderingMovementInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FFMDeviceCableOrderingMovementInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UCurveFloat*)                        Curve                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UCurveVector*)                       ScaleCurve                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(float)                                     MovementTimeSeconds                                         OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableOrderingMovementState
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FFMDeviceCableOrderingMovementState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Struct /Script/FMDeviceCablesRuntime.FMDeviceCableOrderingPortState
/// Size: 0x0270 (0x000000 - 0x000270)
class FFMDeviceCableOrderingPortState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(class UFMDeviceCableWildcardPortComponent*) WildcardPort                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USceneComponent*)                    VerticalPositionParent                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(EFMDeviceCableWildcardOrderingState)       VisualState                                                 OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(EFMDeviceCableWildcardOrderingState)       State                                                       OFFSET(get<T>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   Slot                                                        OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(TWeakObjectPtr<UFMDeviceCableWildcardOrderingComponent*>) Owner                                        OFFSET(get<T>, {0x260, 8, 0, 0})
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

/// Enum /Script/FMDeviceCablesRuntime.EDeviceCableActivatedState
/// Size: 0x03
enum class EDeviceCableActivatedState : uint8_t
{
	EDeviceCableActivatedState__Active                                               = 0,
	EDeviceCableActivatedState__Dormant                                              = 1,
	EDeviceCableActivatedState__EDeviceCableActivatedState_MAX                       = 2
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

