
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Learning

/// Class /Script/LearningAgents.LearningAgentsActionSchema
/// Size: 0x0118 (0x000028 - 0x000140)
class ULearningAgentsActionSchema : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/LearningAgents.LearningAgentsActionObject
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class ULearningAgentsActionObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/LearningAgents.LearningAgentsActions
/// Size: 0x0000 (0x000028 - 0x000028)
class ULearningAgentsActions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsActions.ValidateActionObjectMatchesSchema
	// bool ValidateActionObjectMatchesSchema(class ULearningAgentsActionSchema* Schema, FLearningAgentsActionSchemaElement SchemaElement, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement ObjectElement); // [0xd0281d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyVelocityAction
	// FLearningAgentsActionSchemaElement SpecifyVelocityAction(class ULearningAgentsActionSchema* Schema, FName tag);          // [0xd0246ac] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyTransformAction
	// FLearningAgentsActionSchemaElement SpecifyTransformAction(class ULearningAgentsActionSchema* Schema, FName tag);         // [0xd028068] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyStructActionFromArrays
	// FLearningAgentsActionSchemaElement SpecifyStructActionFromArrays(class ULearningAgentsActionSchema* Schema, TArray<FName>& ElementNames, TArray<FLearningAgentsActionSchemaElement>& Elements, FName tag); // [0xd0277cc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyStructAction
	// FLearningAgentsActionSchemaElement SpecifyStructAction(class ULearningAgentsActionSchema* Schema, TMap<FName, FLearningAgentsActionSchemaElement>& Elements, FName tag); // [0xd0275c8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyStaticArrayAction
	// FLearningAgentsActionSchemaElement SpecifyStaticArrayAction(class ULearningAgentsActionSchema* Schema, FLearningAgentsActionSchemaElement Element, int32_t Num, FName tag); // [0xd027340] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyScaleAction
	// FLearningAgentsActionSchemaElement SpecifyScaleAction(class ULearningAgentsActionSchema* Schema, FName tag);             // [0xd0246ac] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyRotationAction
	// FLearningAgentsActionSchemaElement SpecifyRotationAction(class ULearningAgentsActionSchema* Schema, FName tag);          // [0xd0246ac] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyPairAction
	// FLearningAgentsActionSchemaElement SpecifyPairAction(class ULearningAgentsActionSchema* Schema, FLearningAgentsActionSchemaElement Key, FLearningAgentsActionSchemaElement Value, FName tag); // [0xd027164] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyOptionalAction
	// FLearningAgentsActionSchemaElement SpecifyOptionalAction(class ULearningAgentsActionSchema* Schema, FLearningAgentsActionSchemaElement Element, float PriorProbability, FName tag); // [0xd026f8c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyNullAction
	// FLearningAgentsActionSchemaElement SpecifyNullAction(class ULearningAgentsActionSchema* Schema, FName tag);              // [0xd026e1c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyLocationAction
	// FLearningAgentsActionSchemaElement SpecifyLocationAction(class ULearningAgentsActionSchema* Schema, FName tag);          // [0xd0246ac] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyInclusiveUnionActionFromArrays
	// FLearningAgentsActionSchemaElement SpecifyInclusiveUnionActionFromArrays(class ULearningAgentsActionSchema* Schema, TArray<FName> ElementNames, TArray<FLearningAgentsActionSchemaElement>& Elements, TArray<float>& PriorProbabilities, FName tag); // [0xd0264f8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyInclusiveUnionAction
	// FLearningAgentsActionSchemaElement SpecifyInclusiveUnionAction(class ULearningAgentsActionSchema* Schema, TMap<FName, FLearningAgentsActionSchemaElement>& Elements, TMap<FName, float>& PriorProbabilities, FName tag); // [0xd02625c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyInclusiveDiscreteAction
	// FLearningAgentsActionSchemaElement SpecifyInclusiveDiscreteAction(class ULearningAgentsActionSchema* Schema, int32_t Size, TArray<float>& PriorProbabilities, FName tag); // [0xd026014] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyFloatAction
	// FLearningAgentsActionSchemaElement SpecifyFloatAction(class ULearningAgentsActionSchema* Schema, FName tag);             // [0xd023ba4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyExclusiveUnionActionFromArrays
	// FLearningAgentsActionSchemaElement SpecifyExclusiveUnionActionFromArrays(class ULearningAgentsActionSchema* Schema, TArray<FName>& ElementNames, TArray<FLearningAgentsActionSchemaElement>& Elements, TArray<float>& PriorProbabilities, FName tag); // [0xd0256e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyExclusiveUnionAction
	// FLearningAgentsActionSchemaElement SpecifyExclusiveUnionAction(class ULearningAgentsActionSchema* Schema, TMap<FName, FLearningAgentsActionSchemaElement>& Elements, TMap<FName, float>& PriorProbabilities, FName tag); // [0xd025444] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyExclusiveDiscreteAction
	// FLearningAgentsActionSchemaElement SpecifyExclusiveDiscreteAction(class ULearningAgentsActionSchema* Schema, int32_t Size, TArray<float>& PriorProbabilities, FName tag); // [0xd0251fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyEnumActionFromArray
	// FLearningAgentsActionSchemaElement SpecifyEnumActionFromArray(class ULearningAgentsActionSchema* Schema, class UEnum* Enum, TArray<float>& PriorProbabilities, FName tag); // [0xd024fb4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyEnumAction
	// FLearningAgentsActionSchemaElement SpecifyEnumAction(class ULearningAgentsActionSchema* Schema, class UEnum* Enum, TMap<char, float>& PriorProbabilities, FName tag); // [0xd024d78] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyEncodingAction
	// FLearningAgentsActionSchemaElement SpecifyEncodingAction(class ULearningAgentsActionSchema* Schema, FLearningAgentsActionSchemaElement Element, int32_t EncodingSize, int32_t HiddenLayerNum, ELearningAgentsActivationFunction ActivationFunction, FName tag); // [0xd024a38] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyEitherAction
	// FLearningAgentsActionSchemaElement SpecifyEitherAction(class ULearningAgentsActionSchema* Schema, FLearningAgentsActionSchemaElement A, FLearningAgentsActionSchemaElement B, float PriorProbabilityOfA, FName tag); // [0xd024824] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyDirectionAction
	// FLearningAgentsActionSchemaElement SpecifyDirectionAction(class ULearningAgentsActionSchema* Schema, FName tag);         // [0xd0246ac] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyContinuousAction
	// FLearningAgentsActionSchemaElement SpecifyContinuousAction(class ULearningAgentsActionSchema* Schema, int32_t Size, FName tag); // [0xd024514] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyBoolAction
	// FLearningAgentsActionSchemaElement SpecifyBoolAction(class ULearningAgentsActionSchema* Schema, float PriorProbability, FName tag); // [0xd024378] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyBitmaskActionFromArray
	// FLearningAgentsActionSchemaElement SpecifyBitmaskActionFromArray(class ULearningAgentsActionSchema* Schema, class UEnum* Enum, TArray<float>& PriorProbabilities, FName tag); // [0xd024130] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyBitmaskAction
	// FLearningAgentsActionSchemaElement SpecifyBitmaskAction(class ULearningAgentsActionSchema* Schema, class UEnum* Enum, TMap<char, float>& PriorProbabilities, FName tag); // [0xd023d1c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyAngleAction
	// FLearningAgentsActionSchemaElement SpecifyAngleAction(class ULearningAgentsActionSchema* Schema, FName tag);             // [0xd023ba4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeVelocityAction
	// FLearningAgentsActionObjectElement MakeVelocityAction(class ULearningAgentsActionObject* Object, FVector Velocity, FTransform RelativeTransform, float VelocityScale, FName tag); // [0xd0238dc] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeTransformAction
	// FLearningAgentsActionObjectElement MakeTransformAction(class ULearningAgentsActionObject* Object, FTransform Transform, FTransform RelativeTransform, float LocationScale, FName tag); // [0xd023588] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeStructActionFromArrays
	// FLearningAgentsActionObjectElement MakeStructActionFromArrays(class ULearningAgentsActionObject* Object, TArray<FName>& ElementNames, TArray<FLearningAgentsActionObjectElement>& Elements, FName tag); // [0xd022cec] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeStructAction
	// FLearningAgentsActionObjectElement MakeStructAction(class ULearningAgentsActionObject* Object, TMap<FName, FLearningAgentsActionObjectElement>& Elements, FName tag); // [0xd022ae8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeStaticArrayAction
	// FLearningAgentsActionObjectElement MakeStaticArrayAction(class ULearningAgentsActionObject* Object, TArray<FLearningAgentsActionObjectElement>& Elements, FName tag); // [0xd0222d4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeScaleAction
	// FLearningAgentsActionObjectElement MakeScaleAction(class ULearningAgentsActionObject* Object, FVector Scale, FVector RelativeScale, FName tag); // [0xd0220dc] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeRotationActionFromQuat
	// FLearningAgentsActionObjectElement MakeRotationActionFromQuat(class ULearningAgentsActionObject* Object, FQuat Rotation, FQuat RelativeRotation, float RotationScale, FName tag); // [0xd021eac] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeRotationAction
	// FLearningAgentsActionObjectElement MakeRotationAction(class ULearningAgentsActionObject* Object, FRotator Rotation, FRotator RelativeRotation, float RotationScale, FName tag); // [0xd021c78] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakePairAction
	// FLearningAgentsActionObjectElement MakePairAction(class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Key, FLearningAgentsActionObjectElement Value, FName tag); // [0xd021a9c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeOptionalValidAction
	// FLearningAgentsActionObjectElement MakeOptionalValidAction(class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xd0218fc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeOptionalNullAction
	// FLearningAgentsActionObjectElement MakeOptionalNullAction(class ULearningAgentsActionObject* Object, FName tag);         // [0xd02178c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeOptionalAction
	// FLearningAgentsActionObjectElement MakeOptionalAction(class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, ELearningAgentsOptionalAction Option, FName tag); // [0xd0215b4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeNullAction
	// FLearningAgentsActionObjectElement MakeNullAction(class ULearningAgentsActionObject* Object, FName tag);                 // [0xd021444] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeLocationAction
	// FLearningAgentsActionObjectElement MakeLocationAction(class ULearningAgentsActionObject* Object, FVector Location, FTransform RelativeTransform, float LocationScale, FName tag); // [0xd02117c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeInclusiveUnionActionFromArrays
	// FLearningAgentsActionObjectElement MakeInclusiveUnionActionFromArrays(class ULearningAgentsActionObject* Object, TArray<FName>& ElementNames, TArray<FLearningAgentsActionObjectElement>& Elements, FName tag); // [0xd0208e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeInclusiveUnionAction
	// FLearningAgentsActionObjectElement MakeInclusiveUnionAction(class ULearningAgentsActionObject* Object, TMap<FName, FLearningAgentsActionObjectElement>& Elements, FName tag); // [0xd0206dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeInclusiveDiscreteAction
	// FLearningAgentsActionObjectElement MakeInclusiveDiscreteAction(class ULearningAgentsActionObject* Object, TArray<int32_t>& Indices, FName tag); // [0xd0204f4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeFloatAction
	// FLearningAgentsActionObjectElement MakeFloatAction(class ULearningAgentsActionObject* Object, float Value, float FloatScale, FName tag); // [0xd020320] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeExclusiveUnionAction
	// FLearningAgentsActionObjectElement MakeExclusiveUnionAction(class ULearningAgentsActionObject* Object, FName ElementName, FLearningAgentsActionObjectElement Element, FName tag); // [0xd020008] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeExclusiveDiscreteAction
	// FLearningAgentsActionObjectElement MakeExclusiveDiscreteAction(class ULearningAgentsActionObject* Object, int32_t Index, FName tag); // [0xd01fe70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeEnumAction
	// FLearningAgentsActionObjectElement MakeEnumAction(class ULearningAgentsActionObject* Object, class UEnum* Enum, char EnumValue, FName tag); // [0xd01fc9c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeEncodingAction
	// FLearningAgentsActionObjectElement MakeEncodingAction(class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xd01faac] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeEitherBAction
	// FLearningAgentsActionObjectElement MakeEitherBAction(class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement B, FName tag); // [0xd01f90c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeEitherAction
	// FLearningAgentsActionObjectElement MakeEitherAction(class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, ELearningAgentsEitherAction Either, FName tag); // [0xd01f734] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeEitherAAction
	// FLearningAgentsActionObjectElement MakeEitherAAction(class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement A, FName tag); // [0xd01f594] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeDirectionAction
	// FLearningAgentsActionObjectElement MakeDirectionAction(class ULearningAgentsActionObject* Object, FVector Direction, FTransform RelativeTransform, FName tag); // [0xd01f308] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeContinuousAction
	// FLearningAgentsActionObjectElement MakeContinuousAction(class ULearningAgentsActionObject* Object, TArray<float>& Values, FName tag); // [0xd01f0e4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeBoolAction
	// FLearningAgentsActionObjectElement MakeBoolAction(class ULearningAgentsActionObject* Object, bool bValue, FName tag);    // [0xd01ef44] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeBitmaskAction
	// FLearningAgentsActionObjectElement MakeBitmaskAction(class ULearningAgentsActionObject* Object, class UEnum* Enum, int32_t BitmaskValue, FName tag); // [0xd01ec28] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeAngleActionRadians
	// FLearningAgentsActionObjectElement MakeAngleActionRadians(class ULearningAgentsActionObject* Object, float Angle, float RelativeAngle, float AngleScale, FName tag); // [0xd01ea1c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeAngleAction
	// FLearningAgentsActionObjectElement MakeAngleAction(class ULearningAgentsActionObject* Object, float Angle, float RelativeAngle, float AngleScale, FName tag); // [0xd01e7fc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.LogAction
	// void LogAction(class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element);                   // [0xd01e6dc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetVelocityAction
	// bool GetVelocityAction(FVector& OutVelocity, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FTransform RelativeTransform, float VelocityScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerVelocityLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd01dd68] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetTransformAction
	// bool GetTransformAction(FTransform& OutTransform, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FTransform RelativeTransform, float LocationScale, float RotationScale, float ScaleScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd01d3b8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetStructActionToArrays
	// bool GetStructActionToArrays(TArray<FName>& OutElementNames, TArray<FLearningAgentsActionObjectElement>& OutElements, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xd01c984] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetStructActionNum
	// bool GetStructActionNum(int32_t& OutNum, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xd01c6e8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetStructAction
	// bool GetStructAction(TMap<FName, FLearningAgentsActionObjectElement>& OutElements, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xd01c350] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetStaticArrayActionNum
	// bool GetStaticArrayActionNum(int32_t& OutNum, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xd01c0b4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetStaticArrayAction
	// bool GetStaticArrayAction(TArray<FLearningAgentsActionObjectElement>& OutElements, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xd01b720] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetScaleAction
	// bool GetScaleAction(FVector& OutScale, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FVector RelativeScale, float Scale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd01af34] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetRotationActionAsQuat
	// bool GetRotationActionAsQuat(FQuat& OutRotation, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FQuat RelativeRotation, float RotationScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd01a518] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetRotationAction
	// bool GetRotationAction(FRotator& OutRotation, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FRotator RelativeRotation, float RotationScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd019c88] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetPairAction
	// bool GetPairAction(FLearningAgentsActionObjectElement& OutKey, FLearningAgentsActionObjectElement& OutValue, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xd0198ec] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetOptionalAction
	// bool GetOptionalAction(ELearningAgentsOptionalAction& OutOption, FLearningAgentsActionObjectElement& OutElement, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xd019558] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetNullAction
	// bool GetNullAction(class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag);    // [0xd0193b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetLocationAction
	// bool GetLocationAction(FVector& OutLocation, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FTransform RelativeTransform, float LocationScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd018b20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetInclusiveUnionActionToArrays
	// bool GetInclusiveUnionActionToArrays(TArray<FName>& OutElementNames, TArray<FLearningAgentsActionObjectElement>& OutElements, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xd0180ec] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetInclusiveUnionActionNum
	// bool GetInclusiveUnionActionNum(int32_t& OutNum, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xd017e50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetInclusiveUnionAction
	// bool GetInclusiveUnionAction(TMap<FName, FLearningAgentsActionObjectElement>& OutElements, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xd017ab8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetInclusiveDiscreteActionNum
	// bool GetInclusiveDiscreteActionNum(int32_t& OutNum, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xd01781c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetInclusiveDiscreteAction
	// bool GetInclusiveDiscreteAction(TArray<int32_t>& OutIndices, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd01709c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetFloatAction
	// bool GetFloatAction(float& OutValue, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, float FloatScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd01697c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetExclusiveUnionAction
	// bool GetExclusiveUnionAction(FName& OutElementName, FLearningAgentsActionObjectElement& OutElement, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xd0165e8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetExclusiveDiscreteAction
	// bool GetExclusiveDiscreteAction(int32_t& OutIndex, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd015f00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetEnumAction
	// bool GetEnumAction(char& OutEnumValue, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, class UEnum* Enum, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd0157e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetEncodingAction
	// bool GetEncodingAction(FLearningAgentsActionObjectElement& OutElement, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xd015494] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetEitherAction
	// bool GetEitherAction(ELearningAgentsEitherAction& OutEither, FLearningAgentsActionObjectElement& OutElement, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xd015100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetDirectionAction
	// bool GetDirectionAction(FVector& OutDirection, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FTransform RelativeTransform, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerDirectionLocation, FVector VisualLoggerLocation, float VisualLoggerArrowLength, FLinearColor VisualLoggerColor); // [0xd014730] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetContinuousActionNum
	// bool GetContinuousActionNum(int32_t& OutNum, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xd014494] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetContinuousAction
	// bool GetContinuousAction(TArray<float>& OutValues, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd013cd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetBoolAction
	// bool GetBoolAction(bool& bOutValue, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd013610] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetBitmaskAction
	// bool GetBitmaskAction(int32_t& OutBitmaskValue, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, class UEnum* Enum, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd012eac] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetAngleActionRadians
	// bool GetAngleActionRadians(float& OutAngle, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, float RelativeAngle, float AngleScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerAngleLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd01260c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetAngleAction
	// bool GetAngleAction(float& OutAngle, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, float RelativeAngle, float AngleScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerAngleLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd011d9c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsManagerListener
