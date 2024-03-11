
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Learning

/// Enum /Script/LearningAgents.ELearningAgentsEitherAction
/// Size: 0x03
enum class ELearningAgentsEitherAction : uint8_t
{
	ELearningAgentsEitherAction__A                                                   = 0,
	ELearningAgentsEitherAction__B                                                   = 1,
	ELearningAgentsEitherAction__ELearningAgentsEitherAction_MAX                     = 2
};

/// Enum /Script/LearningAgents.ELearningAgentsOptionalAction
/// Size: 0x03
enum class ELearningAgentsOptionalAction : uint8_t
{
	ELearningAgentsOptionalAction__Null                                              = 0,
	ELearningAgentsOptionalAction__Valid                                             = 1,
	ELearningAgentsOptionalAction__ELearningAgentsOptionalAction_MAX                 = 2
};

/// Enum /Script/LearningAgents.ELearningAgentsActivationFunction
/// Size: 0x04
enum class ELearningAgentsActivationFunction : uint8_t
{
	ELearningAgentsActivationFunction__ReLU                                          = 0,
	ELearningAgentsActivationFunction__ELU                                           = 1,
	ELearningAgentsActivationFunction__TanH                                          = 2,
	ELearningAgentsActivationFunction__ELearningAgentsActivationFunction_MAX         = 3
};

/// Enum /Script/LearningAgents.ELearningAgentsEitherObservation
/// Size: 0x03
enum class ELearningAgentsEitherObservation : uint8_t
{
	ELearningAgentsEitherObservation__A                                              = 0,
	ELearningAgentsEitherObservation__B                                              = 1,
	ELearningAgentsEitherObservation__ELearningAgentsEitherObservation_MAX           = 2
};

/// Enum /Script/LearningAgents.ELearningAgentsOptionalObservation
/// Size: 0x03
enum class ELearningAgentsOptionalObservation : uint8_t
{
	ELearningAgentsOptionalObservation__Null                                         = 0,
	ELearningAgentsOptionalObservation__Valid                                        = 1,
	ELearningAgentsOptionalObservation__ELearningAgentsOptionalObservation_MAX       = 2
};

/// Class /Script/LearningAgents.LearningAgentsActionSchema
/// Size: 0x0118 (0x000028 - 0x000140)
class ULearningAgentsActionSchema : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x140];                                     // 0x0000   (0x0140)  MISSED
};

/// Class /Script/LearningAgents.LearningAgentsActionObject
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class ULearningAgentsActionObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xF0];                                      // 0x0000   (0x00F0)  MISSED
};

