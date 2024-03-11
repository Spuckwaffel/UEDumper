
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: InputCore
/// dependency: NetCore
/// dependency: StructUtils

/// Class /Script/VerseInput.VerseInputActionBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UVerseInputActionBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FGuid                                              Guid;                                                       // 0x0028   (0x0010)  
};

/// Class /Script/VerseInput.VerseInputTriggerBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseInputTriggerBase : public UObject
{ 
public:
};

/// Class /Script/VerseInput.VerseInputModifierBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseInputModifierBase : public UObject
{ 
public:
};

/// Class /Script/VerseInput.VerseInputClientActionBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseInputClientActionBase : public UObject
{ 
public:
};

/// Struct /Script/VerseInput.VerseInputActionData
/// Size: 0x0064 (0x00000C - 0x000070)
struct FVerseInputActionData : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UInputAction*                                InputAction;                                                // 0x0010   (0x0008)  
	TArray<FKey>                                       InputKeys;                                                  // 0x0018   (0x0010)  
	FGuid                                              Guid;                                                       // 0x0028   (0x0010)  
	TArray<FInstancedStruct>                           Triggers;                                                   // 0x0038   (0x0010)  
	TArray<FInstancedStruct>                           Modifiers;                                                  // 0x0048   (0x0010)  
	TArray<FInstancedStruct>                           Actions;                                                    // 0x0058   (0x0010)  
	FName                                              VerbName;                                                   // 0x0068   (0x0004)  
	bool                                               bConsumeInput;                                              // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Struct /Script/VerseInput.VerseInputActionDataList
/// Size: 0x0018 (0x000108 - 0x000120)
struct FVerseInputActionDataList : FFastArraySerializer
{ 
	TArray<FVerseInputActionData>                      InputActions;                                               // 0x0108   (0x0010)  
	class UVerseReplicatedInputDataComponent*          OwnerComponent;                                             // 0x0118   (0x0008)  
};

/// Class /Script/VerseInput.VerseReplicatedInputDataComponent
/// Size: 0x0130 (0x0000A0 - 0x0001D0)
class UVerseReplicatedInputDataComponent : public UActorComponent
{ 
public:
	FVerseInputActionDataList                          InputActions;                                               // 0x00A0   (0x0120)  
	class UEnhancedInputComponent*                     InputComponent;                                             // 0x01C0   (0x0008)  
	class UInputMappingContext*                        CurrentInputMappingContext;                                 // 0x01C8   (0x0008)  


	/// Functions
	// Function /Script/VerseInput.VerseReplicatedInputDataComponent.ServerInputActionTriggered
	// void ServerInputActionTriggered(FGuid Guid, FVector InputValue);                                                      // [0xba3701c] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|Const 
	// Function /Script/VerseInput.VerseReplicatedInputDataComponent.OnInputActionTriggered
	// void OnInputActionTriggered(FInputActionInstance& ActionInstance);                                                    // [0xba36f78] Final|Native|Private|HasOutParms 
};

/// Struct /Script/VerseInput.VerseInputClientActionBaseData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVerseInputClientActionBaseData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/VerseInput.VerseInputClientActionData_ApplyImpulse
/// Size: 0x0018 (0x000008 - 0x000020)
struct FVerseInputClientActionData_ApplyImpulse : FVerseInputClientActionBaseData
{ 
	FVector                                            Impulse;                                                    // 0x0008   (0x0018)  
};

/// Struct /Script/VerseInput.VerseInputClientActionData_Launch
/// Size: 0x0018 (0x000008 - 0x000020)
struct FVerseInputClientActionData_Launch : FVerseInputClientActionBaseData
{ 
	FVector                                            Velocity;                                                   // 0x0008   (0x0018)  
};