/// Size: 0x0060 (0x000028 - 0x000088)
class ULearningAgentsManagerListener : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(bool)                                      bIsSetup                                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(class ULearningAgentsManager*)             Manager                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TMap<FName, ULearningAgentsVisualLoggerObject*>) VisualLoggerObjects                                   OFFSET(get<T>, {0x38, 80, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsManagerListener.OnAgentsReset
	// void OnAgentsReset(TArray<int32_t>& AgentIds);                                                                           // [0xd02d184] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsManagerListener.OnAgentsRemoved
	// void OnAgentsRemoved(TArray<int32_t>& AgentIds);                                                                         // [0xd02d0e4] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsManagerListener.OnAgentsManagerTick
	// void OnAgentsManagerTick(TArray<int32_t>& AgentIds, float DeltaTime);                                                    // [0xd02cf40] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsManagerListener.OnAgentsAdded
	// void OnAgentsAdded(TArray<int32_t>& AgentIds);                                                                           // [0xd02cea0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsManagerListener.IsSetup
	// bool IsSetup();                                                                                                          // [0x3f182cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerListener.GetAllAgents
	// void GetAllAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& OutAgentIds, class UClass* AgentClass);                  // [0xd02bafc] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerListener.GetAgents
	// void GetAgents(TArray<int32_t>& AgentIds, class UClass* AgentClass, TArray<UObject*>& OutAgents);                        // [0xd02b70c] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerListener.GetAgentManager
	// class ULearningAgentsManager* GetAgentManager();                                                                         // [0x6884848] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerListener.GetAgent
	// class UObject* GetAgent(int32_t AgentId, class UClass* AgentClass);                                                      // [0xd02b288] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LearningAgents.LearningAgentsController
/// Size: 0x0008 (0x000088 - 0x000090)
class ULearningAgentsController : public ULearningAgentsManagerListener
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class ULearningAgentsInteractor*)          Interactor                                                  OFFSET(get<T>, {0x88, 8, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsController.SetupController
	// void SetupController(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor);            // [0xd02e598] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsController.RunController
	// void RunController();                                                                                                    // [0xd02de74] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsController.MakeController
	// class ULearningAgentsController* MakeController(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, class UClass* Class, FName Name); // [0xd02c37c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsController.GetInteractor
	// class ULearningAgentsInteractor* GetInteractor(class UClass* InteractorClass);                                           // [0xd02bdb8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsController.EvaluateController
	// void EvaluateController();                                                                                               // [0xd02a400] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsController.EvaluateAgentControllers
	// void EvaluateAgentControllers(TArray<FLearningAgentsActionObjectElement>& OutActionObjectElements, class ULearningAgentsActionObject* InActionObject, class ULearningAgentsObservationObject* InObservationObject, TArray<FLearningAgentsObservationObjectElement>& InObservationObjectElements, TArray<int32_t>& AgentIds); // [0xd029ab0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsController.EvaluateAgentController
	// void EvaluateAgentController(FLearningAgentsActionObjectElement& OutActionObjectElement, class ULearningAgentsActionObject* InActionObject, class ULearningAgentsObservationObject* InObservationObject, FLearningAgentsObservationObjectElement& InObservationObjectElement, int32_t AgentId); // [0xd029738] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/LearningAgents.LearningAgentsCritic
/// Size: 0x01F0 (0x000088 - 0x000278)
class ULearningAgentsCritic : public ULearningAgentsManagerListener
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	CMember(class ULearningAgentsInteractor*)          Interactor                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class ULearningAgentsPolicy*)              Policy                                                      OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class ULearningAgentsNeuralNetwork*)       CriticNetwork                                               OFFSET(get<T>, {0x98, 8, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsCritic.SetupCritic
	// void SetupCritic(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, class ULearningAgentsPolicy* InPolicy, class ULearningAgentsNeuralNetwork* CriticNeuralNetworkAsset, bool bReinitializeCriticNetwork, FLearningAgentsCriticSettings& CriticSettings, int32_t Seed); // [0xd02e65c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.MakeCritic
	// class ULearningAgentsCritic* MakeCritic(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, class ULearningAgentsPolicy* InPolicy, class UClass* Class, FName Name, class ULearningAgentsNeuralNetwork* CriticNeuralNetworkAsset, bool bReinitializeCriticNetwork, FLearningAgentsCriticSettings& CriticSettings, int32_t Seed); // [0xd02c62c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.GetEstimatedDiscountedReturn
	// float GetEstimatedDiscountedReturn(int32_t AgentId);                                                                     // [0xd02bd28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsCritic.GetCriticNetworkAsset
	// class ULearningAgentsNeuralNetwork* GetCriticNetworkAsset();                                                             // [0xd02bd04] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsCritic.EvaluateCritic
	// void EvaluateCritic();                                                                                                   // [0xd02a414] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsInteractor
/// Size: 0x02C0 (0x000088 - 0x000348)
class ULearningAgentsInteractor : public ULearningAgentsManagerListener
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(class ULearningAgentsObservationSchema*)   ObservationSchema                                           OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FLearningAgentsObservationSchemaElement)   ObservationSchemaElement                                    OFFSET(getStruct<T>, {0x90, 8, 0, 0})
	CMember(class ULearningAgentsActionSchema*)        ActionSchema                                                OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FLearningAgentsActionSchemaElement)        ActionSchemaElement                                         OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
	CMember(class ULearningAgentsObservationObject*)   ObservationObject                                           OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TArray<FLearningAgentsObservationObjectElement>) ObservationObjectElements                             OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(class ULearningAgentsActionObject*)        ActionObject                                                OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TArray<FLearningAgentsActionObjectElement>) ActionObjectElements                                       OFFSET(get<T>, {0xC8, 16, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsInteractor.SpecifyAgentObservation
	// void SpecifyAgentObservation(FLearningAgentsObservationSchemaElement& OutObservationSchemaElement, class ULearningAgentsObservationSchema* InObservationSchema); // [0xd02eb14] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SpecifyAgentAction
	// void SpecifyAgentAction(FLearningAgentsActionSchemaElement& OutActionSchemaElement, class ULearningAgentsActionSchema* InActionSchema); // [0xd02e98c] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetupInteractor
	// void SetupInteractor(class ULearningAgentsManager* InManager);                                                           // [0xd02e90c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetObservationVector
	// void SetObservationVector(TArray<float>& ObservationVector, int32_t InObservationCompatibilityHash, int32_t AgentId, bool bIncrementIteration); // [0xd02e210] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetActionVector
	// void SetActionVector(TArray<float>& ActionVector, int32_t InActionCompatibilityHash, int32_t AgentId, bool bIncrementIteration); // [0xd02de88] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.PerformAgentActions
	// void PerformAgentActions(class ULearningAgentsActionObject* InActionObject, TArray<FLearningAgentsActionObjectElement>& InActionObjectElements, TArray<int32_t>& AgentIds); // [0xd02d3e8] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.PerformAgentAction
	// void PerformAgentAction(class ULearningAgentsActionObject* InActionObject, FLearningAgentsActionObjectElement& InActionObjectElement, int32_t AgentId); // [0xd02d238] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.PerformActions
	// void PerformActions();                                                                                                   // [0xd02d224] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.MakeInteractor
	// class ULearningAgentsInteractor* MakeInteractor(class ULearningAgentsManager* InManager, class UClass* Class, FName Name); // [0xd02cc24] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.HasObservationVector
	// bool HasObservationVector(int32_t AgentId);                                                                              // [0xd02c2f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.HasActionVector
	// bool HasActionVector(int32_t AgentId);                                                                                   // [0xd02c14c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetObservationVectorSize
	// int32_t GetObservationVectorSize();                                                                                      // [0xd02c128] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetObservationVector
	// void GetObservationVector(TArray<float>& OutObservationVector, int32_t& OutObservationCompatibilityHash, int32_t AgentId); // [0xd02be78] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetObservationEncodedVectorSize
	// int32_t GetObservationEncodedVectorSize();                                                                               // [0xd02be54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetActionVectorSize
	// int32_t GetActionVectorSize();                                                                                           // [0xd02b18c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetActionVector
	// void GetActionVector(TArray<float>& OutActionVector, int32_t& OutActionCompatibilityHash, int32_t AgentId);              // [0xd02aedc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetActionEncodedVectorSize
	// int32_t GetActionEncodedVectorSize();                                                                                    // [0xd02aeb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetActionDistributionVectorSize
	// int32_t GetActionDistributionVectorSize();                                                                               // [0xd02ae94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GatherObservations
	// void GatherObservations();                                                                                               // [0xd02ae80] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GatherAgentObservations
	// void GatherAgentObservations(TArray<FLearningAgentsObservationObjectElement>& OutObservationObjectElements, class ULearningAgentsObservationObject* InObservationObject, TArray<int32_t>& AgentIds); // [0xd02a684] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GatherAgentObservation
	// void GatherAgentObservation(FLearningAgentsObservationObjectElement& OutObservationObjectElement, class ULearningAgentsObservationObject* InObservationObject, int32_t AgentId); // [0xd02a428] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/LearningAgents.LearningAgentsManager
/// Size: 0x0088 (0x0000A0 - 0x000128)
class ULearningAgentsManager : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(int32_t)                                   MaxAgentNum                                                 OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	CMember(TArray<class UObject*>)                    Agents                                                      OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<class ULearningAgentsManagerListener*>) Listeners                                               OFFSET(get<T>, {0xB8, 16, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAllAgents
	// void ResetAllAgents();                                                                                                   // [0xd02de60] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAgents
	// void ResetAgents(TArray<int32_t>& AgentIds);                                                                             // [0xd02ddc4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAgent
	// void ResetAgent(int32_t AgentId);                                                                                        // [0xd02dd44] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveListener
	// void RemoveListener(class ULearningAgentsManagerListener* Listener);                                                     // [0xd02dc84] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAllAgents
	// void RemoveAllAgents();                                                                                                  // [0xd02dc70] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAgents
	// void RemoveAgents(TArray<int32_t>& AgentIds);                                                                            // [0xd02dbd4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAgent
	// void RemoveAgent(int32_t AgentId);                                                                                       // [0xd02db54] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.HasAgentObject
	// bool HasAgentObject(class UObject* Agent);                                                                               // [0xd02c264] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.HasAgent
	// bool HasAgent(int32_t AgentId);                                                                                          // [0xd02c1d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetMaxAgentNum
	// int32_t GetMaxAgentNum();                                                                                                // [0x9a883bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAllAgents
	// void GetAllAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& OutAgentIds, class UClass* AgentClass);                  // [0xd02b8f4] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgents
	// void GetAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& AgentIds, class UClass* AgentClass);                        // [0xd02b504] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentNum
	// int32_t GetAgentNum();                                                                                                   // [0x761a500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentIds
	// void GetAgentIds(TArray<int32_t>& OutAgentIds, TArray<UObject*>& InAgents);                                              // [0xd02b3f0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentId
	// int32_t GetAgentId(class UObject* Agent);                                                                                // [0xd02b360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgent
	// class UObject* GetAgent(int32_t AgentId, class UClass* AgentClass);                                                      // [0xd02b1b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.AddListener
	// void AddListener(class ULearningAgentsManagerListener* Listener);                                                        // [0xd0296b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgents
	// void AddAgents(TArray<int32_t>& OutAgentIds, TArray<UObject*>& InAgents);                                                // [0xd0295a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgent
	// int32_t AddAgent(class UObject* Agent);                                                                                  // [0xd029514] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsVisualLoggerObject
/// Size: 0x0000 (0x000028 - 0x000028)
class ULearningAgentsVisualLoggerObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LearningAgents.LearningAgentsNeuralNetwork
/// Size: 0x0008 (0x000030 - 0x000038)
class ULearningAgentsNeuralNetwork : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class ULearningNeuralNetworkData*)         NeuralNetworkData                                           OFFSET(get<T>, {0x30, 8, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.SaveNetworkToSnapshot
	// void SaveNetworkToSnapshot(FFilePath& File);                                                                             // [0xd0494d8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.SaveNetworkToAsset
	// void SaveNetworkToAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                         // [0xd049458] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.ResetNetwork
	// void ResetNetwork();                                                                                                     // [0xd049420] Final|Native|Public  
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.LoadNetworkFromSnapshot
	// void LoadNetworkFromSnapshot(FFilePath& File);                                                                           // [0xd03aa38] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.LoadNetworkFromAsset
	// void LoadNetworkFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                       // [0xd03a9b8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsObservationSchema
/// Size: 0x00E8 (0x000028 - 0x000110)
class ULearningAgentsObservationSchema : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/LearningAgents.LearningAgentsObservationObject
/// Size: 0x0098 (0x000028 - 0x0000C0)
class ULearningAgentsObservationObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/LearningAgents.LearningAgentsObservations
/// Size: 0x0000 (0x000028 - 0x000028)
class ULearningAgentsObservations : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsObservations.ValidateObservationObjectMatchesSchema
	// bool ValidateObservationObjectMatchesSchema(class ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement SchemaElement, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement ObjectElement); // [0xd04e878] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyVelocityObservation
	// FLearningAgentsObservationSchemaElement SpecifyVelocityObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xd04a4c4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyTransformObservation
	// FLearningAgentsObservationSchemaElement SpecifyTransformObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xd04e708] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyStructObservationFromArrays
	// FLearningAgentsObservationSchemaElement SpecifyStructObservationFromArrays(class ULearningAgentsObservationSchema* Schema, TArray<FName>& ElementNames, TArray<FLearningAgentsObservationSchemaElement>& Elements, FName tag); // [0xd04de6c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyStructObservation
	// FLearningAgentsObservationSchemaElement SpecifyStructObservation(class ULearningAgentsObservationSchema* Schema, TMap<FName, FLearningAgentsObservationSchemaElement>& Elements, FName tag); // [0xd04dc68] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyStaticArrayObservation
	// FLearningAgentsObservationSchemaElement SpecifyStaticArrayObservation(class ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement Element, int32_t Num, FName tag); // [0xd04d9e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifySetObservation
	// FLearningAgentsObservationSchemaElement SpecifySetObservation(class ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement Element, int32_t MaxNum, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName tag); // [0xd04d75c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyScaleObservation
	// FLearningAgentsObservationSchemaElement SpecifyScaleObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xd04a4c4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyRotationObservation
	// FLearningAgentsObservationSchemaElement SpecifyRotationObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xd04d5e4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyProportionAlongSplineObservation
	// FLearningAgentsObservationSchemaElement SpecifyProportionAlongSplineObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xd04d474] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyProportionAlongRayObservation
	// FLearningAgentsObservationSchemaElement SpecifyProportionAlongRayObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xd04a1b4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyPairObservation
	// FLearningAgentsObservationSchemaElement SpecifyPairObservation(class ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement Key, FLearningAgentsObservationSchemaElement Value, FName tag); // [0xd04d298] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyOptionalObservation
	// FLearningAgentsObservationSchemaElement SpecifyOptionalObservation(class ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement Element, int32_t EncodingSize, FName tag); // [0xd04d0c4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyNullObservation
	// FLearningAgentsObservationSchemaElement SpecifyNullObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xd04cf54] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyMapObservation
	// FLearningAgentsObservationSchemaElement SpecifyMapObservation(class ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement KeyElement, FLearningAgentsObservationSchemaElement ValueElement, int32_t MaxNum, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName tag); // [0xd04cc94] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyLocationObservation
	// FLearningAgentsObservationSchemaElement SpecifyLocationObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xd04cb24] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyLocationAlongSplineObservation
	// FLearningAgentsObservationSchemaElement SpecifyLocationAlongSplineObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xd04a4c4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyInclusiveUnionObservationFromArrays
	// FLearningAgentsObservationSchemaElement SpecifyInclusiveUnionObservationFromArrays(class ULearningAgentsObservationSchema* Schema, TArray<FName>& ElementNames, TArray<FLearningAgentsObservationSchemaElement>& Elements, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName tag); // [0xd04bfc8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyInclusiveUnionObservation
	// FLearningAgentsObservationSchemaElement SpecifyInclusiveUnionObservation(class ULearningAgentsObservationSchema* Schema, TMap<FName, FLearningAgentsObservationSchemaElement>& Elements, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName tag); // [0xd04bb34] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyInclusiveDiscreteObservation
	// FLearningAgentsObservationSchemaElement SpecifyInclusiveDiscreteObservation(class ULearningAgentsObservationSchema* Schema, int32_t Size, FName tag); // [0xd04a32c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyFloatObservation
	// FLearningAgentsObservationSchemaElement SpecifyFloatObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xd04b9c4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyExclusiveUnionObservationFromArrays
	// FLearningAgentsObservationSchemaElement SpecifyExclusiveUnionObservationFromArrays(class ULearningAgentsObservationSchema* Schema, TArray<FName>& ElementNames, TArray<FLearningAgentsObservationSchemaElement>& Elements, int32_t EncodingSize, FName tag); // [0xd04b03c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyExclusiveUnionObservation
	// FLearningAgentsObservationSchemaElement SpecifyExclusiveUnionObservation(class ULearningAgentsObservationSchema* Schema, TMap<FName, FLearningAgentsObservationSchemaElement>& Elements, int32_t EncodingSize, FName tag); // [0xd04ad58] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyExclusiveDiscreteObservation
	// FLearningAgentsObservationSchemaElement SpecifyExclusiveDiscreteObservation(class ULearningAgentsObservationSchema* Schema, int32_t Size, FName tag); // [0xd04a32c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyEnumObservation
	// FLearningAgentsObservationSchemaElement SpecifyEnumObservation(class ULearningAgentsObservationSchema* Schema, class UEnum* Enum, FName tag); // [0xd04ab90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyEncodingObservation
	// FLearningAgentsObservationSchemaElement SpecifyEncodingObservation(class ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement Element, int32_t EncodingSize, int32_t HiddenLayerNum, ELearningAgentsActivationFunction ActivationFunction, FName tag); // [0xd04a850] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyEitherObservation
	// FLearningAgentsObservationSchemaElement SpecifyEitherObservation(class ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement A, FLearningAgentsObservationSchemaElement B, int32_t EncodingSize, FName tag); // [0xd04a63c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyDirectionObservation
	// FLearningAgentsObservationSchemaElement SpecifyDirectionObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xd04a4c4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyDirectionAlongSplineObservation
	// FLearningAgentsObservationSchemaElement SpecifyDirectionAlongSplineObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xd04a4c4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyCountObservation
	// FLearningAgentsObservationSchemaElement SpecifyCountObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xd04a1b4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyContinuousObservation
	// FLearningAgentsObservationSchemaElement SpecifyContinuousObservation(class ULearningAgentsObservationSchema* Schema, int32_t Size, FName tag); // [0xd04a32c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyBoolObservation
	// FLearningAgentsObservationSchemaElement SpecifyBoolObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xd04a1b4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyBitmaskObservation
	// FLearningAgentsObservationSchemaElement SpecifyBitmaskObservation(class ULearningAgentsObservationSchema* Schema, class UEnum* Enum, FName tag); // [0xd049fc4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyArrayObservation
	// FLearningAgentsObservationSchemaElement SpecifyArrayObservation(class ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement Element, int32_t MaxNum, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName tag); // [0xd049d40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyAngleObservation
	// FLearningAgentsObservationSchemaElement SpecifyAngleObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xd049bc8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.ProjectTransformOntoGroundPlane
	// FTransform ProjectTransformOntoGroundPlane(FTransform Transform, FVector LocalForwardVector, float GroundPlaneHeight);   // [0xd049238] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeVelocityObservation
	// FLearningAgentsObservationObjectElement MakeVelocityObservation(class ULearningAgentsObservationObject* Object, FVector Velocity, FTransform RelativeTransform, float VelocityScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerVelocityLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd048a6c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeTransformObservation
	// FLearningAgentsObservationObjectElement MakeTransformObservation(class ULearningAgentsObservationObject* Object, FTransform Transform, FTransform RelativeTransform, float LocationScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd0482d4] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeStructObservationFromArrays
	// FLearningAgentsObservationObjectElement MakeStructObservationFromArrays(class ULearningAgentsObservationObject* Object, TArray<FName>& ElementNames, TArray<FLearningAgentsObservationObjectElement>& Elements, FName tag); // [0xd047a38] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeStructObservation
	// FLearningAgentsObservationObjectElement MakeStructObservation(class ULearningAgentsObservationObject* Object, TMap<FName, FLearningAgentsObservationObjectElement>& Elements, FName tag); // [0xd047834] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeStaticArrayObservation
	// FLearningAgentsObservationObjectElement MakeStaticArrayObservation(class ULearningAgentsObservationObject* Object, TArray<FLearningAgentsObservationObjectElement>& Elements, FName tag); // [0xd047020] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeSetObservationFromArray
	// FLearningAgentsObservationObjectElement MakeSetObservationFromArray(class ULearningAgentsObservationObject* Object, TArray<FLearningAgentsObservationObjectElement>& Elements, FName tag); // [0xd04680c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeSetObservation
	// FLearningAgentsObservationObjectElement MakeSetObservation(class ULearningAgentsObservationObject* Object, TSet<FLearningAgentsObservationObjectElement>& Elements, FName tag); // [0xd0465d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeScaleObservation
	// FLearningAgentsObservationObjectElement MakeScaleObservation(class ULearningAgentsObservationObject* Object, FVector Scale, FVector RelativeScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerScaleLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd045ee8] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeRotationObservationFromQuat
	// FLearningAgentsObservationObjectElement MakeRotationObservationFromQuat(class ULearningAgentsObservationObject* Object, FQuat Rotation, FQuat RelativeRotation, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd045804] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeRotationObservation
	// FLearningAgentsObservationObjectElement MakeRotationObservation(class ULearningAgentsObservationObject* Object, FRotator Rotation, FRotator RelativeRotation, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd04511c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeProportionAlongSplineObservation
	// FLearningAgentsObservationObjectElement MakeProportionAlongSplineObservation(class ULearningAgentsObservationObject* Object, class USplineComponent* SplineComponent, float DistanceAlongSpline, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd044934] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeProportionAlongRayObservation
	// FLearningAgentsObservationObjectElement MakeProportionAlongRayObservation(class ULearningAgentsObservationObject* Object, FVector RayStart, FVector RayEnd, FTransform RayTransform, TEnumAsByte<ECollisionChannel> CollisionChannel, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd0441dc] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakePairObservation
	// FLearningAgentsObservationObjectElement MakePairObservation(class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Key, FLearningAgentsObservationObjectElement Value, FName tag); // [0xd044000] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeOptionalValidObservation
	// FLearningAgentsObservationObjectElement MakeOptionalValidObservation(class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd043e60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeOptionalObservation
	// FLearningAgentsObservationObjectElement MakeOptionalObservation(class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, ELearningAgentsOptionalObservation Option, FName tag); // [0xd043c88] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeOptionalNullObservation
	// FLearningAgentsObservationObjectElement MakeOptionalNullObservation(class ULearningAgentsObservationObject* Object, FName tag); // [0xd043b18] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeNullObservation
	// FLearningAgentsObservationObjectElement MakeNullObservation(class ULearningAgentsObservationObject* Object, FName tag);  // [0xd0439a8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeMapObservationFromArrays
	// FLearningAgentsObservationObjectElement MakeMapObservationFromArrays(class ULearningAgentsObservationObject* Object, TArray<FLearningAgentsObservationObjectElement>& Keys, TArray<FLearningAgentsObservationObjectElement>& Values, FName tag); // [0xd043148] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeMapObservation
	// FLearningAgentsObservationObjectElement MakeMapObservation(class ULearningAgentsObservationObject* Object, TMap<FLearningAgentsObservationObjectElement, FLearningAgentsObservationObjectElement>& Map, FName tag); // [0xd042f44] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeLocationObservation
	// FLearningAgentsObservationObjectElement MakeLocationObservation(class ULearningAgentsObservationObject* Object, FVector Location, FTransform RelativeTransform, float LocationScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd04284c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeLocationAlongSplineObservation
	// FLearningAgentsObservationObjectElement MakeLocationAlongSplineObservation(class ULearningAgentsObservationObject* Object, class USplineComponent* SplineComponent, float DistanceAlongSpline, FTransform RelativeTransform, float LocationScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd041fd0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeInclusiveUnionObservationFromArrays
	// FLearningAgentsObservationObjectElement MakeInclusiveUnionObservationFromArrays(class ULearningAgentsObservationObject* Object, TArray<FName>& ElementNames, TArray<FLearningAgentsObservationObjectElement>& Elements, FName tag); // [0xd041734] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeInclusiveUnionObservation
	// FLearningAgentsObservationObjectElement MakeInclusiveUnionObservation(class ULearningAgentsObservationObject* Object, TMap<FName, FLearningAgentsObservationObjectElement>& Elements, FName tag); // [0xd041530] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeInclusiveDiscreteObservation
	// FLearningAgentsObservationObjectElement MakeInclusiveDiscreteObservation(class ULearningAgentsObservationObject* Object, TArray<int32_t>& DiscreteIndices, int32_t Size, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd040e40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeFloatObservation
	// FLearningAgentsObservationObjectElement MakeFloatObservation(class ULearningAgentsObservationObject* Object, float Value, float FloatScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd040854] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeExclusiveUnionObservation
	// FLearningAgentsObservationObjectElement MakeExclusiveUnionObservation(class ULearningAgentsObservationObject* Object, FName ElementName, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd04053c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeExclusiveDiscreteObservation
	// FLearningAgentsObservationObjectElement MakeExclusiveDiscreteObservation(class ULearningAgentsObservationObject* Object, int32_t DiscreteIndex, int32_t Size, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd03ff54] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeEnumObservation
	// FLearningAgentsObservationObjectElement MakeEnumObservation(class ULearningAgentsObservationObject* Object, class UEnum* Enum, char EnumValue, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd03f968] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeEncodingObservation
	// FLearningAgentsObservationObjectElement MakeEncodingObservation(class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd03f778] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeEitherObservation
	// FLearningAgentsObservationObjectElement MakeEitherObservation(class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, ELearningAgentsEitherObservation Either, FName tag); // [0xd03f5a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeEitherBObservation
	// FLearningAgentsObservationObjectElement MakeEitherBObservation(class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement B, FName tag); // [0xd03f400] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeEitherAObservation
	// FLearningAgentsObservationObjectElement MakeEitherAObservation(class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement A, FName tag); // [0xd03f260] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeDirectionObservation
	// FLearningAgentsObservationObjectElement MakeDirectionObservation(class ULearningAgentsObservationObject* Object, FVector Direction, FTransform RelativeTransform, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerDirectionLocation, FVector VisualLoggerLocation, float VisualLoggerArrowLength, FLinearColor VisualLoggerColor); // [0xd03e9fc] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeDirectionAlongSplineObservation
	// FLearningAgentsObservationObjectElement MakeDirectionAlongSplineObservation(class ULearningAgentsObservationObject* Object, class USplineComponent* SplineComponent, float DistanceAlongSpline, FTransform RelativeTransform, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, float VisualLoggerArrowLength, FLinearColor VisualLoggerColor); // [0xd03e100] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeCountObservation
	// FLearningAgentsObservationObjectElement MakeCountObservation(class ULearningAgentsObservationObject* Object, int32_t Num, int32_t MaxNum, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd03dab0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeContinuousObservation
	// FLearningAgentsObservationObjectElement MakeContinuousObservation(class ULearningAgentsObservationObject* Object, TArray<float>& Values, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd03d45c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeBoolObservation
	// FLearningAgentsObservationObjectElement MakeBoolObservation(class ULearningAgentsObservationObject* Object, bool bValue, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd03ce44] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeBitmaskObservation
	// FLearningAgentsObservationObjectElement MakeBitmaskObservation(class ULearningAgentsObservationObject* Object, class UEnum* Enum, int32_t BitmaskValue, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd03c71c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeArrayObservation
	// FLearningAgentsObservationObjectElement MakeArrayObservation(class ULearningAgentsObservationObject* Object, TArray<FLearningAgentsObservationObjectElement>& Elements, int32_t MaxNum, FName tag); // [0xd03be20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeAngleObservationRadians
	// FLearningAgentsObservationObjectElement MakeAngleObservationRadians(class ULearningAgentsObservationObject* Object, float Angle, float RelativeAngle, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd03b830] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeAngleObservation
	// FLearningAgentsObservationObjectElement MakeAngleObservation(class ULearningAgentsObservationObject* Object, float Angle, float RelativeAngle, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xd03b248] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.LogObservation
	// void LogObservation(class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element);    // [0xd03b128] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetVelocityObservation
	// bool GetVelocityObservation(FVector& OutVelocity, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, float VelocityScale, FName tag); // [0xd03a564] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetTransformObservation
	// bool GetTransformObservation(FTransform& OutTransform, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, float LocationScale, FName tag); // [0xd03a104] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetStructObservationToArrays
	// bool GetStructObservationToArrays(TArray<FName>& OutElementNames, TArray<FLearningAgentsObservationObjectElement>& OutElements, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd0396d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetStructObservationNum
	// bool GetStructObservationNum(int32_t& OutNum, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd039434] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetStructObservation
	// bool GetStructObservation(TMap<FName, FLearningAgentsObservationObjectElement>& OutElements, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd03909c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetStaticArrayObservationNum
	// bool GetStaticArrayObservationNum(int32_t& OutNum, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd038e00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetStaticArrayObservation
	// bool GetStaticArrayObservation(TArray<FLearningAgentsObservationObjectElement>& OutElements, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd03846c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetSetObservationToArray
	// bool GetSetObservationToArray(TArray<FLearningAgentsObservationObjectElement>& OutElements, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd037ad8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetSetObservationNum
	// bool GetSetObservationNum(int32_t& OutNum, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd0305e4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetSetObservation
	// bool GetSetObservation(TSet<FLearningAgentsObservationObjectElement>& OutElements, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd03770c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetScaleObservation
	// bool GetScaleObservation(FVector& OutScale, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FVector RelativeScale, FName tag); // [0xd0373e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetRotationObservationAsQuat
	// bool GetRotationObservationAsQuat(FQuat& OutRotation, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FQuat RelativeRotation, FName tag); // [0xd036fb8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetRotationObservation
	// bool GetRotationObservation(FRotator& OutRotation, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FRotator RelativeRotation, FName tag); // [0xd036cb8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetProportionAlongSplineObservation
	// bool GetProportionAlongSplineObservation(bool& bOutIsClosedLoop, float& OutAngle, float& OutPropotion, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd0369b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetProportionAlongRayObservation
	// bool GetProportionAlongRayObservation(float& OutProportion, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd036740] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetPairObservation
	// bool GetPairObservation(FLearningAgentsObservationObjectElement& OutKey, FLearningAgentsObservationObjectElement& OutValue, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd0363a4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetOptionalObservation
	// bool GetOptionalObservation(ELearningAgentsOptionalObservation& OutOption, FLearningAgentsObservationObjectElement& OutElement, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd036010] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetNullObservation
	// bool GetNullObservation(class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd035e70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetMapObservationToArrays
	// bool GetMapObservationToArrays(TArray<FLearningAgentsObservationObjectElement>& OutKeys, TArray<FLearningAgentsObservationObjectElement>& OutValues, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd035474] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetMapObservationNum
	// bool GetMapObservationNum(int32_t& OutNum, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd0305e4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetMapObservation
	// bool GetMapObservation(TMap<FLearningAgentsObservationObjectElement, FLearningAgentsObservationObjectElement>& OutElements, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd0350dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetLocationObservation
	// bool GetLocationObservation(FVector& OutLocation, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, float LocationScale, FName tag); // [0xd034c88] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetLocationAlongSplineObservation
	// bool GetLocationAlongSplineObservation(FVector& OutLocation, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, float LocationScale, FName tag); // [0xd034834] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetInclusiveUnionObservationToArrays
	// bool GetInclusiveUnionObservationToArrays(TArray<FName>& OutElementNames, TArray<FLearningAgentsObservationObjectElement>& OutElements, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd033e00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetInclusiveUnionObservationNum
	// bool GetInclusiveUnionObservationNum(int32_t& OutNum, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd033b64] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetInclusiveUnionObservation
	// bool GetInclusiveUnionObservation(TMap<FName, FLearningAgentsObservationObjectElement>& OutElements, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd0337cc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetInclusiveDiscreteObservationNum
	// bool GetInclusiveDiscreteObservationNum(int32_t& OutNum, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd033530] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetInclusiveDiscreteObservation
	// bool GetInclusiveDiscreteObservation(TArray<int32_t>& OutIndices, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd0331d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetFloatObservation
	// bool GetFloatObservation(float& OutValue, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, float FloatScale, FName tag); // [0xd032ee8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetExclusiveUnionObservation
	// bool GetExclusiveUnionObservation(FName& OutElementName, FLearningAgentsObservationObjectElement& OutElement, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd032b54] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetExclusiveDiscreteObservation
	// bool GetExclusiveDiscreteObservation(int32_t& OutIndex, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd0328b8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetEnumObservation
	// bool GetEnumObservation(char& OutEnumValue, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, class UEnum* Enum, FName tag); // [0xd0325c8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetEncodingObservation
	// bool GetEncodingObservation(FLearningAgentsObservationObjectElement& OutElement, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd03227c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetEitherObservation
	// bool GetEitherObservation(ELearningAgentsEitherObservation& OutEither, FLearningAgentsObservationObjectElement& OutElement, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd031ee8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetDirectionObservation
	// bool GetDirectionObservation(FVector& OutDirection, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, FName tag); // [0xd031b14] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetDirectionAlongSplineObservation
	// bool GetDirectionAlongSplineObservation(FVector& OutDirection, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, FName tag); // [0xd031740] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetCountObservation
	// bool GetCountObservation(int32_t& OutNum, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, int32_t MaxNum, FName tag); // [0xd031428] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetContinuousObservationNum
	// bool GetContinuousObservationNum(int32_t& OutNum, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd03118c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetContinuousObservation
	// bool GetContinuousObservation(TArray<float>& OutValues, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd030e08] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetBoolObservation
	// bool GetBoolObservation(bool& bOutValue, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd030b98] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetBitmaskObservation
	// bool GetBitmaskObservation(int32_t& OutBitmaskValue, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, class UEnum* Enum, FName tag); // [0xd030880] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetArrayObservationNum
	// bool GetArrayObservationNum(int32_t& OutNum, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xd0305e4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetArrayObservation
	// bool GetArrayObservation(TArray<FLearningAgentsObservationObjectElement>& OutElements, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, int32_t MaxNum, FName tag); // [0xd02fb70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetAngleObservationRadians
	// bool GetAngleObservationRadians(float& OutAngle, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, float RelativeAngle, FName tag); // [0xd02f880] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetAngleObservation
	// bool GetAngleObservation(float& OutAngle, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, float RelativeAngle, FName tag); // [0xd02f590] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.FindEnumByName
	// class UEnum* FindEnumByName(FString Name);                                                                               // [0xd02eebc] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsPolicy
/// Size: 0x0410 (0x000088 - 0x000498)
class ULearningAgentsPolicy : public ULearningAgentsManagerListener
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1176;

public:
	CMember(class ULearningAgentsInteractor*)          Interactor                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class ULearningAgentsNeuralNetwork*)       EncoderNetwork                                              OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class ULearningAgentsNeuralNetwork*)       PolicyNetwork                                               OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(class ULearningAgentsNeuralNetwork*)       DecoderNetwork                                              OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsPolicy.SetupPolicy
	// void SetupPolicy(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, class ULearningAgentsNeuralNetwork* EncoderNeuralNetworkAsset, class ULearningAgentsNeuralNetwork* PolicyNeuralNetworkAsset, class ULearningAgentsNeuralNetwork* DecoderNeuralNetworkAsset, bool bReinitializeEncoderNetwork, bool bReinitializePolicyNetwork, bool bReinitializeDecoderNetwork, FLearningAgentsPolicySettings& PolicySettings, int32_t Seed); // [0xd099e6c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SetMemoryState
	// void SetMemoryState(int32_t AgentId, TArray<float>& InMemoryState);                                                      // [0xd099d4c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.RunInference
	// void RunInference(float ActionNoiseScale);                                                                               // [0xd099ccc] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.MakePolicy
	// class ULearningAgentsPolicy* MakePolicy(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, class UClass* Class, FName Name, class ULearningAgentsNeuralNetwork* EncoderNeuralNetworkAsset, class ULearningAgentsNeuralNetwork* PolicyNeuralNetworkAsset, class ULearningAgentsNeuralNetwork* DecoderNeuralNetworkAsset, bool bReinitializeEncoderNetwork, bool bReinitializePolicyNetwork, bool bReinitializeDecoderNetwork, FLearningAgentsPolicySettings& PolicySettings, int32_t Seed); // [0xd099388] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetPolicyNetworkAsset
	// class ULearningAgentsNeuralNetwork* GetPolicyNetworkAsset();                                                             // [0xd099364] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetMemoryStateSize
	// int32_t GetMemoryStateSize();                                                                                            // [0xd099340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetMemoryState
	// void GetMemoryState(TArray<float>& OutMemoryState, int32_t AgentId);                                                     // [0xd099174] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetEncoderNetworkAsset
	// class ULearningAgentsNeuralNetwork* GetEncoderNetworkAsset();                                                            // [0xd099150] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetDecoderNetworkAsset
	// class ULearningAgentsNeuralNetwork* GetDecoderNetworkAsset();                                                            // [0xd09912c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsPolicy.EvaluatePolicy
	// void EvaluatePolicy();                                                                                                   // [0xd099118] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.EncodeObservations
	// void EncodeObservations();                                                                                               // [0xd099104] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.DecodeAndSampleActions
	// void DecodeAndSampleActions(float ActionNoiseScale);                                                                     // [0xd099084] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LearningAgents.LearningAgentsActionSchemaElement
/// Size: 0x0008 (0x000000 - 0x000008)
class FLearningAgentsActionSchemaElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/LearningAgents.LearningAgentsActionObjectElement
/// Size: 0x0008 (0x000000 - 0x000008)
class FLearningAgentsActionObjectElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/LearningAgents.LearningAgentsCriticSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FLearningAgentsCriticSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   HiddenLayerNum                                              OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   HiddenLayerSize                                             OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(ELearningAgentsActivationFunction)         ActivationFunction                                          OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/LearningAgents.LearningAgentsObservationSchemaElement
/// Size: 0x0008 (0x000000 - 0x000008)
class FLearningAgentsObservationSchemaElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/LearningAgents.LearningAgentsObservationObjectElement
/// Size: 0x0008 (0x000000 - 0x000008)
class FLearningAgentsObservationObjectElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/LearningAgents.LearningAgentsPolicySettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FLearningAgentsPolicySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   HiddenLayerNum                                              OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   HiddenLayerSize                                             OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bUseMemory                                                  OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   MemoryStateSize                                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     InitialEncodedActionScale                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(ELearningAgentsActivationFunction)         ActivationFunction                                          OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Enum /Script/LearningAgents.ELearningAgentsEitherAction
/// Size: 0x02
enum class ELearningAgentsEitherAction : uint8_t
{
	ELearningAgentsEitherAction__A                                                   = 0,
	ELearningAgentsEitherAction__B                                                   = 1
};

/// Enum /Script/LearningAgents.ELearningAgentsOptionalAction
/// Size: 0x02
enum class ELearningAgentsOptionalAction : uint8_t
{
	ELearningAgentsOptionalAction__Null                                              = 0,
	ELearningAgentsOptionalAction__Valid                                             = 1
};

/// Enum /Script/LearningAgents.ELearningAgentsActivationFunction
/// Size: 0x03
enum class ELearningAgentsActivationFunction : uint8_t
{
	ELearningAgentsActivationFunction__ReLU                                          = 0,
	ELearningAgentsActivationFunction__ELU                                           = 1,
	ELearningAgentsActivationFunction__TanH                                          = 2
};

/// Enum /Script/LearningAgents.ELearningAgentsEitherObservation
/// Size: 0x02
enum class ELearningAgentsEitherObservation : uint8_t
{
	ELearningAgentsEitherObservation__A                                              = 0,
	ELearningAgentsEitherObservation__B                                              = 1
};

/// Enum /Script/LearningAgents.ELearningAgentsOptionalObservation
/// Size: 0x02
enum class ELearningAgentsOptionalObservation : uint8_t
{
	ELearningAgentsOptionalObservation__Null                                         = 0,
	ELearningAgentsOptionalObservation__Valid                                        = 1
};