/// Class /Script/LearningAgents.LearningAgentsActions
/// Size: 0x0000 (0x000028 - 0x000028)
class ULearningAgentsActions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsActions.ValidateActionObjectMatchesSchema
	// bool ValidateActionObjectMatchesSchema(class ULearningAgentsActionSchema* Schema, FLearningAgentsActionSchemaElement SchemaElement, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement ObjectElement); // [0xb749a58] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyVelocityAction
	// FLearningAgentsActionSchemaElement SpecifyVelocityAction(class ULearningAgentsActionSchema* Schema, FName tag);       // [0xb7468d4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyTransformAction
	// FLearningAgentsActionSchemaElement SpecifyTransformAction(class ULearningAgentsActionSchema* Schema, FName tag);      // [0xb749994] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyStructActionFromArrays
	// FLearningAgentsActionSchemaElement SpecifyStructActionFromArrays(class ULearningAgentsActionSchema* Schema, TArray<FName>& ElementNames, TArray<FLearningAgentsActionSchemaElement>& Elements, FName tag); // [0xb749684] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyStructAction
	// FLearningAgentsActionSchemaElement SpecifyStructAction(class ULearningAgentsActionSchema* Schema, TMap<FName, FLearningAgentsActionSchemaElement>& Elements, FName tag); // [0xb74947c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyStaticArrayAction
	// FLearningAgentsActionSchemaElement SpecifyStaticArrayAction(class ULearningAgentsActionSchema* Schema, FLearningAgentsActionSchemaElement Element, int32_t Num, FName tag); // [0xb7490ac] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyScaleAction
	// FLearningAgentsActionSchemaElement SpecifyScaleAction(class ULearningAgentsActionSchema* Schema, FName tag);          // [0xb7468d4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyRotationAction
	// FLearningAgentsActionSchemaElement SpecifyRotationAction(class ULearningAgentsActionSchema* Schema, FName tag);       // [0xb7468d4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyPairAction
	// FLearningAgentsActionSchemaElement SpecifyPairAction(class ULearningAgentsActionSchema* Schema, FLearningAgentsActionSchemaElement Key, FLearningAgentsActionSchemaElement Value, FName tag); // [0xb748d6c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyOptionalAction
	// FLearningAgentsActionSchemaElement SpecifyOptionalAction(class ULearningAgentsActionSchema* Schema, FLearningAgentsActionSchemaElement Element, float PriorProbability, FName tag); // [0xb748a48] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyNullAction
	// FLearningAgentsActionSchemaElement SpecifyNullAction(class ULearningAgentsActionSchema* Schema, FName tag);           // [0xb748984] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyLocationAction
	// FLearningAgentsActionSchemaElement SpecifyLocationAction(class ULearningAgentsActionSchema* Schema, FName tag);       // [0xb7468d4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyInclusiveUnionActionFromArrays
	// FLearningAgentsActionSchemaElement SpecifyInclusiveUnionActionFromArrays(class ULearningAgentsActionSchema* Schema, TArray<FName> ElementNames, TArray<FLearningAgentsActionSchemaElement>& Elements, TArray<float>& PriorProbabilities, FName tag); // [0xb7485b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyInclusiveUnionAction
	// FLearningAgentsActionSchemaElement SpecifyInclusiveUnionAction(class ULearningAgentsActionSchema* Schema, TMap<FName, FLearningAgentsActionSchemaElement>& Elements, TMap<FName, float>& PriorProbabilities, FName tag); // [0xb748310] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyInclusiveDiscreteAction
	// FLearningAgentsActionSchemaElement SpecifyInclusiveDiscreteAction(class ULearningAgentsActionSchema* Schema, int32_t Size, TArray<float>& PriorProbabilities, FName tag); // [0xb7480c4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyFloatAction
	// FLearningAgentsActionSchemaElement SpecifyFloatAction(class ULearningAgentsActionSchema* Schema, FName tag);          // [0xb745fb8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyExclusiveUnionActionFromArrays
	// FLearningAgentsActionSchemaElement SpecifyExclusiveUnionActionFromArrays(class ULearningAgentsActionSchema* Schema, TArray<FName>& ElementNames, TArray<FLearningAgentsActionSchemaElement>& Elements, TArray<float>& PriorProbabilities, FName tag); // [0xb747d18] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyExclusiveUnionAction
	// FLearningAgentsActionSchemaElement SpecifyExclusiveUnionAction(class ULearningAgentsActionSchema* Schema, TMap<FName, FLearningAgentsActionSchemaElement>& Elements, TMap<FName, float>& PriorProbabilities, FName tag); // [0xb747a78] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyExclusiveDiscreteAction
	// FLearningAgentsActionSchemaElement SpecifyExclusiveDiscreteAction(class ULearningAgentsActionSchema* Schema, int32_t Size, TArray<float>& PriorProbabilities, FName tag); // [0xb74782c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyEnumActionFromArray
	// FLearningAgentsActionSchemaElement SpecifyEnumActionFromArray(class ULearningAgentsActionSchema* Schema, class UEnum* Enum, TArray<float>& PriorProbabilities, FName tag); // [0xb7475e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyEnumAction
	// FLearningAgentsActionSchemaElement SpecifyEnumAction(class ULearningAgentsActionSchema* Schema, class UEnum* Enum, TMap<char, float>& PriorProbabilities, FName tag); // [0xb7473a4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyEncodingAction
	// FLearningAgentsActionSchemaElement SpecifyEncodingAction(class ULearningAgentsActionSchema* Schema, FLearningAgentsActionSchemaElement Element, int32_t EncodingSize, int32_t HiddenLayerNum, ELearningAgentsActivationFunction ActivationFunction, FName tag); // [0xb746db4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyEitherAction
	// FLearningAgentsActionSchemaElement SpecifyEitherAction(class ULearningAgentsActionSchema* Schema, FLearningAgentsActionSchemaElement A, FLearningAgentsActionSchemaElement B, float PriorProbabilityOfA, FName tag); // [0xb74699c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyDirectionAction
	// FLearningAgentsActionSchemaElement SpecifyDirectionAction(class ULearningAgentsActionSchema* Schema, FName tag);      // [0xb7468d4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyContinuousAction
	// FLearningAgentsActionSchemaElement SpecifyContinuousAction(class ULearningAgentsActionSchema* Schema, int32_t Size, FName tag); // [0xb7467dc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyBoolAction
	// FLearningAgentsActionSchemaElement SpecifyBoolAction(class ULearningAgentsActionSchema* Schema, float PriorProbability, FName tag); // [0xb7466e4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyBitmaskActionFromArray
	// FLearningAgentsActionSchemaElement SpecifyBitmaskActionFromArray(class ULearningAgentsActionSchema* Schema, class UEnum* Enum, TArray<float>& PriorProbabilities, FName tag); // [0xb746498] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyBitmaskAction
	// FLearningAgentsActionSchemaElement SpecifyBitmaskAction(class ULearningAgentsActionSchema* Schema, class UEnum* Enum, TMap<char, float>& PriorProbabilities, FName tag); // [0xb746080] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.SpecifyAngleAction
	// FLearningAgentsActionSchemaElement SpecifyAngleAction(class ULearningAgentsActionSchema* Schema, FName tag);          // [0xb745fb8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeVelocityAction
	// FLearningAgentsActionObjectElement MakeVelocityAction(class ULearningAgentsActionObject* Object, FVector Velocity, FTransform RelativeTransform, float VelocityScale, FName tag); // [0xb745b0c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeTransformAction
	// FLearningAgentsActionObjectElement MakeTransformAction(class ULearningAgentsActionObject* Object, FTransform Transform, FTransform RelativeTransform, float LocationScale, FName tag); // [0xb7455dc] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeStructActionFromArrays
	// FLearningAgentsActionObjectElement MakeStructActionFromArrays(class ULearningAgentsActionObject* Object, TArray<FName>& ElementNames, TArray<FLearningAgentsActionObjectElement>& Elements, FName tag); // [0xb7452cc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeStructAction
	// FLearningAgentsActionObjectElement MakeStructAction(class ULearningAgentsActionObject* Object, TMap<FName, FLearningAgentsActionObjectElement>& Elements, FName tag); // [0xb7450c4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeStaticArrayAction
	// FLearningAgentsActionObjectElement MakeStaticArrayAction(class ULearningAgentsActionObject* Object, TArray<FLearningAgentsActionObjectElement>& Elements, FName tag); // [0xb744e0c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeScaleAction
	// FLearningAgentsActionObjectElement MakeScaleAction(class ULearningAgentsActionObject* Object, FVector Scale, FVector RelativeScale, FName tag); // [0xb744ac4] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeRotationActionFromQuat
	// FLearningAgentsActionObjectElement MakeRotationActionFromQuat(class ULearningAgentsActionObject* Object, FQuat Rotation, FQuat RelativeRotation, float RotationScale, FName tag); // [0xb7446b8] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeRotationAction
	// FLearningAgentsActionObjectElement MakeRotationAction(class ULearningAgentsActionObject* Object, FRotator Rotation, FRotator RelativeRotation, float RotationScale, FName tag); // [0xb7442a8] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakePairAction
	// FLearningAgentsActionObjectElement MakePairAction(class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Key, FLearningAgentsActionObjectElement Value, FName tag); // [0xb743f68] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeOptionalValidAction
	// FLearningAgentsActionObjectElement MakeOptionalValidAction(class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xb743d28] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeOptionalNullAction
	// FLearningAgentsActionObjectElement MakeOptionalNullAction(class ULearningAgentsActionObject* Object, FName tag);      // [0xb743c24] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeOptionalAction
	// FLearningAgentsActionObjectElement MakeOptionalAction(class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, ELearningAgentsOptionalAction Option, FName tag); // [0xb743900] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeNullAction
	// FLearningAgentsActionObjectElement MakeNullAction(class ULearningAgentsActionObject* Object, FName tag);              // [0xb74383c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeLocationAction
	// FLearningAgentsActionObjectElement MakeLocationAction(class ULearningAgentsActionObject* Object, FVector Location, FTransform RelativeTransform, float LocationScale, FName tag); // [0xb743390] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeInclusiveUnionActionFromArrays
	// FLearningAgentsActionObjectElement MakeInclusiveUnionActionFromArrays(class ULearningAgentsActionObject* Object, TArray<FName>& ElementNames, TArray<FLearningAgentsActionObjectElement>& Elements, FName tag); // [0xb743080] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeInclusiveUnionAction
	// FLearningAgentsActionObjectElement MakeInclusiveUnionAction(class ULearningAgentsActionObject* Object, TMap<FName, FLearningAgentsActionObjectElement>& Elements, FName tag); // [0xb742e78] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeInclusiveDiscreteAction
	// FLearningAgentsActionObjectElement MakeInclusiveDiscreteAction(class ULearningAgentsActionObject* Object, TArray<int32_t>& Indices, FName tag); // [0xb742c90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeFloatAction
	// FLearningAgentsActionObjectElement MakeFloatAction(class ULearningAgentsActionObject* Object, float Value, float FloatScale, FName tag); // [0xb742b58] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeExclusiveUnionAction
	// FLearningAgentsActionObjectElement MakeExclusiveUnionAction(class ULearningAgentsActionObject* Object, FName ElementName, FLearningAgentsActionObjectElement Element, FName tag); // [0xb7428e4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeExclusiveDiscreteAction
	// FLearningAgentsActionObjectElement MakeExclusiveDiscreteAction(class ULearningAgentsActionObject* Object, int32_t Index, FName tag); // [0xb7427ec] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeEnumAction
	// FLearningAgentsActionObjectElement MakeEnumAction(class ULearningAgentsActionObject* Object, class UEnum* Enum, char EnumValue, FName tag); // [0xb7422f8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeEncodingAction
	// FLearningAgentsActionObjectElement MakeEncodingAction(class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xb74205c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeEitherBAction
	// FLearningAgentsActionObjectElement MakeEitherBAction(class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement B, FName tag); // [0xb741e1c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeEitherAction
	// FLearningAgentsActionObjectElement MakeEitherAction(class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, ELearningAgentsEitherAction Either, FName tag); // [0xb741af8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeEitherAAction
	// FLearningAgentsActionObjectElement MakeEitherAAction(class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement A, FName tag); // [0xb7418b8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeDirectionAction
	// FLearningAgentsActionObjectElement MakeDirectionAction(class ULearningAgentsActionObject* Object, FVector Direction, FTransform RelativeTransform, FName tag); // [0xb7414dc] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeContinuousAction
	// FLearningAgentsActionObjectElement MakeContinuousAction(class ULearningAgentsActionObject* Object, TArray<float>& Values, FName tag); // [0xb7412b8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeBoolAction
	// FLearningAgentsActionObjectElement MakeBoolAction(class ULearningAgentsActionObject* Object, bool bValue, FName tag); // [0xb7411bc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeBitmaskAction
	// FLearningAgentsActionObjectElement MakeBitmaskAction(class ULearningAgentsActionObject* Object, class UEnum* Enum, int32_t BitmaskValue, FName tag); // [0xb740f4c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeAngleActionRadians
	// FLearningAgentsActionObjectElement MakeAngleActionRadians(class ULearningAgentsActionObject* Object, float Angle, float RelativeAngle, float AngleScale, FName tag); // [0xb740dd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.MakeAngleAction
	// FLearningAgentsActionObjectElement MakeAngleAction(class ULearningAgentsActionObject* Object, float Angle, float RelativeAngle, float AngleScale, FName tag); // [0xb740c40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsActions.LogAction
	// void LogAction(class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element);                // [0xb740a74] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetVelocityAction
	// bool GetVelocityAction(FVector& OutVelocity, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FTransform RelativeTransform, float VelocityScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerVelocityLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb73ffe0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetTransformAction
	// bool GetTransformAction(FTransform& OutTransform, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FTransform RelativeTransform, float LocationScale, float RotationScale, float ScaleScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb73f450] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetStructActionToArrays
	// bool GetStructActionToArrays(TArray<FName>& OutElementNames, TArray<FLearningAgentsActionObjectElement>& OutElements, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xb73efac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetStructActionNum
	// bool GetStructActionNum(int32_t& OutNum, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xb73ecdc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetStructAction
	// bool GetStructAction(TMap<FName, FLearningAgentsActionObjectElement>& OutElements, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xb73e948] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetStaticArrayActionNum
	// bool GetStaticArrayActionNum(int32_t& OutNum, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xb73e678] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetStaticArrayAction
	// bool GetStaticArrayAction(TArray<FLearningAgentsActionObjectElement>& OutElements, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xb73e260] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetScaleAction
	// bool GetScaleAction(FVector& OutScale, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FVector RelativeScale, float Scale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb73d954] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetRotationActionAsQuat
	// bool GetRotationActionAsQuat(FQuat& OutRotation, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FQuat RelativeRotation, float RotationScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb73cf3c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetRotationAction
	// bool GetRotationAction(FRotator& OutRotation, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FRotator RelativeRotation, float RotationScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb73c58c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetPairAction
	// bool GetPairAction(FLearningAgentsActionObjectElement& OutKey, FLearningAgentsActionObjectElement& OutValue, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xb73c1ec] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetOptionalAction
	// bool GetOptionalAction(ELearningAgentsOptionalAction& OutOption, FLearningAgentsActionObjectElement& OutElement, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xb73be54] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetNullAction
	// bool GetNullAction(class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xb73bc14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetLocationAction
	// bool GetLocationAction(FVector& OutLocation, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FTransform RelativeTransform, float LocationScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb73b258] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetInclusiveUnionActionToArrays
	// bool GetInclusiveUnionActionToArrays(TArray<FName>& OutElementNames, TArray<FLearningAgentsActionObjectElement>& OutElements, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xb73adb4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetInclusiveUnionActionNum
	// bool GetInclusiveUnionActionNum(int32_t& OutNum, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xb73aae4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetInclusiveUnionAction
	// bool GetInclusiveUnionAction(TMap<FName, FLearningAgentsActionObjectElement>& OutElements, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xb73a750] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetInclusiveDiscreteActionNum
	// bool GetInclusiveDiscreteActionNum(int32_t& OutNum, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xb73a480] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetInclusiveDiscreteAction
	// bool GetInclusiveDiscreteAction(TArray<int32_t>& OutIndices, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb739d00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetFloatAction
	// bool GetFloatAction(float& OutValue, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, float FloatScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb739524] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetExclusiveUnionAction
	// bool GetExclusiveUnionAction(FName& OutElementName, FLearningAgentsActionObjectElement& OutElement, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xb73918c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetExclusiveDiscreteAction
	// bool GetExclusiveDiscreteAction(int32_t& OutIndex, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb738a8c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetEnumAction
	// bool GetEnumAction(char& OutEnumValue, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, class UEnum* Enum, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb7382b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetEncodingAction
	// bool GetEncodingAction(FLearningAgentsActionObjectElement& OutElement, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xb737f60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetEitherAction
	// bool GetEitherAction(ELearningAgentsEitherAction& OutEither, FLearningAgentsActionObjectElement& OutElement, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xb737bc8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetDirectionAction
	// bool GetDirectionAction(FVector& OutDirection, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FTransform RelativeTransform, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerDirectionLocation, FVector VisualLoggerLocation, float VisualLoggerArrowLength, FLinearColor VisualLoggerColor); // [0xb737140] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetContinuousActionNum
	// bool GetContinuousActionNum(int32_t& OutNum, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag); // [0xb736e70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetContinuousAction
	// bool GetContinuousAction(TArray<float>& OutValues, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb7366b4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetBoolAction
	// bool GetBoolAction(bool& bOutValue, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb735f94] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetBitmaskAction
	// bool GetBitmaskAction(int32_t& OutBitmaskValue, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, class UEnum* Enum, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb7357b8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetAngleActionRadians
	// bool GetAngleActionRadians(float& OutAngle, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, float RelativeAngle, float AngleScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerAngleLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb734df8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsActions.GetAngleAction
	// bool GetAngleAction(float& OutAngle, class ULearningAgentsActionObject* Object, FLearningAgentsActionObjectElement Element, float RelativeAngle, float AngleScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerAngleLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb734468] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsManagerListener
/// Size: 0x0060 (0x000028 - 0x000088)
class ULearningAgentsManagerListener : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bIsSetup;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	class ULearningAgentsManager*                      Manager;                                                    // 0x0030   (0x0008)  
	SDK_UNDEFINED(80,14854) /* TMap<FName, ULearningAgentsVisualLoggerObject*> */ __um(VisualLoggerObjects);       // 0x0038   (0x0050)  


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsManagerListener.OnAgentsReset
	// void OnAgentsReset(TArray<int32_t>& AgentIds);                                                                        // [0xb74d120] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsManagerListener.OnAgentsRemoved
	// void OnAgentsRemoved(TArray<int32_t>& AgentIds);                                                                      // [0xb74d080] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsManagerListener.OnAgentsManagerTick
	// void OnAgentsManagerTick(TArray<int32_t>& AgentIds, float DeltaTime);                                                 // [0xb74ceec] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsManagerListener.OnAgentsAdded
	// void OnAgentsAdded(TArray<int32_t>& AgentIds);                                                                        // [0xb74ce4c] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsManagerListener.IsSetup
	// bool IsSetup();                                                                                                       // [0x3eacdc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerListener.GetAllAgents
	// void GetAllAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& OutAgentIds, class UClass* AgentClass);               // [0xb74be10] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerListener.GetAgents
	// void GetAgents(TArray<int32_t>& AgentIds, class UClass* AgentClass, TArray<UObject*>& OutAgents);                     // [0xb74ba2c] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerListener.GetAgentManager
	// class ULearningAgentsManager* GetAgentManager();                                                                      // [0x68142b8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerListener.GetAgent
	// class UObject* GetAgent(int32_t AgentId, class UClass* AgentClass);                                                   // [0xb74b5a8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LearningAgents.LearningAgentsController
