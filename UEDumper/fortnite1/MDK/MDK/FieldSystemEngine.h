
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/FieldSystemEngine.FieldSystemActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AFieldSystemActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UFieldSystemComponent*)              FieldSystemComponent                                        OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/FieldSystemEngine.FieldSystem
/// Size: 0x0010 (0x000028 - 0x000038)
class UFieldSystem : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/FieldSystemEngine.FieldSystemComponent
/// Size: 0x00D0 (0x000500 - 0x0005D0)
class UFieldSystemComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	CMember(class UFieldSystem*)                       FieldSystem                                                 OFFSET(get<T>, {0x500, 8, 0, 0})
	DMember(bool)                                      bIsWorldField                                               OFFSET(get<bool>, {0x508, 1, 0, 0})
	DMember(bool)                                      bIsChaosField                                               OFFSET(get<bool>, {0x509, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr<AChaosSolverActor*>>) SupportedSolvers                                           OFFSET(get<T>, {0x510, 16, 0, 0})
	SMember(FFieldObjectCommands)                      ConstructionCommands                                        OFFSET(getStruct<T>, {0x520, 48, 0, 0})
	SMember(FFieldObjectCommands)                      BufferCommands                                              OFFSET(getStruct<T>, {0x550, 48, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
	// void ResetFieldSystem();                                                                                                 // [0x638f5ac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.RemovePersistentFields
	// void RemovePersistentFields();                                                                                           // [0x3503de8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
	// void ApplyUniformVectorFalloffForce(bool Enabled, FVector Position, FVector Direction, float Radius, float Magnitude);   // [0x638f2bc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStrainField
	// void ApplyStrainField(bool Enabled, FVector Position, float Radius, float Magnitude, int32_t Iterations);                // [0x638efec] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
	// void ApplyStayDynamicField(bool Enabled, FVector Position, float Radius);                                                // [0x638ee10] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
	// void ApplyRadialVectorFalloffForce(bool Enabled, FVector Position, float Radius, float Magnitude);                       // [0x638ebb4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
	// void ApplyRadialForce(bool Enabled, FVector Position, float Magnitude);                                                  // [0x638e9d8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
	// void ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x638e78c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
	// void ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude);                                                 // [0x638e5b0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.AddPersistentField
	// void AddPersistentField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x33465cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.AddFieldCommand
	// void AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x638e364] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaData
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldSystemMetaData : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataIteration
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(int32_t)                                   Iterations                                                  OFFSET(get<int32_t>, {0xA0, 4, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
	// class UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations);                                           // [0x638fd80] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TEnumAsByte<EFieldResolutionType>)         ResolutionType                                              OFFSET(get<T>, {0xA0, 1, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
	// class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> ResolutionType); // [0x638fe50] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataFilter
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TEnumAsByte<EFieldFilterType>)             FilterType                                                  OFFSET(get<T>, {0xA0, 1, 0, 0})
	CMember(TEnumAsByte<EFieldObjectType>)             ObjectType                                                  OFFSET(get<T>, {0xA1, 1, 0, 0})
	CMember(TEnumAsByte<EFieldPositionType>)           PositionType                                                OFFSET(get<T>, {0xA2, 1, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType
	// class UFieldSystemMetaDataFilter* SetMetaDataFilterType(TEnumAsByte<EFieldFilterType> FilterType, TEnumAsByte<EFieldObjectType> ObjectType, TEnumAsByte<EFieldPositionType> PositionType); // [0x638fbb8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldNodeBase
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldNodeBase : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/FieldSystemEngine.FieldNodeInt
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldNodeInt : public UFieldNodeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/FieldSystemEngine.FieldNodeFloat
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldNodeFloat : public UFieldNodeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/FieldSystemEngine.FieldNodeVector
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldNodeVector : public UFieldNodeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/FieldSystemEngine.UniformInteger
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UUniformInteger : public UFieldNodeInt
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(int32_t)                                   Magnitude                                                   OFFSET(get<int32_t>, {0xA0, 4, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.UniformInteger.SetUniformInteger
	// class UUniformInteger* SetUniformInteger(int32_t Magnitude);                                                             // [0x638fd80] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialIntMask
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class URadialIntMask : public UFieldNodeInt
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0xA0, 4, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	DMember(int32_t)                                   InteriorValue                                               OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   ExteriorValue                                               OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	CMember(TEnumAsByte<ESetMaskConditionType>)        SetMaskCondition                                            OFFSET(get<T>, {0xC8, 1, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.RadialIntMask.SetRadialIntMask
	// class URadialIntMask* SetRadialIntMask(float Radius, FVector Position, int32_t InteriorValue, int32_t ExteriorValue, TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn); // [0x6390600] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.UniformScalar
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UUniformScalar : public UFieldNodeFloat
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0xA0, 4, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.UniformScalar.SetUniformScalar
	// class UUniformScalar* SetUniformScalar(float Magnitude);                                                                 // [0x63908d4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.WaveScalar
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UWaveScalar : public UFieldNodeFloat
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0xA0, 4, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	DMember(float)                                     WaveLength                                                  OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     Period                                                      OFFSET(get<float>, {0xC4, 4, 0, 0})
	CMember(TEnumAsByte<EWaveFunctionType>)            Function                                                    OFFSET(get<T>, {0xC8, 1, 0, 0})
	CMember(TEnumAsByte<EFieldFalloffType>)            Falloff                                                     OFFSET(get<T>, {0xC9, 1, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.WaveScalar.SetWaveScalar
	// class UWaveScalar* SetWaveScalar(float Magnitude, FVector Position, float WaveLength, float Period, float Time, TEnumAsByte<EWaveFunctionType> Function, TEnumAsByte<EFieldFalloffType> Falloff); // [0x310b2cc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialFalloff
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class URadialFalloff : public UFieldNodeFloat
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     MinRange                                                    OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     MaxRange                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Default                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	CMember(TEnumAsByte<EFieldFalloffType>)            Falloff                                                     OFFSET(get<T>, {0xD0, 1, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.RadialFalloff.SetRadialFalloff
	// class URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, FVector Position, TEnumAsByte<EFieldFalloffType> Falloff); // [0x3292330] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.PlaneFalloff
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UPlaneFalloff : public UFieldNodeFloat
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     MinRange                                                    OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     MaxRange                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Default                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	CMember(TEnumAsByte<EFieldFalloffType>)            Falloff                                                     OFFSET(get<T>, {0xE8, 1, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
	// class UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, FVector Position, FVector Normal, TEnumAsByte<EFieldFalloffType> Falloff); // [0x6390194] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.BoxFalloff
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UBoxFalloff : public UFieldNodeFloat
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     MinRange                                                    OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     MaxRange                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Default                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0xB0, 96, 0, 0})
	CMember(TEnumAsByte<EFieldFalloffType>)            Falloff                                                     OFFSET(get<T>, {0x110, 1, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.BoxFalloff.SetBoxFalloff
	// class UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, FTransform Transform, TEnumAsByte<EFieldFalloffType> Falloff); // [0x638f5c0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.NoiseField
/// Size: 0x0070 (0x0000A0 - 0x000110)
class UNoiseField : public UFieldNodeFloat
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	DMember(float)                                     MinRange                                                    OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     MaxRange                                                    OFFSET(get<float>, {0xA4, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0xB0, 96, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.NoiseField.SetNoiseField
	// class UNoiseField* SetNoiseField(float MinRange, float MaxRange, FTransform Transform);                                  // [0x638ff20] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.UniformVector
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UUniformVector : public UFieldNodeVector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0xA0, 4, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0xA8, 24, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.UniformVector.SetUniformVector
	// class UUniformVector* SetUniformVector(float Magnitude, FVector Direction);                                              // [0x6390a9c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialVector
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class URadialVector : public UFieldNodeVector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0xA0, 4, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0xA8, 24, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.RadialVector.SetRadialVector
	// class URadialVector* SetRadialVector(float Magnitude, FVector Position);                                                 // [0x341c46c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RandomVector
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class URandomVector : public UFieldNodeVector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0xA0, 4, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.RandomVector.SetRandomVector
	// class URandomVector* SetRandomVector(float Magnitude);                                                                   // [0x63908d4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.OperatorField
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UOperatorField : public UFieldNodeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0xA0, 4, 0, 0})
	CMember(class UFieldNodeBase*)                     RightField                                                  OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UFieldNodeBase*)                     LeftField                                                   OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TEnumAsByte<EFieldOperationType>)          Operation                                                   OFFSET(get<T>, {0xB8, 1, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.OperatorField.SetOperatorField
	// class UOperatorField* SetOperatorField(float Magnitude, class UFieldNodeBase* LeftField, class UFieldNodeBase* RightField, TEnumAsByte<EFieldOperationType> Operation); // [0x300e79c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ToIntegerField
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UToIntegerField : public UFieldNodeInt
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class UFieldNodeFloat*)                    FloatField                                                  OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.ToIntegerField.SetToIntegerField
	// class UToIntegerField* SetToIntegerField(class UFieldNodeFloat* FloatField);                                             // [0x63909bc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ToFloatField
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UToFloatField : public UFieldNodeFloat
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class UFieldNodeInt*)                      IntField                                                    OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.ToFloatField.SetToFloatField
	// class UToFloatField* SetToFloatField(class UFieldNodeInt* IntegerField);                                                 // [0x63909bc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.CullingField
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UCullingField : public UFieldNodeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class UFieldNodeBase*)                     Culling                                                     OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UFieldNodeBase*)                     Field                                                       OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TEnumAsByte<EFieldCullingOperationType>)   Operation                                                   OFFSET(get<T>, {0xB0, 1, 0, 0})


	/// Functions
	// Function /Script/FieldSystemEngine.CullingField.SetCullingField
	// class UCullingField* SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, TEnumAsByte<EFieldCullingOperationType> Operation); // [0x638f9b4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ReturnResultsTerminal
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UReturnResultsTerminal : public UFieldNodeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
	// class UReturnResultsTerminal* SetReturnResultsTerminal();                                                                // [0x63909a8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/FieldSystemEngine.FieldObjectCommands
/// Size: 0x0030 (0x000000 - 0x000030)
class FFieldObjectCommands : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FName>)                             TargetNames                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<class UFieldNodeBase*>)             RootNodes                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<class UFieldSystemMetaData*>)       MetaDatas                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
};