/// Struct /Script/VerseInput.VerseInputClientActionData_PlayAnimation
/// Size: 0x0008 (0x000008 - 0x000010)
struct FVerseInputClientActionData_PlayAnimation : FVerseInputClientActionBaseData
{ 
	FName                                              AssetPath;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/VerseInput.VerseInputClientActionData_PlaySound
/// Size: 0x0008 (0x000008 - 0x000010)
struct FVerseInputClientActionData_PlaySound : FVerseInputClientActionBaseData
{ 
	FName                                              AssetPath;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/VerseInput.VerseInputClientActionData_SpawnParticleEffect
/// Size: 0x0008 (0x000008 - 0x000010)
struct FVerseInputClientActionData_SpawnParticleEffect : FVerseInputClientActionBaseData
{ 
	FName                                              AssetPath;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/VerseInput.VerseInputModifierBaseData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVerseInputModifierBaseData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/VerseInput.VerseInputModifierData_DeadZone
/// Size: 0x0010 (0x000008 - 0x000018)
struct FVerseInputModifierData_DeadZone : FVerseInputModifierBaseData
{ 
	float                                              LowerThreshold;                                             // 0x0008   (0x0004)  
	float                                              UpperThreshold;                                             // 0x000C   (0x0004)  
	EDeadZoneType                                      Type;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/VerseInput.VerseInputModifierData_Negate
/// Size: 0x0008 (0x000008 - 0x000010)
struct FVerseInputModifierData_Negate : FVerseInputModifierBaseData
{ 
	bool                                               bX;                                                         // 0x0008   (0x0001)  
	bool                                               bY;                                                         // 0x0009   (0x0001)  
	bool                                               bZ;                                                         // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/VerseInput.VerseInputModifierData_Scalar
/// Size: 0x0018 (0x000008 - 0x000020)
struct FVerseInputModifierData_Scalar : FVerseInputModifierBaseData
{ 
	FVector                                            Scalar;                                                     // 0x0008   (0x0018)  
};

/// Struct /Script/VerseInput.VerseInputModifierData_Smooth
/// Size: 0x0000 (0x000008 - 0x000008)
struct FVerseInputModifierData_Smooth : FVerseInputModifierBaseData
{ 
};

/// Struct /Script/VerseInput.VerseInputModifierData_ResponseCurveExponential
/// Size: 0x0018 (0x000008 - 0x000020)
struct FVerseInputModifierData_ResponseCurveExponential : FVerseInputModifierBaseData
{ 
	FVector                                            CurveExponent;                                              // 0x0008   (0x0018)  
};

/// Struct /Script/VerseInput.VerseInputModifierData_Swizzle
/// Size: 0x0008 (0x000008 - 0x000010)
struct FVerseInputModifierData_Swizzle : FVerseInputModifierBaseData
{ 
	EInputAxisSwizzle                                  Order;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/VerseInput.VerseInputTriggerBaseData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVerseInputTriggerBaseData
{ 
	float                                              ActuationThreshold;                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/VerseInput.VerseInputTriggerData_Down
/// Size: 0x0000 (0x000010 - 0x000010)
struct FVerseInputTriggerData_Down : FVerseInputTriggerBaseData
{ 
};

/// Struct /Script/VerseInput.VerseInputTriggerData_Pressed
/// Size: 0x0000 (0x000010 - 0x000010)
struct FVerseInputTriggerData_Pressed : FVerseInputTriggerBaseData
{ 
};

/// Struct /Script/VerseInput.VerseInputTriggerData_Released
/// Size: 0x0000 (0x000010 - 0x000010)
struct FVerseInputTriggerData_Released : FVerseInputTriggerBaseData
{ 
};

/// Struct /Script/VerseInput.VerseInputTriggerData_Hold
/// Size: 0x0008 (0x000010 - 0x000018)
struct FVerseInputTriggerData_Hold : FVerseInputTriggerBaseData
{ 
	float                                              HoldTimeThreshold;                                          // 0x0010   (0x0004)  
	bool                                               IsOneShot;                                                  // 0x0014   (0x0001)  
	bool                                               AffectedByTimeDilation;                                     // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
};

/// Struct /Script/VerseInput.VerseInputTriggerData_HoldAndRelease
/// Size: 0x0008 (0x000010 - 0x000018)
struct FVerseInputTriggerData_HoldAndRelease : FVerseInputTriggerBaseData
{ 
	float                                              HoldTimeThreshold;                                          // 0x0010   (0x0004)  
	bool                                               AffectedByTimeDilation;                                     // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/VerseInput.VerseInputTriggerData_Tap
/// Size: 0x0008 (0x000010 - 0x000018)
struct FVerseInputTriggerData_Tap : FVerseInputTriggerBaseData
{ 
	float                                              TapReleaseTimeThreshold;                                    // 0x0010   (0x0004)  
	bool                                               AffectedByTimeDilation;                                     // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