/// Size: 0x0008 (0x000088 - 0x000090)
class ULearningAgentsController : public ULearningAgentsManagerListener
{ 
public:
	class ULearningAgentsInteractor*                   Interactor;                                                 // 0x0088   (0x0008)  


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsController.SetupController
	// void SetupController(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor);         // [0xb74dfe8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsController.RunController
	// void RunController();                                                                                                 // [0xb74d8bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsController.MakeController
	// class ULearningAgentsController* MakeController(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, class UClass* Class, FName Name); // [0xb74c654] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsController.GetInteractor
	// class ULearningAgentsInteractor* GetInteractor(class UClass* InteractorClass);                                        // [0xb74c0cc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsController.EvaluateController
	// void EvaluateController();                                                                                            // [0xb74acc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsController.EvaluateAgentControllers
	// void EvaluateAgentControllers(TArray<FLearningAgentsActionObjectElement>& OutActionObjectElements, class ULearningAgentsActionObject* InActionObject, class ULearningAgentsObservationObject* InObservationObject, TArray<FLearningAgentsObservationObjectElement>& InObservationObjectElements, TArray<int32_t>& AgentIds); // [0xb74a8d8] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsController.EvaluateAgentController
	// void EvaluateAgentController(FLearningAgentsActionObjectElement& OutActionObjectElement, class ULearningAgentsActionObject* InActionObject, class ULearningAgentsObservationObject* InObservationObject, FLearningAgentsObservationObjectElement& InObservationObjectElement, int32_t AgentId); // [0xb74a564] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/LearningAgents.LearningAgentsCritic
/// Size: 0x01F0 (0x000088 - 0x000278)
class ULearningAgentsCritic : public ULearningAgentsManagerListener
{ 
public:
	class ULearningAgentsInteractor*                   Interactor;                                                 // 0x0088   (0x0008)  
	class ULearningAgentsPolicy*                       Policy;                                                     // 0x0090   (0x0008)  
	class ULearningAgentsNeuralNetwork*                CriticNetwork;                                              // 0x0098   (0x0008)  
	unsigned char                                      UnknownData00_6[0x1D8];                                     // 0x00A0   (0x01D8)  MISSED


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsCritic.SetupCritic
	// void SetupCritic(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, class ULearningAgentsPolicy* InPolicy, class ULearningAgentsNeuralNetwork* CriticNeuralNetworkAsset, bool bReinitializeCriticNetwork, FLearningAgentsCriticSettings& CriticSettings, int32_t Seed); // [0xb74e0ac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.MakeCritic
	// class ULearningAgentsCritic* MakeCritic(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, class ULearningAgentsPolicy* InPolicy, class UClass* Class, FName Name, class ULearningAgentsNeuralNetwork* CriticNeuralNetworkAsset, bool bReinitializeCriticNetwork, FLearningAgentsCriticSettings& CriticSettings, int32_t Seed); // [0xb74c858] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.GetEstimatedDiscountedReturn
	// float GetEstimatedDiscountedReturn(int32_t AgentId);                                                                  // [0xb74c03c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsCritic.GetCriticNetworkAsset
	// class ULearningAgentsNeuralNetwork* GetCriticNetworkAsset();                                                          // [0xb74c018] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsCritic.EvaluateCritic
	// void EvaluateCritic();                                                                                                // [0xb74acd8] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LearningAgents.LearningAgentsObservationSchemaElement
/// Size: 0x0008 (0x000000 - 0x000008)
struct FLearningAgentsObservationSchemaElement
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/LearningAgents.LearningAgentsActionSchemaElement
/// Size: 0x0008 (0x000000 - 0x000008)
struct FLearningAgentsActionSchemaElement
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/LearningAgents.LearningAgentsObservationObjectElement
/// Size: 0x0008 (0x000000 - 0x000008)
struct FLearningAgentsObservationObjectElement
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/LearningAgents.LearningAgentsActionObjectElement
/// Size: 0x0008 (0x000000 - 0x000008)
struct FLearningAgentsActionObjectElement
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Class /Script/LearningAgents.LearningAgentsInteractor
/// Size: 0x02C0 (0x000088 - 0x000348)
class ULearningAgentsInteractor : public ULearningAgentsManagerListener
{ 
public:
	class ULearningAgentsObservationSchema*            ObservationSchema;                                          // 0x0088   (0x0008)  
	FLearningAgentsObservationSchemaElement            ObservationSchemaElement;                                   // 0x0090   (0x0008)  
	class ULearningAgentsActionSchema*                 ActionSchema;                                               // 0x0098   (0x0008)  
	FLearningAgentsActionSchemaElement                 ActionSchemaElement;                                        // 0x00A0   (0x0008)  
	class ULearningAgentsObservationObject*            ObservationObject;                                          // 0x00A8   (0x0008)  
	TArray<FLearningAgentsObservationObjectElement>    ObservationObjectElements;                                  // 0x00B0   (0x0010)  
	class ULearningAgentsActionObject*                 ActionObject;                                               // 0x00C0   (0x0008)  
	TArray<FLearningAgentsActionObjectElement>         ActionObjectElements;                                       // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x270];                                     // 0x00D8   (0x0270)  MISSED


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsInteractor.SpecifyAgentObservation
	// void SpecifyAgentObservation(FLearningAgentsObservationSchemaElement& OutObservationSchemaElement, class ULearningAgentsObservationSchema* InObservationSchema); // [0xb74e55c] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SpecifyAgentAction
	// void SpecifyAgentAction(FLearningAgentsActionSchemaElement& OutActionSchemaElement, class ULearningAgentsActionSchema* InActionSchema); // [0xb74e3e0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetupInteractor
	// void SetupInteractor(class ULearningAgentsManager* InManager);                                                        // [0xb74e360] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetObservationVector
	// void SetObservationVector(TArray<float>& ObservationVector, int32_t InObservationCompatibilityHash, int32_t AgentId, bool bIncrementIteration); // [0xb74dc5c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetActionVector
	// void SetActionVector(TArray<float>& ActionVector, int32_t InActionCompatibilityHash, int32_t AgentId, bool bIncrementIteration); // [0xb74d8d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.PerformAgentActions
	// void PerformAgentActions(class ULearningAgentsActionObject* InActionObject, TArray<FLearningAgentsActionObjectElement>& InActionObjectElements, TArray<int32_t>& AgentIds); // [0xb74d388] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.PerformAgentAction
	// void PerformAgentAction(class ULearningAgentsActionObject* InActionObject, FLearningAgentsActionObjectElement& InActionObjectElement, int32_t AgentId); // [0xb74d1d4] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.PerformActions
	// void PerformActions();                                                                                                // [0xb74d1c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.MakeInteractor
	// class ULearningAgentsInteractor* MakeInteractor(class ULearningAgentsManager* InManager, class UClass* Class, FName Name); // [0xb74cc7c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.HasObservationVector
	// bool HasObservationVector(int32_t AgentId);                                                                           // [0xb74c5c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.HasActionVector
	// bool HasActionVector(int32_t AgentId);                                                                                // [0xb74c424] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetObservationVectorSize
	// int32_t GetObservationVectorSize();                                                                                   // [0xb74c400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetObservationVector
	// void GetObservationVector(TArray<float>& OutObservationVector, int32_t& OutObservationCompatibilityHash, int32_t AgentId); // [0xb74c18c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetObservationEncodedVectorSize
	// int32_t GetObservationEncodedVectorSize();                                                                            // [0xb74c168] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetActionVectorSize
	// int32_t GetActionVectorSize();                                                                                        // [0xb74b4ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetActionVector
	// void GetActionVector(TArray<float>& OutActionVector, int32_t& OutActionCompatibilityHash, int32_t AgentId);           // [0xb74b238] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetActionEncodedVectorSize
	// int32_t GetActionEncodedVectorSize();                                                                                 // [0xb74b214] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetActionDistributionVectorSize
	// int32_t GetActionDistributionVectorSize();                                                                            // [0xb74b1f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GatherObservations
	// void GatherObservations();                                                                                            // [0xb74b1dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GatherAgentObservations
	// void GatherAgentObservations(TArray<FLearningAgentsObservationObjectElement>& OutObservationObjectElements, class ULearningAgentsObservationObject* InObservationObject, TArray<int32_t>& AgentIds); // [0xb74af3c] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GatherAgentObservation
	// void GatherAgentObservation(FLearningAgentsObservationObjectElement& OutObservationObjectElement, class ULearningAgentsObservationObject* InObservationObject, int32_t AgentId); // [0xb74acec] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/LearningAgents.LearningAgentsManager
/// Size: 0x0088 (0x0000A0 - 0x000128)
class ULearningAgentsManager : public UActorComponent
{ 
public:
	int32_t                                            MaxAgentNum;                                                // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	TArray<class UObject*>                             Agents;                                                     // 0x00A8   (0x0010)  
	TArray<class ULearningAgentsManagerListener*>      Listeners;                                                  // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x00C8   (0x0060)  MISSED


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAllAgents
	// void ResetAllAgents();                                                                                                // [0xb74d8a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAgents
	// void ResetAgents(TArray<int32_t>& AgentIds);                                                                          // [0xb74d80c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAgent
	// void ResetAgent(int32_t AgentId);                                                                                     // [0xb74d78c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveListener
	// void RemoveListener(class ULearningAgentsManagerListener* Listener);                                                  // [0xb74d6cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAllAgents
	// void RemoveAllAgents();                                                                                               // [0xb74d6b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAgents
	// void RemoveAgents(TArray<int32_t>& AgentIds);                                                                         // [0xb74d61c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAgent
	// void RemoveAgent(int32_t AgentId);                                                                                    // [0xb74d59c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.HasAgentObject
	// bool HasAgentObject(class UObject* Agent);                                                                            // [0xb74c53c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.HasAgent
	// bool HasAgent(int32_t AgentId);                                                                                       // [0xb74c4b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetMaxAgentNum
	// int32_t GetMaxAgentNum();                                                                                             // [0x8ebd450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAllAgents
	// void GetAllAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& OutAgentIds, class UClass* AgentClass);               // [0xb74bc08] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgents
	// void GetAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& AgentIds, class UClass* AgentClass);                     // [0xb74b824] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentNum
	// int32_t GetAgentNum();                                                                                                // [0x70cea6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentIds
	// void GetAgentIds(TArray<int32_t>& OutAgentIds, TArray<UObject*>& InAgents);                                           // [0xb74b710] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentId
	// int32_t GetAgentId(class UObject* Agent);                                                                             // [0xb74b680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgent
	// class UObject* GetAgent(int32_t AgentId, class UClass* AgentClass);                                                   // [0xb74b4d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.AddListener
	// void AddListener(class ULearningAgentsManagerListener* Listener);                                                     // [0xb74a4e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgents
	// void AddAgents(TArray<int32_t>& OutAgentIds, TArray<UObject*>& InAgents);                                             // [0xb74a3d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgent
	// int32_t AddAgent(class UObject* Agent);                                                                               // [0xb74a340] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsVisualLoggerObject
/// Size: 0x0000 (0x000028 - 0x000028)
class ULearningAgentsVisualLoggerObject : public UObject
{ 
public:
};

/// Class /Script/LearningAgents.LearningAgentsNeuralNetwork
/// Size: 0x0008 (0x000030 - 0x000038)
class ULearningAgentsNeuralNetwork : public UDataAsset
{ 
public:
	class ULearningNeuralNetworkData*                  NeuralNetworkData;                                          // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.SaveNetworkToSnapshot
	// void SaveNetworkToSnapshot(FFilePath& File);                                                                          // [0xb765610] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.SaveNetworkToAsset
	// void SaveNetworkToAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                      // [0xb765590] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.ResetNetwork
	// void ResetNetwork();                                                                                                  // [0xb765558] Final|Native|Public  
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.LoadNetworkFromSnapshot
	// void LoadNetworkFromSnapshot(FFilePath& File);                                                                        // [0xb758d68] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsNeuralNetwork.LoadNetworkFromAsset
	// void LoadNetworkFromAsset(class ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                    // [0xb758ce8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsObservationSchema
/// Size: 0x00E8 (0x000028 - 0x000110)
class ULearningAgentsObservationSchema : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x110];                                     // 0x0000   (0x0110)  MISSED
};

/// Class /Script/LearningAgents.LearningAgentsObservationObject
/// Size: 0x0098 (0x000028 - 0x0000C0)
class ULearningAgentsObservationObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x0000   (0x00C0)  MISSED
};

/// Class /Script/LearningAgents.LearningAgentsObservations
/// Size: 0x0000 (0x000028 - 0x000028)
class ULearningAgentsObservations : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsObservations.ValidateObservationObjectMatchesSchema
	// bool ValidateObservationObjectMatchesSchema(class ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement SchemaElement, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement ObjectElement); // [0xb769cb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyVelocityObservation
	// FLearningAgentsObservationSchemaElement SpecifyVelocityObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xb7660e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyTransformObservation
	// FLearningAgentsObservationSchemaElement SpecifyTransformObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xb769bec] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyStructObservationFromArrays
	// FLearningAgentsObservationSchemaElement SpecifyStructObservationFromArrays(class ULearningAgentsObservationSchema* Schema, TArray<FName>& ElementNames, TArray<FLearningAgentsObservationSchemaElement>& Elements, FName tag); // [0xb7698dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyStructObservation
	// FLearningAgentsObservationSchemaElement SpecifyStructObservation(class ULearningAgentsObservationSchema* Schema, TMap<FName, FLearningAgentsObservationSchemaElement>& Elements, FName tag); // [0xb7696d4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyStaticArrayObservation
	// FLearningAgentsObservationSchemaElement SpecifyStaticArrayObservation(class ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement Element, int32_t Num, FName tag); // [0xb769304] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifySetObservation
	// FLearningAgentsObservationSchemaElement SpecifySetObservation(class ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement Element, int32_t MaxNum, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName tag); // [0xb768d6c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyScaleObservation
	// FLearningAgentsObservationSchemaElement SpecifyScaleObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xb7660e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyRotationObservation
	// FLearningAgentsObservationSchemaElement SpecifyRotationObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xb768ca4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyProportionAlongSplineObservation
	// FLearningAgentsObservationSchemaElement SpecifyProportionAlongSplineObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xb768be0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyProportionAlongRayObservation
	// FLearningAgentsObservationSchemaElement SpecifyProportionAlongRayObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xb765f20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyPairObservation
	// FLearningAgentsObservationSchemaElement SpecifyPairObservation(class ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement Key, FLearningAgentsObservationSchemaElement Value, FName tag); // [0xb7688a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyOptionalObservation
	// FLearningAgentsObservationSchemaElement SpecifyOptionalObservation(class ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement Element, int32_t EncodingSize, FName tag); // [0xb76857c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyNullObservation
	// FLearningAgentsObservationSchemaElement SpecifyNullObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xb7684b8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyMapObservation
	// FLearningAgentsObservationSchemaElement SpecifyMapObservation(class ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement KeyElement, FLearningAgentsObservationSchemaElement ValueElement, int32_t MaxNum, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName tag); // [0xb767e20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyLocationObservation
	// FLearningAgentsObservationSchemaElement SpecifyLocationObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xb7660e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyLocationAlongSplineObservation
	// FLearningAgentsObservationSchemaElement SpecifyLocationAlongSplineObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xb7660e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyInclusiveUnionObservationFromArrays
	// FLearningAgentsObservationSchemaElement SpecifyInclusiveUnionObservationFromArrays(class ULearningAgentsObservationSchema* Schema, TArray<FName>& ElementNames, TArray<FLearningAgentsObservationSchemaElement>& Elements, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName tag); // [0xb76785c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyInclusiveUnionObservation
	// FLearningAgentsObservationSchemaElement SpecifyInclusiveUnionObservation(class ULearningAgentsObservationSchema* Schema, TMap<FName, FLearningAgentsObservationSchemaElement>& Elements, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName tag); // [0xb7673ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyInclusiveDiscreteObservation
	// FLearningAgentsObservationSchemaElement SpecifyInclusiveDiscreteObservation(class ULearningAgentsObservationSchema* Schema, int32_t Size, FName tag); // [0xb765fe8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyFloatObservation
	// FLearningAgentsObservationSchemaElement SpecifyFloatObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xb765f20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyExclusiveUnionObservationFromArrays
	// FLearningAgentsObservationSchemaElement SpecifyExclusiveUnionObservationFromArrays(class ULearningAgentsObservationSchema* Schema, TArray<FName>& ElementNames, TArray<FLearningAgentsObservationSchemaElement>& Elements, int32_t EncodingSize, FName tag); // [0xb766fb8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyExclusiveUnionObservation
	// FLearningAgentsObservationSchemaElement SpecifyExclusiveUnionObservation(class ULearningAgentsObservationSchema* Schema, TMap<FName, FLearningAgentsObservationSchemaElement>& Elements, int32_t EncodingSize, FName tag); // [0xb766cd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyExclusiveDiscreteObservation
	// FLearningAgentsObservationSchemaElement SpecifyExclusiveDiscreteObservation(class ULearningAgentsObservationSchema* Schema, int32_t Size, FName tag); // [0xb765fe8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyEnumObservation
	// FLearningAgentsObservationSchemaElement SpecifyEnumObservation(class ULearningAgentsObservationSchema* Schema, class UEnum* Enum, FName tag); // [0xb766bb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyEncodingObservation
	// FLearningAgentsObservationSchemaElement SpecifyEncodingObservation(class ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement Element, int32_t EncodingSize, int32_t HiddenLayerNum, ELearningAgentsActivationFunction ActivationFunction, FName tag); // [0xb7665c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyEitherObservation
	// FLearningAgentsObservationSchemaElement SpecifyEitherObservation(class ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement A, FLearningAgentsObservationSchemaElement B, int32_t EncodingSize, FName tag); // [0xb7661a8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyDirectionObservation
	// FLearningAgentsObservationSchemaElement SpecifyDirectionObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xb7660e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyDirectionAlongSplineObservation
	// FLearningAgentsObservationSchemaElement SpecifyDirectionAlongSplineObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xb7660e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyCountObservation
	// FLearningAgentsObservationSchemaElement SpecifyCountObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xb765f20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyContinuousObservation
	// FLearningAgentsObservationSchemaElement SpecifyContinuousObservation(class ULearningAgentsObservationSchema* Schema, int32_t Size, FName tag); // [0xb765fe8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyBoolObservation
	// FLearningAgentsObservationSchemaElement SpecifyBoolObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xb765f20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyBitmaskObservation
	// FLearningAgentsObservationSchemaElement SpecifyBitmaskObservation(class ULearningAgentsObservationSchema* Schema, class UEnum* Enum, FName tag); // [0xb765ddc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyArrayObservation
	// FLearningAgentsObservationSchemaElement SpecifyArrayObservation(class ULearningAgentsObservationSchema* Schema, FLearningAgentsObservationSchemaElement Element, int32_t MaxNum, int32_t AttentionEncodingSize, int32_t AttentionHeadNum, int32_t ValueEncodingSize, FName tag); // [0xb765844] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.SpecifyAngleObservation
	// FLearningAgentsObservationSchemaElement SpecifyAngleObservation(class ULearningAgentsObservationSchema* Schema, FName tag); // [0xb76577c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.ProjectTransformOntoGroundPlane
	// FTransform ProjectTransformOntoGroundPlane(FTransform Transform, FVector LocalForwardVector, float GroundPlaneHeight); // [0xb765184] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeVelocityObservation
	// FLearningAgentsObservationObjectElement MakeVelocityObservation(class ULearningAgentsObservationObject* Object, FVector Velocity, FTransform RelativeTransform, float VelocityScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerVelocityLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb7647e8] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeTransformObservation
	// FLearningAgentsObservationObjectElement MakeTransformObservation(class ULearningAgentsObservationObject* Object, FTransform Transform, FTransform RelativeTransform, float LocationScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb763e70] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeStructObservationFromArrays
	// FLearningAgentsObservationObjectElement MakeStructObservationFromArrays(class ULearningAgentsObservationObject* Object, TArray<FName>& ElementNames, TArray<FLearningAgentsObservationObjectElement>& Elements, FName tag); // [0xb763b60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeStructObservation
	// FLearningAgentsObservationObjectElement MakeStructObservation(class ULearningAgentsObservationObject* Object, TMap<FName, FLearningAgentsObservationObjectElement>& Elements, FName tag); // [0xb763958] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeStaticArrayObservation
	// FLearningAgentsObservationObjectElement MakeStaticArrayObservation(class ULearningAgentsObservationObject* Object, TArray<FLearningAgentsObservationObjectElement>& Elements, FName tag); // [0xb7636a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeSetObservationFromArray
	// FLearningAgentsObservationObjectElement MakeSetObservationFromArray(class ULearningAgentsObservationObject* Object, TArray<FLearningAgentsObservationObjectElement>& Elements, FName tag); // [0xb7633e8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeSetObservation
	// FLearningAgentsObservationObjectElement MakeSetObservation(class ULearningAgentsObservationObject* Object, TSet<FLearningAgentsObservationObjectElement>& Elements, FName tag); // [0xb7631ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeScaleObservation
	// FLearningAgentsObservationObjectElement MakeScaleObservation(class ULearningAgentsObservationObject* Object, FVector Scale, FVector RelativeScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerScaleLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb762994] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeRotationObservationFromQuat
	// FLearningAgentsObservationObjectElement MakeRotationObservationFromQuat(class ULearningAgentsObservationObject* Object, FQuat Rotation, FQuat RelativeRotation, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb762180] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeRotationObservation
	// FLearningAgentsObservationObjectElement MakeRotationObservation(class ULearningAgentsObservationObject* Object, FRotator Rotation, FRotator RelativeRotation, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocation, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb761968] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeProportionAlongSplineObservation
	// FLearningAgentsObservationObjectElement MakeProportionAlongSplineObservation(class ULearningAgentsObservationObject* Object, class USplineComponent* SplineComponent, float DistanceAlongSpline, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb761408] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeProportionAlongRayObservation
	// FLearningAgentsObservationObjectElement MakeProportionAlongRayObservation(class ULearningAgentsObservationObject* Object, FVector RayStart, FVector RayEnd, FTransform RayTransform, TEnumAsByte<ECollisionChannel> CollisionChannel, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb760a38] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakePairObservation
	// FLearningAgentsObservationObjectElement MakePairObservation(class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Key, FLearningAgentsObservationObjectElement Value, FName tag); // [0xb7606f8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeOptionalValidObservation
	// FLearningAgentsObservationObjectElement MakeOptionalValidObservation(class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb7604b8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeOptionalObservation
	// FLearningAgentsObservationObjectElement MakeOptionalObservation(class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, ELearningAgentsOptionalObservation Option, FName tag); // [0xb760194] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeOptionalNullObservation
	// FLearningAgentsObservationObjectElement MakeOptionalNullObservation(class ULearningAgentsObservationObject* Object, FName tag); // [0xb760090] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeNullObservation
	// FLearningAgentsObservationObjectElement MakeNullObservation(class ULearningAgentsObservationObject* Object, FName tag); // [0xb75ffcc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeMapObservationFromArrays
	// FLearningAgentsObservationObjectElement MakeMapObservationFromArrays(class ULearningAgentsObservationObject* Object, TArray<FLearningAgentsObservationObjectElement>& Keys, TArray<FLearningAgentsObservationObjectElement>& Values, FName tag); // [0xb75fcbc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeMapObservation
	// FLearningAgentsObservationObjectElement MakeMapObservation(class ULearningAgentsObservationObject* Object, TMap<FLearningAgentsObservationObjectElement, FLearningAgentsObservationObjectElement>& Map, FName tag); // [0xb75fab4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeLocationObservation
	// FLearningAgentsObservationObjectElement MakeLocationObservation(class ULearningAgentsObservationObject* Object, FVector Location, FTransform RelativeTransform, float LocationScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb75f1ec] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeLocationAlongSplineObservation
	// FLearningAgentsObservationObjectElement MakeLocationAlongSplineObservation(class ULearningAgentsObservationObject* Object, class USplineComponent* SplineComponent, float DistanceAlongSpline, FTransform RelativeTransform, float LocationScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb75e83c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeInclusiveUnionObservationFromArrays
	// FLearningAgentsObservationObjectElement MakeInclusiveUnionObservationFromArrays(class ULearningAgentsObservationObject* Object, TArray<FName>& ElementNames, TArray<FLearningAgentsObservationObjectElement>& Elements, FName tag); // [0xb75e52c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeInclusiveUnionObservation
	// FLearningAgentsObservationObjectElement MakeInclusiveUnionObservation(class ULearningAgentsObservationObject* Object, TMap<FName, FLearningAgentsObservationObjectElement>& Elements, FName tag); // [0xb75e324] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeInclusiveDiscreteObservation
	// FLearningAgentsObservationObjectElement MakeInclusiveDiscreteObservation(class ULearningAgentsObservationObject* Object, TArray<int32_t>& DiscreteIndices, int32_t Size, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb75dbfc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeFloatObservation
	// FLearningAgentsObservationObjectElement MakeFloatObservation(class ULearningAgentsObservationObject* Object, float Value, float FloatScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb75d88c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeExclusiveUnionObservation
	// FLearningAgentsObservationObjectElement MakeExclusiveUnionObservation(class ULearningAgentsObservationObject* Object, FName ElementName, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb75d618] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeExclusiveDiscreteObservation
	// FLearningAgentsObservationObjectElement MakeExclusiveDiscreteObservation(class ULearningAgentsObservationObject* Object, int32_t DiscreteIndex, int32_t Size, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb75d2ac] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeEnumObservation
	// FLearningAgentsObservationObjectElement MakeEnumObservation(class ULearningAgentsObservationObject* Object, class UEnum* Enum, char EnumValue, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb75cab4] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeEncodingObservation
	// FLearningAgentsObservationObjectElement MakeEncodingObservation(class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb75c818] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeEitherObservation
	// FLearningAgentsObservationObjectElement MakeEitherObservation(class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, ELearningAgentsEitherObservation Either, FName tag); // [0xb75c4f4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeEitherBObservation
	// FLearningAgentsObservationObjectElement MakeEitherBObservation(class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement B, FName tag); // [0xb75c2b4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeEitherAObservation
	// FLearningAgentsObservationObjectElement MakeEitherAObservation(class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement A, FName tag); // [0xb75c074] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeDirectionObservation
	// FLearningAgentsObservationObjectElement MakeDirectionObservation(class ULearningAgentsObservationObject* Object, FVector Direction, FTransform RelativeTransform, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerDirectionLocation, FVector VisualLoggerLocation, float VisualLoggerArrowLength, FLinearColor VisualLoggerColor); // [0xb75b6e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeDirectionAlongSplineObservation
	// FLearningAgentsObservationObjectElement MakeDirectionAlongSplineObservation(class ULearningAgentsObservationObject* Object, class USplineComponent* SplineComponent, float DistanceAlongSpline, FTransform RelativeTransform, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, float VisualLoggerArrowLength, FLinearColor VisualLoggerColor); // [0xb75ad50] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeCountObservation
	// FLearningAgentsObservationObjectElement MakeCountObservation(class ULearningAgentsObservationObject* Object, int32_t Num, int32_t MaxNum, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb75a980] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeContinuousObservation
	// FLearningAgentsObservationObjectElement MakeContinuousObservation(class ULearningAgentsObservationObject* Object, TArray<float>& Values, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb75a334] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeBoolObservation
	// FLearningAgentsObservationObjectElement MakeBoolObservation(class ULearningAgentsObservationObject* Object, bool bValue, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb759fb0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeBitmaskObservation
	// FLearningAgentsObservationObjectElement MakeBitmaskObservation(class ULearningAgentsObservationObject* Object, class UEnum* Enum, int32_t BitmaskValue, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb759b00] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeArrayObservation
	// FLearningAgentsObservationObjectElement MakeArrayObservation(class ULearningAgentsObservationObject* Object, TArray<FLearningAgentsObservationObjectElement>& Elements, int32_t MaxNum, FName tag); // [0xb759778] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeAngleObservationRadians
	// FLearningAgentsObservationObjectElement MakeAngleObservationRadians(class ULearningAgentsObservationObject* Object, float Angle, float RelativeAngle, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb759408] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.MakeAngleObservation
	// FLearningAgentsObservationObjectElement MakeAngleObservation(class ULearningAgentsObservationObject* Object, float Angle, float RelativeAngle, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb7590a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.LogObservation
	// void LogObservation(class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element); // [0xb758ed4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetVelocityObservation
	// bool GetVelocityObservation(FVector& OutVelocity, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, float VelocityScale, FName tag); // [0xb758768] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetTransformObservation
	// bool GetTransformObservation(FTransform& OutTransform, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, float LocationScale, FName tag); // [0xb7581c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetStructObservationToArrays
	// bool GetStructObservationToArrays(TArray<FName>& OutElementNames, TArray<FLearningAgentsObservationObjectElement>& OutElements, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb757d1c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetStructObservationNum
	// bool GetStructObservationNum(int32_t& OutNum, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb757a4c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetStructObservation
	// bool GetStructObservation(TMap<FName, FLearningAgentsObservationObjectElement>& OutElements, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb7576b8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetStaticArrayObservationNum
	// bool GetStaticArrayObservationNum(int32_t& OutNum, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb7573e8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetStaticArrayObservation
	// bool GetStaticArrayObservation(TArray<FLearningAgentsObservationObjectElement>& OutElements, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb756fd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetSetObservationToArray
	// bool GetSetObservationToArray(TArray<FLearningAgentsObservationObjectElement>& OutElements, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb756bb8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetSetObservationNum
	// bool GetSetObservationNum(int32_t& OutNum, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb74f6c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetSetObservation
	// bool GetSetObservation(TSet<FLearningAgentsObservationObjectElement>& OutElements, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb7567ec] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetScaleObservation
	// bool GetScaleObservation(FVector& OutScale, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FVector RelativeScale, FName tag); // [0xb7563ec] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetRotationObservationAsQuat
	// bool GetRotationObservationAsQuat(FQuat& OutRotation, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FQuat RelativeRotation, FName tag); // [0xb755fc8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetRotationObservation
	// bool GetRotationObservation(FRotator& OutRotation, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FRotator RelativeRotation, FName tag); // [0xb755c08] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetProportionAlongSplineObservation
	// bool GetProportionAlongSplineObservation(bool& bOutIsClosedLoop, float& OutAngle, float& OutPropotion, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb755894] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetProportionAlongRayObservation
	// bool GetProportionAlongRayObservation(float& OutProportion, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb7555c4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetPairObservation
	// bool GetPairObservation(FLearningAgentsObservationObjectElement& OutKey, FLearningAgentsObservationObjectElement& OutValue, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb755224] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetOptionalObservation
	// bool GetOptionalObservation(ELearningAgentsOptionalObservation& OutOption, FLearningAgentsObservationObjectElement& OutElement, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb754e8c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetNullObservation
	// bool GetNullObservation(class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb754c4c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetMapObservationToArrays
	// bool GetMapObservationToArrays(TArray<FLearningAgentsObservationObjectElement>& OutKeys, TArray<FLearningAgentsObservationObjectElement>& OutValues, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb7547a8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetMapObservationNum
	// bool GetMapObservationNum(int32_t& OutNum, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb74f6c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetMapObservation
	// bool GetMapObservation(TMap<FLearningAgentsObservationObjectElement, FLearningAgentsObservationObjectElement>& OutElements, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb754414] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetLocationObservation
	// bool GetLocationObservation(FVector& OutLocation, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, float LocationScale, FName tag); // [0xb753e94] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetLocationAlongSplineObservation
	// bool GetLocationAlongSplineObservation(FVector& OutLocation, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, float LocationScale, FName tag); // [0xb753914] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetInclusiveUnionObservationToArrays
	// bool GetInclusiveUnionObservationToArrays(TArray<FName>& OutElementNames, TArray<FLearningAgentsObservationObjectElement>& OutElements, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb753470] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetInclusiveUnionObservationNum
	// bool GetInclusiveUnionObservationNum(int32_t& OutNum, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb7531a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetInclusiveUnionObservation
	// bool GetInclusiveUnionObservation(TMap<FName, FLearningAgentsObservationObjectElement>& OutElements, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb752e0c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetInclusiveDiscreteObservationNum
	// bool GetInclusiveDiscreteObservationNum(int32_t& OutNum, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb752b3c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetInclusiveDiscreteObservation
	// bool GetInclusiveDiscreteObservation(TArray<int32_t>& OutIndices, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb7527f4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetFloatObservation
	// bool GetFloatObservation(float& OutValue, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, float FloatScale, FName tag); // [0xb752444] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetExclusiveUnionObservation
	// bool GetExclusiveUnionObservation(FName& OutElementName, FLearningAgentsObservationObjectElement& OutElement, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb7520ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetExclusiveDiscreteObservation
	// bool GetExclusiveDiscreteObservation(int32_t& OutIndex, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb751ddc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetEnumObservation
	// bool GetEnumObservation(char& OutEnumValue, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, class UEnum* Enum, FName tag); // [0xb751a2c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetEncodingObservation
	// bool GetEncodingObservation(FLearningAgentsObservationObjectElement& OutElement, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb7516dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetEitherObservation
	// bool GetEitherObservation(ELearningAgentsEitherObservation& OutEither, FLearningAgentsObservationObjectElement& OutElement, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb751344] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetDirectionObservation
	// bool GetDirectionObservation(FVector& OutDirection, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, FName tag); // [0xb750eac] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetDirectionAlongSplineObservation
	// bool GetDirectionAlongSplineObservation(FVector& OutDirection, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FTransform RelativeTransform, FName tag); // [0xb750a14] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetCountObservation
	// bool GetCountObservation(int32_t& OutNum, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, int32_t MaxNum, FName tag); // [0xb750664] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetContinuousObservationNum
	// bool GetContinuousObservationNum(int32_t& OutNum, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb750394] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetContinuousObservation
	// bool GetContinuousObservation(TArray<float>& OutValues, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb750010] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetBoolObservation
	// bool GetBoolObservation(bool& bOutValue, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb74fd40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetBitmaskObservation
	// bool GetBitmaskObservation(int32_t& OutBitmaskValue, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, class UEnum* Enum, FName tag); // [0xb74f990] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetArrayObservationNum
	// bool GetArrayObservationNum(int32_t& OutNum, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, FName tag); // [0xb74f6c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetArrayObservation
	// bool GetArrayObservation(TArray<FLearningAgentsObservationObjectElement>& OutElements, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, int32_t MaxNum, FName tag); // [0xb74f1c8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetAngleObservationRadians
	// bool GetAngleObservationRadians(float& OutAngle, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, float RelativeAngle, FName tag); // [0xb74ee18] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.GetAngleObservation
	// bool GetAngleObservation(float& OutAngle, class ULearningAgentsObservationObject* Object, FLearningAgentsObservationObjectElement Element, float RelativeAngle, FName tag); // [0xb74ea68] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsObservations.FindEnumByName
	// class UEnum* FindEnumByName(FString Name);                                                                            // [0xb74e8f8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsPolicy
/// Size: 0x0410 (0x000088 - 0x000498)
class ULearningAgentsPolicy : public ULearningAgentsManagerListener
{ 
public:
	class ULearningAgentsInteractor*                   Interactor;                                                 // 0x0088   (0x0008)  
	class ULearningAgentsNeuralNetwork*                EncoderNetwork;                                             // 0x0090   (0x0008)  
	class ULearningAgentsNeuralNetwork*                PolicyNetwork;                                              // 0x0098   (0x0008)  
	class ULearningAgentsNeuralNetwork*                DecoderNetwork;                                             // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x3F0];                                     // 0x00A8   (0x03F0)  MISSED


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsPolicy.SetupPolicy
	// void SetupPolicy(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, class ULearningAgentsNeuralNetwork* EncoderNeuralNetworkAsset, class ULearningAgentsNeuralNetwork* PolicyNeuralNetworkAsset, class ULearningAgentsNeuralNetwork* DecoderNeuralNetworkAsset, bool bReinitializeEncoderNetwork, bool bReinitializePolicyNetwork, bool bReinitializeDecoderNetwork, FLearningAgentsPolicySettings& PolicySettings, int32_t Seed); // [0xb794088] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SetMemoryState
	// void SetMemoryState(int32_t AgentId, TArray<float>& InMemoryState);                                                   // [0xb793f68] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.RunInference
	// void RunInference(float ActionNoiseScale);                                                                            // [0xb793ee8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.MakePolicy
	// class ULearningAgentsPolicy* MakePolicy(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, class UClass* Class, FName Name, class ULearningAgentsNeuralNetwork* EncoderNeuralNetworkAsset, class ULearningAgentsNeuralNetwork* PolicyNeuralNetworkAsset, class ULearningAgentsNeuralNetwork* DecoderNeuralNetworkAsset, bool bReinitializeEncoderNetwork, bool bReinitializePolicyNetwork, bool bReinitializeDecoderNetwork, FLearningAgentsPolicySettings& PolicySettings, int32_t Seed); // [0xb7939ec] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetPolicyNetworkAsset
	// class ULearningAgentsNeuralNetwork* GetPolicyNetworkAsset();                                                          // [0xb7939c8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetMemoryStateSize
	// int32_t GetMemoryStateSize();                                                                                         // [0xb7939a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetMemoryState
	// void GetMemoryState(TArray<float>& OutMemoryState, int32_t AgentId);                                                  // [0xb7937d4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetEncoderNetworkAsset
	// class ULearningAgentsNeuralNetwork* GetEncoderNetworkAsset();                                                         // [0xb7937b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetDecoderNetworkAsset
	// class ULearningAgentsNeuralNetwork* GetDecoderNetworkAsset();                                                         // [0xb79378c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgents.LearningAgentsPolicy.EvaluatePolicy
	// void EvaluatePolicy();                                                                                                // [0xb793778] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.EncodeObservations
	// void EncodeObservations();                                                                                            // [0xb793764] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.DecodeAndSampleActions
	// void DecodeAndSampleActions(float ActionNoiseScale);                                                                  // [0xb7936e4] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LearningAgents.LearningAgentsCriticSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FLearningAgentsCriticSettings
{ 
	int32_t                                            HiddenLayerNum;                                             // 0x0000   (0x0004)  
	int32_t                                            HiddenLayerSize;                                            // 0x0004   (0x0004)  
	ELearningAgentsActivationFunction                  ActivationFunction;                                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/LearningAgents.LearningAgentsPolicySettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLearningAgentsPolicySettings
{ 
	int32_t                                            HiddenLayerNum;                                             // 0x0000   (0x0004)  
	int32_t                                            HiddenLayerSize;                                            // 0x0004   (0x0004)  
	bool                                               bUseMemory;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            MemoryStateSize;                                            // 0x000C   (0x0004)  
	float                                              InitialEncodedActionScale;                                  // 0x0010   (0x0004)  
	ELearningAgentsActivationFunction                  ActivationFunction;                                         // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

